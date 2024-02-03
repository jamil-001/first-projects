#include<stdio.h>
int freq[400001];
    int a[400001];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n*4-1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n*4-1;i++){
        freq[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(freq[i] != 4){
            printf("%d",i);
        }
    }

    return 0;
}
