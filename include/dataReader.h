// TODO: Class should have a data matrix as the outout for other classes.

import <iostream>;
import <string>;

#include <armadillo>;
#include "csv.hpp";
//#include "kMeansBase.h";

class dataReader {
	friend class kMeansBase;
public:
	dataReader() = default;
	dataReader(std::string adr) : fileAdr(adr) { readCsvData(); }

	dataReader& readCsvData();
private:
	std::string fileAdr{ "" };
	arma::mat dataMat;
};

dataReader& dataReader::readCsvData() {
    std::vector<double> fieldData;
    csv::CSVReader reader(fileAdr);
    int rowCntr{ 0 };
    int rowSize{ 1 };

    // Input iterator
    for (csv::CSVRow& row : reader) { 
        
        if(rowCntr == 0){ rowSize = row.size(); }
        
        for (auto idx{ 0 }; idx < row.size(); ++idx) {
            fieldData.push_back(row[idx].get<double_t>());
        }

        //if (rowCntr == 10) { break; }
        ++rowCntr;
    }
    dataMat = arma::mat(fieldData);
    //arma::mat fieldMat(fieldData);
    double numRows = dataMat.size() / rowSize;

    dataMat = arma::reshape(dataMat, rowSize, numRows).t();

    std::cout << "Done reading the data. the shape of the data is " << dataMat.n_rows << " " << dataMat.n_cols << std::endl;
    std::cout << "A preview of the data is as below: \n";
    dataMat.brief_print();
    std::cout << "Continuing with the rest of the application...\n"
        << "---------------------\n";

	
	return *this;
}