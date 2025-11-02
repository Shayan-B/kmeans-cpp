#include <armadillo>
#include "include/kMeans.h"
#include "include/csv.hpp"

import <iostream>;

int main() {

    // Defines a class with 3 groups for data and 100 points to choose from
    //kMeans kmeansPts(3, 100);
    kMeanspp kmeansPts(3, "test_data.csv");
    kmeansPts.searchCenters();

    std::cout << "Programs is done.\n";
    std::cout << kmeansPts;

    return 0;
}