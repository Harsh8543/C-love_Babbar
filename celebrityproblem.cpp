// class Solution 
// {
//     private:
//     bool knows(vector<vector<int> >& M,int a,int b,int n){
//         if(M[a][b]==1)
//         return true;
//     }
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//        stack<int>s;
//        //step 1: push all element in stack
//        for(int i=0;i<n;i++){
//            s.push(i);
//        }
//        //step 2 gets two element and compare them
//        while(s.size()>1){
//            int a=s.top();
//            s.pop();
           
//            int b=s.top();
//            s.pop();
           
//            if(knows(M,a,b,n)){
//                s.push(b);
//            }
//            else{
//                s.push(a);
//            }
//        }
//        int ans =s.top();
//        //step:3 single elenent in the stack potential celebrity
//        //so,verify it
//        bool rowCheck=false;
//        int zeroCount=0;
//        int oneCount=0;
//        for(int i=0;i<n;i++){
//            if(M[ans][i]==0)
//            zeroCount++;
//        }
//        //all zeroes
//        if(zeroCount==n){
//            rowCheck=true;
//        }
//        //column check
//        bool colCheck=false;
//        int colCount=0;
       
//        for(int i=0;i<n;i++){
//            if(M[i][ans]==1)
//            oneCount++;
//        }
//        if(oneCount==n-1){
//            colCheck=true;
//        }
//        if(rowCheck==true && colCheck==true){
//            return ans;
//        }
//        else{
//            return -1;
//        }
       
       
//     }
// };






//*********************************************************************

// class Solution 
// {
//     private:
//     bool knows(vector<vector<int> >& M,int a,int b,int n){
//         if(M[a][b]==1)
//         return true;
//     }
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//        stack<int>s;
//        //step 1: push all element in stack
//        for(int i=0;i<n;i++){
//            s.push(i);
//        }
//        //step 2 gets two element and compare them
//        while(s.size()>1){
//            int a=s.top();
//            s.pop();
           
//            int b=s.top();
//            s.pop();
           
//            if(knows(M,a,b,n)){
//                s.push(b);
//            }
//            else{
//                s.push(a);
//            }
//        }
//        int ans =s.top();
//        //step:3 single elenent in the stack potential celebrity
//        //so,verify it
   
//        int zeroCount=0;
//        int oneCount=0;
//        for(int i=0;i<n;i++){
//            if(M[ans][i]==0)
//            zeroCount++;
//        }
//        //all zeroes
//        if(zeroCount!=n)
//        return -1;
         
//        //column check
      
//        int colCount=0;
       
//        for(int i=0;i<n;i++){
//            if(M[i][ans]==1)
//            oneCount++;
//        }
//        if(oneCount!=n-1)
//            return -1;
       
//     return ans;
       
//     }
// };