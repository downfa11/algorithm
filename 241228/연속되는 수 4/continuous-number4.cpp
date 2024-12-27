#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int calcLongestSequence(int k){
    int prev=0, length=0;

    for(int i=k;i<v.size();i++){
        if(v[i]<=prev)
            break;

        length++;
        prev = v[i];
    }
    return length;
}

int main() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a;
        cin>> a;
        v.push_back(a);
    }

    int result=0;
    for(int i=0; i<v.size();i++)
        result = max(result,calcLongestSequence(i));

    cout << result << endl;
    return 0;
}