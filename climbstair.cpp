
//by chat gpt
#include <iostream>
#include <vector>

int climbStairs(int n) {
    if (n <= 2)
        return n;

    std::vector<int> dp(n + 1, 0);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n;
    std::cout << "Enter the number of stairs: ";
    std::cin >> n;
    std::cout << "Number of distinct ways to climb " << n << " stairs: " << climbStairs(n) << std::endl;
    return 0;
}

//by own 

// #include<iostream>
// using namespace std;
// int countDIstinctWayToclimbstair(long long nstair){
//     //base case
//     if(nstair<0)
//     return 0;

// if(nstair==0)
// return 1;
//     //recursive call
// int ans=countDIstinctWayToclimbstair(nstair-1)
// +countDIstinctWayToclimbstair(nstair-2);
// }
// int main(){

//    int n;
//     cin >> n;

//     int ans =countDIstinctWayToclimbstair(n);

//     cout << ans << endl;

//     return 0;

// }