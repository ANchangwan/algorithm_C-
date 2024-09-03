#include <bits/stdc++.h>
using namespace std;

string a;
string res;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    getline(cin, a); // Use getline to read the entire line including spaces
    for (char i : a) {
        if (isalpha(i)) { // Check if the character is an alphabet
            if (islower(i)) {
                res += (i - 'a' + 13) % 26 + 'a'; // Wrap around for lowercase
            } else {
                res += (i - 'A' + 13) % 26 + 'A'; // Wrap around for uppercase
            }
        } else {
            res += i; // Non-alphabetic characters remain unchanged
        }
    }

    cout << res << "\n"; // Output the result

    return 0;
} 