#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> v;

int func(int index, int maxValue){
    if(index == v.size()) return maxValue;
    return func(index+1, max(v[index], maxValue));
}

int main() {
    int n;
    cin >> n;

    v.resize(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    cout << func(0,0) << endl;

    return 0;
}