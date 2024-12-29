#include <QApplication>
#include <QMenuBar>
#include <QMessageBox>
#include <QInputDialog>
#include "BrowserWindow.h"
#include "DarkMode.h"
#include "AIAssistant.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    BrowserWindow window;
    QMenuBar *menuBar = window.menuBar();

    // Ajout du menu Mode Sombre
    DarkMode darkMode;
    QMenu *viewMenu = menuBar->addMenu("View");
    QAction *darkModeAction = viewMenu->addAction("Enable Dark Mode");
    QAction *lightModeAction = viewMenu->addAction("Disable Dark Mode");

    QObject::connect(darkModeAction, &QAction::triggered, [&]() {
        darkMode.enableDarkMode();
    });
    QObject::connect(lightModeAction, &QAction::triggered, [&]() {
        darkMode.disableDarkMode();
    });

    // Ajout de l'Assistant AI
    AIAssistant aiAssistant;
    QMenu *aiMenu = menuBar->addMenu("AI Assistant");
    QAction *askAIAction = aiMenu->addAction("Ask AI");

    QObject::connect(askAIAction, &QAction::triggered, [&]() {
        QString question = QInputDialog::getText(&window, "AI Assistant", "Posez une question :");
        if (!question.isEmpty()) {
            QMessageBox::information(&window, "AI Assistant", aiAssistant.answerQuestion(question));
        }
    });

    window.show();
    return app.exec();
}
