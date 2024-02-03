 #include<stdio.h>
 int main(){
    int n;
    int a[1000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1,j=n;i<j;i++,j--){
        int tem=a[i];
            a[i]=a[j];
            a[j]=tem;
    }
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
 }