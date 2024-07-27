#include <iostream>
#include <string>

using namespace std;

string ltrim(const string &str) {
    size_t start = 0;
    while (start < str.length() && (str[start] == ' ' || str[start] == '\t' || str[start] == '\n' || str[start] == '\r' || str[start] == '\f' || str[start] == '\v')) {
        ++start;
    }
    return str.substr(start);
}

string rtrim(const string &str) {
    size_t end = str.length();
    while (end > 0 && (str[end - 1] == ' ' || str[end - 1] == '\t' || str[end - 1] == '\n' || str[end - 1] == '\r' || str[end - 1] == '\f' || str[end - 1] == '\v')) {
        --end;
    }
    return str.substr(0, end);
}

string trim(const string &str) {
    return ltrim(rtrim(str));
}