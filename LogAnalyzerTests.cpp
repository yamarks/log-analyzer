// LogAnalyzerTests.cpp

#include "LogAnalyzer.h"
#include <gtest/gtest.h>

TEST(LogAnalyzerTests, ErrorDetection) {
    LogAnalyzer logAnalyzer;
    std::vector<std::string> logEntries = {
        "INFO: Application started",
        "ERROR: File not found",
        "WARNING: Memory leak detected"
    };

    std::vector<std::string> results = logAnalyzer.analyzeLogs(logEntries);

    ASSERT_EQ(results.size(), 1);
    EXPECT_EQ(results[0], "Error detected: ERROR: File not found");
}

TEST(LogAnalyzerTests, WarningDetection) {
    LogAnalyzer logAnalyzer;
    logAnalyzer.setLogLevelThreshold(2); // Set threshold to detect warnings
    std::vector<std::string> logEntries = {
        "INFO: Application started",
        "ERROR: File not found",
        "WARNING: Memory leak detected"
    };

    std::vector<std::string> results = logAnalyzer.analyzeLogs(logEntries);

    ASSERT_EQ(results.size(), 1);
    EXPECT_EQ(results[0], "Warning detected: WARNING: Memory leak detected");
}

// Add more test cases as needed

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
