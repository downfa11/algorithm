#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    int n,k;
    cin>> n >> k;

    for(int i=0;i<n;i++){
        q.push(i+1);
    }

    while(!q.empty()){
        for(int i=0;i<k;i++){
            if(i!=k-1){
            int temp = q.front();
            q.pop();
            q.push(temp);
            }else {
                cout << q.front() << " ";
                q.pop();
            }

        }
    }
    return 0;
}