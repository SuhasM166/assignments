#include<iostream.h>
int main(){
int a,b;
cout<<"Enter a:";
cin>>a;
cout<<"Enter b:";
cin>>b;
cout<<"a="<<a<<"and"<<"b="<<b;
cout<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"after swap"<<endl<<"a="<<a<<endl<<"b="<<b;
cout<<endl;
return 0;
}