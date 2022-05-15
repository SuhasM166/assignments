#include<iostream.h>
//using namespace std;
int main(){
char op ;
float num1,num2;

cout<<"Enter operator: ";
cin>>op;

cout<<"Enter two numbers: ";
cin>>num1>>num2;

switch(op){
case('+'):cout<<num1<<"+"<<num2<<"="<<num1+num2;
break;
case('-'):cout<<endl<<num1-num2;
break;
case('*'):cout<<endl<<num1*num2;
break;
case('/'):cout<<endl<<num1/num2;
break;
default:cout<<"Error";
break;
}
return 0;
}