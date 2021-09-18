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

    int largest=INT8_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }

    cout<<largest<<endl;
    return 0;
}