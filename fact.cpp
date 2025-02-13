#include<iostream>
using namespace std;

long long factorial(int n){
    long fact = 1;
    for(int i = 1;i<=n;i++){
        fact *= i;
    }
    return fact;
}


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"factorial of " << n << " is " << factorial(n) <<endl;

    return 0;
}