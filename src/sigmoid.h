#ifndef __U_SIGMOID__
#define __U_SIGMOID__

class sigmoid {
public:
	sigmoid(double x2one, double x2zero);
	double get_y(double x);

private:
	double a_;
	double b_;
};
#endif
