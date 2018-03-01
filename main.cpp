// g++ -g -o pichalol pizza.cpp
// Subido a github 13:38
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <time.h>
#include "rides.h"
#include "car.h"

using namespace std;


const string
	Black = "\033[30m",
	Red = "\033[31m",
	Green = "\033[32m",
	Yellow = "\033[33m",
	Blue = "\033[34m",
	Magenta = "\033[35m",
	Cyan = "\033[36m",
	White = "\033[37m",
	BrightBlack = "\033[30;1m",
	BrightRed = "\033[31;m1",
	BrightGreen = "\033[2;1m",
	BrightYellow = "\033[33;1m",
	BrightBlue = "\033[34;1m",
	BrightMagenta = "\033[35;1m",
	BrightCyan = "\033[36;1m",
	BrightWhite = "\033[37;1m",
	Default = "\033[0m";


int distance( point a, point b ){

	return abs( a.x - b.x ) + abs( a.y - b.y );
}



int main(){


	srand( time( NULL ) );

	char c;
	ifstream in( "example.in" );
	int rows, cols, vehicles, steps, rides, startTime, finishTime, bonus;
	int tmp1, tmp2, tmp3, tmp4;
	point start, finish;

	in >> rows
		>> cols
		>> vehicles
		>> rides
		>> bonus
		>> steps;
	vector<char> newLine( cols );
	vector<vector<char> > pizza( rows, vector<char>() );


	

	// Read the data

	for ( int i = 0; i < rides; i++ ){
		in >> tmp1 >> tmp2;
		start = point( tmp1, tmp2 );
		in >> tmp1 >> tmp2;
		finish = point( tmp1, tmp2 );
		in >> startTime >> finishTime;
		// ! crear viaje con todo esto. Falta el constructor
	}
}
