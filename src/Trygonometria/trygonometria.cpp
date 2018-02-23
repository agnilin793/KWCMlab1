#include "trygonometria.h"
#define _USE_MATH_DEFINES
#include <cmath>

double degreemath::sin(double degree) {
double radian=degree*M_PI/180.0;
return std::sin(radian); //funkcja biblioteczna z piku <cmath>
}

double degreemath::cos(double degree) {
double radian=degree*M_PI/180.0;
return std::cos(radian); //funkcja biblioteczna z piku <cmath>
}

double degreemath::tg(double degree) {
double radian=degree*M_PI/180.0;
return std::tan(radian); //funkcja biblioteczna z piku <cmath>
}

double degreemath::ctg(double degree) {
double radian=degree*M_PI/180.0;
double ctg=1/(tan(radian));
return ctg;
}

