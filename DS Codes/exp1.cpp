// Factorial Program
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"The factorial is: "<<fact<<endl;                                      
return 0;
}