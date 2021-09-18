#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size ";
    cin>>n;
    cout<<endl;


    cout<<"Enter the numbers of array ";
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }

    cout<<"Sum of array numbers "<<sum<<endl;

    return 0;
}