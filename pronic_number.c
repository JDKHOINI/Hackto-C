#include<stdio.h>
int ispronic (int n)
{
    int i;
    for(i=1;i<=n;i++){
        if((i*(i+1)==n))
        return 1;
    }
    return 0;
}
void main(){
    int n,r;
    printf("enter a number :  ");
    scanf("%d",&n);
    r=ispronic(n);
    if(r==1){
        printf("pronic number ");
    }
    else{
        printf("not pronic");
    }

}