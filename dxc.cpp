#include<bits/stdc++.h>
#include<vector>
#include<math.h>

using namespace std;
int main(){
    int digit=25143;
    int k=3;
int num = floor(log10(digit)+1);
string s= to_string(digit);
for(int i=0;i<s.length();i++){
    if(i+k>s.length()){
        i=s.length()-k;
    }
    s[i]=s[i+k];
}
int ans=stoi(s);
cout<<ans;
}