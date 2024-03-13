/*
    n=4
      
    **** ****
    ***   ***
    **     ** 
    *       *

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space=1;
    int temp=space;
    for(int i=1;i<=n;i++){
       // temp=space;
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        while(space>0){
            cout<<" ";
            space--;
        }
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
       space=temp;
       space+=2;
       temp=space;
        cout<<endl;   
    }
    return 0;
}