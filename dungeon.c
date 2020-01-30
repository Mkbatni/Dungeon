#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SiZE_ARRAY 130
#define SIZE_CONTENT 110
#define SiZE_ROOMS 10000
#define SIZE_TEMP 7
#define MAX_STRING_SIZE 30
struct Room 
{ 
	    int key;
	       int south, north,east,west;
	          char content[SIZE_CONTENT]; 
};
