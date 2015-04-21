#include <iostream>
#include <vector_view>

int main() {
   int mem[] = {1,2,3};
   std::vector<int> abc1 = { 1,2,3 };
   std::vector_view<int> abc2 = abc1;
   std::vector_view<int> abc3( abc1.data(), abc1.size() );
   std::vector_view<int> abc4( &mem[0], 3 );

   for( auto &i : mem  ) std::cout << i << ','; std::cout << std::endl;
   for( auto &i : abc1 ) std::cout << i << ','; std::cout << std::endl;
   for( auto &i : abc2 ) std::cout << i << ','; std::cout << std::endl;
   for( auto &i : abc3 ) std::cout << i << ','; std::cout << std::endl;
   for( auto &i : abc4 ) std::cout << i << ','; std::cout << std::endl;
}
