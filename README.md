# N Dimensional Hypersphere Volume Calculator
This project is under development and the initial commit may not be fully functional.


Monte Carlo program written in C++ to calculate the volume of an N dimensional hypersphere of any radius. 
Uses the rejection method of a hypersquare random sample to give ratio of points that satisfy the equation of a hypersphere in N dimensions.

## Preliminary Notes
This is a personal project written in C++ as personal practice. Originally, this was written in Python and could handle up to 20 or so dimensions, with 10 million samples in each dimension.
The goal is to produce a more efficient program, using only standard library imports, to handle more dimensions and/or greater sample sizes.  The Python version would allow for greater dimensions/sample sizes, but would require a re-write anyway.

## Current Functionality
Currently, the functionality of the source code is very limited.  There exists one major class, 'Sample', and one class under construction, 'Vector'. 
It is possible to generate a 2D vector of doubles containing random numbers between a min and max specified value (double, 0 and 1 by default respectively).  One axis represents sample length, one axis is dimension number. 
It is also possible to print these vectors in a format similar to Python. <- This will be upgraded to a generic vector print function soon.

### Sample
'''cpp
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
'''