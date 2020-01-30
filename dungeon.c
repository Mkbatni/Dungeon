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
void adventure();
int main()
{
	adventure();
return 0;
}
void adventure()
{
	
	char prompArr[MAX_STRING_SIZE];
	printf("%s ","$" );
	fgets(prompArr, sizeof(prompArr), stdin);
	int k = 0;
	char temp[15];
	while(prompArr[k] != ' ')
	{
		temp[k] = prompArr[k];
		k++; 
	}      
	temp[k] = '\0';
	
	if (strcmp(temp, "loaddungeon") == 0)
	{
		char textFile[10]; 
		int i = 0;
		k +=1;
		while(prompArr[k] != '\n')
			textFile[i++] = prompArr[k++];
		textFile[i] = '\0';
		loaddungeon(textFile);
	}
	else
	{
		adventure();
	}
//After the file 

	adventure2();


}