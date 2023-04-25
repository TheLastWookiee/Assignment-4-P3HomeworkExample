#ifndef OVERNIGHT_H
#define OVERNIGHT_H
#include <iostream>
#include "Package.h"
#include <string>
class OverNightPackage : public Package {
private:
double overnightFeePerOunce;

public:
//default
OverNightPackage();
// constructor that creates an overnight package with the specified parameters
OverNightPackage(const std::string& _name, const std::string& _address,      
const std::string& _city, const std::string& _state, int _ZIP, double _w, double _cost, double _fe);
// override the calculateCost member function to include the additional overnight fee per ounce
double calculateCost() const ;

// mutator function tor set the overnight fee per ounce
void setOverNightFeePerOunce(double _fe) ;

// override the printPackageInfo member function to print the additional information of an overnight package
void printPackageInfo() const ;
};
#endif