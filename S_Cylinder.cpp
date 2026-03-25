#include <iostream>
#include <queue>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q;
    ll x = 0;
    short opr;
    cin >> q;
    queue <int> tube;
    while (q--){
        cin >> opr;
        if(opr == 1){
            cin >> x >> opr;
            while(opr--) tube.push(x);
        }else{
            cin >> opr;
            while(opr--){
                x += tube.front();
                tube.pop();
            }
            cout << x << "\n";
        }
        x = 0;
    }
    return 0;
}