#include<stdio.h>
//1
// int main(){
//     int a,b;
//     printf("Enter two numbers");
//     scanf("%d%d",&a,&b);
//     if (a > b){
//         printf("%d is greater than %d",a,b);
//     } 
//     else if (a == b){
//         printf("%d is equal to %d",a,b);
//     }
//     else{
//         printf("%d is greater than %d",b,a);
//     }
//     return 0;
// }
//2
// int main(){
//     int a,b,c;
//     printf("Enter three numbers");
//     scanf("%d%d%d",&a,&b,&c);
//     if (a>b && a>c){
//         printf("%d is the greatest of all the three",a);
//     }
//     else if (b>c && b>a){
//         printf("%d is the greatest of all the three",b);
//     }
//     else {
//         printf("%d is the greatest of the the three",c);
//     }
//     return 0;
// }
//3
// int main(){
//     int a;
//     printf("Enter a number");
//     scanf("%d",&a);
//     if (a > 0){
//         printf("%d is positive",a);

//     }
//     else if(a < 0){
//         printf("%d is negative",a);

//     }
//     else{
//         printf("%d is equal to zero",a);
//     }
//     return 0;
// }
//4
// int main(){
//     int a;
//     printf("Enter a number");
//     scanf("%d",&a);
//     if ( a %5==0 && a%11==0){
//         printf("%d is divisible by 5 and 11",a);
//     }
//     else {
//         printf("%d is not divisible by 5 and 11",a);
//     }
//     return 0;
// }
//5
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     if (a%2==0){
//         printf("The number is even");
//     }
//     else {
//         printf("The number is odd");
//     }
//     return 0; 
// }
//6
// int main(){
//     int a;
//     printf("Enter the year:");
//     scanf("%d",&a);
//     if (a % 4 == 0){
//         printf("They year is a leap year");
//     }
//     else{
//         printf("The year is not a leap year");
//     }
//     return 0;
// }
//7
#include<ctype.h>
// int main(){
//     char a;
//     printf("Enter an alphabet:");
//     a = getchar();
//     if (isalpha(a)>0){
//         printf("%c is an alphabet",a);
//     }
//     else {
//         printf("%c is not an alphabet",a);
//     }
//     return 0;
// }
//8
// int main(){
//     char a;
//     printf("Enter an alphabet:");
//     a = getchar();
//     if (isalpha(a)>0 && a=='a','e','i','o','u'){
//         printf("%c is an alphabet and a vowel",a);
//     }
//     else if (isalpha(a)>0 && a!='a','e','i','o','u'){
//         printf("%c is an alphabet and a consonent",a);
//     }
//     else {
//     printf("%c is not an alphabet",a);
//     }
//     return 0;
// }
//9
// int main(){
//     char a;
//     printf("Enter a character");
//     a = getchar();
//     if (isalpha(a)>0){
//         printf("Alphabet");
//     }
//     else if(isdigit(a)>0){
//         printf("Digit");
//     } 
//     else {
//         printf("Special Character");
//     }
//     return 0;
// }
//10
// int main(){
//     char a;
//     printf("Enter a alphabet");
//     a = getchar();
//     if (isupper(a)>0){
//         printf("Upper Case");
//     }
//     else if(islower(a)>0){
//         printf("Lower Case");
//     }
//     else{
//         printf("Not an alphabet");
//     }
//     return 0;
// }
//11
// int main(){
//     int w;
//     printf("Enter a digit from 1 to 7");
//     scanf("%d",&w);
//     switch(w){
//         case 1:
//         printf("Monday");
//         break;
//         case 2:
//         printf("Tuesday");
//         break;
//         case 3:
//         printf("Wednesday");
//         break;
//         case 4:
//         printf("Thursday");
//         break;
//         case 5:
//         printf("Friday");
//         break;
//         case 6:
//         printf("Saturday");
//         break;
//         case 7:
//         printf("Sunday");
//         break;
//         default:
//         printf("Wrong Input");
//         break;
//     }
//     return 0;
// }
// int main(){
//     int m;
//     printf("Enter month number:");
//     scanf("%d",&m);
//     switch(m){
//         case 1:
//         printf("31");
//         break;
//         case 2:
//         printf("28");
//         break;
//         case 3:
//         printf("31");
//         break;
//         case 4:
//         printf("30");
//         break;
//         case 5:
//         printf("31");
//         break;
//         case 6:
//         printf("30");
//         break;
//         case 7:
//         printf("31");
//         break;
//         case 8:
//         printf("31");
//         break;
//         case 9:
//         printf("30");
//         break;
//         case 10:
//         printf("31");
//         break;
//         case 11:
//         printf("30");
//         break;
//         case 12:
//         printf("31");
//         break;
//         default:
//         printf("Wrong Input");
//         break;
//     }
//     return 0;
// }
int main(){
    int m,n;
    printf("Enter amount in inr");
    scanf("%d",&m);
    if (m>500){
        printf("%d",n/500);
    }
    else if(m>200){
        printf("%d",n/200);
    }
     else if(m>100){
        printf("%d",n/100);
    }
     else if(m>50){
        printf("%d",n/50);
    }
     else if(m>10){
        printf("%d",n/10);
    }
    else{
        printf("%d",n);
    }
    return 0;
}
