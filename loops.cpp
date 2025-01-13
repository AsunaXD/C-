#include <iostream>
using namespace std;
int main()
{
    //     1. Sum of N Natural Numbers:
    // Write a C++ program that:
    // Takes an integer n as input.
    // Uses a loop to calculate the sum of all natural numbers from 1 to n.
    // Outputs the sum.

    // int n;
    // cout << "Enter the number : " << endl;
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << "The sum of given number is :" << sum << endl;

    //  2. Factorial of a Number:
    // Write a C++ program that:
    // Takes an integer n as input.
    // Uses a loop to calculate the factorial of n.
    // Outputs the result.

    // int n;
    // cout << "Enter the number " << endl;
    // cin >> n;
    // int sum = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum *= i;
    // }
    // cout << "the factorial of:" << sum << endl;
    // multiplication table`
    // int n;
    // cout << "enter the number : " << endl;
    // cin >> n;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << n * i << endl;
    // }

    //     1. Print Numbers from 1 to N:
    // Write a C++ program that:

    // Takes a number n as input.
    // Uses a loop to print all numbers from 1 to n.

    // int n;
    // cout << "enter the number: " << endl;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }

    //    3  Even Numbers from 1 to N:
    // Write a C++ program that:

    // Takes a number n as input.
    // Uses a loop to print all even numbers from 1 to n.

    // int n;
    // cout << "enter the number" << endl;
    // cin >> n;

    // for (int i = 2; i <= n; i += 2)
    // {
    //     cout << i << endl;
    // }

    // 4. Odd Numbers from 1 to N:
    // Write a C++ program that:

    // Takes a number n as input.
    // Uses a loop to print all odd numbers from 1 to n.

    // int a;
    // cout << "enter the number: " << endl;
    // cin >> a;
    // for (int i = 1; i <= a; i += 2)
    // {
    //     cout << i << endl;
    //     ;
    // }

    // 6. Reverse a Number:
    // Write a C++ program that:
    // Takes a positive integer n as input.
    // Uses a loop to reverse the digits of the number and prints the reversed number.

    // int n, reverse = 0;
    // cout << "please enter the number : " << endl;
    // cin >> n;

    // while (n != 0)
    // {
    //     int a = n % 10;
    //     reverse = reverse * 10 + a;
    //     n / 10;
    // }
    // cout << reverse << endl;
    //

    // 8. Count Digits in a Number :
    // Write a C++ program that:
    // Takes a number n as input.
    // Uses a loop to count the number of digits in the number and outputs the count.
    // int n,
    //     count = 0;
    // cout << "enter the number: ";
    // cin >> n;
    // while (n != 0)
    // {
    //     n /= 10;
    //     count++;
    // }
    // cout << count << endl;

    //  1  Print Numbers from 1 to N
    // Write a program that takes an integer
    // 𝑁
    // N as input and prints all numbers from 1 to
    // 𝑁
    // N using a loop.

    //  int a;
    //  cout<<"enter the number: ";
    //  cin>>a;

    //  for ( int i = 1; i <=a; i++)
    //  {
    //            cout<<i<<endl;
    //     }

    //      6  Sum of Numbers
    // Write a program to calculate the sum of the first 𝑁
    // N natural numbers using a loop.
    // Example: For 𝑁=5
    // N=5, output should be 1+2+3+4+5=15.
    //  int a;
    //  cout<<"entrer the number :";
    //  cin>>a;
    // int sum=0;
    //  for (int i = 1; i <=a; i++)
    //  {
    //       sum+=i;
    //  }

    //   cout<<sum<<endl;

    // Factorial Calculation
    // Write a program to calculate the factorial of a given number 𝑁
    // N.Example: For 𝑁=4N=4, 4!=4×3×2×1=24
    // 4!=4×3×2×1=24.
    //    int a ;
    //    cout<<"enter the number: ";
    //    cin>>a;
    //    int sum=1;
    //    for ( int i = 1; i <=a; i++)
    //    {
    //         sum*=i;
    //    }
    //    cout<<sum<<endl;

    // Multiplication Table
    // Write a program to display the multiplication table of a given number 𝑁
    // N.Example: For𝑁=3 N=3, output should be:
    // int a;
    // cout<<"enter the number: "<<endl;
    // cin>>a;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<a<<"x"<<i<<"="<<a*i<<endl;
    // }

    //  Reverse Numbers
    // Write a program to print numbers from 𝑁
    // N to 1 in reverse order using a loop.
    //   int n;
    //   cout<<"enter the number: "<<endl;
    //   cin>>n;
    //   int reverse=0;
    //   while (n!=0)
    //   {
    //     int a= n%10;
    //     reverse=reverse*10+a;
    //     n/=10;
    //   }
    //   cout<<reverse<<endl;

    //  int n;
    //  cout<<"enter the number: ";
    //  cin>>n;
    //  for (int i = n; i >=1; i--)
    //  {
    //     cout<<i<<endl;
    //  }

    //      Sum of Even Numbers
    // Write a program to calculate the sum of all even numbers between 1 and 𝑁

    //       int n;
    //       cout<<"enter the number: ";
    //       cin>>n;
    //       int sum=0;
    //       for (int i = 2; i <= n; i+=2)
    //       {
    //           sum+=i;
    //       }

    //   cout<<"The sum of even numbers are: "<<sum<<endl;

    // Count Digits in a Number
    // Write a program to count the number of digits in a given number using a loop.
    // Example: For input
    // 12345
    // 12345, the output should be 5
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // int a=0;
    // while (n!=0)
    // {
    //      n/=10;
    //      a++;
    // }
    // cout<<a<<endl;

    // Check for Prime Number
    // Write a program to check if a number 𝑁
    // N is prime.
    // A prime number is only divisible by 1 and itself.

    // int n;
    // cout<<"enter the number: ";
    // cin>>n;
    // bool isPrime=true;
    // for (int i = 2; i <=n-1; i++)
    // {
    //     if (n%i==0)
    //     {
    //        isPrime=false;
    //        break;
    //     }

    // }
    // if (isPrime==true)
    // {
    //     cout<<"the number is prime";
    // }
    // else
    // {
    //     cout<<"the numbe is not prime";
    // }
    // 1. Sum of First N Natural Numbers
    // If
    // 𝑁 = 5
    // N=5, the sum is 1+2+3+4+5=15
    // int n;
    // cout << "enter the number: ";
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << sum << endl;

    // 2. Factorial of a Number
    //     If N = 5, then 5 ! = 120
    // int n;
    // cout << "enter the value: " << endl;
    // cin >> n;
    // int sum = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum *= i;
    // }
    // cout << sum << endl;

    //  3 Multiplication Table
    // int n;
    // cout << "enter the number : ";
    // cin >> n;

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << n * i << endl;
    // }

    // 5. Reverse Digits of a Number
    // If the input is 1234, output should be 4321.
    // int n;
    // cout << "enter the number: ";
    // cin >> n;
    // int reverse = 0;
    // while (n != 0)
    // {
    //     int a = n % 10;
    //     reverse = reverse * 10 + a;
    //     n /= 10;
    // }
    // cout << reverse << endl;

    // 6. Check if a Number is Prime
    // int n;
    // cout << "enter the number: ";
    // cin >> n;
    // bool isPrime = true;
    // for (int i = 2; i <= n - 1; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //         cout << "the number is not prime";
    //     }
    // }
    // if (isPrime == true)
    // {
    //     cout << "the number is prime";
    // }
    // else
    // {
    //     cout << "the number is not prime";
    // }

    //     Sum of Digits
    // If the input is 1234, the sum of its digits is 1+2+3+4=10.
    // int n;
    // cout << "enter the number: ";
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << sum << endl;

    // 4. Print Even and Odd Numbers in a Range

    // int start, end;
    // cout << "enter the starting number : ";
    // cin >> start;
    // cout << "enter the ending number: ";
    // cin >> end;
    // cout << "The range of even number: [" << start << "," << end << "]" << endl;
    // for (int i = start; i <= end; i++)

    // {
    //     i % 2 == 0;
    //     cout << i << " ";
    // }

    // cout << endl;
    // cout << "The range of odd number: [" << start << "," << end << "]" << endl;
    // for (int i = start; i <= end; i++)
    // {
    //     i % 2 != 0;
    //     cout << i << " ";
    // }
    // cout << endl;

    // Write a program that continuously asks the user to input a positive integer and prints it. The program should terminate when the user enters a negative integer. code and output

    // int n;
    // while (true)
    // {
    //     cout << "Enter a psotive number or negative number to quit the program: ";
    //     cin >> n;
    //     if (n < 0)
    //     {
    //         cout << "you entered the negative number: " << n << "\nthe programterminated" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "You enter the number: " << n << endl;
    //     }
    // }
    // 10. Star Pattern (Pyramid) code
    // int n;
    // cout << "enter the number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) // controlling the row
    // {
    //     for (int j = 1; j <= n - i; j++) // for controlling space
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= 2 * i - 1; i++) // for controlling stars;
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    // 11. Star Pattern (Right-Angled Triangle)

    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // 12. Star Pattern (left-Angled Triangle)
    // int n;
    // cout << "enter the number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Floyd’s Triangle
    // int row, number = 1;
    // cout << "enter the number: ";
    // cin >> row;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << number;
    //         number++;
    //     }
    //     cout << endl;
    // }

    // Count the Number of Digits handel the the zero and negative case

    // int n, count = 0;
    // cout << "enter the number: ";
    // cin >> n;

    // if (n == 0)
    // {
    //     count = 1;
    // }
    // else
    // {
    //     n = abs(n); // for negative control
    //     while (n > 0)
    //     {
    //         n /= 10;
    //         count++;
    //     }
    // }

    // cout << count << endl;

    return 0;
}