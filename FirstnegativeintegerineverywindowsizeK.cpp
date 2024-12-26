#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    deque<long long int> dq;
    vector<long long> ans;
    
    // Process the first window of size K
    for (int i = 0; i < K; i++) {
        if (A[i] < 0) {
            dq.push_back(i);
        }
    }
    
    // Store the answer for the first window
    if (!dq.empty()) {
        ans.push_back(A[dq.front()]);
    } else {
        ans.push_back(0);
    }
    
    // Process the remaining windows
    for (int i = K; i < N; i++) {
        // Remove elements that are out of this window
        if (!dq.empty() && i - dq.front() >= K) {
            dq.pop_front();
        }
        
        // Add the current element if it is negative
        if (A[i] < 0) {
            dq.push_back(i);
        }
        
        // Store the answer for the current window
        if (!dq.empty()) {
            ans.push_back(A[dq.front()]);
        } else {
            ans.push_back(0);
        }
    }
    
    return ans;
}

int main() {
    long long int A[] = {-8, 2, 3, -6, 10};
    long long int N = sizeof(A) / sizeof(A[0]);
    long long int K = 2;
    vector<long long> result = printFirstNegativeInteger(A, N, K);
    
    for (long long x : result) {
        cout << x << " ";
    }
    
    return 0;
}
