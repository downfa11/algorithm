#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int gcd(int a, int b){
    if(b==0) return a;

    return gcd(b, a % b);
}

int lcm(int a,int b){
    return (a*b) / gcd(a, b);
}

int func(int n){
    if(n==1) return v[0];
    return lcm(v[n-1], func(n-1));
}

int main() {
    int n;
    cin >> n;

    v.resize(n);
    for(int i=0;i<n;i++)
        cin >> v[i];

    cout << func(n) << endl;

    return 0;
}