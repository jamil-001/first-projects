#include<stdio.h>
const int mx=1e9+123;
int main(){
    
    int arr[mx];
    int n,q;
    scanf("%d %d",&n,&q);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(q--){
        int item;
         scanf("%d",&item);
         int left,right,middle;
         left=0,right=n-1;
         while(left<=right){
         middle=(left+right)/2;
         if(arr[middle]==item){
            printf("found\n");
            return 0;
         }else if(arr[middle]<right){
            left=middle+1;

         }else{
            right=middle-1;
         }
         printf("not found\n");
    }
    }
    

    return 0;
}