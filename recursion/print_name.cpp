#include<iostream>
using namespace std;

void print_name(string name, int n){
    int num = n;
    if(num == 0)return;
    cout<<name<<" ";
    print_name(name , num-1);
    cout<<endl;
}

int main(){
    string name;
    int n;

    cout<<"Enter name : ";cin>>name;
    cout<<"How many times to print ? :";cin>>n;
    
    print_name(name,n);
    


    return 0;
}