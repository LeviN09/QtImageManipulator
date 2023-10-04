#include "ImageLoader.h"
#include <QDebug>
#include <QImage>
#include <QEventLoop>
#include <QUrl>

ImageLoader::ImageLoader(QObject *parent) : QQuickImageProvider(QQuickImageProvider::Image)
{
}

QImage ImageLoader::requestImage(const QString &id, QSize *size, const QSize &requestedSize) {
    QUrl url(id);
    QNetworkRequest request(url);
    QNetworkReply *reply = networkManager.get(request);

    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray imageData = reply->readAll();
        QImage image;
        image.loadFromData(imageData);

        if (size) {
            *size = image.size();
        }

        reply->deleteLater();
        return image;
    }
    else
    {
        qDebug() << "Network error:" << reply->errorString();
        reply->deleteLater();
        return QImage();
    }
}
