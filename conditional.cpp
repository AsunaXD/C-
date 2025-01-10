// finding the number is positive or negative
#include <iostream>
using namespace std;
int main()
{

    // int a;
    // cout << "enter the number: " << endl;
    // cin >> a;
    // if (a >= 0)
    // {
    //     cout << "the number is positive" << endl;
    // }
    // else
    // {
    //     cout << "the number is negative" << endl;
    // }

    // 2 checking that the user is allow to vote orno minimin age required 18
    // int age;
    // cout << "enter your age: " << endl;
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "you are allow to vote" << endl;
    // }
    // else
    // {
    //     cout << "You are not allow to vote " << endl;
    // }

    // grade systembased on your marks
    // int n;
    // cout << "Enter your marks: " << endl;
    // cin >> n;
    // if (n >= 90)
    // {
    //     cout << "Your grade is A" << endl;
    // }
    // else if (n >= 80 && n < 90)
    // {
    //     cout << "Your grade is B" << endl;
    // }
    // else if (n >= 70 && n < 80)
    // {
    //     cout << "Your grade is C" << endl;
    // }
    // else if (n >= 60 && n < 70)
    // {
    //     cout << "Your grade is D" << endl;
    // }
    // else
    // {
    //     cout << "Gand mara lavdai tera kuch mhi ho sakta hai bkl" << endl;
    // }

    // 4  finding the upper case and lowercase from a to z and A to Z

    // char ch;
    // cout << "enter the character: " << endl;
    // cin >> ch;
    // if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << "Lowercse charater: " << endl;
    // }
    // else
    // {
    //     cout << "UPPERCASE CHARACTER:" << endl;
    // }

    // printing the odd number and sumof odd number

    // int n;
    // cout << "enter the number" << endl;
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)

    //     {
    //         sum += i;
    //     }
    // }
    // cout << sum << endl;

    // 3   check the nuber is prime number or not

    // int n;
    // cout << "enter the number: " << endl;
    // cin >> n;
    // bool isprime = true;
    // for (int i = 1; i * i <= n - 1; i++)

    // {
    //     if (n % i == 0)
    //     {
    //         isprime = false;
    //         break;
    //     }
    // }
    // if (isprime == true)
    // {
    //     cout << "the number is prime" << endl;
    // }
    // else
    // {
    //     cout << "the number is not prime" << endl;
    // }

    // 4   printing the stars using nested loops
    // int n = 5;
    // for (int i = 1; i <= n; i++) // this is for print the line
    // {
    //     int m = 10;
    //     for (int j = 1; j <= m; j++) // this loop is used for nuber of stars that are print in the line

    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // int n = 10;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "*";
    // }
    // cout << endl;

    // 5   sum of all the number which is divisibleby 3

    // int n = 10;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         sum += i;
    //     }
    // }
    // cout << sum << endl;

    // 6 for n factorial
    //     int n;
    //     cout << "enter the number:" << endl;
    //     cin >> n;
    //     int sum = 1;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         sum *= i;
    //     }
    //     cout << sum << endl;

    // 8 . Even or Odd : Write a C++ program that :
    //     Takes an integer as input from the user.Determines whether the number is even or
    //     odd.Outputs "Even" if the number is even,
    //     and"Odd" if the number is odd.return 0;
    // int n;
    // cout << "enter the number: " << endl;
    // cin >> n;
    // if (n % 2 == 0)
    // {
    //     cout << "the number is even" << endl;
    // }
    // else
    // {
    //     cout << "the number is odd" << endl;
    // }
    // 2.   Positive, Negative, or Zero : Write a C++ program that :
    //     Takes a number as input.Checks whether the number is positive,
    //     negative, or zero.Outputs an appropriate message : "Positive", "Negative", or "Zero".return 0;

    // int n;
    // cout << "enter the number: " << endl;
    // cin >> n;

    // if (n > 0)
    // {
    //     cout << "the number is positive " << endl;
    // }
    // else if (n < 0)
    // {
    //     cout << "The number is negative" << endl;
    // }
    // else
    // {
    //     cout << "the number is zero" << endl;
    // }
    //     3. Grade Checker:
    // Write a C++ program that:
    // Takes a student's score (an integer) as input.
    // Determines the grade based on the score:

    // int n;
    // cout << "enter the number " << endl;
    // cin >> n;
    // if (n >= 90)
    // {
    //     cout << "Your grade is A" << endl;
    // }
    // else if (n >= 80 && n < 90)
    // {
    //     cout << "your grade is B" << endl;
    // }
    // else if (n >= 70 && n < 80)
    // {
    //     cout << "your grade is C" << endl;
    // }
    // else if (n >= 60 && n < 70)
    // {
    //     cout << "Your grade is D" << endl;
    // }
    // else
    // {
    //     cout << "teri kuch nhi ho sakta hai tu ab ja kr gand mara bkl" << endl;
    // }

    // 4. Leap Year Checker:
    // Write a C++ program that:

    // Takes a year as input from the user.
    // Checks whether the year is a leap year or not.
    // A year is a leap year if:
    // It is divisible by 4, and
    // If it is divisible by 100, it must also be divisible by 400.
    // Outputs "Leap year" or "Not a leap year".

    // int n;

    // cout << "enter the year: " << endl;
    // cin >> n;
    // if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
    // {
    //     cout << "the year is the leap year" << endl;
    // }
    // else
    // {
    //     cout << "The year is not leap year" << endl;
    // }

    //      5. Largest of Three Numbers:
    // Write a C++ program that:
    // Takes three integers as input.
    // Determines and prints the largest of the three numbers using if-else statements.

    // int a, b, c;
    // cout << "enter all the number: " << endl;
    // cin >> a >> b >> c;
    // if (a > b && a > c)
    // {
    //     cout << "The greatest number is: " << a << endl;
    // }
    // else if (b > a && b > c)
    // {
    //     cout << "the greatest number is: " << b << endl;
    // }
    // else
    // {
    //     cout << "the greatest number is: " << c << endl;
    // }

    // 6. Check Divisibility by 3 and 5 : Write a C++ program that :
    //     Takes an integer as input.Checks whether the number is divisible by both 3 and
    //     5. Outputs "Divisible by 3 and 5" if it is divisible by both,
    //     otherwise prints "Not divisible by both".

    // int n;
    // cout << "enter the number: " << endl;
    // cin >> n;
    // if (n % 3 == 0 && n % 5 == 0)
    // {
    //     cout << "The number is divisible by 3 and 5" << endl;
    // }
    // else
    // {
    //     cout << "The number is not divisible by 3 and 5" << endl;
    // }

    // 7. Age Eligibility for Voting:
    // Write a C++ program that:
    // Takes an age as input.
    // Checks if the person is eligible to vote.
    // The voting age is 18 or above.
    // Outputs "Eligible to vote" if the age is 18 or older, otherwise outputs "Not eligible to vote".

    // int n = 18;
    // int a;
    // cout << "Enter your age: " << endl;
    // cin >> a;
    // if (a >= n)
    // {
    //     cout << "you are allow to vote: " << endl;
    // }
    // else
    // {
    //     cout << "you are no allow to vote: " << endl;
    // }

    // 8. Check Alphabet Character:
    // Write a C++ program that:
    // Takes a character as input from the user.
    // Checks whether the character is a vowel (a, e, i, o, u) or a consonant.
    // Outputs "Vowel" if the character is a vowel, otherwise outputs "Consonant".

    // char n;
    // cout << "Enter the character:" << endl;
    // cin >> n;
    // if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')

    // {
    //     cout << "the character is VOWEL: " << endl;
    // }
    // else
    // {
    //     cout << "The character is constent " << endl;
    // }
    //     9. Check If Number is Divisible by 7:
    // Write a C++ program that:
    // Takes a number as input.
    // Checks whether the number is divisible by 7.
    // Outputs "Divisible by 7" if true, otherwise outputs "Not divisible by 7".

    // int n;
    // cout << "enter the number " << endl;
    // cin >> n;
    // if (n % 7 == 0)
    // {
    //     cout << "the is divisible by 7 " << endl;
    // }

    // else
    // {
    //     cout << "the number is not divisible by 7 " << endl;
    // }

    // 10. Temperature Classification:
    // Write a C++ program that:
    // Takes a temperature in Celsius as input.
    // Classifies the temperature:
    // Below 0°C: "Freezing"
    // 0°C to 20°C: "Cold"
    // 21°C to 30°C: "Warm"
    // Above 30°C: "Hot"

    // int n;
    // cout << "enter the temperature: " << endl;
    // cin >> n;
    // if (n >= 30)
    // {
    //     cout << "Hot" << endl;
    // }
    // else if (n >= 21 && n < 30)
    // {
    //     cout << "warm" << endl;
    // }
    // else if (n >= 0 && n < 21)
    // {
    //     cout << "cold" << endl;
    // }
    // else
    // {
    //     cout << "freezing" << endl;
    // }

    return 0;
}
