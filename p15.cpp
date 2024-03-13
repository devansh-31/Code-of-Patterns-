/*

 n = 4
 * * * *
  *   *
   * *
    *
   * *
  *   *  
 * * * *
 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space=0;
    for(int i=1;i<=n;i++){
        while(space>0){
            cout<<" ";
            space--;
        }
        for(int j=n;j>=i;j--){
            if(i==1 || i==n){
                cout<<"*"<<" ";
            }
            else if(j==n || j==i){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }          
            space = i;
        }
        cout<<endl;
    }
    space-=2;
    for(int i=2;i<=n;i++){
        while(space>0){
            cout<<" ";
            space--;
        }
        for(int j=1;j<=i;j++){
            
            if(i==2 || i==n){
                cout<<"*"<<" ";
            }
            else if(j==1 || j==i){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            } 
            space = n-i-1;
        }
        cout<<endl;
    }

   
    return 0;
}