/*
    n = 8
    *
      * 
        *
    * 
      * 
        *
    *  
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
        for(int j=1;j<=3;j++){
            if(j == (i%3)+1){
                cout<<"*";
                space+=i%3;
                
                //break;
            }
        }
        cout<<endl;
    }
    return 0;
}