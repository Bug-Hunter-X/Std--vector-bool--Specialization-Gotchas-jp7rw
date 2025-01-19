#include <iostream>
#include <vector>

int main() {
  // Using std::vector<int> instead of std::vector<bool> for clarity and consistency.
  std::vector<int> vec;
  vec.push_back(1); // Represents true
  vec.push_back(0); // Represents false
  
  std::cout << "Element at index 0: " << vec[0] << std::endl;
  std::cout << "Element at index 1: " << vec[1] << std::endl; 
  
  // More robust handling for potential issues
  if(vec[0] != 0) {
      std::cout << "Element 0 is true" << std::endl; 
  }
  
  return 0;
}
