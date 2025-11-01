// TODO : add class for reading the data from csv file with n dimensions
// TODO : expand the dimension of the points from 2 to n

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
    //std::cout << kmeansPts;

    return 0;
}