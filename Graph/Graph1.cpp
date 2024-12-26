// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;
//     //graph here
//     int adj[n+1][m+1];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u][v]=1;
//         adj[v][u]=1;
//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> adj[n+1];
//    for(int i=0;i<m;i++){
//     int u,v;
//     cin>>u>>v;
//     adj[u].push_back(v);
//     adj[v].push_back(u);

//    }
//    return 0;
// }







#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
   for(int i=0;i<m;i++){
    int u,v;
// u ------> v   //directed graph the only u is the neighbour of the v. v is not the neighbour of the u.
    cin>>u>>v;
    adj[u].push_back(v);
    // adj[v].push_back(u);

   }
   return 0;
}