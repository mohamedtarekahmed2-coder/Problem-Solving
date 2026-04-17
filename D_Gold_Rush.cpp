#include <iostream>
using namespace std;

bool cut(int gold_nuggets, const int & target){
    if (gold_nuggets < target) return false;
    else if (gold_nuggets == target) return true;
    else return cut (gold_nuggets / 3, target) || cut ((gold_nuggets / 3)*2, target);
}

int main() {
    short test_cases;
    cin >> test_cases;
    int gold_nuggets, target;
    while (test_cases--)
    {
        cin >> gold_nuggets >> target;
        (cut (gold_nuggets, target))? cout << "YES\n": cout << "NO\n";
    }
    return 0;
}

// fast_io();
// int t = 1;
// //cin >> t;
// while (t--) solve();
// #define nl cout << '\n'
// #define ll long long
// void fast_io()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }