#include <iostream>
#include <functional>

int main()
{
  std::cout<<"Hello, world!\n";
  auto lam = [out=std::ref(std::cout<<"Hello")](){out.get() << "World\n";};
  lam();
  return 0;
}
