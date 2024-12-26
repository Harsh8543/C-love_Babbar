#include <iostream>
using namespace std;

struct petrolPump {
    int petrol;
    int distance;
};

class Solution {
public:
    int tour(petrolPump p[], int n) {
        int deficit = 0;
        int balance = 0;
        int start = 0;

        for (int i = 0; i < n; i++) {
            balance += p[i].petrol - p[i].distance;
            if (balance < 0) {
                deficit += balance;
                start = i + 1;
                balance = 0;
            }
        }

        // Check if the complete circuit is possible
        if (balance + deficit >= 0) {
            return start;
        } else {
            return -1;
        }
    }
};

int main() {
    petrolPump p[] = {{6, 4}, {3, 6}, {7, 3}};
    int n = sizeof(p)/sizeof(p[0]);
    Solution sol;
    int start = sol.tour(p, n);
    if(start != -1){
        cout << "Start at petrol pump: " << start << endl;
    } else {
        cout << "No solution possible" << endl;
    }
    return 0;
}
