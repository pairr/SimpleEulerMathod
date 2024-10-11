#include "EulerCalc.h"

double f(double x, double y)
{
	double ans = y - x * x;
	return ans;
}

std::vector<std::pair<double, double> > Calculate(double l, double r, int n, double y0)
{
	double h = (r - l) / n;
	
	std::vector<std::pair<double, double> >xy(n + 1);
	
	for(int i = 0; i < n + 1; i++)
	{
		xy[i].first = h * i;
	}
	
	xy[0].second = y0;
	
	for(int i = 1; i <= n; i++)
	{
		double prevx, prevy;
		prevx = xy[i - 1].first;
		prevy = xy[i - 1].second;
		
		xy[i].second = prevy + f(prevx, prevy) * h;
	}
	
	return xy;
}

