#include <iostream>
#include <set>
using namespace std;
void take_potions (multiset<int, greater<int>>& potions, int num_potions){ 
    int take_tool;  
    for (int i = 0; i < num_potions; i++)
    {
        cin >> take_tool;
        potions.insert(take_tool);
    }
}
int max_num_potions (multiset<int, greater<int>>& potions, int num_potions){
    int health, answer;
    health = answer = 0;
    for (auto potion : potions)
    {
        health += potion;
        if ( potion >= 0){
            answer ++;
        }
        else {
            if (health >= 0) {
                answer++;
            }
            else break;
        }
    }
    return answer;
}
int main() {
    int num_potions;
    cin >> num_potions;
    multiset <int, greater<int>> potions;
    take_potions(potions ,num_potions);
    cout << max_num_potions(potions ,num_potions) << '\n';
    return 0;
}
