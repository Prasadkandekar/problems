#include<iostream>
using namespace std;
    void palindrome(string s, int i ,bool flag){
       
        if(i >= s.size()/2){
            (flag == true)?cout<<"String is Palindrome \n ": cout<<"String is not Palindrome \n ";
            return;
        }
        if(s[i] != s[s.size()-i-1]) flag = false;
        palindrome(s,i+1,flag);
    }
int main(){
    string str = "mmm";

    palindrome(str,0,true);
    return 0;
}