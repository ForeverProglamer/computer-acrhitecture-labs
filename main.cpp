#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
   double a = 5.5;
   double b = 3.7;
   double result = add(a, b);
   
   cout << "Result: " << result << endl;
   
   return 0;
}
