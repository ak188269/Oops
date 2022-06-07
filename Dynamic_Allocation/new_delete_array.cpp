#include<iostream>
using namespace std;
int main(){
    //****declaring and using array using new keyword;
    cout<<"dynamically allocating an array using new kwyword\n";
    int *arr=new int[5];
    if(arr!=NULL)
    cout<<"Memory allocated\n";
    else cout<<"Memory not allocated\n";
for(int i=0;i<5;i++)
arr[i]=i+10;
cout<<"Element of the arary are\n";
for(int i=0;i<5;i++)
cout<<*(arr+i)<<endl;
cout<<"Now deleting the memory allocated using delete [] arr\n";
delete []arr;
}
