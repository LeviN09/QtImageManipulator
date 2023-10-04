#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "ImageLoader.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/ImageManipulation/Main.qml"_qs);


    //ImageLoader imageLoader;
    qmlRegisterType<ImageLoader>("ImageLoader", 1, 0, "ImageLoader");
    engine.addImageProvider(QLatin1String("myimageprovider"), new ImageLoader());

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl)
        {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
