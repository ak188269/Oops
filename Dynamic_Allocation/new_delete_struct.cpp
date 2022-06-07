#include<iostream>
using namespace std;
struct st
{
   int a; string name;
   void getData(){
       cout<<"Name is "<<name<<endl<<"Value of a is "<<a<<endl;
   }
   
};

int main(){
    // making an instance of struct using new keyword

    st * s=new st;
    s->a=10;
    s->name="Anonymous";
    s->getData();
    delete s;

}