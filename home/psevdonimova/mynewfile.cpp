#include <iostream>
#include <string.h>
using namespace std;
int main() {
for (int i = 0; i < 120; i++) {
if (0 == (i%3u))
std::cout << i << " : Fizz";
else if (0 == i%5u)
std::cout << i << " : Buzz";
else if (0 == i%2u)
std::cout << i << " : Fuuu";
else
std::cout << i;
std::cout <<std::endl;
}
}
