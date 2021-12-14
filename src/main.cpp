#include <stdio.h>
#include <stdlib.h>

#include <random>
#include <iostream>
#include <vector>

#include "sigmoid.h"

using namespace std;

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_real_distribution<> distr(-1, 1);
double r(){
	return distr(gen);
}

int main()
{
	int num_test = 1;
	double a = 5;
	int size_buf = 100;
	
	for(int i=0;i<num_test;++i){
		double x0 = a * r();
		double x1 = a * r();
		sigmoid sig(x0, x1);

		for(double x = -a;x<= a;x += 0.2){
			vector<char> buf;
			double y = sig.get_y(x);
			for(int j=0;j<size_buf;++j){
				if(j < size_buf * y){
					buf.push_back('#');
				}else{
					buf.push_back(0);
					break;
				}
			}
			printf("(% 0.2f, % 0.2f) x% 0.2f y% 0.2f %s\n", x0, x1, x, y, string(&buf[0], buf.size()).c_str());
		}
	}
	return 0;
}
