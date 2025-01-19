#include <iostream>
#include <deque>
#include <string>

using namespace std;


deque<int> dq;

void command(string cmd){
    if(cmd=="push_front"){
        int n;
        cin >> n;
        dq.push_front(n);
    } else if(cmd=="push_back"){
        int n;
        cin >> n;
        dq.push_back(n);
    }else if(cmd=="pop_front"){
          if(!dq.empty()){
        int temp = dq.front();
        dq.pop_front();
        cout << temp << endl;
        }
    }
    else if(cmd=="pop_back"){
        if(!dq.empty()){
        int temp = dq.back();
        dq.pop_back();
        cout << temp << endl;
        }
    }
    else if(cmd=="size"){
        cout << dq.size() << endl;
    }else if(cmd=="empty"){
        cout << dq.empty() << endl;
    }
    else if(cmd=="front"){
        cout << dq.front() << endl;
    }
    else if(cmd=="back"){
        cout << dq.back() << endl;
    }
    else cout << "Not found command. : "<< cmd << endl;
}

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string ss;
        cin>> ss;
        command(ss);
    }
    return 0;
}