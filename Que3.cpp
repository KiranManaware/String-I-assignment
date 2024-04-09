// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes
#include<iostream>
#include<algorithm>
using namespace std;
bool reversee(string &s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    
}
int main()
{
    string s;
    cout<<"Enter String : ";
    cin>>s;
    cout<<(reversee(s)? "YES":"NO");

    return 0;
}