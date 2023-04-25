#include "TwoDayPackage.h"
#include <iostream>

// default constructor
TwoDayPackage::TwoDayPackage() {
  name = "N/A";
  address = "N/A";
  city = "N/A";
  state = "N/A";
  ZIP = 0000;
  weight = 0.0;
  costPerOunce = 0.0;
  flatFee = 0.0;
    
}

// constructor that accepts values for all member variables
TwoDayPackage::TwoDayPackage(const std::string& _name, const std::string& _address, const std::string& _city, const std::string& _state, int _ZIP, double _weight, double _cost, double _fee):Package() {
   
  //using set functions to assign weight, cost and fee
  name=_name;
  address=_address;
  city=_city;
  state=_state;
  ZIP=_ZIP;
  weight=_weight;
 costPerOunce=_cost;
  flatFee=_fee;
}

// mutator function to set the flat fee
void TwoDayPackage::setFlatFee(double fee) {
    if (fee <= 0) {
        std::cout << "Invalid flat fee provided. Setting fee to 0." << std::endl;
        fee = 0;
    }
    flatFee = fee;
}

// overridden member function to calculate the shipping cost
double TwoDayPackage::calculateCost() const {
    return Package::calculateCost() + flatFee;
}

// overridden member function to print package information
void TwoDayPackage::printPackageInfo() const {
      //formatting output
  std::cout << "--------------------------------------\n" 
               "Two Day Package ID " << 2 <<":\n\n" 
                << name <<
               "\n" << address << std::endl
            << city << ", " << state << " " << ZIP << "\n\n" 
               "Cost: $" << calculateCost() << std::endl
            << "---------------------------------------" << std::endl;
}
