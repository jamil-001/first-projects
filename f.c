#include<stdio.h>
int main(){
    int t;
    int j=1;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        int i=a;
        int sum=0;
        
        for(i;i<=b;i++){
            if(i%2 != 0){
              sum+=i;
            }
        }
        printf("Case %d: %d\n",j++,sum);
        
    }

    return 0;
}