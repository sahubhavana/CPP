#include<stdio.h>
#include<conio.h>


// 1 to print helllo world
// int main(){
// printf("hello world");
// }


// 2to print a number enterd by the user

// int main(){
//     int a;
//     printf("enter a value of variable");
//     scanf("%d",&a);
//     printf("the value of variable is=%d",a);
// }


/// 3 to print a number sum 
// int main(){
//     int a;
//     int b;
//     int sum=0;
//     printf("enter a two number of which you have to print a sum");
//     scanf("%d%d",&a,&b);
//     sum=a+b;
//     printf("sum of two number=%d",sum);
// }

///4 quotient and reminder 

// int main(){
//     int q ,r;
//     int a ,b;
//     printf("enter a two of which you have to find a qoutient or reminder");
//     scanf("%d%d",&a,&b);
//     q=a/b;
//     printf("the qoitotent of numbers is=%d\n",q);
//     r=a%b;
//     printf("the reminder of number is=%d",r);
// }


///5 to find size of variables
// int main(){
//     int a=10;
//     float b=7.8;
//     char c='a';
//     double d=7.90;
 
//     printf("size of integer=%d",sizeof(a));
//     printf("size of float=%f",sizeof(b));
//     printf("size of character=%c",sizeof(c));
//     printf("size of double= %f",sizeof(d));






// }


///6 swappping of two number
// int main(){
//     int a=10;
//     int b=20;
//     int c=a;
    
//     a=b;
//     b=c;
//     printf("value of a=%d",a);
//     printf("value of b=%d",b);
// }


/// 7 check number is even or odd

// int main(){
//     int a;
//     printf("eneter avlue of a ");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("number is even");
    
//     }
//     else{
//         printf("number is odd");
//     }
// }


/// 8 check character vowel or consonat
// int main(){
//     char ch;
//     printf("eneter a character which you have to check");
//     scanf("%c",&ch);
//     if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){
//         printf("character is vowel");
//     }
//     else if(ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U'){
//         printf("chacter is vowel");
//     }
//     else{
//         printf("character is consonant");
//     }

    
// }


//9.to find largest among three number 
// int main(){
//     int a,b,c;
//     printf("enter a three number");
//     scanf("%d%d%d",&a,&b,&c);
//     int max=0;
//     if(a>b ){
//         if(a>c){
//             printf(" a is greater");
//         }
//         else{
//             printf(" c is greater");
//         }
//     }
//     else{
//         if(b>a){
//             if(b>c){
//                 printf(" b is greater ");
//             }

//             else{
//                 printf(" c is greater ");
//                     }
//                 }
//             }
        
    
         


// }


// 10 to find square root of number 

// int main(){
//     int a ,b,c;
//     int x1,x2;
//     int d;
//     printf("enter a value of of a b  and c");
//     scanf("%d%d%d",&a,&b,&c);
//     d=(b**2-4*a*c);
//     if(d>0){
//         x1=((b**2+sqrt(d))/2*a);
//         x2=((b**2-sqrt(d)/)2*a);
//         printf(" Root are real and diffrent");
//         printf(" X1 rooot %d",x1);
//         printf(" X2 root %d",x2);
//     }
//     else{
//     if(d==0){
//         x1=(b/2*a);
//         printf(" Roots are real and equal");
//         printf("rooot x1=%d",x1);
//     }
// }
// }



/// 11 calculae sum of n natural number
// int main(){
//     int n;
//     int sum=0;
//     printf(" enter a value of n ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum= sum+i;
//     }
//     printf("sum of n  natural number is =%d",sum);
// }

//12.program to check leap year
// int main(){
//     int y;
//     printf(" enter a year which you have to check");
//     scanf("%d",&y);


//     if(y% 400==0 ){
//         printf("year is leap year");
//     }
//     else if(y%4==0){
//         printf("year is leap year");
//         }
//     else{
//         printf("year is not a leap year");
//     }
// }

//13.program to find factorial 
// int main(){
//     int n;
//     int fact=1;
//     printf("enter a value of n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("factorial of number %d",fact);
// }

// 14 to print multiplucation of number 
// int main(){
//     int n;
//     printf("enter a value of n");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d\n",n*i);
//     }
// }


/// 15.program to print fibbonaci series

// int main(){
//     int n;
//     int t1=0,t2=1,n2=0;
//     printf("enter a value of n");
//     scanf("%d",&n);
//     printf("0+");
//     printf("1+");
//     for(int i=1;i<=n;i++){
//     n2=t1+t2;
//     t1=t2;
//     t2=n2;
//     printf("%d+",n2);

     
//     }
//}


