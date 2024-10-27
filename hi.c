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