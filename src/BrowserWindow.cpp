#include "BrowserWindow.h"
#include <QWebEngineProfile>
#include <QWebEngineView>
#include <QWebEngineDownloadItem>
#include <QFileDialog>
#include <QMessageBox>
#include <QInputDialog>

BrowserWindow::BrowserWindow(QWidget *parent) : QMainWindow(parent) {
    setupUI();
    setupConnections();
}

BrowserWindow::~BrowserWindow() {}

void BrowserWindow::setupUI() {
    tabWidget = new QTabWidget(this);
    setCentralWidget(tabWidget);

    toolBar = new QToolBar("Navigation", this);
    addToolBar(toolBar);

    readerModeButton = new QPushButton("📖 Mode Lecture", this);
    toolBar->addWidget(readerModeButton);

    assistantButton = new QPushButton("🤖 Assistant IA", this);
    toolBar->addWidget(assistantButton);

    darkModeCheckbox = new QCheckBox("🌙 Mode sombre", this);
    toolBar->addWidget(darkModeCheckbox);
}

void BrowserWindow::setupConnections() {
    connect(readerModeButton, &QPushButton::clicked, this, &BrowserWindow::enableReaderMode);
    connect(assistantButton, &QPushButton::clicked, this, &BrowserWindow::startAIAssistant);
    connect(darkModeCheckbox, &QCheckBox::toggled, this, &BrowserWindow::toggleDarkMode);
}

void BrowserWindow::newTab(const QString &url) {
    // Crée un nouvel onglet avec QWebEngineView
    QWebEngineView *webView = new QWebEngineView(this);
    webView->setUrl(QUrl(url));

    // Ajoute le webView dans un onglet
    int index = tabWidget->addTab(webView, "Nouvel Onglet");
    tabWidget->setCurrentIndex(index);

    // Connecte le signal de chargement pour mettre à jour le titre
    connect(webView, &QWebEngineView::titleChanged, this, [=](const QString &title) {
        tabWidget->setTabText(index, title);
    });
}

void BrowserWindow::enableReaderMode() {
    // Implémentation du mode lecture
}

void BrowserWindow::toggleDarkMode(bool enabled) {
    // Implémentation du mode sombre
}

void BrowserWindow::startAIAssistant() {
    // Implémentation de l'assistant IA
}
