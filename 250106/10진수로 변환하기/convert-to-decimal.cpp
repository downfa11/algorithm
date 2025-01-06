#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string s;
    cin>> s;

    int value=0;
    for(int i=0; i<s.size(); i++){
        int a = s[i]-'0';
        value += a * pow(2, s.size()-1-i);

        cout << value << endl;
    }

    cout << value;
    return 0;
}