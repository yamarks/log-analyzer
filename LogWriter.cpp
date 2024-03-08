#include "LogWriter.h"
#include <iostream>
#include <fstream>

LogWriter::LogWriter() {
    // Конструктор
    m_outputFormat = "console"; // По умолчанию
}

LogWriter::~LogWriter() {
    // Деструктор
}

void LogWriter::setOutputFormat(const std::string& format) {
    m_outputFormat = format;
}

void LogWriter::writeResults(const std::vector<std::string>& results) {
    if (m_outputFormat == "console") {
        // Вывод в консоль
        for (const std::string& result : results) {
            std::cout << result << std::endl;
        }
    } else if (m_outputFormat == "file") {
        // Запись в файл (пример)
        std::ofstream outputFile("analysis_results.txt");
        if (outputFile.is_open()) {
            for (const std::string& result : results) {
                outputFile << result << std::endl;
            }
            outputFile.close();
        } else {
            std::cerr << "Error opening output file." << std::endl;
        }
    } else {
        std::cerr << "Unsupported output format: " << m_outputFormat << std::endl;
    }
}
