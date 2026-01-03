#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num; cin >> num;
    string ans = "";

    while(num > 0) {
        string s = to_string(num);

        if(s.size() == 4) {
            if(s[0] == '1') ans += "M";
            else if(s[0] == '2') ans +="MM";
            else ans += "MMM";
            num = num % 1000;
        }
        else if(s.size() == 3) {
            if(s[0] == '1') ans += "C";
            else if(s[0] == '2') ans += "CC";
            else if(s[0] == '3') ans += "CCC";
            else if(s[0] == '4') ans += "CD";
            else if(s[0] == '5') ans += "D";
            else if(s[0] == '6') ans += "DC";
            else if(s[0] == '7') ans += "DCC";
            else if(s[0] == '8') ans += "DCCC";
            else if(s[0] == '9') ans += "CM";
            num = num % 100;
        }
        else if(s.size() == 2) {
            if(s[0] == '1') ans += "X";
            else if(s[0] == '2') ans += "XX";
            else if(s[0] == '3') ans += "XXX";
            else if(s[0] == '4') ans += "XL";
            else if(s[0] == '5') ans +=  "L";
            else if(s[0] == '6') ans += "LX";
            else if(s[0] == '7') ans += "LXX";
            else if(s[0] == '8') ans += "LXXX";
            else if(s[0] == '9') ans += "XC";
            num = num % 10;
        }
        else{
            if(s[0] == '1') ans += "I";
            else if(s[0] == '2') ans += "II";
            else if(s[0] == '3') ans += "III";
            else if(s[0] == '4') ans += "IV";
            else if(s[0] == '5') ans += "V";
            else if(s[0] == '6') ans += "VI";
            else if(s[0] == '7') ans += "VII";
            else if(s[0] == '8') ans += "VIII";
            else if(s[0] == '9') ans += "IX";
            num = num % 1;
        }

    }

    cout << ans;
}
