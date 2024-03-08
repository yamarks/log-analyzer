#include "LogReader.h"
#include <fstream>
#include <iostream>

LogReader::LogReader() {
    // Конструктор
}

LogReader::~LogReader() {
    // Деструктор
}

void LogReader::setLogFilePath(const std::string& filePath) {
    m_logFilePath = filePath;
}

std::vector<std::string> LogReader::readLogs() {
    std::vector<std::string> logEntries;
    std::ifstream logFile(m_logFilePath);

    if (!logFile.is_open()) {
        std::cerr << "Error opening log file: " << m_logFilePath << std::endl;
        return logEntries;
    }

    std::string line;
    while (std::getline(logFile, line)) {
        logEntries.push_back(line);
    }

    logFile.close();
    return logEntries;
}
