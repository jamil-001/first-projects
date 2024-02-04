#include<stdio.h>
int main(){
    
    int a[3][4],cnt=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            a[i][j]=cnt;
            cnt++;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("(%d, %d) %d",i,j,a[i][j]);
        }
        printf("\n");
    }
    return 0;
}