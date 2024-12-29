#include "../include/DarkMode.h"
#include <QApplication>
#include <QPalette>
#include <QStyle>

DarkMode::DarkMode(QObject *parent) : QObject(parent) {}

void DarkMode::enableDarkMode() {
    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(42, 42, 42));
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    QApplication::setPalette(darkPalette);
}

void DarkMode::disableDarkMode() {
    QApplication::setPalette(QApplication::style()->standardPalette());
}

