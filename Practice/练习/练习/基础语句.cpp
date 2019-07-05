#include<iostream>
#include<cmath>
using namespace std;
void p1()
{cout<<"Please input a b c"<<endl;
float a,b,c,d,s;
cin>>a>>b>>c;
s=(a+b+c)/2.0;
d=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"Area is "<<d<<endl;
system("pause");
}