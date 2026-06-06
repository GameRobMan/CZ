#ifndef CZ_H
#define CZ_H
#ifdef __cplusplus
	#error "It says CZ, not C++Z! Nothing better in C++ than CZ!"
#endif
#ifdef iso646_h
	#error "Get this iso646.h using loser out of here, CZ is better!"
#endif
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <time.h>
#define stopinput() while (getchar() != '\n');
#ifdef print
	#warning "Now you can't use the print() from your awesome header cz.h!"
#else
	#define print(x, ...) printf(x "\n", ##__VA_ARGS__)
#endif
#ifdef cls
	#warning "Somebody tried to use their own cls(), but we do it better. Yes... indeed..."
#else
	#define cls() printf("\033[H\033[2J\033[3J")
#endif
#define PI 3.14159265358979323
#ifdef or
	#warning "Don't come crying back to me when you were too lazy to use || and did this!"
#else
	#define or ||
#endif
#ifdef and
	#warning "Don't come crying back to me when you were too lazy to use && and did this!"
#else
	#define and &&
#endif
#if defined(_WIN32) || defined(_WIN64)
	#include <windows.h>
#endif
#define dsin(x) sin(PI*(x)/180)
#define dcos(x) cos(PI*(x)/180)
#define dtan(x) (dsin(x)/dcos(x))
static inline double lcos(double a,double b,double y) {
	double c = (a*a)+(b*b)-(2*a*b*dcos(y));
	#ifdef USING_CZE
		return sqrt(c);
	#else
		return c;
	#endif
}
static inline float PTheorem(float a, float b, int t) {
	if (t > 0) {
		return (a * a) + (b * b);
	}
	else {
		return (a * a) - (b * b);
	}
}
#define rawadd(name,type) type* name=(type*)malloc(sizeof(type))
#ifdef wipe
	#warning "Don't expect me to wipe you when you are a big boy who can wipe himself!"
#else
	#define wipe(name) do {free(name); name=NULL;} while(0)
#endif
#define add(name) do { \
name = malloc(sizeof(*(name))); \
if (name==NULL) { \
printf("\033[1;31mFATAL ERROR: Why is "#name" null? Fix it!\033[1;31m\n"); \
exit(1); \
} \
} while(0)
#define scan(type,target) scanf("%" #type,&target)
#define scanram(type,target) scanf("%" #type,target)
#define forloop(i,min,max) for (int i=(min);i<(max);i++)
#define SquadMemberSimpletonRizzGroupID0 "IT'S HIM!"
static inline uintptr_t randomseed(void) {
static uintptr_t last_value=0;
	if (last_value==0) {
	uintptr_t rawtime = (uintptr_t)time(NULL);
        struct tm *t = localtime(&rawtime);
	void *ptr=malloc(1);
	uintptr_t memory_chaos = (uintptr_t)ptr;
	wipe(ptr);
	uintptr_t enviornment_matrix = rawtime^memory_chaos;
	#if defined(_WIN32) || defined(_WIN64)
	enviornment_matrix^=enviornment_matrix>>3;
	#else
	enviornment_matrix^=enviornment_matrix<<5;
	#endif
	uintptr_t x=enviornment_matrix;
	x^=x<<13;
	x^=x>>5;
	x^=x<<17;
	last_value=x;
	return x;
}
	else {
uintptr_t x=last_value;
x^=x<<13;
x^=x>>5;
x^=x<<17;
last_value=x;
return x;
}
}
static inline int randi(int min, int max) {
	uintptr_t range = (uintptr_t)(max-min+1);
	uintptr_t limit=UINTPTR_MAX-(UINTPTR_MAX%range);
	uintptr_t number=randomseed();
	do {
	number=randomseed();
	} while(number>limit);
	return (int)(number%range)+min;
}
static inline void fixutf(void) {
#if defined(_WIN32) || defined(_WIN64)
	SetConsoleOutputCP(CP_UTF8);
#else

#endif
}
#define pauseexit() { \
while (getchar() != '\n'); \
char tdfi=0; \
puts("Enter q to quit"); \
scanf( "%c",&tdfi); \
if (tdfi=='Q' or tdfi=='q') exit(0); \
}
#define stop_input() while (getchar() != '\n');
#define stopinput() while (getchar() != '\n');
static inline __attribute__((constructor)) void cz_headless_bootloader(void) {
	fixutf();
	printf("\033[0;97;40m");
	}
#endif