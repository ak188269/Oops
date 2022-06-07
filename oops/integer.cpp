#include<iostream>
using namespace std;

class integer{
    int num;
    public:
     void setData(int a)
     {
         num=a;
     }
     int getData()
     {
         return num;
     }
};
 int main (){
     integer i1,i2;
     i1.setData(10);
     i2.setData(20);
     cout<<i1.getData();
     cout<<endl;
     cout<<i2.getData();
 }