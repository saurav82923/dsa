#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"give an no for checking its prime or not ";
    cin>>n;
    for( i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime ";
            break;
        }
    }
    if(n==i){
        cout<<"its prime";
    }
}