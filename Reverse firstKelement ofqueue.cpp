#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
    // Step 1: Pop first k elements from the queue and push them into the stack
    stack<int> s;
    for (int i = 0; i < k; i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    // Step 2: Pop elements from the stack and push them back into the queue
    while (!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    // Step 3: Move the remaining elements in the queue (n-k elements) to the back
    int t = q.size() - k;
    while (t--) {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    return q;
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    int k = 3;
    queue<int> modifiedQueue = modifyQueue(q, k);
    
    // Print the modified queue
    while (!modifiedQueue.empty()) {
        cout << modifiedQueue.front() << " ";
        modifiedQueue.pop();
    }
    
    return 0;
}
