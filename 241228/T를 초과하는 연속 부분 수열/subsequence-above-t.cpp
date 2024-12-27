#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,t;
    cin >> n >> t;    
    
    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin>>v[i];
    
    
    int prev=0, length=0, result=0;
    for(int i=0;i<v.size();i++){  
        if(v[i]>t && prev<=v[i]) {
            length++;
            result = max(result, length);
            prev = v[i];
        }
        else { 
            length=0;
            prev=0;
        }     
    }

    cout << result;
    
    
    return 0;
}