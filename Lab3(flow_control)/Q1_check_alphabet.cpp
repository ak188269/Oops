#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character\n";
    cin>>ch;
    if(ch>=65 and ch<=90)
    cout<<ch<<" is a capital alphabet\n";
    else if (ch>=97 and ch<=(97+25))
    cout<<ch<<" is small letter\n";
    else cout<<ch<<" is a special character\n";
    return 0;
}