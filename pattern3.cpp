#include<iostream>
using namespace std;
int main(){
    int count=1;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<count++;
        }
        cout<<endl;
    }
}