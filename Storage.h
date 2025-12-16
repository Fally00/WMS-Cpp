#pragma once
#include <string>
#include <vector>

class Storage {
private:
    std::string dataFilePath;
public:
    Storage(const std::string& filePath);

    bool intializeStorage();
    bool fileExists() const;
    std::string getFilePath() const;

    // Read whole file contents (returns empty string if file missing)
    std::string readAll() const;
    // Overwrite file with provided content; returns success
    bool writeAll(const std::string &content) const;
    // Append data to end of file
    bool append(const std::string &content) const;
    // Load file line-by-line into vector
    std::vector<std::string> readLines() const;
    // Clear all file content
    bool clear() const;
};