//16.program to print a gdv of a value 
// int main(){
//     int num,num1;
//     int gdc;
//     int i;
//     printf("enter a two number=");
//     scanf("%d%d",&num, &num1);
//     for(i=1;i<=num*num1;i++){
//         if(num%i==0 && num1%i==0){
//             gdc=i;
//         }
//     }
//     printf("gdc of a number %d",gdc);
// }



/// 17.program to find lcm of number 
// int main(){
//     int num,num1;
//     int lcm=0;
//     printf("enter a two number ");
//     scanf("%d%d",&num,&num1);

//     for(int i=1;i<=num*num1;i++){
//         if(i%num==0 && i%num1==0){
//             lcm=i;
//             break;
//         }
//     }
//     printf("lcm of two num %d",lcm);
// }


///18.program to to multiply float value
// int main(){
//     float a;
//     float b;
//     float mul;
//     printf("enetr a two value of num");
//     scanf("%f%f",&a,&b);
//     mul=a*b;
//     printf("multiplication of two num=%f",mul);

// }


/// 20.program to print ascii code 

// int main(){
//     char ch;
//     int ascii;
//     printf("enter a character");
//     scanf("%c",&ch);
//     printf("Ascii value of %c=%d",ch,ch);

// }

///21 program to print a character from A TO Z

// int main(){
//     char ch;
//     for(int ch='A';ch<='Z';ch++){
//         printf("%c->->",ch);
//     }
// }


// 22 count of number of digit

// int main(){
//     int n,num;
//     int count=0;
//     printf("enter a value of n");
//     scanf("%d",&n);
//     while(n>0){
//         num=n%10;
//         count=count+1;
//         n=n/10;
//     }
//     printf("number of count=%d",count);
// }

////23 .to reverse a digit

// int main(){
//     int n,num=0,rev=0;
//     printf("enter a value of n");
//     scanf("%d",&n);
//     while(n>0){
//         rev=n%10;
//         num=num*10+rev;
//         n=n/10;
        
//     }
//     printf("%d",num);
// }



//// 24.to find a power of a number
// int main(){
//     int base,pow,sum=1;
//     printf("enter a base,power");
//     scanf("%d%d",&base,&pow);
//     while(pow>0){
//         sum=sum*base;
//         pow=pow-1;


// }
// for(int i=0;i<pow;i++){
//     sum=sum*base;
// }
// printf("the sum number=%d",sum);
//}


///25.to check that given number is palindrome or not

// int main(){
//     int num,rev=0,n,orignal;
//     printf("enter a number");
//     scanf("%d",&num);
//     orignal=num;
//     while(num>0){
//         n=num%10;
//         rev=rev*10+n;
//         num=num/10;
//     }
//     if(orignal==rev){
//         printf("palindrome");

//     }
//     else{
//         printf("not an palindrome");
//     }
// }


///26.program to check whether number is prime or not


// int main(){
//     int n,n1;
//     printf("enter a upto which print prime no");
//     scanf("%d",&n);
//     printf("enter a starting point");
//     scanf("%d",&n1);
//     for(int i=n1;i<=n;i++){
//         if(i==2){
//             printf("prime number=%d\n",i);
//         }
//         else{
//             if(i%1==0 && i%2!=0){
//                 printf("prime number =%d\n",i);
//             }
            
//         }
//     }
// }

/// 27.to check whether a number is prime
// int main(){
//     int n;
//     printf("enter a value to be check prime or not ");
//     scanf("%d",&n);
//     if(n==2){
//         printf("number is prime ");

//     }
//     else{
//         if(n%1==0 && n%2!=0){
//             printf("number is prime ");
//         }
//         else{
//             printf("number is not prime number ");
//         }
//     }
// }

///28 .program to check given number is amstrong or not
// int main(){
//     int num,orignal=0,rev=0,n=0,am=1,count=0,sum=0;
//     printf("enter  a number to be check amstrong or not");
//     scanf("%d",&num);
//     orignal=num;
//     while(num>0){
//         n=num%10;
//         count=count+1;
//         num=num/10;

//     }
//     printf("count of number %d",count);
//     while(num>0){
//         n=num%10;
//         for(int i=0;i<count;i++){
//             am=am*n;

//         }
//         sum=sum+am;
//         am=1;
//         num=num/10;
//     }
//     if(sum==orignal){
//         printf("Number is amstrong ");
//     }
//     else{
//         printf("Number is not amstrong ");
//     }

// }

// 29.program to print factor of a number
// int main(){
//     int num;
//     printf("enter a number of which you have to find  a factor");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             printf("factor of no=%d\n",i);
        
//     }
// }
// }



