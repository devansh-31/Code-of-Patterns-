// /*
//     n = 8
//     *
//       * 
//         *
//       * 
//     * 
//       *
//         *  
//       * 
      
// */

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,space=0;
//     cin>>n;
//     for(int i=1;i<=n;i++){
        
//         while(space>0){
//             cout<<" ";
//             space--;
//         }
//         for(int j=1;j<=3;j++){
//             if(j == (i%3)+1){
//                 cout<<"*";

//                 if(i%2 == 0) {
//                     space=i%3;
//                 }

//                 else if(i%4 == 1){
//                     space=i%3;
//                 }
//                 else{
//                     space=0;
//                 }
//                 // if(temp<2){
//                 //     space+=i;
//                 //     temp=space;
//                 // }
//                 // else if(temp == 2){
//                 //     space=temp-1;
//                 //     temp=space;

//                 // }
//                 //else if()
                
//                 //break;
//             }
//         }
       
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 8;

    for (int i = 0; i < n; i++) {
        if (i == n / 2) {
            cout << string(n, '*') << endl;
        } else {
            int spaces_before = abs(n / 2 - i);
            int spaces_after = abs(n / 2 - i);
            cout << string(spaces_before, ' ') << '*' << string(spaces_after, ' ') << endl;
        }
    }

    return 0;
}

