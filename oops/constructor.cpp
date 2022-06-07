#include<iostream>
using namespace std;

class integer{
    int num;
    public:
 integer(int n){
     num=n;
 }
 integer(int i,int j)
 {
     num=i*j;
 }
     int getData()
     {
         return num;
     }
     ~integer(){
         cout<<"Destructor is called\n";
     }
};
 int main (){
     integer i1(10),i2(20);
    
     cout<<i1.getData();
     cout<<endl;
     cout<<i2.getData();
 }