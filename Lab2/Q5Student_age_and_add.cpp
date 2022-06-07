#include<iostream>
using namespace std;
struct Student{
string name,add;
int roll_no,age;

};
void age_greater_than_14(Student *s, int n){
    for(int i=0;i<n;i++){
        if(s[i].age==14)
        cout<<s[i].name<<" ";
    }
    cout<<endl;
}
void even_roll_no(Student *s,int n,int i=0){
    if(i>=n)
    return;
    if((s[i].roll_no)%2==0)
    cout<<s[i].name;
    even_roll_no(s,n,i+1);
}

void student_details(Student *s,int n ){
int roll_no;
cout<<"Enter the roll no of the user\n";
cin>>roll_no;
for(int i=0;i<n;i++){
if(s[i].roll_no==roll_no){
    cout<<"student details is as follows\n";
    cout<<"Name : "<<s[i].name<<endl;
    cout<<"Roll no :"<<s[i].roll_no<<endl;
    cout<<"Address is : "<<s[i].add<<endl;
    cout<<"Age is : "<<s[i].age<<endl;
    return ;
}
}
}
int main(){
   int n;
    cout<<"enter the number of students you want\n";
    cin>>n;
   cin.ignore();
   Student s[n];
   for(int i=0;i<n;i++){
   cout<<"Enter the name of "<<i+1<<" student ";
   getline(cin,s[i].name);
    cout<<"Enter the address of "<<i+1<<" student ";
   getline(cin,s[i].add);
   cout<<"Enter the roll no  of "<<i+1<<" student ";
   cin>>s[i].roll_no;
   s[i].age=10;
 while(s[i].age<11 or s[i].age>14){
 cout<<"Enter the age  of "<<i+1<<" student \n it should be between 11 to 14 only\n";

   cin>>s[i].age;
 }
 cin.ignore();
   }
// age_greater_than_14(s,n);
// student_details(s,int n );
// even_roll_no(s,int n,int i=0);
}