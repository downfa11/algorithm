#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[101];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i =0;i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    return 0;
}