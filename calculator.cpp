#include "calculator.h"

int add_m(int a, int b) {
    return a + b;
}

int sub_m(int a, int b) {
    return a - b;
}

int mul_m(int a, int b) {
    return a * b;
}

int div_m(int a, int b) {
    return a / b;
}

int mod_m(int a, int b) {
    return a % b;
}

int pow_m(int a, int b){
	if(b < 0) return -1;
	int res = 1;
	for(int i = 0; i < b; ++i)
		res *= a;
	return res;
}