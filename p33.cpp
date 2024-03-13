/*
n=4
    1
    0 1
    1 0 1
    0 1 0 1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first;
    for(int i=1;i<=n;i++){
        if(i%2 == 0) first=0;
            else first=1;
        for(int j=1;j<=i;j++){
            
            cout<<first<<" ";
            if(first == 1) first=0;
            else first=1;
        }
        cout<<endl;
    }
    return 0;
}