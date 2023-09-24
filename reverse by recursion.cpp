// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void reverse(int n,int arr[],int i){
    if (i>=n){
        return;
    }
    else{
        swap(arr[i],arr[n]);
        reverse(n-1,arr,i+1);
    }
}
int main() {
    int arr[]={1,2,3,4,5};
    reverse(4,arr,0);
    for (int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}