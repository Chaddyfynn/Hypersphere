// Hypersphere.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <time.h>
#include <vector>
#include <string>
#include <memory>
#include "./Sample.h"

int main() {
	std::srand((unsigned)time(NULL)); // Seed randomiser with application start time
	Sample sample; // Create sample object with default attributes
	sample.askSample(); // Use UI to change attributes

	std::vector<std::vector<double>> randSample = sample.genSample(); // Vector generated from sample object
	std::vector<std::vector<double>>* pRandSample = &randSample; // Pointer to randSample
	// sample.printVector(pRandSample); // Print randSample

	std::vector<double> square = sample.circleCondition(pRandSample); // Squares of each vector element along the dimension axis
	delete[] pRandSample;
	std::vector<double>* pSquare = &square; // Pointer to square
	// sample.print(pSquare); // Print the data
	delete[] pSquare;
	return 0;
}