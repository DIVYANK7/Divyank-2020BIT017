//program to implement binary search

#include <iostream>
using namespace std;

int main(){
    //Taking input from user
    int n;
    cout<<"ENTER THE TOTAL NO OF INTEGERS TO BE TAKEN IN ARRAY"<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER INTEGERS IN SORTED ORDER"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"THE ENTRIES IN ARRAY ARE:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //implementation of binary search 
    cout<<"ENTER THE NO TO BE FOUND"<<endl;
    int k;
    cin>>k;
    
    int low=arr[0];
    int high=arr[n-1];
    while(low<=high){
        int mid=(low+high)/2;
        
        if(arr[mid]==k){
            cout<<"THE NO IS FOUND AT INDEX (index starting from 0) : "<<endl<< mid;
            break;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else cout<<"NO NOT IN ARRAY";

    }
    
}