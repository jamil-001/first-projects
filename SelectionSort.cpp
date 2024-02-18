//Selection Sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={10,2,7,3,11,5,4};
    int i,j,min_index;
    for(i=0;i<7;i++){
        min_index=i;

        for(int j=i+1;j<7;j++){
           if(a[j] < a[min_index]){
               min_index=j;
           }
        }
        int temp = a[i];
        a[i]=a[min_index];
        a[min_index]=temp;


    }
    cout<< "Sorted array"<<endl;
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}