//Question 1
/*
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
*/

//Question 2
/*
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
*/

//Question 3
/*
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
*/

//Question 4
/*
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
*/

//Question 5
/*
#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is %d.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is %d.\n", num2);
    } else {
        printf("The largest number is %d.\n", num3);
    }

    return 0;
}
*/

//Question 6
/*
#include <stdio.h>

int main() {
    float avgMarks;
    printf("Enter average marks: ");
    scanf("%f", &avgMarks);

    if (avgMarks > 80) {
        printf("Grade A\n");
    } else if (avgMarks > 60 && avgMarks <= 80) {
        printf("Grade B\n");
    } else if (avgMarks > 40 && avgMarks <= 60) {
        printf("Grade C\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}
*/

//Question 7
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isdigit(ch)) {
        printf("You scored 10 points.\n");
    } else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("You scored 5 points.\n");
    } else {
        printf("You scored 0 points.\n");
    }

    return 0;
}
*/
//Question 8
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isupper(ch)) {
        printf("You entered an uppercase letter.\n");
    } else if (islower(ch)) {
        printf("You entered a lowercase letter.\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
*/

//Question 9
/*
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        printf("Real and distinct roots. You scored 20 points.\n");
    } else if (discriminant == 0) {
        printf("Equal roots. No points awarded.\n");
    } else {
        printf("Imaginary roots. You scored 10 points.\n");
    }

    return 0;
}
*/

//Question 10
/*
#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Enter weight (kg) and height (m): ");
    scanf("%f %f", &weight, &height);

    bmi = weight / (height * height);

    if (bmi < 18.5) {
        printf("Underweight.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Normal weight.\n");
    } else {
        printf("Overweight.\n");
    }

    return 0;
}
*/
//Question 11
/*
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point lies in the First Quadrant.\n");
    } else if (x < 0 && y > 0) {
        printf("The point lies in the Second Quadrant.\n");
    } else if (x < 0 && y < 0) {
        printf("The point lies in the Third Quadrant.\n");
    } else if (x > 0 && y < 0) {
        printf("The point lies in the Fourth Quadrant.\n");
    } else if (x == 0 && y != 0) {
        printf("The point lies on the y-axis.\n");
    } else if (y == 0 && x != 0) {
        printf("The point lies on the x-axis.\n");
    } else {
        printf("The point is at the origin.\n");
    }

    return 0;
}
*/
//Question 12
/*
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
*/
//Question 13
/*
#include <stdio.h>

int main() {
    float amount, discount, finalAmount;

    // Input the amount spent
    printf("Enter the amount spent for the purchase: ");
    scanf("%f", &amount);

    // Determine discount based on the amount
    if (amount >= 0 && amount <= 1000) {
        discount = amount * 0.05;  // 5% discount
    } else if (amount > 1000 && amount <= 5000) {
        discount = amount * 0.10;  // 10% discount
    } else if (amount > 5000 && amount <= 10000) {
        discount = amount * 0.20;  // 20% discount
    } else {
        printf("No discount available for amounts greater than 10000.\n");
        discount = 0;
    }

    // Calculate the final amount after discount
    finalAmount = amount - discount;

    // Output the discount and final amount
    printf("Discount: %.2f\n", discount);
    printf("Final amount after discount: %.2f\n", finalAmount);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int count = 0;
    while(count < 100)
    {
        printf("The value of count is %d \n", count);
        count++;
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    // Read in the user's favorite number
    int fav_num;
    printf("Enter your favorite number from 0 to 99: ");
    scanf("%d", &fav_num);

    int count = 0;
    while(count < 100)
    {
        printf("\nThe value of count is %d.", count);
        if (count == fav_num)
            break;
        count++;
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int A[10] = {0};
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&A[i]);
        if (A[i] > 20)
            continue;

        sum += A[i];
    }
    printf("Sum: %d",sum);
    return 0;
}
*/

//Recursion: Function calling itself
/*
#include <stdio.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
*/
/*
#include<stdio.h>
int display(int marks[]);
int main(){
    // float avg;
     int marks[5] = {99, 90, 96, 93, 95};
     display(marks); // name of the array is passed as argument. base address: array name it self is a base address or marks[0]

}
int display(int marks[])
{
    int i;
// sum = 0;
 //float avg;
    for (i = 0; i <= 4; i++) {
        printf("%d\t",marks[i]);
 //return marks; // not allowed
}
}
//call by value---actual value
*/
/*
#include<stdio.h>
int linear(int a[] ,int n ,int key);
int main()
{
    int a[10],i,key,n;
    printf("How many elements?");
    scanf("%d",&n);

    printf("Enter array elements:n\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);

    printf("Enter element to search:\n");
    scanf("%d",&key);

linear(a,n,key);
}
int linear(int a[],int n,int key)
{
int i;
 for(i=0;i<n;i++)
 if(a[i]==key)
//count++;
 break;

 if(i<n)
 printf("Element found at index %d",i);
 else
 printf("Element not found");

 return 0;
}
*/
/*
#include<stdio.h>
int square(int);
int main()
{
 int num, res;
 printf("Enter a number\n");
 scanf("%d", &num);
 res=square(num);
 printf("Square of %d = %d", num, res);
}
int square(int x)
{
 return (x*x);
}
*/
/*
#include <stdio.h>
#include <math.h>
long decimalToBinary(int decimalnum)
{
 long binarynum = 0;
 int rem, temp = 1;
 while (decimalnum!=0)
 {
 rem = decimalnum%2;
 decimalnum = decimalnum / 2;
 binarynum = binarynum + rem*temp; // 1 1 1 0 1
 temp = temp * 10;
 } //decimal number 12 12/2, 6, rem=0 , rem= 0, 3 , rem=1, 3/2=1, //rem=1, 1100
 return binarynum;
}
int main()
{
 int decimalnum;
 printf("Enter a Decimal Number: ");
 scanf("%d", &decimalnum);
//bin=decimalToBinary(decimalnum);
//printf("%ld",bin);
 printf("Equivalent Binary Number is: %ld", decimalToBinary(decimalnum));
 return 0;
}
*/
/*
#include<stdio.h>
float findAverage(int marks[]);
int printarray(int marks[]);
int main()
{
 float avg;
 int marks[5] = {99, 90, 96, 93, 95};
printarray(marks);
printf("program done\n");
 // avg= findAverage(marks); // name of the array is passed as argument. marks=marks[0]; base address: array name it self is a base
 //address or marks[0]
 // printf("Average marks = %.1f", avg);
 // return 0;
}
int printarray(int marks[])
{
int i;
float avg;
for (i = 0; i <= 4; i++)
printf("%d\t",marks[i]);
avg=findAverage(marks);
printf("Average marks = %.1f", avg);
printf("average done\n");
}
float findAverage(int marks[])
{
 int i;
float sum = 0;
 float avg;
 for (i = 0; i <= 4; i++) {
 sum += marks[i];
 }
printf("%f\n",sum);
 avg = (sum / 5);
 //printf("Average marks = %.1f", avg);
//printf("%f",avg);
 return avg;
}
*/
/*
#include<stdio.h>
int find_factorial(int n);
int main()
{
 int num, fact;
 //Ask user for the input and store it in num
 printf("\nEnter any integer number:");
 scanf("%d",&num); //5
 //Calling our user defined function
 fact =find_factorial(num); //function call
 //Displaying factorial of input number
 printf("\nfactorial of %d is: %d",num, fact);
 // return 0;
}
int find_factorial(int n)
{
 //Factorial of 0 is 1
 if (n==0)
 return(1); //return constant
 //Function calling itself: recursion
 return(n*find_factorial(n-1));
}
//return (5*find_factorial(4)) or 5*4! return(5*24)= 120 n*(n-1) 5!=n*n-1, 5*4*3*2*1=120
//return (4*find_factorial(3)) or 4*3! retuen(4*6)=24
//return (3*find_factorial(2)) or 3*2! //return 3*2 =6
//return (2*find_factorial(1)) or 2*1! ///return (2*1) =2
//return (1*find_factorial(0)) or 1*0! // return 1*1=1
//return 1
*/
/*
#include<stdio.h>
int main()
{
 int n, i;
 printf("Enter the number of element you want in series :\n");
 scanf("%d",&n);
 printf("fibonacci series is : \n");
 for(i=0;i<n;i++)
 {
     printf("%d ",fibonacci(i));
 }
 }
 int fibonacci(int i)
 {
 if(i==0)
     return 0;
 else if(i==1)
     return 1;
 else
     return (fibonacci(i-1)+fibonacci(i-2));
}
*/
/*
#include <stdio.h>
int main()
{
 auto int j = 1;
//auto int j ;
 {
 auto int j= 2;
 {

 auto int j = 3;
 printf ( " %d ", j); //j=3 j=1, j=2, j=3
}

 printf ( "\t %d ",j);
 }
 printf( "%d\n", j);}
*/
/*
 #include <stdio.h> //function declaration 
void next();
void display();
static int counter = 7; //global variable
int main()
 {
 while(counter<10) {
 next();
 counter++; }
display();
//return 0;
}
void next() { //function definition 
 static int iteration = 13; //local static variable 
 iteration ++; //14
 printf("iteration=%d and counter= %d\n", iteration, counter);
}
void display()
{
printf("%d",counter);
}
*/
/*
#include <stdio.h>
//Function declaration  
void display();
int main()
{ display();
display();
return 0; }
//Function definition 
void display()
{ int n1 = 10; //static variables are declared only once 
static int n2 = 10;
printf("Local n1 = %d, Static n2 = %d\n", n1, n2);
n1++; // Increment local variable
n2++; // Increment static variable
}
*/
/*
#include <stdio.h>
// Global variable
int num;
void display()
{
 int i;
 for(i=1; i<=num; i++)
 {
 printf("num = %d\n", i);
 }
}
//Now , write main program and save it as storage_main.c
// Declare link to variable defined in stoarge_extern_file1.c 
extern int num;
// Declare link to function defined in stoarge_extern_file1.c 
extern void display();
int main()
{
 // Access external variable
 num = 5;
 // Access external function
 display();
 return 0;
}
*/
/*
#include<stdio.h>
void incre();
int main()
 { int i;
 for (i=0; i<3; i++)
 incre();
}
void incre()
 { int avar=1;
 static int svar=1;
 avar++;
 svar++;
 printf("\n Automatic variable value : %d",avar);
 printf("\t Static variable value : %d",svar);
}
*/
/*
#include<stdio.h>
int welcome (); //Function declaration/prototype
int main() // main() starts the program execution
{

 printf("Before welcome\n");
 welcome(); //Function Call
 printf("after welcome\n");
}
int welcome() //Function definition
{
 printf("Welcome to C\n");
}
*/
/*
#include<stdio.h>
int square(int);
int main()
{
 int num, res;
 printf("Enter a number\n");
 scanf("%d", &num);
 res=square(num);
 printf("Square of %d = %d", num, res);
}
int square(int x)
{
 return (x*x);
}
*/

