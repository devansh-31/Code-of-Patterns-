/*

    n=3
    A
    A B
    A B C
    
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //char c='A';
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<(char)(j+65)<<" ";
        }
        //c++;
        cout<<endl;
    }
    return 0;
}