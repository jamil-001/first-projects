#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int input;
    int sum=0;
    for(int i=0;i<n-1;i++){
        scanf("%d",&input);
        sum+=input;

    }
    printf("%d",(n*(n+1)/2)-sum);
    return 0;
}
