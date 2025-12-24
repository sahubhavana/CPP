# include <iostream>
#include<thread>
using namespace std;
// class Animal{
//     public:
//      void display(){
//         printf("In the zoo there are many animal can present");
//      }

// };
// int main(){
//     Animal obj;
//     obj.display();
// }

// class car{
//     public:
//     int carno;
//     void start(){
//         printf("the car is strating\n");
//         printf("%d\n",carno);
//     }
//     void stop(){
//         printf("the car is stop");
//     }
  
// };
// int main(){
//     car c1;
//     c1.carno=1010;
//     c1.start();
//     c1.stop();

// }


////////// Arrray object ///////
// class student{
//     public:
//     int rollno;
//     char c;
//     char name;
//     int  mark;
//     void display(){
//         printf("the roll no of student=%d\n",rollno);
//         printf("the class of student=%c\n",c);
//         printf("the name of student=%c\n",name);
//         printf("the mark of student=%d\n",mark);
//     }

// };
// int main(){
//     student s1[5];
//     printf("student record\n");
//     for(int i=0;i<5;i++){
//         printf("enter rollno of stuent");
//         scanf("%d",s1[i].rollno);
//         printf("enter class of student");
//         scanf("%c",s1[i].c);
//         printf("enter name of student");
//         scanf("%c",s1[i].name);
//         printf("enter a mark of student");
//         scanf("%d",s1[i].mark);


//     }
//     for(int i=0;i<5;i++){
//         s1[i].display();
//     }
// }


// class student{
//     public:
//     int rollno;
//     char c;
//     char name;
//     int  mark;
//     void display(){
//         printf("the roll no of student=%d\n",rollno);
//         printf("the class of student=%c\n",c);
//         printf("the name of student=%c\n",name);
//         printf("the mark of student=%d\n",mark);
//     }

// };
// int main(){
//     student s1[3];
//     printf("student record\n");
//     s1[0].rollno=101;
//     s1[0].c='1';
//     s1[0].name='A';
//     s1[0].mark=98;
//     s1[1].rollno=102;
//     s1[1].c='2';
//     s1[1].name='B';
//     s1[1].mark=49;
//     s1[2].rollno=103;
//     s1[2].c='3';
//     s1[2].name='C';
//     s1[2].mark=78;
//     for(int i=0;i<3;i++){
//         s1[i].display();
//     }
// }


/////private access specifier//////

// class password{
//    private:
//    int secrate;
//    public:
//    int sec(int value){
//     secrate=value;
//    }
//    void show(){
//     printf("%d",secrate); 
//    }

// };
// int main(){
//     password p1;
//     p1.sec(10);
//     p1.show();

// }


///// protected access specifier/////
// class parent{
//     protected:
//     int ppassword;
//     public:
//     int password(int value){
//         ppassword=value;
//     }
//     void show(){
//         printf("%d",ppassword);
//     }
// };
// int main(){
//     parent obj1;
//     obj1.password(90);
//     obj1.show();


// }

/////costructor  function//////
// class parent{
//     public:
//     parent(){
//         printf(" I am father of ram");
//     }
    

// };
// int main(){
//     parent obj;
  
// }
///Destructor function//////
// class parent{
//     public:
    
//     ~parent(){
//         printf(" i am father of ram");
//     }
// };
// int main(){
//     parent obj;
// }
//// class and object//////
// class parent{
//     public:
//     int fage;
//     int salary;
//     void show(){
//         printf("my name is trilok and i am father of bhavana\n");
//         printf("Age of father =%d\n",fage);
//         printf("Salary of father=%d\n",salary);
//     }
// };
// int main(){
//     parent obj;
   
//     obj.fage=60;
//     obj.salary=100000;
//     obj.show();
// }



////// paramaterised constructor//////


// class calculator{
//     public:
//     int a,b,c;
//      calculator(int i,int j,int k){
//         printf("the sum of two number=%d",(i+j+k));
//     }

// };
// int main(){
//     calculator obj1(2,3,5);
    

// }




//////// single inheritance///////
// class Animal{
//     public:
//     void disp(){
//         printf(" it is palce where all animal are present\n");
//     }
// };
// class dog:public Animal{
//     public:
//     void disp1(){
//         printf("Dog having its property that it can bark\n");
//     }
// };
// int main(){
//     dog obj;
//     obj.disp();
//     obj.disp1();
// }


///// multiple inheritance////
// class father{
//     public:
//     void disp(){
//         printf("I am FATHER and i am head and root of family\n");
//     }
// };
// class mother{
//     public:
//     void disp1(){
//         printf("I am MOTHER i am teacher\n");
//     }
// };
// class child:public father ,public::mother{
//     public:
//     void disp2(){
//         printf("I am child and i have mother and father\n ");
//     }
// };
// int main(){
//     child obj;
//     obj.disp();
//     obj.disp1();
//     obj.disp2();

// }
////// mutlilevel inheritance//////
// class Grandfather{
//     public:
//     void disp(){
//         printf(" i am grandfather and i am root of my family\n");
//     }

// };
// class father:public Grandfather{
//     public:
//     void disp1(){
//         printf(" i am father and my father is grandfather\n");
//     }


