#include <stdio.h>
#include <stdlib.h>


typedef struct character {
	char* name;
	char gender[2];
	char class[3];
}ch;

//function prototypes
void title_screen();
int main_menu();


int main(){
	
	title_screen();
	
	return 0;
}

//functions
int main_menu(){
	
	

	
	return n;
}

void title_screen(){

	//word: RPG
	
	//■ ■ ■  ■ ■ ■  ■ ■ ■ 	//first line
	//■   ■  ■   ■  ■ 		//second line 
	//■ ■ ■	 ■ ■ ■  ■ ■ ■ ■ //third line 
	//■ ■    ■      ■   ■ 	//fourth line 
	//■   ■  ■      ■ ■ ■ 	//fifth line
	 
	char c = 254; //■
	int i, j;
	
	//first line
		for(i=0; i<3; i++)
			printf("%c %c %c  ",c,c,c);
			
			printf("\n");
	
	//second line
		for(i=0; i<2; i++)
			printf("%c  %c  ",c,c);

			printf("%c\n",c);
	
	//third line
		for(i=0; i<3; i++)
			printf("%c %c %c  ",c,c,c);

			printf("%c\n",c);

	//fourth line
		printf("%c %c    ",c,c);
		printf("%c      ",c);
		printf("%c  %c\n",c,c);s
		
	//fifth line
		printf("%c  %c  ",c,c);
		printf("%c      ",c);
		printf("%c %c %c  \n",c,c,c);
		
	/*int*/ main_menu();
	
	return;
}










