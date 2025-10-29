#include "Replace.hpp"

// replace_all: returns new string with all occurrences of s1 replaced by s2
std::string replace_all(const std::string &content,
                        const std::string &s1,
                        const std::string &s2)
{
    if (s1.empty())
        return content; // caller should check empty s1 earlier

    std::string result;
    std::size_t pos = 0;
    std::size_t prev = 0;
    while (true) {
        pos = content.find(s1, prev);
        if (pos == std::string::npos) {
            // append the tail and break
            result.append(content, prev, content.size() - prev);
            break;
        }
        // append the segment before found occurrence
        result.append(content, prev, pos - prev);
        // append replacement
        result.append(s2);
        // move past the found occurrence
        prev = pos + s1.length();
    }
    return result;
}
