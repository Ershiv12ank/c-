#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the digit "<<endl;
    cin>>n;
    int reverse=0;
    while(n>0){
     int last_digtit=n%10;
     reverse=reverse*10+last_digtit;

        n/=10;
    }
    cout<<"reverse of digit "<<reverse;
    return 0;
}