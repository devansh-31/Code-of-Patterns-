/*

n=4
        A
       B B
      C   C
     D     D
    
    
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space=n;
    int k=65;
    for(int i=1;i<=n;i++){
        while(space>0){
            cout<<" ";
            space--;
        }

        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                 cout<<(char)(k)<< " ";
            }
            else{
                cout<<"  ";
            }
           space=n-i;
        }
        cout<<endl;
        k++;
    }
    return 0;
}