#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6,7,81,2,4,91,56};
    int size=11;

    int maxi= INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<"Maximum Number is:- "<<maxi<<endl;
    cout<<"Minimum Number is:- "<<mini<<endl;
}