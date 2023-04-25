#ifndef OVERNIGHT_H
#define OVERNIGHT_H
#include <iostream>
#include "Package.h"
class OverNightPackage : public Package {
private:
double overnightFeePerOunce;

public:
// constructor that creates an overnight package with the specified parameters
OvernightPackage(const std::string &n, const std::string &a, const std::string &c, const std::string &s, int z, double w, double cpo, double f);
// override the calculateCost member function to include the additional overnight fee per ounce
double calculateCost() const ;

// mutator function tor set the overnight fee per ounce
void setOvernightFeePerOunce(double f) ;

// override the printPackageInfo member function to print the additional information of an overnight package
void printPackageInfo() const ;
};
#endif