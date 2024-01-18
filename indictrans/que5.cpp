//PAIR SUM
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE TOTAL NO OF INTEGERS TO BE TAKEN IN ARRAY"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"THE ENTRIES IN ARRAY ARE:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int sum;
    cout<<endl<<"ENTER THE TARGET SUM"<<endl;
    cin>>sum;
    int count=0;
    cout<<"THE PAIR WITH TARGET SUM ARE"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<","<<arr[j]<<endl;
                count++;
            }
        }
    }
    if (count=0){cout<<"NO SUCH PAIR EXISTS";}
}