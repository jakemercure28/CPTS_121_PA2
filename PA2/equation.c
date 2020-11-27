
//	acess to the header file
#include "equation.h"

/****************************************
Equation: Newtons Law

Preconditions: doubles
*****************************************/
double calculate_newtons_law(double mass, double accel)  // function definition 
{
	//local variable
	double force = 0;
	force = mass * accel;
	return force;	// returns calculated local variable
}


/****************************************
Equation: Cylindrical volume calculation

Preconditions: doubles
*****************************************/
double calculate_volume_cylinder(double radius, double height)
{
	double volume = 0;
	volume = pi * radius * radius * height;  // performs calculation
	return volume;  // returns volume of cylinder
}

/********************************************************************************
Equation: Encode and offset Char

Preconditions: Character must be type char, offset <= 127 and offset >= 0
*********************************************************************************/
int calculate_ASCII_code(char plaintext_character, int offset)
{
	char encoded_character = '\n';
	encoded_character = offset + (plaintext_character - 'a') + 'A';  // calculation for offsetting the entered character
	return encoded_character;
}

/****************************************
Equation: Gravitational force calculation

Preconditions: Doubles
*****************************************/
double calculate_gravitational_force(double mass1, double mass2, double distance)  
{
	double force;
	force = G * mass1 * mass2 * distance; // performs calculation
	return force; 
}


/****************************************
Equation: Vout Calculation

Preconditions: Doubles
*****************************************/
double calculate_vout(double r1, double r2, double vin)  
{
	double vout = 0;
	vout = r2 / (r1 + r2) * vin;
	return vout;
}


/****************************************
Equation: Distance Between Coordinates

Preconditions: x1 > x2 and y1 > y2
*****************************************/
double get_distance_between_coodinates(double x1, double y1, double x2, double y2)
{
	double exponent = 0, squareroot;
	exponent = pow(x1 - x2, 2) - (pow(y1 - y2, 2));  // midpoint calculation assinged to line variable
	squareroot = sqrt(exponent);
	return exponent;
}

/****************************************
Equation: General

Preconditions: 'a' must be odd
*****************************************/
double compute_general_equation(int a, double x, double z)
{
	double equation = 0;
	equation = (89 / 27) - z * x + a / (a % 2);  
	return equation;
}