#ifndef DARKMODE_H
#define DARKMODE_H

#include <QObject>

class DarkMode : public QObject {
    Q_OBJECT
public:
    explicit DarkMode(QObject *parent = nullptr);
    void enableDarkMode();
    void disableDarkMode();
};

#endif // DARKMODE_H

