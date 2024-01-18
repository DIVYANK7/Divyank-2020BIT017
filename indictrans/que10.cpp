//Program to find Factorial of a number using recursion

#include  <iostream>
using namespace std;

//function to find factorial of a number
int factorial (int n){
    int fact;
    if(n==0 || n==1){return 1;}
    else{
    return fact= n*factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>n;
    cout<<"THE FACTORIAL OF THE ENTERED NUMBER IS : "<<factorial(n);
    

}
