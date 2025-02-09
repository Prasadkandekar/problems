#include<iostream>
#include<vector>
using namespace std;

void rev(vector<int>&arr, int i){
    int n = arr.size();
    if(i>n/2)return;
    swap(arr[i],arr[n-i-1]);
    rev(arr,i+1);
}

int main(){
    int n;
    cout<<"Enter Number of Elements in array : ";
    cin>>n;
       vector<int>arr(n);
    for(int i = 0 ; i < n ; i++)cin>>arr[i];
 
    cout<<"Original Array : ";
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;
    cout<<"Reversed Array : ";
    rev(arr,0);

    for(auto a : arr)
{
    cout<<a<<" ";
}
cout<<endl;

    return 0;
}