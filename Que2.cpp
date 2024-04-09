// Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter String : ";
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') count++;
    }
    int n=s.size();
    cout<<n-count;
    return 0;
}