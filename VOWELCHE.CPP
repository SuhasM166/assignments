#include<iostream.h>
int main(){
char c;
cout<<"Enter char :";
cin>>c;
if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u')
cout<<c<<"is a vowel"<<endl;
else
cout<<c<<"is consonant"<<endl;
return 0;
}