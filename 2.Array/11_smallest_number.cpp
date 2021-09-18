#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    cout<<endl;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int smallest=INT8_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }

    cout<<smallest<<endl;
    return 0;
}