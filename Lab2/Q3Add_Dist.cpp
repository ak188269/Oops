#include<iostream>
using namespace std;
struct Distance{
float feet;
float inch;
static  const int a=34;
void setDist(float a, float b=0){
    inch=b;
    feet=a;
}
void getDist(){
    cout<<inch<<" "<<feet<<endl;
}
};
void getDist(Distance a, Distance b){
    float feet=a.feet + b.feet + (a.inch+b.inch)/12;
    float inch= a.inch + b.inch-((a.inch + b.inch)/12)*12;
    cout<<feet<<" feet and ";
    cout<< inch<<" inch\n";
}
int main(){
Distance D1,D2;
float feet ,inch;
cout<<"Enter feet and inch of first distance\nfor example if dist=12 feet 14 inch then enter 12 and 14\n";
cin>>feet>>inch;
D1.setDist(feet,inch);
cout<<"Enter feet and inch of second distance\nfor example if dist=12 feet 14 inch then enter 12 and 14\n";
cin>>feet>>inch;
D2.setDist(feet,inch);
getDist(D1,D2);

}