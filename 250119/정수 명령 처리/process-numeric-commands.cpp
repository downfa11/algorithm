#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> s;

void command(string cmd){
    if(cmd=="push"){
        int n;
        cin >> n;

        s.push(n);
    }
    else if(cmd=="size"){
        cout << s.size() << endl;
    }
    else if(cmd=="pop"){
        if(!s.empty()){
            cout << s.top() << endl;
            s.pop();
        }
    }else if(cmd=="empty"){
        cout << s.empty() << endl;
    } else if(cmd=="top"){
        cout << s.top() << endl;
    }
    else cout << "Not found this command." << endl;
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