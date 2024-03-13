/*

    n=6
    * * * * * *
    * *     * *
    *  *   *  *
    *  *   *  *
    * *     * *
    * * * * * *

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n){
                cout<<"* ";
            }
            else if(j==1 || j==n){
                cout<<"* ";
            }
            // else if((j==2)&&(i==2) || (j==n-1)&&(i==n-1) || (j==2)&&(i==n-1) || (j==n-1)&&(i==2)){
            //     cout<<"* ";
            // }
            else if(i==j || j == (n + 1 - i)){
                cout<<"* ";
            }
            //else if()
            else{
                cout<< "  ";
            }
        }
        cout<<endl;
    }
    return 0;
}