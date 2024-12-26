// class Solution {
// private:
//     void solve(string digit, string output, int index, vector<string>& ans, string mapping[] ) {
        
//         //base case
//         if(index >= digit.length()) {
//             ans.push_back(output);
//             return;
//         }
        
//         int number = digit[index] - '0';  // //ye wli line hame digits wala character dega like "2"
//         string value = mapping[number]; /////mapping me es number ki value nikal li ka matla hai ki ki number "s" ki mspping hsi "abc"
        
//         for(int i=0; i<value.length(); i++) {
//             output.push_back(value[i]);
//             solve(digit, output, index+1, ans, mapping);
//             output.pop_back();    //ye line ham esliye likh rahe hai kyuki hame fir se empty space chahiye fir se store karne ke liye esi liye
//         }
        
//     }
// public:
// ////pahale ek string aayegi jiske andar kuchh kuchh number likha hoga 
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         // //jo string aayi hai use ham check karenge ki wah kahi empty to nahi hai agar empty hogi to hame direct empty result print kar ke de
//         if(digits.length()==0)
//             return ans;
//             ////hamne output bana liya aur starting index ko 0 set kar liya
//         string output;
//         int index = 0;
//       //  //uske bad ek mapping creat kar liya ki 2 kisase mapped hai "abc"3 kisase maped hai "def" etc.      
//           string mapping[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
//      //     //fir hamne kaya kiya direct function ko call kar diya aur answer ko return kara liya
//         solve(digits, output, index, ans, mapping);
//         return ans;
//     }
//     ;