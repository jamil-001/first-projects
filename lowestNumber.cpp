#include <iostream>
using namespace std;
const int mx=1e2+123;

int main(){
    int arr[mx];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int lowest=INT_MAX;
    int position;
    for(int i=0;i<n;i++){
        if(arr[i]<lowest){
            lowest=arr[i];
            position=i+1;
        }
    }
 cout << lowest << " " << position << endl;
    return 0;
}
