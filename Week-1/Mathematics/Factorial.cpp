#include<iostream>
using namespace std;

// iterative solution
// int iteractiveFact(int n){
//     int result = 1;
//     for(int i = 2; i <=n; i++){
//         result = result * i;
//     }
//     return result;
// }

// Recursive solution

int factRec(int n){
    if(n==0)
    return 1;

    return n * factRec(n-1);
}

int main(){
    int num;
    cout << "enter the no : " ;
    cin >> num;

    // int ans = iteractiveFact(num); using iterative
    int ans = factRec(num);
    cout << ans << endl;
    return 0;
}