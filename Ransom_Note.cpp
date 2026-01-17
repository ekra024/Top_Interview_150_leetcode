#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ransomNote, magazine;
    cin >> ransomNote >> magazine;

    vector<int>first(26,0), second(26,0);

    for(int i = 0; i < ransomNote.size(); i++) {
        first[ransomNote[i]-'a']++;
    }
    for(int i = 0; i < magazine.size(); i++) {
        second[magazine[i]-'a']++;
    }

    for(int i = 0; i < 26; i++) {
        cout << first[i]<<' '<< second[i]<<'\n';
        if(first[i] > second[i]) {
            cout <<"False\n";
            return 0;
        }
    }

    cout << "True" <<'\n';

}
