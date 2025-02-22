#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,0,0,0,1,1,0,1,0};
    int size=10;

    int numZeros=0;
    int numOnes=0;

    for(int i =0;i<size;i++){
        if(arr[i]==0){
            numZeros++;
        }
        if(arr[i]==1){
            numOnes++;
        }
    }

    cout<<"Number of Zeros:- "<<numZeros<<" "<<endl;;
    cout<<"Number of Ones:- "<<numOnes<<" ";
}