#include<stdio.h>

int Arr[110]={0,5,3,9,1,7,2,3,4};
int A[110];

void printArr(){
    for(int i=1;i<=8;i++)
        printf("%d ",Arr[i]);
    printf("\n");
}

void msort(int st,int ed){
    if(st==ed) return;
    int mi=(st+ed)>>1;
    msort(st,mi);
    msort(mi+1,ed);
    int i=st,j=mi+1,k=st;
    for(;i<=mi&&j<=ed;k++){
        (Arr[i]<Arr[j]) ? A[k]=Arr[i++] : A[k]=Arr[j++] ;
    }
    for(;i<=mi;k++) A[k]=Arr[i++];
    for(;j<=ed;k++) A[k]=Arr[j++];
    for(k=st;k<=ed;k++) Arr[k]=A[k];
}

main(){
    msort(1,8);
    printArr();
}