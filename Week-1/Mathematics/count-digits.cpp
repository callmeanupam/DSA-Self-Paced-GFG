#include<iostream>
using namespace std;

int countDigits(int n){
    int count = 0;
    while(n > 0){
        n = n / 10;
        count++;
    }
    return count;
}

int main(){
    int num;
    cout << "Enter the no : ";
    cin >> num;

    int ans = countDigits(num);
    cout << "THE TOTAL NO OF DIGITS ARE : " << ans << endl;

    return 0;
}