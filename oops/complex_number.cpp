#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:
    complex(){

    }
    complex(int r, int i)
    {
real=r;
img=i;
    }
    void getNumber(){
        cout<<real<<" +"<<" i"<<img<<endl;
    }
  void add_complex(complex &c1, complex &c2)
    {
        complex c3;
        real=c1.real+c2.real;
        img=c1.img+c2.img;
        
    }

};
 int main (){
     complex c1(10,20),c2;
     c2=c1;
     c1.getNumber();
     c2.getNumber();
     complex c3;
     c3.add_complex(c1,c2);
     c3.getNumber();
 }