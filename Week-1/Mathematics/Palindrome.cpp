#include<iostream>
using namespace std;

int palindrome(int n){
    int rev = 0; // reverse
    int temp = n;
    while(temp!=0){
        int lastdigit = temp % 10; // first we take the last digit
        rev = rev * 10 + lastdigit; // updating reverse
        temp = temp / 10; // updating temp
    }
    return (rev==n);
}

int main(){
    int num;
    cout << "enter no : " ;
    cin >> num;

    if(palindrome(num)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
}