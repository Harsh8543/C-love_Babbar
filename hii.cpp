// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// int calculateDifferenceSum(const vector<int>& A, int N) {
//     int sum = 0;
//     for (int i = 1; i < N; ++i) {
//         sum += abs(A[i] - A[i-1]);
//     }
//     return sum;
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N, K;
//         cin >> N >> K;
//         vector<int> A(N);
//         for (int i = 0; i < N; ++i) {
//             cin >> A[i];
//         }

//         int initialSum = calculateDifferenceSum(A, N);
//         int maxSum = initialSum;

//         for (int i = 0; i < N; ++i) {

//             int originalValue = A[i];
//             A[i] = 1;
//             int newSum1 = calculateDifferenceSum(A, N);
//             maxSum = max(maxSum, newSum1);
            
//             A[i] = originalValue;

//             A[i] = K;
//             int newSum2 = calculateDifferenceSum(A, N);
//             maxSum = max(maxSum, newSum2);
//             A[i] = originalValue;
//         }
//         cout << maxSum << endl;
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         vector<int> V(N), A(N);
//         for (int i = 0; i < N; ++i) {
//             cin >> V[i] >> A[i];
//         }

//         long long max_strength = 0;
//         for (int i = 0; i < N; ++i) {
//             for (int j = i + 1; j < N; ++j) {
//                 long long current_strength = static_cast<long long>(A[i]) * V[j] + static_cast<long long>(V[i]) * A[j];
//                 if (current_strength > max_strength) {
//                     max_strength = current_strength;
//                 }
//             }
//         }
        
//         cout << max_strength << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int X, Y;
//     cin >> X >> Y;

//     if (X >= 2 * Y) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }

//     return 0;
// }









// Unusual Queries
// You are given three positive integers 
// 𝑁
// ,
// 𝐴
// ,
// N,A, and 
// 𝐵
// B. Further, it is known that 
// ∣
// 𝐴
// −
// 𝐵
// ∣
// ≤
// 1
// ∣A−B∣≤1.

// Count the number of integers 
// 𝑋
// X such that:

// 1
// ≤
// 𝑋
// ≤
// 𝑁
// 1≤X≤N; and
// There exist non-negative integers 
// 𝑝
// p and 
// 𝑞
// q satisfying the equation
// 𝐴
// ⋅
// 𝑝
// +
// 𝐵
// ⋅
// 𝑞
// =
// 𝑋
// A⋅p+B⋅q=X
// Input Format
// The first line of input will contain a single integer 
// 𝑇
// T, denoting the number of test cases.
// The first and only line of each test case will contain three space-separated integers 
// 𝑁
// ,
// 𝐴
// ,
// N,A, and 
// 𝐵
// B, as described in the statement.
// Output Format
// For each test case, output on a new line the number of integers 
// 𝑋
// X satisfying the given condition.

// Constraints
// 1
// ≤
// 𝑇
// ≤
// 1
// 0
// 5
// 1≤T≤10 
// 5
 
// 1
// ≤
// 𝑁
// ≤
// 1
// 0
// 18
// 1≤N≤10 
// 18
 
// 1
// ≤
// 𝐴
// ,
// 𝐵
// ≤
// 1
// 0
// 9
// 1≤A,B≤10 
// 9
 
// ∣
// 𝐴
// −
// 𝐵
// ∣
// ≤
// 1
// ∣A−B∣≤1
// Sample 1:
// Input
// Output
// 4
// 7 3 4
// 7 3 3
// 7 3 2
// 1109258281 19402 19401
// 4
// 2
// 6
// 921068581
// Explanation:
// Test case 
// 1
// 1: With 
// 𝐴
// =
// 3
// ,
// 𝐵
// =
// 4
// ,
// A=3,B=4, and 
// 𝑁
// =
// 7
// N=7, we have the following valid 
// 𝑋
// X:

