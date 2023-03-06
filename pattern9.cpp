#include<iostream>
using namespace std;
int main(){
    char a='A';
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a<<" ";
        }
        a++;
        cout<<endl;
    }
}