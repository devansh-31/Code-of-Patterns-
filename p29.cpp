/*

n=4
     D
    DC
   DCB
  DCBA

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=65;
    int space=n;
    for(int i=1;i<=n;i++){
        while(space>0){
            cout<<" ";
            space--;
        }
        for(int j=1;j<=i;j++){
            cout<<(char)(k+n-j);
            space = n-i;
        }
        cout<<endl;
    }
    return 0;
}