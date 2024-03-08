#ifndef LOGANALYZER_H
#define LOGANALYZER_H

#include <string>
#include <vector>

class LogAnalyzer {
public:
    LogAnalyzer();
    ~LogAnalyzer();

    // Установка порога уровня логирования
    void setLogLevelThreshold(int threshold);

    // Анализ логов
    std::vector<std::string> analyzeLogs(const std::vector<std::string>& logEntries);
    
private:
    int m_logLevelThreshold;
};

#endif // LOGANALYZER_H
