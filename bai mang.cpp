#include<stdio.h>

int main(){
    int n;
    int i;
    int max=0,min=0;
    int total=0;
    printf("nhập số phần tử cho mảng\n");
    scanf("%d\n",&n);
    int eps[n];
    for(i=0;i<n;i++){
        printf("nhap gia tri cho  phần tử %d \n",i+1);
        scanf("%d\n",&eps[i]);
        total +=eps[i];
    }






}