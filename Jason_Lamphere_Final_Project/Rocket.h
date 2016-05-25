#ifndef Rock_H
#define Rock_H

// Add any includes and using statements Here
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>


using namespace std;

class RocketShip{
  public:
 

  RocketShip();
  RocketShip(string newName, unsigned int newFuel);
  void setFuel(unsigned int input);
  unsigned int getFuel() const;
  void setName(string input);
  string getName() const;
  void addFuelCell(unsigned int fuelAmount);
  bool removeFuelCell(unsigned int cellNumber);
  bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
  string burnFuel(unsigned int cellNumber);
  bool getCloaked() const;
  void setCloaked();

  
  protected:
    string name;
    unsigned int fuel;
    bool cloaked;
    vector<unsigned int> fuelCells;
};


  
  
  
  
  
}


#endif /* Rock_H */

