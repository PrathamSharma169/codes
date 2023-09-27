// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool sorted(int arr[],int i,int n){
    if (i==n-1){
        return 1;
    }
    if(arr[i]<=arr[i+1]){
        sorted(arr,i+1,n);
    }
    else{
        return 0;
    }
}
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int arr[]={1,23,3,45};
    cout<<sorted(arr,0,4);
    return 0;
}