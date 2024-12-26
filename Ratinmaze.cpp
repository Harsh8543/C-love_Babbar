class Solutin{
    private:
    bool isSafe(int x,int y,int n,vector<vector<int>>visited,vector<vector<int>>&m){
        if(x>=0 && x<n)&&(y>=0&& y<n)&& visited[x][h]==0 && m[x][y]==1
{
    return true;
}   
else{
    return false;
}
 }
}
void solve (vector<vector<int>>&m,int n,vector<string>& ans,int x,int y,vector<vector<int>>visited,string path){
    //you have reached x and y here
    //base case 
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;
}


public:
vector<string>findPath(vector<vector<int>> &m,int n){
    vector<string>ans;
    if(m[0][0]==0){
        return ans;
    }
    int srcx=0;
    int srcy=0;

    vector<vector<int>>visited=m;
    //initilisation with 0
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }
    string path="";
    solve(m,n,ans,srcx,srcy,visited,path);
    sort(ans.begin(),ans/end());
    return ans;
}
};