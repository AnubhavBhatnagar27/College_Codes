// Delete an element in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<" element of array: ";
        cin>>arr[i];
    }
    cout<<"Enter the element to be removed: ";
    cin>>r;
    for(int j=r;j<n;j++){
        arr[j]=arr[j+1];
    }
    cout<<"Array after deletion is: "<<endl;
    for(int k=0;k<n-1;k++){
        cout<<arr[k]<<" ";
    }
return 0;
}