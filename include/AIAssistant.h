#ifndef AIASSISTANT_H
#define AIASSISTANT_H

#include <QObject>
#include <QString>

class AIAssistant : public QObject {
    Q_OBJECT
public:
    explicit AIAssistant(QObject *parent = nullptr);
    QString answerQuestion(const QString &question);
};

#endif // AIASSISTANT_H

