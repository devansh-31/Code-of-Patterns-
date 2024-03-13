/*
n=4
A
B A
C B A
D C B A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<(char)(j-1+65)<<" ";
        }
        cout<<endl;
    }
    return 0;
}