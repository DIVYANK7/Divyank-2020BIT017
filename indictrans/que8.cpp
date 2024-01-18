//Program to check whether given string is palindrome or not
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"ENTER A STRING ";
    cin>>str;
    
    int n=str.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]!=str[n-i-1]){
            count++;
        }
    }
    if (count ==0){
        cout<<"GIVEN STRING IS PALINDROME";
    }
    else{cout<<"STRING IS NOT PALINDROME";}
}