#include <iostream>
#include <stdexcept>
#include "assessment.cpp"

void testInitialPosition()
{
  Spacecraft spacecraft(0, 0, 0, Direction::N);

  if (spacecraft.getX() == 0 &&
      spacecraft.getY() == 0 &&
      spacecraft.getZ() == 0 &&
      spacecraft.getDirection() == Direction::N)
  {
    std::cout << "Initial Position Test: Passed\n";
  }
  else
  {
    std::cout << "Initial Position Test: Failed\n";
  }
}

int main()
{

  testInitialPosition();
  return 0;
}