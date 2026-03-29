#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool next_premutation_for_me (vector <int>& vec){
    int one, two, ind, size = vec.size();
//Test it is the end or not
    vector <int> testfalse = vec;
    sort (testfalse.begin(), testfalse.end(), greater<>());
    if (vec == testfalse) 
        return false;
//To know the pivot and his location
    for (int i = size - 1; i > 0; i--){
        if (vec.at(i) > vec.at(i - 1)) {
            one = vec.at(i - 1);
            ind = i - 1;
            break;
        }
    }
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
    }while (next_premutation_for_me(numbers));
    return 0;
}