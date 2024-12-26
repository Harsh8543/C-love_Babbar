// #include<iostream> 
// using namespace std;

// int power(int n) {

//     //base case 
//     //base case me return is manedetory hoti hai
//     if(n == 0)
//         return 1;

//     //recursive relation
//     return 2 * power(n-1);    
// }

// int main() {

//     int n;
//     cin >> n;

//     int ans = power(n);

//     cout << ans << endl;

//     return 0;
// }

#include<iostream>
using namespace std;

void reachHome(int src,int dest){
    cout<<"source "<<src <<"destination "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"pahuch gaya"<<endl;
        return;
    }
    //processing -ek step aage badh jao
    src++ ;
    //recursive call
    reachHome(src,dest);
}
int main(){
    int dest=10;
    int src=1;
    cout<<endl;
    reachHome(src,dest);
    return 0;
}