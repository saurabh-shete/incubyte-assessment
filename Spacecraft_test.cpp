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

void testMoveForward()
{
  Spacecraft spacecraft(0, 0, 0, Direction::N);
  spacecraft.move('f');

  if (spacecraft.getX() == 0 &&
      spacecraft.getY() == 1 &&
      spacecraft.getZ() == 0 &&
      spacecraft.getDirection() == Direction::N)
  {
    std::cout << "Move Forward Test: Passed\n";
  }
  else
  {
    std::cout << "Move Forward Test: Failed\n";
  }
}

void testMoveBackward()
{
  Spacecraft spacecraft(0, 0, 0, Direction::N);
  spacecraft.move('b');

  if (spacecraft.getX() == 0 &&
      spacecraft.getY() == -1 &&
      spacecraft.getZ() == 0 &&
      spacecraft.getDirection() == Direction::N)
  {
    std::cout << "Move Backward Test: Passed\n";
  }
  else
  {
    std::cout << "Move Backward Test: Failed\n";
  }
}

void testTurnLeft()
{
  Spacecraft spacecraft(0, 0, 0, Direction::N);
  spacecraft.move('l');

  if (spacecraft.getDirection() == Direction::W)
  {
    std::cout << "Turn Left Test: Passed\n";
  }
  else
  {
    std::cout << "Turn Left Test: Failed\n";
  }
}

void testTurnRight()
{
  Spacecraft spacecraft(0, 0, 0, Direction::N);
  spacecraft.move('r');

  if (spacecraft.getDirection() == Direction::E)
  {
    std::cout << "Turn Right Test: Passed\n";
  }
  else
  {
    std::cout << "Turn Right Test: Failed\n";
  }
}

int main()
{

  testInitialPosition();
  testMoveForward();
  testMoveBackward();
  testTurnLeft();
  testTurnRight();
  return 0;
}