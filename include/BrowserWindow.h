#ifndef BROWSERWINDOW_H
#define BROWSERWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include <QWebEngineView>
#include <QToolBar>
#include <QPushButton>
#include <QCheckBox>
#include <QNetworkAccessManager>

class BrowserWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit BrowserWindow(QWidget *parent = nullptr);
    ~BrowserWindow();

private slots:
    void newTab(const QString &url = "https://www.google.com");
    void enableReaderMode();
    void toggleDarkMode(bool enabled);
    void startAIAssistant();

private:
    QTabWidget *tabWidget;
    QToolBar *toolBar;
    QPushButton *readerModeButton;
    QPushButton *assistantButton;
    QCheckBox *darkModeCheckbox;

    void setupUI();
    void setupConnections();
};

#endif // BROWSERWINDOW_H
