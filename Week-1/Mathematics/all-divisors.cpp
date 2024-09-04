#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout << "enter no : ";
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         if(n % i == 0){
//             cout << i << endl;
//         }
//     }
// }
// theta(n), theta 1 space

// Optimised approach

int main(){
    int n ;
    cout << "Enter no : ";
    cin >> n;
    for(int i = 1; i * i <=n; i++){
        if(n%i == 0){
            cout << i << endl;
            if(i != n/i){
            cout << (n/i) << endl;
        }
        }   
    }
}