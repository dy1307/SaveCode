#include<stdio.h>
int main(){
    int n;
 printf("nhap so nguyen n:");
 scanf("%d",&n);
 int sum=0;
 for(int i=1;i<=n;++i){
    sum+=i;
 } printf("tong cac so tu 1 den %d la:%d\n",n ,sum);
 int oddsum=0;
 for(int i=1;i<n;i+=2){
    oddsum+=i;
 } printf("tong cac so le tu 1 den %d la:%d", n, oddsum);
 return 0;

}