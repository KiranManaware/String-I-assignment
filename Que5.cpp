// Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string of length less than 10  "<<endl;
    cin>>s;
    int x=0;
    for(int i=0;i<s.size();i++){
        x*=10;
        x+=s[i]-48;
    }
    cout<<x;
    return 0;
}