#include <iostream>
#include <vector>
#include <math.h>
using std::pair;
using std::vector;
using std:: make_pair;
double f(double x, double y);

std::vector<std::pair<double, double> > Calculate(double l, double r, int n, double y0);

pair<double, double> difference(vector<pair<double, double> >&correct, vector<pair<double, double> >&approximate);
