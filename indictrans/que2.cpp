//return only even nos in array taken as input
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<endl<<"ENTER THE TOTAL NO OF INTEGERS TO BE TAKEN IN ARRAY"<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE INTEGERS"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"THE ENTRIES IN ARRAY ARE:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"THE EVEN ENTRIES IN ARRAY ARE:"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2 ==0 ){
            cout<<arr[i]<<" ";
        }
    }
}