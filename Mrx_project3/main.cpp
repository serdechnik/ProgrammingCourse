#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    double a,b,c,d,e,f;
    cout<<"Enter the factor a,b,c"<<endl;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);

    if(d==0)
    {
        e=(-b+sqrt(d))/(2*a);
        cout<<"x ="<<e<<endl;
    }
    if(d>0)
    {
        e=(-b+sqrt(d))/(2*a);
        f=(-b-sqrt(d))/(2*a);
        cout<<"e ="<<e<<endl;
        cout<<"f ="<<f<<endl;
    }
    if(d<0)
    {
        cout<<"No roots"<<endl;
    }
}

