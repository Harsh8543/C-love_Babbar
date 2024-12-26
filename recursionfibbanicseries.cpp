
//fabbanic series of using recursion

#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int num, i;
    cout << "enter the number" << endl;
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        int j = fib(i);
        cout << j;
    }
    return 0;
}











