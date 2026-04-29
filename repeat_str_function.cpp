#include <iostream>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

string str_repeat (const string& input_str, size_t repeat_count, char sep, bool showEndSep){
    if (repeat_count == 0) return "";

    string result;
    result.reserve((input_str.size() + 1) * repeat_count);

    for (size_t i = 0; i < repeat_count; ++i) {
        result += input_str;
        
        if (i < repeat_count - 1 || showEndSep) 
            result += sep;
    }
    return result;
}

int main(){
    fast_io();
    

    return 0;
}
