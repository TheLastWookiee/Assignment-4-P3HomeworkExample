#include "OverNightPackage.h"
#include <iostream>
OverNightPackage::OverNightPackage() {
  name = "N/A";
  address = "N/A";
  city = "N/A";
  state = "N/A";
  ZIP = 0000;
  weight = 0.0;
  costPerOunce = 0.0;
  overnightFeePerOunce = 0.0;
}
OverNightPackage::OverNightPackage(const std::string& _name, const std::string& _address,const std::string& _city, const std::string& _state, int _ZIP, double _w, double _cost, double _fe): Package() {

  name=_name;
  address=_address;
  city=_city;
  state=_state;
  ZIP=_ZIP;
  weight=_w;
 costPerOunce=_cost;
 overnightFeePerOunce=_fe;
  
}
void OverNightPackage::setOverNightFeePerOunce(double _fe) {
  if (_fe > 0) {
    overnightFeePerOunce = _fe;
    
  } else {
    std::cout << "Error: overnight fee per ounce must be positive" << std::endl;
    overnightFeePerOunce = 0;
  }
  
}
// override the calculateCost member function to include the additional
// overnight fee per ounce
double OverNightPackage::calculateCost() const {
  
  return Package::calculateCost() + overnightFeePerOunce ;
}

// mutator function to set the overnight fee per ounce


// override the printPackageInfo member function to print the additional
// information of an overnight package
void OverNightPackage::printPackageInfo() const {
  //formatting output
  std::cout << "--------------------------------------\n" 
               "Overnight Package ID " << 3 <<":\n\n" 
                << name <<
               "\n" << address << std::endl
            << city << ", " << state << " " << ZIP << "\n\n" 
               "Cost: $" << calculateCost() << std::endl
            << "---------------------------------------" << std::endl;
}