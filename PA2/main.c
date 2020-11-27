/***********************************************
This program will prompt for user input and
perform calcluations with given equations.

Name: Jake Mercure
Date: Febuary 5th 2020
Assignment: PA2, Cpts 121


**************************************************/

//	access to the header file
#include "equation.h"
//	access to the math funcitons library
//	used for the POW() function
#include <math.h>


int main(void)  // main function 
{
	// newtons law equation
	double mass = 0, accel = 0, force = 0;
	printf("Enter the mass and accleration for use in newtons second law Newton's second law (mass * acceleration = force): ");
	scanf("%lf%lf", &mass, &accel);  // prompts user for input
	force = calculate_newtons_law(mass, accel);  // calculates force with newtons law function
	printf("Force: %.2lf", force);


	//volume of cylinder equation
	double radius = 0, height = 0, volume = 0;   // double variable types
	printf("\n\nEnter the radius and height (pi * radius^2 * height = volume) to use in the cylindrical equation: ");
	scanf("%lf%lf", &radius, &height);  // prompts user for input
	volume = calculate_volume_cylinder(radius, height);
	printf("Volume: %.2lf", volume);


	// character encoding and offset calculation
	char plaintext_character = 'null', encoded_character = 'null';  // char data types set to null value
	int offset = 0;
	printf("\n\nEnter a character and an integer: ");
	scanf(" %c %d", &plaintext_character, &offset);   // prompts user for input, char then integer
	plaintext_character = calculate_ASCII_code(plaintext_character, encoded_character, offset);
	printf("Encoded Character: %c", plaintext_character);
	

	// gravitational force calculation
	double mass1 = 0, mass2 = 0, distance = 0, forcegravity = 0;  //double variables used in calculation
	printf("\n\nEnter the values of mass 1, mass 2 and distance (gravity * mass 1 * mass 2 * distance = force): ");
	scanf("%lf%lf%lf", &mass1, &mass2, &distance); // prompts user for input
	forcegravity = calculate_gravitational_force(mass1, mass2, distance);
	printf("\nForce: %.2e", forcegravity);


	// resistive devider calculation
	double r1 = 0, r2 = 0, vin = 0, vout = 0;  //double variables used in calculation
	printf("\n\nEnter R1, R2 and vin for Resistive divider equation (r2 / (r1 + r2) * vin = vout): ");
	scanf("%lf%lf%lf", &r1, &r2, &vin);
	vout = calculate_vout(r1, r2, vin);
	printf("\nVout: %.2lf", vout);

	
	// distance between two coordinate points calculation
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0, line = 0;  //double variables used in calculation
	printf("\n\nEnter two coordinate points(x y x y): ");
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	line = get_distance_between_coodinates(x1, y1, x2, y2);
	printf("\nDistance between points: %.2lf",line);


	//general equation calculation
	int a = 0;   // variable declarations
	double z = 0, x = 0, y = 0;
	printf("\n\nEnter an odd integer: "); // prompts user for integer variable
	scanf("%d", &a);
	printf("Enter two floating point values: ", z, x); // prompts user for double variable
	scanf("%lf%lf", &z, &x);
	y = compute_general_equation(a, x, z);
	printf("Equation solved: %.2lf", y);





	return 0;

}