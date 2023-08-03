//Q6 - Write a C++ program to swap two numbers with the help of a third variable.

#include<iostream>

using namespace std;
int main(){
char a,b,temp ;
cout<<"Enter the value a "<<endl;
cin>>a;
cout<<"Enter the value b "<<endl;
cin>>b;
cout<<"Enter the value a "<<a<<endl;
cout<<"Enter the value b "<<b<<endl;
temp=a;
a=b;
b=temp;
cout<<"the value a "<<a<<endl;
cout<<"the value b "<<b<<endl;
    return 0;
}

