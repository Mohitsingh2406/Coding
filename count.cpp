#include<iostream>
using namespace std;

int countDigits(int n){
        int cnt =0;
        while(n>0){
            n /= 10;
            cnt++;
        }
        return cnt;
}


int main() {
    int n= 329823;
    cout<<"N: "<<n<<endl;

    int digits = countDigits(n);
    cout<<"Number of digits: "<<digits<<endl;
    return 0;
}