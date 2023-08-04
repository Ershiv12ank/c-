// This is program to Count the number of digit in the given number n.

#include<iostream>

using namespace std;
int main(){
int n;
int count=0;
cout<<"Enter the value of n "<<endl;
cin>>n;
while(n>0){
 n/=10;
 count++;

}

cout<<count<<endl;

    return 0;
}