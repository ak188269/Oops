#include<iostream>
using namespace std;

struct Date{
    int month, year,date; 
    string name;

};
void compareDate(Date &d1,Date &d2){
  if(d1.date==d2.date and d1.year==d2.year and d1.month==d2.month)
  cout<<"Both dates are equqal\n";
  else cout<<"Not equal\n";
}
int main(){
Date d[2];
for(int i=0;i<2;i++)
{
    cout<<"enter date of "<<i+1<<" date\n";
    cin>>d[i].date;
     cout<<"enter month of "<<i+1<<" date\n";
    cin>>d[i].month;
     cout<<"enter year of "<<i+1<<" date\n";
    cin>>d[i].year;
}

compareDate(d[0],d[1]);
    return 0;
}