#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the digit "<<endl;
    cin>>n;
    int digit=0;
    while(n>0){

        digit++;
        n/=10;
    }
    cout<<"number of digit "<<digit;
    return 0;
}