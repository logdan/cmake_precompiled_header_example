#include "my_precomp_header.h"

int main() {
  
  // Here <iostream> is included in a pre-compiled header so we do
  // not have to explicitly include it.
  std::cout << "Hello WORLD 4\n";
  
  return 0;
}