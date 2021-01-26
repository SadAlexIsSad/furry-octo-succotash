#include<stdio.h>

int main(){
int x;
printf("Enter in a dollar amount\n");
while(!scanf("%d",&x)){//just to make sure they enter an actual number
    printf("Enter in an ACTUAL dollar amount\n");
    while(getchar() != '\n');
}
printf("$20 bills = %d\n", x/20);
x%=20;
printf("$10 bills = %d\n", x/10);
x%=10;
printf("$5  bills = %d\n", x/5);
x%=5;
printf("$1  bills = %d\n", x);
return 0;
}
