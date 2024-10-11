#include "GaussCalc.h"
using std::vector;
using std::pair;
using std::cout;
using std::endl;
int main()
{
	double l = 0, r = 1;
	int n = 100;
	double y0 = 3;
	
	vector<pair<double, double> >xy;
	
	xy = Calculate(l, r, n, y0);
	
	cout << "{ {" << xy[0].first << ", " << xy[0].second << "}";
	for(size_t i = 1; i != xy.size(); i++)
	{
		cout << ", {" << xy[i].first << ", " << xy[i].second << "}";
	}
	cout << "}\n";
}
