#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<int> q;

void command(string cmd){
    if(cmd== "push"){
        int n;
        cin >> n;
        q.push(n);
    }

    else if(cmd=="front")
        cout << q.front() << endl;
    
    else if(cmd== "empty")
        cout << q.empty() << endl;

    else if(cmd== "size")
        cout << q.size() << endl;
 
    else if(cmd== "pop"){
        if(!q.empty()){
            cout << q.front() << endl;
            q.pop();
        }
        }
    else cout << "not found command." << endl;
}
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        command(s);
    }
    return 0;
}