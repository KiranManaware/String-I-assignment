// Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe
// Input :str = "pwians"
// Output : pwisna
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter String : ";
    cin>>s;
    int n=s.size();
    reverse(s.begin()+n/2,s.end());
    cout<<s;
    return 0;
}