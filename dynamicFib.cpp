#include <cstdlib>
#include <iostream>

using namespace std;

int fib(int n)
{
 
 if(n<=1)
 {
   return 1;              
 }
 else
 {
     int f = fib(n-1) +fib(n-2);
     return f;
 }
    
}

int main(int argc, char *argv[])
{
    int sonuc = fib(10);
    cout << sonuc;
    system("PAUSE");
    return EXIT_SUCCESS;
}
