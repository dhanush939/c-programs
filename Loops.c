#include<stdio.h>
// int main(){
//     int i;
//     for(i =1;i<=10;i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }
// int main(){
//     int i,a=0,b=1,n,r;
//     printf("Enter the term:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         r = a+b;
//         a = b;
//         b = r;
//     }
//     printf("%d",r);
// }
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//         if(i==8){
//             break;
//         }
//         printf("%d\n",i);
//     }
// }
// int main(){
//     int i;
//     for(i=1;i<=10;i++){
//          if(i == 8){
//             continue;
//          }
//         printf("%d\n",i);
//   }
//     return 0; 
//  }
// int main(){
//     int i,n,f;
//     printf("Enter a number to print it's factorial");
//     scanf("%d",&n);
//     f = n;
//     for(i=n-1;i>=1;i--){
//         f *=i;
//     }
//     printf("%d is the factorial of %d",f,n);
//     return 0;
// }
//Functions
// void printNamaste(){
//     printf("Namaste!\n");
// }
// void printBonjour(){
//     printf("Bonjour!\n");
// }
// int main(){
//     int n;
//     printf("Enter 1 if you are Indian and 2 if you are French:");
//     scanf("%d\n",&n);
//     if(n ==1){
//         printNamaste();
//     }
//     else if(n==2){
//         printBonjour();
//     }
//     else{
//         printf("Invalid Input please try again\n");
//     }
//     return 0;
// }
// int sum(int a, int b){
//     return a+b;
// }
// int main(){
//     int a,b;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     printf("Enter another number:\n");
//     scanf("%d",&b);
//     int s = sum(a,b);
//     printf("The sum of the two numbers is %d",s);
//     return 0;
// }
// void caluclateGST(float a){
//     a += 0.18*a;
//     printf("The price after GST is %f",a);
// }
// int main(){
//     float a;
//     printf("Enter your price to caluclate grand total:");
//     scanf("%f",&a);
//     caluclateGST(a);
//     return 0;

// }
#include<math.h>
// int main(){
//     float a;
//     printf("Enter a number to caluclate it's square:");
//     scanf("%f",&a);
//     float p=pow(a,2);
//     printf("The square of %f is %f",a,p);
//     return 0;
// }
// void arSquare(float a){
//     printf("The area of square is %f",pow(a,2));
// }
// void arCircle(float r){
//     printf("The area of Circle is %f",3.14*pow(r,2));
// }
// void arRectangle(float l,float b){
//     printf("The are of Rectangle is %f",l*b);
// } 
// int main(){
//     float a,r,l,b;
//     printf("Enter side of square,radius of circle,length and breadth of rectangle respectfully:");
//     scanf("%f\n%f\n%f\n%f",&a,&r,&l,&b);
//     arSquare(a);
//     arCircle(r);
//     arRectangle(l,b);
// }
// void printH(int count){
//     if (count == 0){
//         return;
//     }
//     printf("Hi\n");
//     printH(count-1);
// }
// int main(){
//     printH(10);
//     return 0;
// }
// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1);
//     int sumN = sumNm1 + n;
//     return sumN;
// }
// int main(){
//     int n;
//     printf("Enter a number to caluclate the sum of natural numbers:");
//     scanf("%d",&n);
//     printf("The sum of the series is %d\n",sum(n));
//     return 0;
// }
// int fact(int n){
//     if (n==1){
//         return 1;
//     }
//     int factn = fact(n-1)*n;
//     return factn;
// }
// int main(){
//     int n;
//     printf("Enter a non negative integer:");
//     scanf("%d",&n);
//     printf("The factorial of %d is %d",n,fact(n));
//     return 0;
// }
// temperature conversion
// float convertTemp(float celsius){
//     float far = (9.0/5.0)*celsius+32;
//     return far;
// }
// int main(){
//     float celsius;
//     printf("Enter the celsius");
//     scanf("%f",&celsius);
//     printf("The farenheit value is %f",convertTemp(celsius));
//     return 0;
// }
//Factorial of n
// int fibonacci(int n){
//     if(n==0||n==1){
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//     }
//     int fib = fibonacci(n-1)+fibonacci(n-2);
//     return fib;
// }
// int main(){
//     int n;
//     printf("Enter the fibonacci term :");
//     scanf("%d",&n);
//     printf("The %dth in the fibonacci series is %d",n,fibonacci(n));
//     return 0;
// }
// float powf(float n,float a){
//     if(a==0){
//         return 1;
//     }
//     return n*powf(n,a-1);
// }
// int main(){
//     float n,a;
//     printf("Enter the base:");
//     scanf("%f",&n);
//     printf("Enter the power:\n");
//     scanf("%f",&a);
//     printf("The %fth power of %f is %f\n",a,n,powf(n,a));
//     return 0;
// }
// float sqt(float a){
//     return pow(a,0.5);
// }
// int main(){
//     float a = 9080.0;
//     printf("Squareroot is %f",sqt(a));
//     return 0;
// }
// int main(){
//     int i,n,sum=0;
//     printf("Enter the no of terms");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         sum+=i;
//     }
//     printf("The sum is %d",sum);
//     return 0;
// }
// int sum(int a){
//     return a + sum(a-1);
// }
// int main(){
//     int a =9;
//     printf("%d",sum(a));
//     return 0;
//}
// int main(){
//     int matric[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     printf("%d",matric[1][1]);
//     return 0;
// } 
// int factorial(int n){
//     if (n==0){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     } 
// }
// int main(){
//     int n;
//     printf("Enter the number you want to print the factorial of:");
//     scanf("%d",&n);
//     printf("The factorial of %d is %d",n,factorial(n));
//     return 0;
// }
 
// int main(){
//     int x =10,y=20;
//     printf("The value of x is %d and y is %d",x,y);
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     printf("The value of x is %d and y is %d\n",x,y);
//     return 0;
// }
// int main(){
//     int v = 10;
//     int *ptr = &v;
//     printf("The memory address of %d is %p",v,ptr);
//     return 0;
// }
// #include<math.h>

// float ac(float r)
// {
//     return 3.14 * r * r;
// }
// int as(int s)
// {
//     return s * s;
// }
// int main()
// {
//     int s;
//     float r;
//     printf("Enter the side of a square");
//     scanf("%d", &s);
//     printf("Enter the radius of circle\n");
//     scanf("%f", &r);
//     printf("The area of square is %d\n", as(s));
//     printf("The area of Circle is %f\n", ac(r));
//     return 0;
// }
// int isprime(int n)
// {
//     if (n <= 1)
//     {
//         return 0; // not prime
//     }
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int n;
//     printf("Enter a number to check wether it is prime or not:");
//     scanf("%d", &n);
//     if (isprime(n))
//     {
//         printf("%d is a prime number", n);
//     }
//     else
//     {
//         printf("%d is not a prime numebr", n);
//     }
//     return 0;
// }
// int main(){
//     int i=0,a=0,b=1,result,sum,n;
//     printf("Enter no of terms:");
//     scanf("%d",&n);
//     sum =0;
//     while(i<=n){
//         i++;
//         result = a+b;
//         a=b;
//         b=result;
//         sum = sum + result;
//     }
//     printf("The sum of fibonacci series is %d",sum);
//     return 0;
// }
int main(){
    float a = 8.2;
    if (a==8.2f){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}