#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    string FirstNonRepeating(string A) {
        unordered_map<char, int> count;
        queue<char> q;
        string ans = "";

        for (int i = 0; i < A.length(); i++) {
            char ch = A[i];
            // Increase count of the character
            count[ch]++;

            // Push the character into the queue
            q.push(ch);

            // Process the queue to find the first non-repeating character
            while (!q.empty()) {
                if (count[q.front()] > 1) {
                    // The character at the front of the queue is repeating, so pop it
                    q.pop();
                } else {
                    // Found the first non-repeating character
                    ans.push_back(q.front());
                    break;
                }
            }

            // If the queue is empty, it means all characters are repeating, so add '#'
            if (q.empty()) {
                ans.push_back('#');
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string input = "aabc";
    string result = sol.FirstNonRepeating(input);
    cout << "Result: " << result << endl;  // Output should be "a#b#"
    return 0;
}