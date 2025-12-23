#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ransomNote, magazine;
    cin >> ransomNote >> magazine;

    sort(ransomNote.begin(), ransomNote.end());
    sort(magazine.begin(), magazine.end());

    int l = 0, r = ransomNote.size();
    bool ok = false;

    for(int i = 0; i < magazine.size(); i++) {
        if(ransomNote[l] == magazine[i]) l++;
        if(l == r) {
            ok = true; break;
        }
    }

    cout << ok <<'\n';

}
