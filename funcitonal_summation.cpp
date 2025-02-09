#include<iostream>
using namespace std;

int summation(int n){
   if(n==0)return 0;
   return n + summation(n-1);
}


int main(){

    int n;
    cout<<"Enter Number : ";
    cin>>n;
   
    int sum = summation(n);

    cout<<"Summation of "<<n <<" is :"<<sum<<endl;



    return 0;
}