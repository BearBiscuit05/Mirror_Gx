#include <iostream>
#include <vector>
#include "../device/gs_top.h"

#define NUM 4

using namespace std;

int main() {
	vector<int> A{1,2,3,4};
	vector<int> B{-1,-2,-3,-4};
	vector<int> ref{0,0,0,0};

	int a[4] = {1,2,3,4};
	int b[4] = {-1,-2,-3,-4};
	gs_top(a,b,NUM);

	for(int i =0 ; i < NUM ; i++) {
		if(b[i] != ref[i])
			return -1;
	}
	std::cout << "simulate success" << std::endl;
	return 0;

}
