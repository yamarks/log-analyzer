#ifndef LOGWRITER_H
#define LOGWRITER_H

#include <string>
#include <vector>

class LogWriter {
public:
    LogWriter();
    ~LogWriter();

    // Установка формата вывода (например, консоль, файл)
    void setOutputFormat(const std::string& format);

    // Запись результатов анализа
    void writeResults(const std::vector<std::string>& results);
    
private:
    std::string m_outputFormat;
};

#endif // LOGWRITER_H
