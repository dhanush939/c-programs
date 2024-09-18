#include<stdio.h>
int main(){
    int h,w,r;
    printf("Enter your weekly hours,no weeks and rate:");
    scanf("%d%d%d",&h,&w,&r);
    printf("Your monthly pay is:%d\n",h*w*r);
    return 0;
}
int main(){
    int f,c;
    printf("Enter the farenheit value");
    scanf("%d",&f);
    c = (f-32)*5/9;
    printf("The value in celsius is:%d\n",c);
    return 0;
}
int main(){
    int s,h,m;
    printf("enter the no of seconds:");
    scanf("%d",&s);
    h = s/3600;
    m = s/60;
    printf("Hours is:%d",h);
    printf("Minutes is%d:",m);
    return 0;
}
int main(){
    int s,d,t;
    printf("Enter the distance travelled: ");
    scanf("%d",&d);
    printf("Enter the time taken:");
    scanf("%d",&t);
    s = d/t;
    printf("The speed is%d",s);
    return 0;
}