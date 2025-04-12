#include <iostream>
using namespace std;
int main()
{
    int a, b, c, year, month, week, days;
     cout<<"Enter the no. of days: "<<"\n";
    cin>>days;
  
    year = days/365;
     days =(days%365);
    month= (days/30);
    days =(days%30);
    week = (days/ 7);
    days= (days%7);
    cout<<"year "<<year<<"\n"<<"months "<<month <<"\n"<<"weeks "<<week <<"\n"<<"days " <<days;
   
}