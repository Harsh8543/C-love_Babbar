#include <iostream>
using namespace std;

void printWave(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Condition for printing '~' in a wave pattern
            if (i % 2 == 0) {
                cout << "~";
            } else {
                if (j == cols - 1) {
                    cout << "~";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    
    // Input number of rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    // Call function to print wave pattern
    printWave(rows, cols);
    
    return 0;
}





// #include <iostream>
// using namespace std;
// //std::vector<int>
// ( arr[row][col],int rows,int cols){
//     // vector<int> ans;
//     for(int col=0;col<cols;col++){
//         if(col&1){
//             for(int row =rows-1;row>=0;row++){
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         else{
//             for(int row=0;row<rows;row++){
//                 ans.push_back(arr[row][col]);
//             }
//             }

//         }
//     }


// int main() {
//     int rows, cols;
    
//     // Input number of rows and columns
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     cout << "Enter number of columns: ";
//     cin >> cols;
    
//     // Call function to print wave pattern
//     printWave( rows,   cols);
    
//     // return ans;
// }