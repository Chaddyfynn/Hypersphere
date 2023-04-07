#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Sample {
public:
	int dimCount = 1;
	int size = 10;
	int min = 0;
	int max = 1;
	std::vector<std::vector<double>> genSample();
	std::vector<double> genVector();
	void printVector(std::vector<std::vector<double>> * pVct);
	void print(std::vector<double>* pVct);
	void askSample();
	std::vector<double> circleCondition(std::vector<std::vector<double>>* pVct);
};