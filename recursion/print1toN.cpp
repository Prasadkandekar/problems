#include<iostream>
using namespace std;

void print1toN(int i , int n){
  
    if(i==n+1)return;
    cout<<i<<endl;
    print1toN(i+1 ,n);
    cout<<endl;
}

int main(){
    
    int n;
    cout<<"Enter N : ";cin>>n;

    print1toN(1,n);
    


    return 0;
}