///30 program to create a calculator using switch case
// int main(){
//     int num1,num2,sum=0;
//     int ch;
//     printf("1-Addtion\n");
//     printf("2-Subtraction\n");
//     printf("3-Multiplication\n");
//     printf("4-Division\n");
//     printf("enter your choice ");
//     scanf("%d",&ch);
//     printf("enter a two from for your choice");
//     scanf("%d%d",&num1,&num2);
//     switch(ch){
//         case 1:
//          {
//         sum=num1+num2;
//         printf("Addition of two number is=%d",sum);
        
//          }
//          break;
//         case 2:
//         {
//            if(num1>num2){
//             sum=num1-num2;
//             printf("Subtraction of number=%d",sum);
          
//            }
//            else{
//             sum=num2-num1;
//             printf("Subtraction of two number=%d",sum);
//            }
//         }
//         break;
//         case 3:
//         {
//             sum=num1*num2;
//             printf("Multiplication of two number =%d",sum);
//         }
//         break;
//         case 4:
//         {
//             if(num1>num2){
//                 sum=num1/num2;
//                 printf("Division of two number is =%d",sum);
//             }
//             else{
//                 sum=num2/num1;
//                 printf("Division of two number=%d",sum);
//             }
//         }
//         break;
//         default:printf("Invalid choice");
//         break;

//     }

// }


///31./// program to check the given number is sum of two prime number
// int main(){
//     int sum=0,num,n1,n2;
//     printf("enter a sum of number which you want to check");
//     scanf("&d",&num);
//     printf("enter a two number n1 and n2");
//     scanf("%d%d",&n1,&n2);
//     if(n1==2 || n2==2){
//         sum=(sum+(n1+n2));
//     }
//     else{
//         if(n1%1==0&& n2%1==0 && n1%2!=0&& n2%2!=0){
//             sum=(sum+(n1+n2));
//         }
//     }
//     if(sum==num){
//         printf("given number is sum of two number");
//     }
//     else{
//         printf("Not a sum of two number");
//     }
// }



//// 32.program to print a sum of n num er using recursion

// int addnum(int n){
//     if(n==0){
//         return n;

//     }
//     else{
//        return (n+addnum(n-1));
        
//     }

// }
// int main(){
//     int num;
//     printf("enter a value of num");
//     scanf("%d",&num);
//     printf("sum of n number=%d",addnum(num));
// }

////33.program to find factorial of number using recursion


// int fact(int num){
//     if(num==1){
//         return num;
//     }
//     else{
//        return(num*fact(num-1));
//     }
// }
// int main(){
//     int num;
//     printf("enter a value of num");
//     scanf("%d",&num);
//     printf("factorial of num=%d",fact(num));
// }

///34. program to find gdc of a number

// int gdc(int n1,int n2){
//     if(n2==0){
//         return n1;
//     }
//     else{
//         return (gdc(n2,n1%n2) ) ;  
//     }
// }
// int main(){
//     int n1,n2;
//     printf("enter a value of two num");
//     scanf("%d%d",&n1,&n2);
//     printf("gdc of num=%d",gdc(n1,n2));
// }


///35.to calculate average using array
// int main(){
//     int a[10];
//     int sum=0;
//     float avg=0;
//     for(int i=0;i<10;i++){
//         printf("enter a value of array");
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<10;i++){
//         sum=sum+a[i];
//     }
//     avg=sum/10;
//     printf("avarage of element of array=%f",avg);
// }



//36.program to find maximum element of array
// int main(){
//     int a[5];
//     int max=0;
//     for(int i=0;i<5;i++){
//         printf("enter a avlue of array");
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<5;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     printf("Maximum element of array=%d",max);
// }


/// 37.to find a standard deviation of all element of array
// #include<math.h>
// int main(){
//     int a[10];
//     int sum=0;
//     float mean=0;
//     float value=0;
//     float sd=0;
//     for(int i=0;i<10;i++){
//         printf("enter a element");
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<10;i++){
//         sum=sum+a[i];
//     }
//     mean=sum/10;
//     printf("mean=%d\n",mean);
//     for(int i=0;i<10;i++){
//       value=value+pow(a[i]-mean,2);
   

//     }
//      sd=sqrt(value/10);

//     printf("standart deviation of element=%f",sd);
// }



///37.program to do addtion of two multidimenision array

// int main(){
//     int a[2][2],b[2][2],c[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("enter  a element of 1 array");
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("enter  a element of 2 array");
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("sum of element of array=%d",c[i][j]);
            
//         }
//     }
// }

///38.program to find a length of string
// int main(){
//     char s[]="programming is fun";
//     for(int i=0;s[i]!='\0';++i){
//         printf("the length of string=%d",i);
 
//     }

// }

////39.program to do multipilication of two dimmension array
//int main(){
//     int a[2][2],b[2][2],c[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("enter  a element of 1 array");
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("enter  a element of 2 array");
//             scanf("%d",&b[i][j]);
//         }
//     }

