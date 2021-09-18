#include<iostream>
using namespace std;
int main(){
   
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //normal
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    cout<<endl;

    //reverse
    for(int i=n-1; i>=0; i--){
        cout<<a[i]<<" ";
    }



    return 0;
}