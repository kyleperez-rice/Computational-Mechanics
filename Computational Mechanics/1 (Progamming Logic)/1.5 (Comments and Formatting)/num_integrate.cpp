#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
#include <utility>
#include <random>

using namespace std;

// A function that generates a random double between lower_bound and upper_bound
double rand_double(double lower_bound, double upper_bound) {
	
	return (upper_bound - lower_bound)*( (double)rand() / (double)RAND_MAX) + lower_bound;

}//end rand_double


// A function that integrates a 1D function. The output is a double.
	// It takes in a function that accepts and outputs doubles as arguments.
	// lower_bound and upper_bound are the upper and lower bounds of the integral respectively
	// num_steps is the size of the partition that the program will create to sum over.
double integrate_1d(double function(double), double lower_bound, double upper_bound, int num_steps) {

	// We initialize the integral to 0.
	double integral_value = 0.0;
	
	// step_size is the distance between two elements of the partition; it is uniform	
	double step_size = (upper_bound-lower_bound)/static_cast<double>(num_steps);
	
	// partition is a vector that records all partition elements in order
	vector<double> partition;
	// partition_samples is a vector that holds a double that is between two elements of the parition
	vector<double> partition_samples;
	
	// We create a partition with num_steps + 1 so we do num_steps in the Riemann Sum
	for (int i = 0; i < num_steps + 1; ++i) {
	
		// For our first step we insert the lower_bound as the 0th element
		if (i == 0) {
			partition.push_back(lower_bound);
		}
		// Otherwise, we insert the previous partition element plus the step size
		else {
			partition.push_back(partition[i-1] + step_size);
		}//end if
		
	}//end for
	
	// partition_samples[i] is a random number between partition[i] and partition[i+1]. We do this so that partition_samples has a length of num_steps
	for (int i = 0; i < partition.size() - 1; ++i) {
		
		partition_samples.push_back(rand_double(partition[i], partition[i+1]));
	
	}//end for
	
	// The integral of our function is approximately the Riemann sum. We evaluate our function at the random elements of partition_samples and multiply this by the step size between parition elements
		//The upper and lower Riemann Sum respectively take the largest and smallest value of the function in an interval; we randomly sample the function instead.
	for (int i = 0; i < partition_samples.size(); ++i) {
		integral_value = integral_value + function(partition_samples[i]) * step_size;
	}//end for
	
	
	// Our function outputs the integral
	return integral_value;

}//end integrate_1d


// This is the function that we want to integrate
double my_function(double x) {

	return sin(x);
}// end my_function

//Program to call the integration function
int main() {

	cout << "My function integrates to " << integrate_1d(my_function, 0.0, 1.0, 1000) << endl;

}//end main
