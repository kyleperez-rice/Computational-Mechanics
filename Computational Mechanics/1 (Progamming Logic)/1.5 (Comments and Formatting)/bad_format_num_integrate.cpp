#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
#include <utility>
#include <random>
using namespace std;
double rand_double(double lower_bound, double upper_bound) {
	return (upper_bound - lower_bound)*( (double)rand() / (double)RAND_MAX) + lower_bound;
}
double integrate_1d(double function(double), double lower_bound, double upper_bound, int num_steps) {
	double integral_value = 0.0;
	double step_size = (upper_bound-lower_bound)/static_cast<double>(num_steps);
	vector<double> partition;
	vector<double> partition_samples;
	for (int i = 0; i < num_steps + 1; ++i) {
		if (i == 0) {partition.push_back(lower_bound);}
		else {partition.push_back(partition[i-1] + step_size);}
	}
	for (int i = 0; i < partition.size() - 1; ++i) {
		partition_samples.push_back(rand_double(partition[i], partition[i+1]));
	}
	for (int i = 0; i < partition_samples.size(); ++i) {
		integral_value = integral_value + function(partition_samples[i]) * step_size;
	}
	return integral_value;
}
double my_function(double x) {return sin(x);}
int main() {
	cout << "My function integrates to " << integrate_1d(my_function, 0.0, 1.0, 1000) << endl;
}
