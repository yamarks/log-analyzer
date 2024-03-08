#include "Settings.h"
#include <fstream>
#include <iostream>

Settings::Settings() {
    // Конструктор
    // Инициализация значений по умолчанию
    m_logFilePath = "default_log.txt";
    m_logLevelThreshold = 1;
    m_outputFormat = "console";
}

Settings::~Settings() {
    // Деструктор
}

void Settings::loadSettingsFromFile(const std::string& filePath) {
    // Загрузка настроек из файла (пример)
    std::ifstream settingsFile(filePath);
    if (settingsFile.is_open()) {
        settingsFile >> m_logFilePath >> m_logLevelThreshold >> m_outputFormat;
        settingsFile.close();
    } else {
        std::cerr << "Error opening settings file: " << filePath << std::endl;
    }
}

std::string Settings::getLogFilePath() const {
    return m_logFilePath;
}

int Settings::getLogLevelThreshold() const {
    return m_logLevelThreshold;
}

std::string Settings::getOutputFormat() const {
    return m_outputFormat;
}
