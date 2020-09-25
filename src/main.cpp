#include <iostream>
#include "node.h"


int main() {
  auto *node_a = new cpp_gtest_sandbox::tree::Node<int>(1, nullptr, nullptr);
  std::cout << node_a << std::endl;
  delete node_a;
}
