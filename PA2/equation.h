/************************************
Header file, declares functions for 
use later on.


*************************************/


 
//  libraries used in program
#include <math.h>
#include <stdio.h>

// defined variables
#define pi 3.14159			
#define G 6.67 * pow(10, -11)

// Used to ignore scanf warnings
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)


/*********************************************************************************

                            Function Declarations

**********************************************************************************/

double calculate_newtons_law(double mass, double accel);

double calculate_volume_cylinder(double radius, double height);

int calculate_ASCII_code(char plaintext_character, int offset);

double calculate_gravitational_force(double mass1, double mass2, double distance);

double calculate_vout(double r1, double r2, double vin);

double get_distance_between_coodinates(double x1, double y1, double x2, double y2);

double compute_general_equation(int a, double z, double x);
