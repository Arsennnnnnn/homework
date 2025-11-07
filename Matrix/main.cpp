#include <iostream>
#include <fstream>
#include "classMatrix.h"

int main() {
    std::ofstream createFile("input.txt");
    createFile << "3 3\n";
    createFile << "1 2 3\n";
    createFile << "4 5 6\n";
    createFile << "7 8 9\n";
    createFile.close();
    matrix mat(3, 3);
    mat.readFromFile("input.txt");
    mat.writeToFile("output.txt");
    std::cout << mat << std::endl;
    return 0;
}

