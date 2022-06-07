#include<iostream>
using namespace std;
int main(){
int basic_sal;
cout<<"Enter your basic salary\n";
cin>>basic_sal;
if(basic_sal<=10000)
{
    float HRA=20*1.0/100*basic_sal;
    float DA= 80*1.0/100*basic_sal;
cout<<"Total salary is "<<(HRA+DA+basic_sal)<<endl;
}
    return 0;

}