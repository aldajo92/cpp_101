/*
 * Car.cpp
 *
 *  Created on: Jan 27, 2017
 *      Author: algomez
 */

#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() {
	cout << "Car Created!!" << endl;
}

void Car::run() {
	cout << "Running..." << endl;
}

void Car::stop() {
	cout << "Stopped!" << endl;
}
