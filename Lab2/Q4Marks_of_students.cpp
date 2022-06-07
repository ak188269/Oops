#include<iostream>
using namespace std;
struct Student{
string name;
int roll_no;
float chem_marks,phy_marks,math_marks;
void setInfo(string n, int r,float c,float p,float m){
    name=n;
    roll_no=r;
    chem_marks=c;
    phy_marks=p;
    math_marks=m;
}
void displayPercentage(){
cout<<name<<" got "<<(chem_marks+math_marks+phy_marks)/3 <<" percentage\n";
}

};

int main(){
    int n;
    cout<<"enter the number of students you want\n";
    cin>>n;
   cin.ignore();
   Student s[n];
   for(int i=0;i<n;i++){
string name;
int roll_no;
float chem_marks,phy_marks,math_marks;
   cout<<"Enter the name of "<<i+1<<" student ";
   getline(cin,name);
   cout<<"Enter the roll no  of "<<i+1<<" student ";
   cin>>roll_no;
   cout<<"Enter the chemistry marks of "<<i+1<<" student ";
   cin>>chem_marks;
   cout<<"Enter the physics marks of "<<i+1<<" student ";
   cin>>phy_marks;
   cout<<"Enter the math marks of "<<i+1<<" student ";
   cin>>math_marks;
   s[i].setInfo(name,roll_no,chem_marks,phy_marks,math_marks);
   }
   for(int i=0;i<n;i++)
   s[i].displayPercentage();
   return 0;
}