// };
// class child:public father{
//     public:
//     void disp2(){
//         printf(" i am child i have father and grandfather\n");
//     }

// };
// int main(){
//     child obj;
//     obj.disp();
//     obj.disp1();
//     obj.disp2();
// }



////////Herhical inheritance////////
// class father{
//     public:
//     void disp(){
//         printf(" i am father i have two child\n");
//     }
// };

// class child1:public father{
//         public:
//         void disp1(){
//             printf(" i am first child of my father\n");
//         }
// };
// class child2:public father{
//     public:
//     void disp2(){
//         printf(" i am second child of my father\n");
//     }
// };
// int main(){
//     child1 obj;
//     child2 obj1;
//     obj.disp1();
//     obj.disp();
//     obj1.disp();
//     obj1.disp2();

// }


//////Hybrid inheritence//////
// class Animal{
//     public:
//     void disp(){
//         printf(" I am lion king of jungle\n");
//     }
// };
// class dog:public Animal{
//     public:
//     void disp2(){
//         printf(" I am dog and i have property to bark\n");
//     }
// };
// class pup1:public dog{
//     public:
//     void disp3(){
//         printf(" i am first puppy of dog\n");
//     }
// };
// class pup2:public dog{
//     public:
//     void disp4(){
//         printf(" i am second puppy of dog\n");
//     }
// };


// int main(){
//     pup1 obj1;
//     pup2 obj2;
//     obj1.disp();
//     obj1.disp2();
//     obj1.disp3();
//     obj2.disp4();
    


// }

/////// function overloading///////



// class addition{
//     public:
//     int add(int a,int b){
//         printf("The summition of two number=%d",(a+b));
//     }
//     int add(int a,int b,int c){
//         printf("The multipilication of three number is=%d",(a*b*c));
//     }
//     int add(int a){
//         printf("subtraction of a number from its square root=%d",(a-(a*a)));
//     }

// };
// int main(){
//     addition obj;
//     obj.add(2);
// }

//////// Function overriding ///////
// class Flower{
//     public:
//     virtual void disp(){
//         printf("IT is garden of flower");
//     }
// };
// class f1:public Flower{
//     public:
//     void disp(){
//         printf("IT is garden which is full of flower");
//     }
// };
// int main(){
//     f1 obj;
//     obj.disp();
// }



////// Friend function///////
// class Box{
//     private:
//       int length;
//     public:
//         Box(){
//             length=10;
//         }
//         friend void displaylength(Box b);
//     };
//     void displaylength(Box b){
//         printf("length of box=%d",b);
//       }
// int main(){
//     Box b;
//     displaylength(b);
// }





///////// operator overloading/////////
// class Box{
//     public:
//     int length;
//     Box(int l){
//         length=l;
//     }
//     Box operator+(Box b){
//         return Box(length+b.length);
//     }

// };
// int main(){
//     Box b1(10),b2(20);
//     Box b3=b1+b2;
//     printf("Total length=%d\n",b3.length);

// }


//////// Multithreading function////////
// void threadfunction(){
//     cout<<"Hello from thread";
// }
// int main(){
//     t(threadfunction);
    //   t.join();
    //   cout<<"the thread is start";
    //   return 0;
// }


//////////// try catch block//////
// int main(){
//     int a,b;
//     printf("enter a two number");
//     scanf("%d%d",&a,&b);
//     try{
//         if(b==0){
//             throw b;
//         }
//         else{
//             printf("the division of number=%d",(a/b));
//         }
//     }
//     catch(int b){
//         printf("Error the number is Zero");
//     }
//     return 0;
// }

///////// to check and give message if number is negative////////
// int main(){
//     int a;
//     printf("enter a number");
//     scanf("%d",&a);
//     try{
//         if(a<0){
//             throw a;
//         }
//         else{
//             printf("the number is =%d",a);
//         }
//     }
//     catch(int a){
//         printf("Error:the number is negative");
//     }
//     return 0;

// }
////// to check eleigibilty of vote of person//////
// int main(){
//     int age;
//     printf("enter your age");
//     scanf("%d",&age);
//     try{
//        if(age<18){
//         throw age;
//     }
//     else{
//         if(age>=18){
//             printf("you are eligible for the vote");
//         }
//     }
//     }  
//     catch(int age){
//         printf("Error: you are not eleigible for the vote");
//     }
//     return 0;
// }
//////////  to use a two catch block////////
// int main(){
//     int a;
//     printf("enter a number");
//     scanf("%d",&a);
//     try{
//     if(a==0){
//         throw 0;
//     }
//     if(a<0){
//         throw 'a';
//     }
//     else{
//         printf("the number is =%d",a);
//     }
//     }
//     catch(int x){
//         printf("Error:the number is not allowed ");

//     }
//     catch(char a){
//         printf("Error:the number is less than Zero");
//     }
//     return 0;
// }

///// to give mark if marks is grater than 100 or less than 0////////
// int main(){
//     int mark;
//     printf("enter a mark of student");
//     scanf("%d",&mark);
//     try{
//         if(mark<0||mark>100){
//             throw mark;

//         }
//         else{
//             printf("the mark of student=%d",mark);
//         }
//     }
//     catch(int mark){
//         printf("Error: the mark is not valid");
//     }
//     return 0;
// }