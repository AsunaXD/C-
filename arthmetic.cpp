// boiler code start of the code
// #include <iostream>
// using namespace std;

// int main()
// {
//     int age = 33;
//     char grade = 'a';
//     float price = 299.99f;
//     bool isSafe = true;

//     cout << isSafe << endl;
//     cout << price << endl;
//     cout << grade << endl;
//     cout << age << endl;
//     return 0;
// }

// int main()
// {
//     double price = 1233.2;
//     int newprice = (int)price;
//     cout << newprice << endl;
//     return 0;
// }

// int main()
// {

//     float price;
//     cout << "Enter the price:" << endl;
//     cin >> price;
//     cout << "The entering price are:" << price << endl;
//     return 0;
// }

// int main()
// {
// int a, b;
// int sum = a + b;
// cout << "sum is " << (a + b) << endl;
// cout << "minus is " << (a - b) << endl;
// cout << "product is " << (a * b) << endl;
// cout << "division is " << (a / (double)b) << endl;
// cout << "Sum is " << sum << endl;
// cout << "Enter the first number" << endl;
// cin >> a;
// cout << "enter the second number " << endl;
// cin >> b;

// int sum = a * b;
// cout << "Sum is " << sum << endl;

// int n = 8;
// int a = 1;
// for (int i = 1; i <= n; i++)

// {
//     a *= i;
// }
// cout << "factorial of" << n << "is" << a << endl;

// 1  adding subtracting multiply and division
//  int a;
//  int b;

// cout << "Enter the number " << endl;
// cin >> a >> b;
//  int sum = a + b;
// cout << "sum is" << (a + b) << endl;
// cout << "Subtraction is" << (a - b) << endl;
// cout << "Multiplication is" << (a * b) << endl;
// if (b = !0)
// {
//     cout << "division is " << (a / b) << endl;
// }
// else
// {
//     cout << "Divisible by zero is not allowed" << endl;
// }

// 2   Swapping the number using add and minus
// int a, b;
// cout << "enter the number" << endl;
// cin >> a >> b;
// a = a + b;
// b = a - b;
// a = a - b;
// cout << "AfterSwapping a =" << a << "b=" << b << endl;

// 3. Calculate Average of Two Numbers:
// Write a C++ program that:
// Takes two floating-point numbers as input.
// Calculates the sum of the numbers.
// Then calculates and displays the average of the two numbers.

// float a, b;
// cout << "enter the value" << endl;
// cin >> a >> b;

// float sum = (a + b);
// cout << "the sum is" << sum << endl;
// cout << "the average is " << (float(a + b)) / 2 << endl;

//      4. Basic Calculator:
// Write a C++ program that:

// Takes two numbers and an operator (+, -, *, /) as input.
// Based on the operator, performs the corresponding arithmetic operation.
// Displays the result.
// If the operator is /, handle division by zero appropriately.

// float a;
// cout << "enter the number" << endl;
// cin >> a;
// char op;
// cout << "enter the operator(+,-,*,/)" << endl;
// cin >> op;
// float b;
// cout << "enter the number" << endl;
// cin >> b;
// if (op == '+')
// {
//     cout << (a + b) << endl;
// }
// else if (op == '-')
// {
//     cout << (a - b) << endl;
// }
// else if (op == '*')
// {
//     cout << (a * b) << endl;
// }
// else if (op == '/')
//     if (b != 0)
//     {
//         cout << (a / b) << endl;
//     }
//     else
//     {
//         cout << "the division by xero is not allow" << endl;
//     }
// else
// {
//     cout << "invalid operator" << endl;
// }
// 5.     Calculate the Remainder:
// Write a C++ program that:

// Takes two integers as input.
// Calculates and displays the remainder when the first number is divided by the second.
//     int a, b;
//     cout << "enter the number" << endl;
//     cin >> a >> b;
//     cout << "reminder is: " << (a % b) << endl;
// 6. Check Even or Odd : Write a C++ program that :

//     Takes an integer as input.Checks whether the number is even or
//     odd using the modulus operator(%).Prints the result.int a;
// cout << "enter the number:" << endl;
// cin >> a;
// if (a % 2 == 0)
// {
//     cout << "the number is even" << endl;
// }
// else
// {
//     cout << "the number is odd" << endl;
// }
// 7. Percentage Calculator:
// Write a C++ program that:

// Takes two numbers as input: a total value and a part of the total.
// Calculates the percentage of the part with respect to the total.
// Displays the result.
// float total;
// cout << "enter the total: " << endl;
// cin >> total;
// float part;
// cout << "enter the part:" << endl;
// cin >> part;

// float percentage = (part / total) * 100;
// cout << "the percentage is: " << percentage << endl;
// 8. Multiplication Table:
// Write a C++ program that:

// Takes an integer as input.
// Prints the multiplication table for that number (from 1 to 10).
//     int num;
//     cout << "enter teh number: " << endl;
//     cin >> num;
//     for (int i = 1; i <= 100; i++)
//     {
//         cout << num << 'X' << i << '=' << num * i << endl;
//     }
// 9. Area and Perimeter of Rectangle : Write a C++ program that :

//     Takes the length and width of a rectangle as input.Calculates and displays the area and perimeter of the rectangle.int lenght;
// cout << "enter the lenght:" << endl;
// cin >> lenght;
// int width;
// cout << "enter the width: " << endl;
// cin >> width;
// int area = lenght * width;
// int parameter = 2 * (lenght + width);
// cout << "The area of the rectangul are: " << area << endl;
// cout << "the parameter of rectangle are: " << parameter << endl;

// 10. Simple Interest Calculator : Write a C++ program that :
//     Takes the principal amount,
//     rate of interest,
//     and time period as input.

//     int principle,rate,time;
// cout << "enter the principle: " << endl;
// cin >> principle;
// cout << "enter the rate: " << endl;
// cin >> rate;
// cout << "enter the time" << endl;
// cin >> time;
// int interest = (principle * rate * time) / 100;
//     // cout << "the interest is: " << interest << endl;

// 12. Find the Greatest of Three Numbers:
// Write a C++ program that:
// Takes three integers as input.
// Determines and displays the greatest of the three numbers.
// int a, b, c;
// cout << "Enter any three numbers" << endl;
// cin >> a;
// cin >> b;
// cin >> c;
// if (a > b && a > c)
// {
//     cout << "the Greatest number is: " << a << endl;
// }
// else if (b > a && b > c)
// {
//     cout << "the Greatest number is: " << b << endl;
// }
// else
// {
//     cout << "the Greatest number is: " << c << endl;
// }

// print the name multiple times
//     int times = 10000;
//     for (int i = 1; i < times; i++)
//     {
//         cout << "Owais" << endl;
//     }

//     return 0;
// }