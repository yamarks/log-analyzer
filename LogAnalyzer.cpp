#include "LogAnalyzer.h"
#include <iostream>

LogAnalyzer::LogAnalyzer() {
    // Конструктор
    m_logLevelThreshold = 0; // По умолчанию
}

LogAnalyzer::~LogAnalyzer() {
    // Деструктор
}

void LogAnalyzer::setLogLevelThreshold(int threshold) {
    m_logLevelThreshold = threshold;
}

std::vector<std::string> LogAnalyzer::analyzeLogs(const std::vector<std::string>& logEntries) {
    std::vector<std::string> analyzedResults;

    for (const std::string& entry : logEntries) {
        // Пример анализа: проверка на уровень логирования
        if (entry.find("ERROR") != std::string::npos) {
            analyzedResults.push_back("Error detected: " + entry);
        } else if (entry.find("WARNING") != std::string::npos && m_logLevelThreshold >= 2) {
            analyzedResults.push_back("Warning detected: " + entry);
        }
        // Другие анализы можно добавить по аналогии
    }

    return analyzedResults;
}
