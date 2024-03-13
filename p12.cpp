/*
      n=4

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
    int space=n;
    for(int i=1;i<=n;i++){
        while(space>0){
            cout<<" ";
            space--;
        }
        for(int j=1;j<=i;j++){
            if(i==1 || i==n){
                cout<<"* ";
            }
            else if(j==1 || j==i){
                 cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            space = n-i;
        }
        cout<<endl;
    }
    return 0;
}