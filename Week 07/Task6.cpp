#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0)
          return false;   
    }
    return true;
}

int primorial(int n) 
{
    int num = 2, count = 0;                             
    int result = 1; 
    while (count < n)
    {
        if (isPrime(num))
        {
            result *= num;
            count++;
        }
        num++;
    }
    return result;
}

main() 
{
    int n;
    cout << "Enter the number of primes for Primorial: ";
    cin >> n;
    int result = primorial(n);
    cout << "The Primorial of "<<n<<" is: "<<result;
}