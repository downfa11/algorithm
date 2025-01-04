#include <iostream>
using namespace std;

int count=0;

int func(int n){
    if(n==1) return count;
    count++;

    if(n%2==0) return func(n/2);
    else return func(n/3);
}

int main() {
    int n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}