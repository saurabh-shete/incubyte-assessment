#include <iostream>
#include <vector>
using namespace std;

struct Coordinates
{
  int x, y, z;
};

enum Direction
{
  N,
  S,
  E,
  W,
  Up,
  Down
};

class Spacecraft
{
public:
  Spacecraft(int x, int y, int z, Direction initialDirection)
      : coordinates({x, y, z}), direction(initialDirection) {}

  void move(char command)
  {
    switch (command)
    {
    case 'f':
      moveForward();
      break;
    case 'b':
      moveBackward();
      break;
    case 'l':
      turnLeft();
      break;
    case 'r':
      turnRight();
      break;
    case 'u':
      turnUp();
      break;
    case 'd':
      turnDown();
      break;
    }
  }

  void printFinalPosition() const
  {
    cout << "Final Position: (" << coordinates.x << ", " << coordinates.y << ", " << coordinates.z << ")\n";
  }

  void printFinalDirection() const
  {
    const char *directionNames[] = {"N", "S", "E", "W", "Up", "Down"};
    cout << "Final Direction: " << directionNames[direction] << "\n";
  }

  int getX() const
  {
    return coordinates.x;
  }

  int getY() const
  {
    return coordinates.y;
  }

  int getZ() const
  {
    return coordinates.z;
  }

  Direction getDirection() const
  {
    return direction;
  }

private:
  Coordinates coordinates;
  Direction direction;
  Direction prevDirection;
  int countUpDown = 0;

  void moveForward()
  {
    switch (direction)
    {
    case N:
      coordinates.y++;
      break;
    case S:
      coordinates.y--;
      break;
    case E:
      coordinates.x++;
      break;
    case W:
      coordinates.x--;
      break;
    case Up:
      coordinates.z++;
      break;
    case Down:
      coordinates.z--;
      break;
    }
  }

  void moveBackward()
  {
    switch (direction)
    {
    case N:
      coordinates.y--;
      break;
    case S:
      coordinates.y++;
      break;
    case E:
      coordinates.x--;
      break;
    case W:
      coordinates.x++;
      break;
    case Up:
      coordinates.z--;
      break;
    case Down:
      coordinates.z++;
      break;
    }
  }

  void turnLeft()
  {
    if (direction == Up || direction == Down)
      direction = prevDirection;
    switch (direction)
    {
    case N:
      direction = W;
      break;
    case S:
      direction = E;
      break;
    case E:
      direction = N;
      break;
    case W:
      direction = S;
      break;
    }
  }

  void turnRight()
  {
    if (direction == Up || direction == Down)
      direction = prevDirection;
    switch (direction)
    {
    case N:
      direction = E;
      break;
    case S:
      direction = W;
      break;
    case E:
      direction = S;
      break;
    case W:
      direction = N;
      break;
    }
  }
};
