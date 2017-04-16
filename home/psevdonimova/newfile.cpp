#include <iostream>
#include <string.h>
using namespace std;
int main() {
for (int i = 0; i < 100; i++) {
if (0 == (i%3u))
std::cout << "Fizz";
else if (0 == i%5u)
std::cout << "Buzz";
else if (0 == i%2u)
std::cout << "Fuuu";
else
std::cout << i;
std::cout <<std::endl;
}
}
