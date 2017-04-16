#include <iostream>
#include <string.h>
using namespace std;
int main() {
for (int i = 0; i < 140; i++) {
if (0 == i%3u && 0 != i%2u)
std::cout << i << " : Fizz";
else if (0 == i%5u)
std::cout << i << " : Buzz";
else if (0 == i%2u && 0 != i%3u)
std::cout << i << " : Fuuu";
else
std::cout << i << " : Prime number";
std::cout <<std::endl;
}
}
