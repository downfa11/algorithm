#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, cnt=0;
    cin>> n;

    vector<int> v;

    if(n==0) {
        cout << 0; return 0;
    }
    
    while(n>0){
        v.push_back(n%2);
        n/=2;
    }

    for(int i=v.size()-1; i>=0; i--){
        cout << v[i];
    }

    return 0;
}