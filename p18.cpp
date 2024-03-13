/*
    Pascal Triangle
    n=4
      1
     1 1
    1 2 1
   1 3 3 1

   C = C * (i - k) / k; 

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
        int c=1;
        for(int j=1;j<=i;j++){
            
            cout<<c<<" ";
            c = c*(i-j)/j;
            space=n-i;
        }
        cout<<endl;
    }
    return 0;
}