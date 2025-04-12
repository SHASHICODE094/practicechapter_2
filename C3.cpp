#include <iostream>
using namespace std;
int main()
{
    long int a, n, d=0;
     cout<<"Enter the no. : "<<"\n";
    cin>>a;
    n=a;
    while(n>0)
    {
        n=n/10;
        d++;
    }
   cout<<"Total no. of digit ["<<a<<"] is = : "<<d;
   
}