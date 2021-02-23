//University of Kentucky
//Cohen Archbold
//CS321 Numerical Methods

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x){ //f(x)
	return pow(x,2) -2*x + 1;
}

float derivative_f(float x){//f(x)
	return 2*x-2;
}

void main(){
	float x; //x0
	int i,n;

	printf("x0 = ");
	scanf("%f",&x);

	printf("Iterations = ");
	scanf("%d", &n);

	if(n > 20){
		printf("Must be below 20 iterations.");
		exit(1);
	}

	while(i <= n){
		x = x - f(x)/derivative_f(x);
		i++;
	}

	float true_error = abs(1-x);
	float estimated_error = abs(f(x)/derivative_f(x));

	printf("Root Result = %f \n", x);
	printf("True Error = %f \n", true_error);
	printf("Estimated_Error %f \n", estimated_error);

}
