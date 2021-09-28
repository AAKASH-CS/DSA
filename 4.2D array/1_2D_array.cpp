#include<iostream>
using namespace std;

int main(){
    int a[100][100];
    int m,n;
    cout<<"How many row you want in your 2D array : ";
    cin>>m;
    cout<<endl;
    cout<<"How many column you want in your 2D array : ";
    cin>>n;
    cout<<endl;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    cout<<"Printing row wise : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
        cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing column wise : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}