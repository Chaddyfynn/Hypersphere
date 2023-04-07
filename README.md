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
The Sample class contains a number of functions to generate a vector of random numbers of any specified length, or number of spatial dimensions. 
Below is an example of generating a cubic sample of random numbers for potential use in calculating the volume of a sphere without pi.


```cpp
Sample sampleExample; // Create default Sample object
sampleExample.size = 1000000; // Assign size per dimension
sampleExample.dimCount = 3; // Assign number of dimensions

std::vector<std::vector<double>> randSample = sampleExample.genSample(); // Generate randSample vector from sampleExample attributes
std::vector<std::vector<double>>* pRandSample = &randSample; // Pointer to randSample
sample.printVector(pRandSample); // Print randSample

delete[] pRandSample // Pointer deletion
```

The class relies on manual memory management.  Vectors of random samples must be passed in as pointers.  
In this version, the data type must be specified in full, however the Vector class update will make declaring vectors easy.  See below:


Future functionality:
```cpp
Vector::NVector<2, double> randSample = sampleExample.genSample();
```

Additionally all print functions will be contained within the NVector class or struct.