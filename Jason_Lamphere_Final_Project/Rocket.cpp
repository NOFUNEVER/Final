#include "Rocket.h"


using namespace std;

  

  RocketShip::RocketShip() : fuel(1000), name("RS NullPointer"){}
  RocketShip::RocketShip(string newName, unsigned int newFuel){
    name = newName;
    fuel = newFuel;
  }

  void RocketShip::setFuel(unsigned int input){
    
    fuel = input;
    
  }
  
  unsigned int RocketShip::getFuel() const{
    
    return fuel;
    
  }
  void RocketShip::setName(string input){
    
    name = input;
  }
  
  string RocketShip::getName() const{
    
    return name;
    
    
  }
  
  void RocketShip::addFuelCell(unsigned int fuelAmount){
  
  fuelCells.push_back(fuelAmount);  
    
  }
  
  bool RocketShip::removeFuelCell(unsigned int cellNumber){
     if( fuelCells.size() < cellNumber+1 || cellNumber<0){
       
       
       return false;
       
     }
     else
     
       fuelCells.erase(fuelCells.begin()+cellNumber);
       return true;
  
         
     
    
    
  }
  
  
  
  bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount){
  if( fuelCells.size() < cellNumber+1 || cellNumber<0){
    
    return false;
    
  }
 
else 
  fuelCells.at(cellNumber) = fuelAmount;
  
  return true;
  }
  
  
  
  string RocketShip::burnFuel(unsigned int cellNumber ){
  stringstream ss;
  if(fuelCells.size() == 0 || cellNumber+1 > fuelCells.size()|| fuelCells.empty()){
    return "";
    
  }
  if (fuelCells.at(cellNumber) == 0){
    return "";
  }
  
   
  
  while(fuelCells.at(cellNumber) >0){
    ss << "*";
    fuelCells.at(cellNumber) --;
  
  }
  
    fuelCells.at(cellNumber) = 0;
    
    return ss.str();  
  
    
  }




 SpecialRocketShip::SpecialRocketShip() : RocketShip("RS Cloaky", 1000), cloaked(false) {}

    void SpecialRocketShip::setCloaked(bool cloaked_){
      
      cloaked=cloaked_;
      
    }
    bool SpecialRocketShip::getCloaked() const {
      
      return cloaked;
      
      
    }
   
