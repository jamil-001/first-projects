#include<bits/stdc++.h>
using namespace std;
const int mx=1e10+123;
int arr[mx];

int main(){
    ///vector<int> v = {2,3,5,5,7,7,1};
    ///vector<int>:: iterator it = max_element (v.begin(),v.begin()+2);
    ///cout << *it << endl;
    ///cout << endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> arr[i] >> endl;
        }
        int mex=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>=mex){
                mex=arr[i];
                
            }
        }
        cout << mex << endl;
    }
    
        return 0;
}