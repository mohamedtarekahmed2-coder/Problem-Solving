#include <iostream>
#include <vector>
using namespace std;

int merge_sort(vector <int> &v, int lower, long long upper, vector <int>& new_v){
    if (upper - lower == 0) 
        return 0;
    else {
        vector <int> new_v;
        long long median = lower + (upper - lower) / 2;
        int result = merge_sort( v, lower, median) + 
                     merge_sort( v, median + 1, upper);
        int start = lower, med_start = median + 1, end = upper + 1;
        while(true){
            if (start == median + 1 || med_start == end) {
                if (start == median + 1 && med_start == end) 
                    break;
                else if (start == median + 1) {
                    while(true) {
                        if (med_start == end) 
                            break;
                        new_v.push_back(v.at(med_start));
                        med_start++;
                    }
                }
                else {
                    while(true) {
                        if (start == median + 1) 
                            break;
                        new_v.push_back(v.at(start));
                        start++;
                    }
                }
            }
            else if (v.at(start) <= v.at(med_start)){
                new_v.push_back(v.at(start));
                start++;
            }
            else {
                new_v.push_back(v.at(med_start));
                med_start++;
                result++;
            }
        }
        int j = 0;
        for (int i = lower; i <= upper; i++){
            v.at(i) = new_v.at(j);
            j++;
        }
        return result;
    }
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int size_v;
        cin >> size_v;
        vector <int> v (size_v, 0);
        vector <int> new_v;
        for (int i = 0; i < size_v; i++)
            cin >> v.at(i);
        int answer = merge_sort(v, 0, size_v - 1, new_v);
        cout << answer << '\n';
    }
    return 0; 
}
