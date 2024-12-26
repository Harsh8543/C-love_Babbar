#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int> d;
    d.push_front(12);
    d.push_back(14);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();

    if(d.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;

    }
}



// class CircularQueue{
//     int *arr;
//     int front;
//     int rear;
//     int size;
    
//     public:
//     // Initialize your data structure.
//     CircularQueue(int n){
//         size = n;
//         arr = new int[size];
//         front = rear = -1;
//     }

//     // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
//     bool enqueue(int value){
//         //to check whther queue is full
//         if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) ) {
//             //cout << "Queue is Full";
//             return false;
//         }
//         else if(front == -1) //first element to push
//         {
// 			front = rear = 0;
            
//         }
//         else if(rear == size-1 && front != 0) {
//             rear = 0; //to maintain cyclic nature
//         }
//         else
//         {//normal flow
//             rear++;
//         }
//         //push inside the queue
//         arr[rear] = value;
        
//         return true;
//     }

//     // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
//     int dequeue(){
//         if(front == -1){//to check queue is empty
//             //cout << "Queue is Empty " << endl;
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if(front == rear) { //single element is present
//             front = rear = -1;
//         }
//         else if(front == size - 1) {
//             front = 0; //to maintain cyclic nature
//         }
//         else
//         {//normal flow
//             front++;
//         }
//         return ans;
//     }
// };