#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // string  str ="sjfndsjnsdjnsjjw";
    // // cout<<'s'-'S'<<endl;
    // //convert into upper case
    // for(int i=0;i<str.size();i++){
    //     if(str[i]>='a'&& str[i]<='z')
    //     str[i]-=32;
    // }
    // cout<<str;
    // //convert in to lower case
    //  for(int i=0;i<str.size();i++){
    //     if(str[i]>='A'&& str[i]<='Z')
    //     str[i]+=32;
    // }
    // cout<<str;

    // string s="dshbihvbfjvfnvjfanvj";
    //     transform(s.begin(),s.end(),s.begin(),::toupper);
    //     cout<<s<<endl;
    //     transform(s.begin(),s.end(),s.begin(),::tolower);
    //     cout<<s<<endl;

    // *********************FROM THE BIGGEST NUMBER FROM THE NUMERIC STRING**********
    // "53214"------->  "54321"
    // string s = "8375627956275205167";
    // sort(s.begin(),s.end(),greater<int>());
    // cout<<s<<endl;

    //***********print which letter is repeated maximum number of the times and also how many times
    // example---->
    // "abcacbade"
    // frequency=3
    // output = 3

//   solution----------->

    string s = "djksfhcdjaskdjasfjjfgrwuofjadcnduncjnwiughurwndnfkhwjwjhfnekfnjkdnfdnajnfdja";
    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;
    for (int i = 0; i < s.size(); i++)
        freq[s[i] - 'a']++;
    char ans = 'a';
    int maxF = '0';
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] >= maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout << maxF << " " << ans << endl;

    return 0;
}