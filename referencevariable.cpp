
// *********** PASS BY REFERENCE*************
// pass by reference me nayi memory create nahi hoti hai usi memory ka bas nam badal jata hai lekin memory ka addresss same hota ahai

#include <iostream>
using namespace std;

void update2(int &n)
{
    n++;
}
void update1(int n)
{
    n++;
}
int main()
{
    // int i = 5;
    // int &j = i; // es line ka matalab hai ki  jis the reference variable of the i means ek i nam ka variable hai uska two namm hai i aur j
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << j << endl;
    int n = 5;
    cout << "before" << n << endl;
    update2(n);
    cout << "after" << n << endl;
    return 0;
}

// pass by value me nayi memory create ho jati hai aur value copy ho jati hai


