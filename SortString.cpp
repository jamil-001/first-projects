#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    int len=0;
    while(str[len] != 0){
        len++;

    }
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len-1;j++){
            if(str[i]>str[j]){
                char temp= str[i];
                str[i]=str[j];
                str[j]=str[i];
            }
        }
    }
    cin >> str >> endl;

    return 0;
}