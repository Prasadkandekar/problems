#include<iostream>
using namespace std;

void printNto1(int n){
  
    if(n==0)return;
    cout<<n<<endl;
    printNto1(n-1);
    cout<<endl;
}

int main(){
    
    int n;
    cout<<"Enter N : ";cin>>n;

    printNto1(n);
    


    return 0;
}