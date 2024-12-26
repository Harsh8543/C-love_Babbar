#include <bits/stdc++.h>
using namespace std;

int main()
{
long long int n,m,i,j=1;

//no.  of the players
cin>>n;

//players score and final rank array
long long int a[n],r[n];

//player  score array
for(i=0;i<n;i++){
    cin>>a[i];
    
}
//n0. of the games allice play
cin>>m;
//allice score array
long long int b[m];
//allice score array
for(i=0;i<m;i++){
    cin>>b[i];
}

//set first index to 1
r[0]=j;
for(i=1;i<n;i++){
    if(a[i]==a[i-1])  //check current score is equal to previous or not
    {
        j=j;
    }  
    else{
        j++;   //increase the rank
    }
    r[i]=j;     //input rank in the rank array
    
}

i=0;

//checking the alice rank
while(m--){
    if(b[i]>=a[0]){      //check score highest or not
        cout<<r[0]<<endl;
        i++;
    }
    else if(b[i]>a[n-1]){//checking from the last
        n--;
        m++;
    }
    else if(b[i]==a[n-1]){      //match found
        cout<<r[n-1]<<endl;  
        i++;
    }
          else{
              cout<<r[n-1]+1<<endl;
              i++;
          }
}
return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     int ranked[n];
//     for (int i = 0; i < n; i++) {
//         cin >> ranked[i];
//     }
    
//     int m;
//     cin >> m;
    
//     int player[m];
//     for (int i = 0; i < m; i++) {
//         cin >> player[i];
//     }
    
//     int ranks[n];
//     ranks[0] = 1;
//     for (int i = 1; i < n; i++) {
//         if (ranked[i] == ranked[i - 1]) {
//             ranks[i] = ranks[i - 1];
//         } else {
//             ranks[i] = ranks[i - 1] + 1;
//         }
//     }
    
//     int i = n - 1;
//     for (int j = 0; j < m; j++) {
//         while (i >= 0 && player[j] >= ranked[i]) {
//             i--;
//         }
//         if (i == -1) {
//             cout << 1 << endl;
//         } else {
//             cout << ranks[i] + 1 << endl;
//         }
//     }
    
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> rank(n);
    for (int i = 0; i < n; i++) {
        cin >> rank[i];
    }
    
    int m;
    cin >> m;
    
    vector<int> player(m);
    for (int i = 0; i < m; i++) {
        cin >> player[i];
    }
    
    vector<int> ranks(n);
    ranks[0] = 1;
    for (int i=1;i<n;i++) {
        if (rank[i]==rank[i-1]) {
            ranks[i]=ranks[i-1];
        } else{
            ranks[i]=ranks[i-1]+1;
        }
    }
    int i=n-1;
    for (int j= 0;j<m;j++) {
        while (i >= 0 && player[j] >=rank[i]) {
            i--;
        }
        if (i == -1) {
            cout << 1 << endl;
        } else {
            cout << ranks[i] + 1 << endl;
        }
    }
    
    return 0;
}