// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fibbo(int a,int b,int c,int i){
    if (c==i){
        return a;
    }
    else{
        fibbo(b,a+b,c,i+1);
    }
}
int main() {
    //what is at position 5 in fibbo series
    cout<<fibbo(0,1,5,1);

    return 0;
}