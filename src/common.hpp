#ifndef JEFF_NATIVE_AGENT_COMMON_H
#define JEFF_NATIVE_AGENT_COMMON_H

#include <string>
#include <list>
#include <numeric>
#include <functional>

namespace jeff {
    std::string join(std::list<std::string> entries, std::function<std::string(std::string, std::string)> join_lines);

    std::string join(std::list<std::string> entries, std::string start,
                     std::function<std::string(std::string, std::string)> join_lines);

    std::wstring L(const std::string &str);

    std::string S(const std::wstring &str);
}
#endif //JEFF_NATIVE_AGENT_COMMON_H
