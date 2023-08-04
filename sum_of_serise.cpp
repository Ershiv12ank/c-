#include<iostream>
using namespace std;
int main(){
int n;
int result=0;
cout<<"Enter the number"<<endl;
cin>>n;
for(int i=0;i<=n;i++){

    if(i%2==0){
        result-=i;

    }
    else{
        result+=i;
    }
    
}
    cout<<"the sum of given serise"<<result;
    return 0;
}