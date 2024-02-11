#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int item=5;
    int left,right,middle;
    left=0,right=n-1;
    while(left<=right){
        middle=(left+right)/2;
        if(arr[middle]==item){
           printf("Found this index %d\n",middle);
           return 0;
        }else if(arr[middle]<item){
        left=middle+1;
    }else{
        right=middle-1;
    }
}
printf("Not Founded\n");
return 0;
}
