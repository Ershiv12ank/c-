#include <iostream>
using namespace std;
int main(){
int a , b,temp;
cout<<"Enter num 1 :"<<endl;
cin>>a;
cout<<"Enter num 2 ";
cin>>b;
temp=b;
b=a;
a=temp;
cout<<"Enter num 1 :"<<a<<endl;
cout<<"Enter num 2 :"<<b<<endl;
    return 0;
}