#include<stdio.h>
#include<time.h>

static int numSteps = 100000;

int main(){
double pi = 0; 
clock_t start_t = clock();

double f(double x){
double p;
p = 4/(1+x*x);
return p;}

double inc = 1./numSteps;
double x = 0;
for (int i = 0; i < numSteps; i++){
x = i*inc;
pi += f(x)*inc;
}

clock_t end_t = clock();

double time_spent = (double)(end_t-start_t)/CLOCKS_PER_SEC*1000;
printf("PI = %4.8f, Duration = %4.8f ms\n", pi, time_spent);
return 0;
}

