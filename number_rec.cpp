#include<iostream>

using namespace std;
int main(){
int n;
cout<<"Enter row of a rectangle"<<endl;
cin>>n;
for(int i=1; i<=n;i++){
  
  for(int j=i;j<=n;j++){
    if((n==1)||(i==1)||(i==n) ||(n==1)){
    cout<<j;
    }
  }

  }
  cout<<endl;



    return 0;
}