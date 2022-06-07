#include<iostream>
using namespace std;
int main(){
    int *ptr=new int(10);
    cout<<"address of ptr is "<<ptr<<endl;
    cout<<"value at ptr is "<<*ptr<<endl;
    delete ptr;
    ptr=NULL;
    //*********second method of using dynamic allocation 
    int *ptr2;
    ptr2=new int;
    *ptr2=20;
    cout<<"address of ptr2 is "<<ptr2<<endl;
    cout<<"value at ptr2 is "<<*ptr2<<endl;
    delete ptr2;
    ptr2=NULL;

}