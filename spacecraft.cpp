#include <iostream>
using namespace std;
#include "assessment.cpp"
int main()
{

  int startX = 0, startY = 0, startZ = 0;
  Direction initialDirection = N;
  vector<char> commands;
  cout << "Enter a sequence of commands (f, b, l, r, u, d), one character at a time. Enter 'q' to finish: " << endl;
  char input;
  while (cin >> input && input != 'q')
  {
    commands.push_back(input);
  }

  Spacecraft spacecraft(startX, startY, startZ, initialDirection);

  for (char command : commands)
  {
    spacecraft.move(command);
  }

  spacecraft.printFinalPosition();
  spacecraft.printFinalDirection();
}