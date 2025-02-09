#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1)return n;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n ;
    cout<<"Which fibonacci number you want ? :";cin>>n;
    int nth = fibo(n);
    cout<<n<<" th Fibonacci number is : "<<nth<<endl;
    return 0;
}