#include <iostream>
#include <string.h>
using namespace std;
int main() {
for (int i = 0; i < 100; i++) {
if (0 == (i%3u))
std::cout << "Fizz";
else if (0 == i%5u)
std::cout << "Buzz";
else
std::cout << i;
std::cout <<std::endl;
}
}
