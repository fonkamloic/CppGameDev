#include <stdio.h>

void print(const char *str){
	printf("Log: %s\n", *str);
}void print(int i){
	printf("Log: %d\n", i);
}void print(float f){
	printf("Log: %f\n", f);
}

int main(void){
	print(0.5f);
	print(10);
	print("Using function overlaoding");
	return 0;
}
