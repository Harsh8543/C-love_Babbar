// jaha jaha space aaye uski jagah par @40 replace kar dijiye

// like: my name is harsh
// result:my@40name@40is@harsh






// #include<string>
// #include<iostream>
// using namespace std;
// string replaceSpaces(string &str){
// 	string temp = "";
    
//     for(int i=0; i<str.length(); i++) {
//         if(str[i] == ' '){
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }
#include <iostream>
#include <string>

using namespace std;

void replaceSpaces(string &str, char replaceWith) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ' ') {
            str[i] = replaceWith;
        }
    }
}

int main() {
    string str = "This is a test string with spaces";
    char replaceWith = '_'; // You can change this to any character you want

    cout << "Original string: " << str << endl;

    replaceSpaces(str, replaceWith);

    cout << "String after replacing spaces: " << str << endl;

    return 0;
}
