#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int i,j,size=5;
    int swap,cnt=0;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            cnt++;
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swap=1;
            }
        }
        if(swap==0){
            break;
        }
    }
    printf("After Sorting\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nconting number %d\n",cnt);
    return 0;
}