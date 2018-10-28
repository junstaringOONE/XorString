
#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

#include "XorString.h"

CONST string CONST g_Data [ XS_RANDOM_SIZE_32_4 ] =
{
	XorString ( "Something #1" ),
	XorString ( "Something #2" ),
};

VOID main ( VOID )
{
	cout << g_Data [ 0 ] << endl;
	cout << g_Data [ 1 ] << endl;

	Sleep ( XS_RANDOM_SIZE_256_4 * XS_RANDOM_SIZE_4_4 );
};
