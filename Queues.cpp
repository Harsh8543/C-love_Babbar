#include<iostream>
#include<queue>
using namespace std;
// int main(){
//     //creat a queue
//     queue<int> q;
//   q.push(11);
//   cout<<"front of q is:"<<q.front()<<endl;
//   q.push(15);
//     cout<<"front of q is:"<<q.front()<<endl;
//   q.push(13);
//   cout<<"front of q is:"<<q.front()<<endl;

// cout<<"size of queue is:"<<q.size()<<endl;
// q.pop();
// q.pop();
// q.pop();
// cout<<"size of queue is:"<<q.size()<<endl;

// if(q.empty()){
//     cout<<"Queue is empty"<<endl;
// }
// else{
//     cout<<"Queue is not  empty"<<endl;
// }
// }


//      *********IMPLEMENTATION OF THE QUEUES***********

#include<iostream>
#include<queue>
using namespace std;
class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
    
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

//push wala  operation 

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

// pop wala operation

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};


int main(){
    deque<int>d;

    d.push_front(12);
    d.push_front(14);

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





















