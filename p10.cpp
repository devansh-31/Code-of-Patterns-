/*
    n=4
     
     *  
    * * 
   *   * 
  *     *
   *   *
    * * 
     * 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<(2*n)-1;i++){
        int comp,count=0;

        if(i<n){
            comp = 2*(n-i) - 1;
        }
        else{
            comp = 2*(i-n+1) + 1;
        }

        for(int k=0;k<comp;k++){
            cout<<" ";
        }

        for(int z=1;z<=(2*n) - comp;z++){
            count++;
            if(count == 1 || count == ((2*n) - comp)){
                cout<<"* ";
            }
           

            else{
                cout<<"  ";
            }
             
           
        }
        cout<<endl;
    }
    return 0;
}