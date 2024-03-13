/*

n=4

        *
       **
      ***
     ****
      ***
       **
        *     
        
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space=n;
    for(int i=1;i<=n;i++){
        while(space>0){
            cout<<" ";
            space--;
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
            space=n-i;
        }
        cout<<endl;
    }
    space =2;
    for(int i=n-1;i>=1;i--){
        while(space>0){
            cout<<" ";
            space--;
        }
        for(int j=i;j>=1;j--){
            cout<<"*";
            space=n-i+2;
        }
        cout<<endl;
    }
    return 0;
}