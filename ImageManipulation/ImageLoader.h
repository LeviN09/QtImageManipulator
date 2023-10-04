#ifndef IMAGELOADER_H
#define IMAGELOADER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QImage>
#include <QQuickImageProvider>

class ImageLoader : public QQuickImageProvider
{
    Q_OBJECT
public:
    explicit ImageLoader(QObject* parent = nullptr);
    QImage requestImage(const QString &id, QSize *size, const QSize &requestedSize) override;

private:
    QNetworkAccessManager networkManager;
    QByteArray imageData;
};


#endif // IMAGELOADER_H
