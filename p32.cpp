/*

n=3
    ABCCBA
    AB  BA
    A    A
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,space;
    cin>>n;
    int k=65;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<(char)(k);
            k++;
        }

        for(int j=0;j<space;j++){
            cout<<"  ";
        }
        
        for(int j=n;j>=i;j--){
            k--;
            cout<<(char)(k);
            
        }
        cout<<endl;
        space++;

    }
    return 0;
}