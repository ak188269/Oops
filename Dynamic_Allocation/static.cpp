#include<iostream>
using namespace std;
class A{
    public:
    static int x,y;
    A(){}
    A(int a,int b){
        x=a;
        y=b;
    }
    static void show(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int A::x=20;
int A::y=50;
int main(){
A::show();
cout<<"Value of x and y after changing their values using constructor \n";
    A obj(100,200);
    A::show();
    A::x=1000;
    A::y=2000;
    
    cout<<"changed the value of x and y usig class name and scope resolution operator\n";
A::show();
}