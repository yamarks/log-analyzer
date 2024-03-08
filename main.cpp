#include <iostream>
#include "LogReader.h"
#include "LogAnalyzer.h"
#include "LogWriter.h"
#include "Settings.h"

int main() {
    // Загрузка настроек (путь к лог-файлам, уровень логирования и т. д.)
    Settings appSettings;
    appSettings.loadSettingsFromFile("settings.json"); // Пример загрузки настроек из файла

    // Создание объекта для чтения логов
    LogReader logReader;
    logReader.setLogFilePath(appSettings.getLogFilePath());

    // Создание объекта для анализа логов
    LogAnalyzer logAnalyzer;
    logAnalyzer.setLogLevelThreshold(appSettings.getLogLevelThreshold());

    // Чтение логов и анализ
    std::vector<std::string> logEntries = logReader.readLogs();
    std::vector<std::string> analyzedResults = logAnalyzer.analyzeLogs(logEntries);

    // Создание объекта для записи результатов
    LogWriter logWriter;
    logWriter.setOutputFormat(appSettings.getOutputFormat());
    logWriter.writeResults(analyzedResults);

    std::cout << "Анализ логов завершен. Результаты записаны." << std::endl;

    return 0;
}
