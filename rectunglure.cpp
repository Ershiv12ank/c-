#include<iostream>

using namespace std;
int main(){
int length , breadth;
cout<<"Enter length of a rectangle"<<endl;
cin>>length;
cout<<"Enter breadth of a rectangle"<<endl;
cin>>breadth;   
for(int j=0;j<breadth;j++){
    
for(int i=0; i<length;i++)  
cout<<"*";
cout<<endl;
}
  cout<<endl;
  
    return 0;
}
