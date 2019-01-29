#include<iostream>
#include<cmath>
void p1()
{cout<<"Please input a b c"<<endl;
int a,b,c,d,s;
cin>>a>>b>>c;
s=(a+b+c)/2.0;
d=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"Area is "<<d<<endl;
}