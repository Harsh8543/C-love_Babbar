// input: daabcbaabcbc
// part -abc ka pair jaha mil raha hai waha se remove kar dena hai

// #include<string>
// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
        
//         while(s.length()!=0 && s.find(part) < s.length()) {
//             s.erase(s.find(part), part.length());
//         }
//         return s;
//     }
// };





#include <iostream>
#include <string>

void removeAllOccurrences(std::string &str, const std::string &substr) {
    size_t pos = 0;
    while ((pos = str.find(substr, pos)) != std::string::npos) {
        str.erase(pos, substr.length());
    }
}

int main() {
    std::string str = "This is a test string with test substring to remove test";
    std::string substr = "test";

    std::cout << "Original string: " << str << std::endl;

    removeAllOccurrences(str, substr);

    std::cout << "String after removing all occurrences of '" << substr << "': " << str << std::endl;

    return 0;
}