#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Student {
public:
    int index, height, weight;
    Student(int index, int height, int weight) : index(index), height(height), weight(weight) {}
    void print(){
        std::cout << height << " " << weight << " " << index << std::endl;
    }
};

bool compare(Student a, Student b){
    if(a.height == b.height) return a.weight > b.weight;
    return a.height < b.height;
}

int main() {
    vector<Student> v;
    int n;
    std::cin >> n;

    for(int i=0;i<n;i++){
        int height, weight;
        cin >> height >> weight;
        Student student(i + 1, height, weight);
        v.push_back(student);
    }

    sort(v.begin(), v.end(), compare);

    for(auto a : v) a.print();
    
    return 0;
}