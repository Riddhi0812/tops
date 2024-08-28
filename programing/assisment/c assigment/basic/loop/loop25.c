#include <stdio.h> 
  
int Series(int n) 
{ 
    int i; 
    int sums = 0; 
    for (i = 1; i <= n; i++) 
        sums += (i * i); 
    return sums; 
} 
  
// Driver Code 
int main() 
{ 
    int n = 3; 
    int res = Series(n); 
    printf("%d", res); 
} 