// 𝑋
// =
// 3
// =
// 1
// ⋅
// 3
// +
// 0
// ⋅
// 4
// X=3=1⋅3+0⋅4
// 𝑋
// =
// 4
// =
// 0
// ⋅
// 3
// +
// 1
// ⋅
// 4
// X=4=0⋅3+1⋅4
// 𝑋
// =
// 6
// =
// 2
// ⋅
// 3
// +
// 0
// ⋅
// 4
// X=6=2⋅3+0⋅4
// 𝑋
// =
// 7
// =
// 1
// ⋅
// 3
// +
// 1
// ⋅
// 4
// X=7=1⋅3+1⋅4
// Test case 
// 2
// 2: For 
// 𝐴
// =
// 𝐵
// =
// 3
// A=B=3 and 
// 𝑁
// =
// 7
// N=7, only 
// 3
// =
// 1
// ⋅
// 3
// +
// 0
// ⋅
// 3
// 3=1⋅3+0⋅3 and 
// 6
// =
// 1
// ⋅
// 3
// +
// 1
// ⋅
// 3
// 6=1⋅3+1⋅3 are valid.











// #include <iostream>
// #include <vector>

// using namespace std;

// const int MOD = 1000000007;

// // Function to calculate Euler's Totient Function for numbers up to N
// void calculateTotient(vector<long long>& totient, int N) {
//     for (int i = 1; i <= N; ++i) {
//         totient[i] = i;
//     }
//     for (int i = 2; i <= N; ++i) {
//         if (totient[i] == i) { // i is prime
//             for (int j = i; j <= N; j += i) {
//                 totient[j] -= totient[j] / i;
//             }
//         }
//     }
// }

// // Function to calculate the sum of Euler's Totient Function values up to N
// long long calculateSumOfTotient(int N) {
//     vector<long long> totient(N + 1);
//     calculateTotient(totient, N);

//     long long sum = 0;
//     for (int i = 1; i <= N; ++i) {
//         sum += totient[i];
//         sum %= MOD; // Ensure to take modulo at each step to avoid overflow
//     }
//     return sum;
// }

// // Function to calculate the sum of beauties for all arrays
// long long calculateSumOfBeauties(int N, int K) {
//     long long sumOfTotient = calculateSumOfTotient(N);
//     long long sum = (sumOfTotient * K) % MOD;
//     return sum;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, K;
//         cin >> N >> K;

//         long long result = calculateSumOfBeauties(N, K);
//         cout << result << endl;
//     }

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int *arr = new int [n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int arr_max[INT16_MAX];
//     for (int i = 0; i < INT16_MAX; i++)
//     {
//         arr_max[i] = 0;
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         arr_max[arr[i]]++;
//     }
//     for (int i = 0; i < INT16_MAX; i++)
//     {
//         if(arr_max[i]==3){
//             cout<<i<<endl;
//         }
//     }
    
// }








#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,s;
        cin>>n>>m>>s;
        int ans = s;
        for (int i = 1; i <= m; i++)
        {
            if(ans<=n){
                ans++;
            }
            else{
                ans = 1;
                ans++;
            }
        }
        cout<<--ans<<endl;

    }
    
}



#include <iostream>

using namespace std;

int saveThePrisoner(int n, int m, int s) {
  
    int ans = s;
        for (int i = 1; i <= m; i++)
        {
            if(ans<=n){
                ans++;
            }
            else{
                ans = 1;
                ans++;
            }
        }
        cout<<--ans<<endl;

    

}

int main() {
    int t; // Number of test cases
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        int n, m, s;
        cin >> n >> m >> s;
        cout << saveThePrisoner(n, m, s) << endl;
    }
    
    return 0;
}


#include <iostream>
using namespace std;
int saveThePrisoner(int n, int m, int s) {
    int result=s;
        for (int i = 1; i <= m; i++)
        {
            if(result<=n){
                result++;
            }
            else{
                result= 1;
                result++;
            }
        }
        return result--;
}
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, m, s;
        cin>>n>>m>> s;
        cout << saveThePrisoner(n, m, s) << endl;
    } 
}

























