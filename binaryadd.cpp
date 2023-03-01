#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
    string result = "";
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        carry = sum >> 1;
        result = to_string(sum % 2) + result;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    string sum = addBinary(a, b);
    cout << sum;
    return 0;
}
