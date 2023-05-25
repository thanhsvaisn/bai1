#iclude<stdio.h>
int main(){
    int n;
    printf("nhap su lieu cho mang:\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<10;i++){
        printf("%d",i);
    }}#include<stdio.h>

int main(){
    float tong=0.0;
    int choice ;
    float coffee =2.50;
    float tea = 2.00;
    float smoothie = 3.00;
    int i=0;
    int j=0;
    int k=0;
    do{
        printf("---menu---\n");
        printf("1.coffee($2.50)\n");
        printf("2.Tea($2.00)\n");
        printf("3.smoothie ($3.00)\n");
        printf("4.quit\n");
        printf("enter your choice :\n");
        scanf("%d",&choice);
        switch(choice){
            case(1):
                printf("coffee :%f\n",coffee);
                printf("coffees :%d\n",i++);
                tong+=2.50;
                break;
            case(2):
                printf("%f\n",tea);
                printf("%d\n",j++);
                tong+=2.00;
                break;
            case(3):
                printf("%f\n",smoothie);
                printf("%d\n\n",k++);
                tong+=3.00;
                break;}}
    while(choice!=4 && choice <4);
    printf("order details:\n");
    printf("coffees : %d\n",i);
    printf("tea : %d\n",j);
    printf("smoothie : %d\n",k);
    printf("total cost :$%f",tong);
}