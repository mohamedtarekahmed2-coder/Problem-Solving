#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 1;
    cin >> n;
    vector <int> ans(n,0);
    int arr[n+1] = {};
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int j = n - 1; j > 0; j--)
    {
        for (int i = j - 1; i >= 0; i--)
        {
            if (arr[j] >= arr[i]) ans[i]++;
            else {
                ans[i]++;
                break;
            }
        }
    }
    for (int& i : ans) cout << i << " ";
    cout << "\n";
    return 0;
}