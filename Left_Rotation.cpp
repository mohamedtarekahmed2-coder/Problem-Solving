#include <iostream>
#include <queue>
using namespace std;

void read_que(queue <int>& q,const int& count){
    int num;
    for (int i = 0; i < count; i++)
    {
        cin >> num;
        q.push(num);
    }   
}

void print_que(queue <int>& q){
    while(!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << '\n';
}

void left_rotation(queue <int> & q, int num_rotation){
    while(num_rotation--){
        q.push(q.front());
        q.pop();
    }
}
int main() {
    int size_arr, num_rotation;
    cin >> size_arr >> num_rotation;

    queue <int> numbers;
    read_que(numbers, size_arr);
    left_rotation(numbers, num_rotation);
    print_que(numbers);
    return 0;
}
