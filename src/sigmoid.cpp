#include "sigmoid.h"
#include <math.h>
#include <stdio.h>

sigmoid::sigmoid(double x2one, double x2zero)
{
	double x_len = (x2one - x2zero) / 2;
	b_ = (x2zero + x2one) / 2;
	if(x_len == 0){
		a_ = 0;
	}else{
		a_ = -4 / x_len;
	}
	printf("a_ %f, b_ %f\n", a_, b_);
}

double sigmoid::get_y(double x)
{
	double ex = exp(a_ * (x-b_));
	return ex / (ex+1);
}
