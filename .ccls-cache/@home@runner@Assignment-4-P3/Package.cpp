#include <string>
#include "Package.h"
#include <iostream>
Package::Package(){
  name = "N/A";
  address = "N/A";
  city = "N/A";
  state = "N/A";
  ZIP = 0000;
  weight = 00;
  costPerOunce = 0.0;    
}

Package::Package(const std::string& _name, const std::string& _address,
          const std::string& _city, const std::string& _state, int _ZIP,
          double _weight, double _cost)
                  {
  name = _name;
  address = _address;
  city = _city;
  state = _state;
  ZIP = _ZIP;
  setWeight(_weight);
  setCostPerOunce(_cost);
  //ID++;
}

// Mutator functions to set the weight and cost per ounce of the package
void Package::setWeight(double _weight) {
  if (weight < 0)
  { std::cout<<"Unacceptable value"<<std::endl;
    weight=0;} else
    weight=_weight;
  }
       

  void Package::setCostPerOunce(double _cost) {
  if(_cost < 0){
    std::cout << "Cost can't be negative" << std::endl;
    costPerOunce = 0.0;
  }else
   costPerOunce = _cost;
  }
double Package::calculateCost() const{
  //calculating cost 
  return weight * costPerOunce;
}

void Package::printPackageInfo() const{  
  //formatting output
  std::cout << "--------------------------------------\n" 
               "Package ID " << 1 <<":\n\n" 
                << name <<
               "\n" << address << std::endl
            << city << ", " << state << " " << ZIP << "\n\n" 
               "Cost: $" << calculateCost() << std::endl
            << "---------------------------------------" << std::endl;
}
  
