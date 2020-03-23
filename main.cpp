#include <iostream>
#include "math_tools.h"
#include "display_tools.h"


int main(void) {

Matrix mprin, minversa;

zeroes(mprin, 3);

mprin.at(0).at(0) = 2; mprin.at(0).at(1) = 2; mprin.at(0).at(2) = 3;
mprin.at(1).at(0) = 4; mprin.at(1).at(1) = 5; mprin.at(1).at(2) = 6;
mprin.at(2).at(0) = 7; mprin.at(2).at(1) = 8; mprin.at(2).at(2) = 9;
showMatrix(mprin);
cout<<endl;

inversa(mprin, minversa);

showMatrix(minversa);

return 0;

}