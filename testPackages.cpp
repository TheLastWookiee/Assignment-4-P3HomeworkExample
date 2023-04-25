#include <iostream>
#include <string>
#include "Package.h"
#include "OverNightPackage.h"
#include "TwoDayPackage.h"

int main() {
// create a package object p1
Package p1("John Smith", "1020 Orange St", "Lakeland", "FL", 33111, 10.5, 0.4);

// create a two-day package object p2
TwoDayPackage p2("Bob George", "21 Pine Rd", "Cambridge", "MA", 44444, 10.5, 0.65, 2.0);

// create an overnight package object p3
OverNightPackage p3("Don Kelly", "9 Main St", "Denver", "CO", 66666, 12.25, 0.7, 0.25);

// print the information of p1, p2, and p3
p1.printPackageInfo();
p2.printPackageInfo();
p3.printPackageInfo();

return 0;
}