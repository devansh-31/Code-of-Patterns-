/*
    n=3
    output = 123321
             12**21
             1****1
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=n;
    int star=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=count;j++){
            cout<<j;
        }
        
        for(int k=0;k<star;k++){
            cout<<"*";
        }
        for(int j=count;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        count--;
        star+=2;
    }
    return 0;
}