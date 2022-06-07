#include<iostream>
using namespace std;
class A{
    int age;
    float sal;
    string name;
    public :
    A(){
        cout<<"Hey i am default constructor"<<endl;
    }
    A(string n,int a, float s){
    age=a;
    sal=s;
    name=n;
    }
    void setData(string n,int a, float s){
    age=a;
    sal=s;
    name=n;
    }
    void showData(){
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
        cout<<"Salary is "<<sal<<endl;
    }
    ~A(){
        cout<<"Hey i am destructor\n";
    }
};
int main(){
    A *obj1= new A("Anonymous",21,50000);
obj1->showData();
A *obj2;
obj2=new A;
obj2->setData("Raushan",22,60000);
obj2->showData();

delete obj1;
delete obj2;
return 0;
}
// f=9/5*c+32
