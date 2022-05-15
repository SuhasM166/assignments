#include<iostream.h>
int main(){
int w,l,area,perimeter;
cout<<"Enter length of rectangle" ;
cin>>l;
cout<<"Enter width of rectangle";
cin>>w;
area=l*w;
perimeter=2*(l+w);
cout<<"Area :"<<area<<endl;
cout<<"Perimeter:"<<perimeter<<endl;
cout<<endl;
return 0;
}