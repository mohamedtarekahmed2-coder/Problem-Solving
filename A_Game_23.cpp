#include <iostream>

using namespace std;
void tree(int num, const int &goal, int index = 0){
    if (num == goal) cout << index << ' ';
    if (num > goal) cout << -1 << ' ';
    tree(num * 2, goal, ++index);
    tree(num * 3, goal, ++index);
}
int main() {
    int num, goal, answer;
    cin >> num >> goal;
    if (num == goal) cout << "0\n";
    else    
        tree(num, goal);
    return 0;
}
