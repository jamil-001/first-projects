#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    int cntE = 0, cntG = 0, cntY = 0, cntP = 0,cntT = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]== 'e') cntE++;
        else if(s[i]=='g') cntG++;
        else if(s[i]=='y') cntY++;
        else if(s[i]== 'p') cntP++;
        else if(s[i] == 't')cntT++;
    }
    int maxwords= min({cntE,cntG,cntY,cntP,cntT});
    cout << maxwords << endl;

    return 0;
}