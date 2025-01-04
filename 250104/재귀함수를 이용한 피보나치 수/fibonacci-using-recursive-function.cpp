#include <iostream>
using namespace std;


int func(int i){
    if(i==1 || i==2) return 1;
    return func(i-2) + func(i-1); 
}

int main() {
    int n;
    cin >> n;
    cout << func(n) << endl;

    return 0;
}