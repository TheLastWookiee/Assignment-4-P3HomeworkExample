#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
class Package {
protected:
  std::string name;
  std::string address;
  std::string city;
  std::string state;
  int ZIP;
  double weight;
  double costPerOunce;
// Static data member ID
  static int ID;

public:
  
Package();
  Package(const std::string& _name, const std::string& _address,
          const std::string& _city, const std::string& _state, int _ZIP,
          double _weight, double _cost);
  void setWeight(double _weight);
  void setCostPerOunce(double _cost);
  double calculateCost() const;
  void printPackageInfo() const;
};
#endif