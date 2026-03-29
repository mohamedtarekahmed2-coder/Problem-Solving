#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool next_permutation_for_me (vector <int>& vec){
    int one, two, ind = -1, size = vec.size();
//To know the pivot and his location
    for (int i = size - 1; i > 0; i--){
        if (vec.at(i) > vec.at(i - 1)) {
            one = vec.at(i - 1);
            ind = i - 1;
            break;
        }
    }
//Test it is the end or not
    if (ind == -1) return false;
//To know the swap number
    for (int i = size - 1; i > 0; i--){
        if (vec.at(i) > one) {
            two = i;
            break;
        }
    }

    swap(vec.at(ind), vec.at(two));
    reverse (vec.begin() + ind + 1, vec.end());
    return true;
}

int main (){
    vector <int> numbers = {1, 2, 3};
    do{
        for (int& i : numbers) cout << i << ' ';
        cout << '\n';
    }while (next_permutation_for_me(numbers));
    return 0;
}