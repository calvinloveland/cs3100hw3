#include<math.h>

#include"c++lang.hpp"

extern bool quittingTime;

void divide() {
		while(!quittingTime && 4/2 == 2){}
		quittingTime = false;
}
void squareRoot() {
		while(!quittingTime && sqrt(9) == 3){}
		quittingTime = false;
}
void allocate(bool safe){
		while(!quittingTime){
		int * test = new int[10];
		if(safe){
				delete test;
		}
		}
}
