#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("nhap so nguyen n:");
    scanf("%d",&n);
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    double delta=b*b-4*a*c;
    double x1,x2;
    if (delta>0){
        x1=-b+sqrt(delta)/2*a;
        x2=-b-sqrt(delta)/2*a;
        printf("Phuong trnh co nghiem phan biet:x1=%f,x2=%f",&x1,&x2);}
        else if(delta==0){
            x1 = x2 =-b/2*a;
            printf("phuong trinh co ngiem kep:x1=x2=%f",&x1,x2);}
            else{
                printf("phuong trinh co nghiem thuc\n");}
                if(a+b>c&&a+c>b&&c+a>b){
                    printf("ba so a b c la ba canh cua tamgiac");
                }else{
                    printf("k phai tam giiac");
        
        }return 0;}
    

