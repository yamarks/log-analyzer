#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>

class Settings {
public:
    Settings();
    ~Settings();

    // Загрузка настроек из файла
    void loadSettingsFromFile(const std::string& filePath);

    // Получение пути к лог-файлам
    std::string getLogFilePath() const;

    // Получение уровня логирования
    int getLogLevelThreshold() const;

    // Получение формата вывода
    std::string getOutputFormat() const;
    
private:
    std::string m_logFilePath;
    int m_logLevelThreshold;
    std::string m_outputFormat;
};

#endif // SETTINGS_H
