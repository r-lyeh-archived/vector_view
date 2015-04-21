#include <iostream>
#include <vector_view>

int main() {
   std::vector<int> abc = {1,2,3};
   std::vector_view<int> abc2 = abc;
   std::vector_view<int> abc3( abc.data(), abc.size() );

   for( auto &i : abc2 ) {
      std::cout << i << std::endl;
   }
   for( auto &i : abc3 ) {
      std::cout << i << std::endl;
   }
}
