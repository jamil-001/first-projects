#include<stdio.h>
#include<stdbool.h>

int main(){
    int mx=123;
    int a[mx][mx];
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    bool exist=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == x){
                exist=true;
            }
        }
        if(exist)break;

    }
    if(exist)printf("will not take number\n");
    else printf("will take number\n");
    return 0;
}
