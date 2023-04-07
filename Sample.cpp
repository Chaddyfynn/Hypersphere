#include <vector>
#include <iostream>
#include <string>
#include <memory>
#include "./Sample.h"

std::vector<std::vector<double>> Sample :: genSample() {
	// Declare output vector
	std::vector<std::vector<double>> randSample;
	// Append new 1D sample vector for each dimension in this
	for (int i = 0; i < (dimCount); i++) {
		std::vector<double> dimensionSample = genVector();
		randSample.push_back(dimensionSample);
	}
	return randSample;
};
std::vector<double> Sample :: genVector() {
	// Declare output vector
	std::vector<double> randSample;
	// Append this.size random numbers to output vector
	for (int j = 0; j < (size); j++) {
		double randNum = (double)rand() / RAND_MAX;
		randNum = randNum * (max - min) + min;
		randSample.push_back(randNum);
	}
	return randSample;
};
void Sample :: printVector(std::vector<std::vector<double>>* pVct) {
	std::string catVector;
	std::cout << "Printing sample...\n";

	for (std::vector<double> i : *pVct) {
		catVector += "[";
		for (double j : i) {
			catVector += (std::to_string(j) + " ");
		}
		catVector += "]\n";
	}
	std::cout << catVector;
};
void Sample::print(std::vector<double>* pVct) {
	std::string catVector;
	std::cout << "Printing sample...\n";
	catVector += "[";
	for (double i : *pVct) {
		catVector += (std::to_string(i) + " ");
	}
	catVector += "]\n";
	std::cout << catVector;
};
void Sample :: askSample() {
	std::cout << "Please input number of dimensions:\n";
	std::cin >> dimCount;
	std::cout << "Please input sample size per dimension:\n";
	std::cin >> size;
	std::cout << "Please input min value:\n";
	std::cin >> min;
	std::cout << "Please input max value:\n";
	std::cin >> max;
	std::cout << "Values accepted\n";
};
std::vector<double> Sample::circleCondition(std::vector<std::vector<double>>* pVct) {
	std::vector<double> output (size, 0);
	std::vector<std::vector<double>> vct = *pVct;
	double val;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < dimCount; j++) {
			val = vct[j][i];
			output[i] += val * val;
		}
	}
	return output;
};
