#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isCorrect(string value){
    stack<char> s;

    for(int i=0; i<value.size(); i++){
        if(value[i]=='('){
            s.push(value[i]);
        } else if(value[i]==')' && !s.empty()){
            s.pop();
        }
    }


    return s.empty();
}

int main() {
    string value;
    cin >> value;
    
    cout << (isCorrect(value) ? "Yes" : "No") << endl;
    return 0;
}