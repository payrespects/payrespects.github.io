#include <iostream>
#include <conio.h>

int main()
{
  char choice = 'x';
  char respects = 'f';
  while (choice != 'F')
  {
    std::cout << "Press F to pay respects" << std::endl;
    choice = _getch();
    if (choice == 'F' || choice == 'f')
    {
      std::cout << "You paid your respects." << std::endl;
      break;
    }
    else
    {
      std::cout << "You didn't pay your respects" << std::endl;
    }
  }
  return 0;
}