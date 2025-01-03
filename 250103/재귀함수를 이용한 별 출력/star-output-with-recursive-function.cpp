#include <iostream>
using namespace std;

void printStarLine(int n){
    if(n<1) return;
    cout << "*";
    printStarLine(n-1);
}

void printStar(int n){
    if(n<1) return;
    
    printStar(n-1);
    printStarLine(n);
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    printStar(n);

    return 0;
}