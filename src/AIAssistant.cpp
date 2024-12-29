#include "../include/AIAssistant.h"

AIAssistant::AIAssistant(QObject *parent) : QObject(parent) {}

QString AIAssistant::answerQuestion(const QString &question) {
    if (question.contains("hello", Qt::CaseInsensitive)) {
        return "Hello! How can I assist you today?";
    } else if (question.contains("weather", Qt::CaseInsensitive)) {
        return "I recommend checking a weather website for the most accurate forecast.";
    } else {
        return "I'm not sure, but I'm constantly learning!";
    }
}
