/*
    n=4
    A
    B*B
    C*C*C
    D*D*D*D
    C*C*C
    B*B
    A

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=65;
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            count++;
            cout<<(char)(k);
            if(count <=(i-1)){
                cout<<"*";
            }
        }
        k++;
        cout<<endl;
    }

    k-=2;
     for(int i=n-1;i>=1;i--){
        int count=0;
        for(int j=1;j<=i;j++){
            count++;
            cout<<(char)(k);
            if(count <=(i-1)){
                cout<<"*";
            }
        }
        k--;
        cout<<endl;
    }
    return 0;
}