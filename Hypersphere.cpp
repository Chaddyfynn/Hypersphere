// Hypersphere.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <time.h>
#include <vector>
#include <string>
#include "./Sample.h"
#include "./Pointer.h"

int main() {
	std::srand((unsigned)time(NULL)); // Seed randomiser with application start time
	Sample sample; // Create sample object with default attributes
	sample.askSample(); // Use UI to change attributes

	std::vector<std::vector<double>> randSample = sample.genSample(); // Generate the sample data  and call it randSample
	SmartPtr<std::vector<std::vector<double>>> pRandSample(&randSample); // Create a smart pointer to randSample
	sample.printVector(pRandSample); // Print randSample

	SmartPtr<std::vector<std::vector<double>>> pRandSample2(&randSample); // Create a smart pointer to randSample
	std::vector<double> square = sample.circleCondition(pRandSample2); // Sum the squares of each vector element along the dimensions
	SmartPtr<std::vector<double>> pSquare(&square); // Create a smart pointer to the data
	sample.print(pSquare); // Print the data
	return 0;
}