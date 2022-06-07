#include<iostream>
using namespace std;

class area{
    int len,width;
    public:
    area(){

    }

 area(int l,int b)
 {
     len=l;
     width=b;
 }
 //copy constructor 
 area(area & a)
 {
    len=a.len;
    width=a.width;
 }
    double calculateArea(){
        return len*width;
    }
     ~area(){
        //  cout<<"Destructor is called\n";
     }
};
 int main (){
     area i1(10,20),i2;
     i2=i1;
    cout<<i2.calculateArea();
 }