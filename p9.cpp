/*
    n=3
     
     *  
    * * 
   * * * 
    * * 
     * 

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   // int space=n;
    // for(int i=1;i<=n;i++){
    //     while(space>0){
    //         cout<<" ";
    //         space--;
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //         space = n-i;
    //     }
    //     cout<<endl;
    // }
    // space = n-1;

    // for(int i=n;i>1;i--){
    //     while(space>0){
    //         cout<<" ";
    //         space--;
    //     }
    //     for(int j=i-1;j>=1;j--){
    //         cout<<"*"<<" ";
    //         space = i;
    //     }
    //     cout<<endl;
    // }


    for(int i=0;i<(2*n)-1;i++) { 
  
        int comp; 
        if(i<n) { 
            comp = 2 * (n - i) - 1; 
        } 
        else{ 
            comp = 2 * (i - n + 1) + 1; 
        } 
        
        for(int j=0;j<comp;j++) { 
            cout<<" ";
        } 
  
       
        for(int k=0;k<(2*n)-comp;k++) { 
            cout<<"* ";
        } 
        cout<<endl;
    } 
    return 0;
}