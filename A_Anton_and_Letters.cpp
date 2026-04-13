#include <iostream>
#include <set>
using namespace std;
void fast_io();

void solve(){
    char letter;
    set <char> unique_letters;
    while (true){
        cin >> letter;
        if (letter == '}') break;
        else if ('a' <= letter && letter <= 'z')
            unique_letters.insert(letter);
    }
    cout << unique_letters.size() << '\n'; 
}
int main() {
    fast_io();
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}