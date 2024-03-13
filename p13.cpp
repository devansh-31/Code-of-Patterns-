/*
      n=4

     * * * *    
      *   *
       * *
        *  

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
                cout<<"* ";
            }
            else if(j==n || j==i){
                 cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            space = i;
        }
        cout<<endl;
    }
    return 0;
}