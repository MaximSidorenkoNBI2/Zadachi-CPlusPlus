//сам раб 3 баз, While23

#include <iostream>

using namespace std;

int gcd(int a, int b)

{

if (b == 0)

{

return a;

}

return gcd(b, a % b);

}

int main()

{

int a, b;

cout « "Введите два положительных целых числа: ";

cin » a » b;

cout « "НОД(" « a « ", " « b « ") = " « gcd(a, b) « endl;

return 0;

}