#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v){
    for(auto s : v)
        cout << s << " ";
}

void SelectSort(vector<int> &v){
    for(int i=0;i<v.size();i++){
        int j = i-1;
        int key = v[i];

        while(j>=0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }


    print(v);
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>> v[i];
    }

    SelectSort(v);
    return 0;
}