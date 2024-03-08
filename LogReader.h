#ifndef LOGREADER_H
#define LOGREADER_H

#include <string>
#include <vector>

class LogReader {
public:
    LogReader();
    ~LogReader();

    // Установка пути к лог-файлу
    void setLogFilePath(const std::string& filePath);

    // Чтение логов из файла
    std::vector<std::string> readLogs();
    
private:
    std::string m_logFilePath;
};

#endif // LOGREADER_H
