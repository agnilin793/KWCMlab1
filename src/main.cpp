#include<iostream>
#include <trygonometria.h>
int main() { /*...*/
	
	double wyniksin=degreemath::sin(50.0);
	double wynikcos=degreemath::cos(50.0);
	double wyniktg=degreemath::tg(50.0);
	double wynikctg=degreemath::ctg(50.0);
	
	
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