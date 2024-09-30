// Insert an element in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ind,val;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    cout<<"Enter the index where value is to be inserted: ";
    cin>>ind;
    for(int i=n;i>=ind;i--){
        arr[i]=arr[i-1];
    }
    cout<<"Enter the value to be inserted:";
    cin>>val;
    arr[ind]=val;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}