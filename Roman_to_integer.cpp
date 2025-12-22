#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;

    bool M = false, D = false, C = false, L = false, X = false, V = false, I = false;
    int number = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i]=='M') {
            M = true;
            if(C == true) {
                number += 800;
                C = false;
            }else number +=1000;
        }
        else if(s[i]=='D') {
            D = true;
            if(C == true) {
                number += 300;
                C = false;
            } else number += 500;
        }
        else if(s[i]=='C') {
            C = true;
            if(X == true) {
                number += 80;
                X = false;
            }
            else number += 100;
        }
        else if(s[i]=='L') {
            L = true;
            if(X == true) {
                number += 30;
                X = false;
            }else number += 50;
        }
        else if(s[i]=='X') {
            X = true;
            if(I == true) {
                number += 8;
                I = false;
            }else number += 10;
        }
        else if(s[i]=='V') {
            V = true;
            if(I == true) {
                number += 3;
                I = false;
            }else number += 5;
        }
        else if(s[i]=='I') {
            I = true;
             number += 1;
        }
    }

    cout << number <<'\n';
}
