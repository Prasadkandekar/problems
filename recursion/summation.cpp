#include<iostream>
using namespace std;

void summation(int i , int sum){
    int n = i;
    if(i==0){
        cout<<"summation of "<<n <<" is :"<<sum;
        return;
    }
    summation(i-1,sum+i);

}


int main(){

    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int sum = 0;
    summation(n,sum);


    return 0;
}