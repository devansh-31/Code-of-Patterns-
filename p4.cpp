/*
    n=5
    *****
     ****
      ***
       **
        *

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,space=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        while(space>0){
            cout<<" ";
            space--;
        }
        for(int j=n;j>=i;j--){
            cout<<"*";
            space = i;
        }
        cout<<endl;
    }
    return 0;
}