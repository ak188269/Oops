#include<iostream>
using namespace std;
struct Bank{
string name;int account; float balance;
};
void Balance_less_than_200(Bank * b,int n){
    cout<<"all the customer whose balacne is less than $200  are\n";
    for(int i=0;i<n;i++){
        if(b[i].balance<200){
            cout<<b[i].name<<" ";
        }
    }
}
void add_100(Bank * b,int n){
    for(int i=0;i<n;i++){
        if(b[i].balance>1000){
            b[i].balance+=100;
            cout<<b[i].balance<<" ";
        }
    }
}
int main(){
       int n;
    cout<<"enter the number of students you want\n";
    cin>>n;
    Bank B[n];
     for(int i=0;i<n;i++){
   cout<<"Enter the name of "<<i+1<<" customer\n";
   getline(cin,B[i].name);
  cout<<"Enter the accont number of  "<<i+1<<" customer\n ";
   cin>>B[i].account;
     cout<<"Enter the balance of  "<<i+1<<" customer in dollar ($)\n ";
 cin>>B[i].balance;

   }
    return 0;
}