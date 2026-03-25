#include<stdio.h>
int main(){
    int a[10],i,j,key;
    printf("Enter array");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++){
        key=a[i];
    for(j=i-1;j>=0;j--)
    {
        if(a[j]>key)
        a[j+1]=a[j];
        else
            break;
    }
    a[j+1]=key;
    }
    printf("After shorting");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
}
return 0;
}