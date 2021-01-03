#include <QApplication>
#include <QQmlApplicationEngine>
#include <QSurfaceFormat>

void initGLContext() {
  QSurfaceFormat format;
  format.setVersion(3, 3);
  format.setProfile(QSurfaceFormat::CoreProfile);
  QSurfaceFormat::setDefaultFormat(format);
}

void initCameraContext(QApplication &app) {
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QQmlApplicationEngine engine;
  const QUrl url(QStringLiteral("qrc:/main.qml"));
  QObject::connect(
      &engine, &QQmlApplicationEngine::objectCreated, &app,
      [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
          QCoreApplication::exit(-1);
      },
      Qt::QueuedConnection);
  engine.load(url);
}

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);
  if (true) {
    initGLContext();
  } else {
    initCameraContext(app);
  }

  return app.exec();
}
