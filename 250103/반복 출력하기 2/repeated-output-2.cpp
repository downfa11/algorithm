#include <iostream>
using namespace std;

void function(int N, int i){
    if(i==N) return;

    cout << "HelloWorld" << endl;
    function(N,++i);
}

int main() {
    int N;
    cin>> N;
    function(N,0);

    return 0;
}