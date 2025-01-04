#include <iostream>
#include <string>

using namespace std;

string n;

int func(int index){
    if(index <0) return 0;

    int value = (n[index]-'0') * (n[index]-'0');
    return value + func(index -1);
}

int main() {
    cin >> n;

    int size = n.size()-1;
    cout << func(size) << endl;

    return 0;
}