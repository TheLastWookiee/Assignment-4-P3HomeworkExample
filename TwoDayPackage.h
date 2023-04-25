#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <string>
#include "Package.h"

// TwoDayPackage is a derived class of Package
class TwoDayPackage : public Package {
public:
    // default constructor
    TwoDayPackage();
    // constructor that accepts values for all member variables
    TwoDayPackage(const std::string& _name, const std::string& _address, const std::string& _city, const std::string& _state, int _ZIP, double _weight, double _cost, double _fee);
    // mutator function to set the flat fee
    void setFlatFee(double flatFee);
    // overridden member function to calculate the shipping cost
    double calculateCost() const;
    // overridden member function to print package information
    void printPackageInfo() const;

private:
    double flatFee;
};

#endif