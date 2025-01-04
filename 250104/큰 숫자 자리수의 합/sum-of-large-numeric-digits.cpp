#include <iostream>
#include <string>

using namespace std;

string result;

int func(int n){
    if(n<0) return 0;
    return result[n]-'0' + func(n-1);
}

int main() {
    int a,b,c;
    cin >> a >> b>> c;

    long long sum = a * b * c;
    result = to_string(sum);

    cout << func(result.size()-1) << endl;
    return 0;
}