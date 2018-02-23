#include<iostream>
#include<LaborkaConfig.h>
#ifdef USE_TRIGONOMETRY_DEGREE
#include <trygonometria.h>
#else
#define _USE_MATH_DEFINES
#include <cmath>
#endif



int main() { 

	#ifdef USE_TRIGONOMETRY_DEGREE
	double wyniksin=degreemath::sin(50.0);
	double wynikcos=degreemath::cos(50.0);
	double wyniktg=degreemath::tg(50.0);
	double wynikctg=degreemath::ctg(50.0);

#else
	double wyniksin=sin(M_PI/4.0);
	double wynikcos=cos(M_PI/4.0);
	double wyniktg=tan(M_PI/4.0);
	double wynikctg=1/wyniktg;

#endif
	

	std::cout<<"sin:"<<std::endl;
	std::cout<<wyniksin<<std::endl;
	std::cout<<"cos:"<<std::endl;
	std::cout<<wynikcos<<std::endl;
	std::cout<<"tan:"<<std::endl;
	std::cout<<wyniktg<<std::endl;
	std::cout<<"ctg:"<<std::endl;
	std::cout<<wynikctg<<std::endl;

	return 0;


}