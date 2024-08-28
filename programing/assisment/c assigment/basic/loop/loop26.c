#include<stdio.h>
using namespace std;
 
// Function to find sum of given series
int sumOfSeries(int n)
{
    int sum = 0;
    for (int i = 1 ; i <= n ; i++)
        for (int j = 1 ; j <= i ; j++)
            sum += j;
    return sum;
}
 
// Driver Function
int main()
{
    int n = 10;
    cout << sumOfSeries(n); 
    return 0;
}
