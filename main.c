#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define numOp 3 //number of options in the main menu
#define code -32 //number for directional key

/*
typedef struct structure {
	int n;
	char c;
	double d;
}st;
*/

typedef struct Character {
	char* name;
	char* gender;
	char* class;
	
	//stats
	struct Stats{
		int level;
		int souls; //souls = coins. From Dark Souls
		int vit; //vitality
		int str; //strength
		int dex; //dexterity
		int res; //resistance
	}stats;
	
	//equip
	struct Equip{
		//weapons/shields
		char* r_hand; //right hand
		char* l_hand; //left hand
	
		//armor
		char* head;
		char* chest;
		char* hands;
		char* legs;
	}equip;
	
	//status
	struct Status{
		int hp; //hit points
		int equip_load;
		int item_discovery;
		int poise;
		int humanity;//from Dark Souls
		
		//resistances
		int bleed_res;
		int poison_res;
		int curse_res;
		
		//weapons/shields
		int r_weapon; //attack of weapon equipped in right hand
		int l_weapon; //attack of weapon equipped in left hand
		
		//defense
		int physical_def;
		int magic_def;
		int flame_def;
		int lightning_def;
	}status;
	
}ch;

//title screen
int title_screen();
int main_menu();

//menu options
void new_game();
// void load_game();
// void exit_game();

//other
void directional_key(int *i, int *j, char *c);
void arrow_keys(int *i, int *j, char *c);
//void help();

int main(){
	
	// switch(title_screen()){
		// case 1:
			// //new_game(); break;
		// case 2:
			// //load_game(); break;
		// case 3:
			// //exit_game();
	// }
	
	new_game();
	printf("\n\nBye");
	
	return 0;
}


//title screen

int title_screen(){

	//word: RPG
	
	//■ ■ ■  ■ ■ ■  ■ ■ ■ 	//first line
	//■   ■  ■   ■  ■ 		//second line 
	//■ ■ ■	 ■ ■ ■  ■ ■ ■ ■ //third line 
	//■ ■    ■      ■   ■ 	//fourth line 
	//■   ■  ■      ■ ■ ■ 	//fifth line
	 
	char c = 254; //■
	int i, j, n=1;
	
	do{
		system("cls");
		
		//first line
			for(i=0; i<3; i++){
				printf("%c %c %c  ",c,c,c);
			}
				
				printf("\n");
		
		//second line
			for(i=0; i<2; i++)
				printf("%c   %c  ",c,c);

				printf("%c\n",c);
		
		//third line
			for(i=0; i<2; i++)
				printf("%c %c %c  ",c,c,c);

				printf("%c %c %c %c\n",c,c,c,c);

		//fourth line
			printf("%c %c    ",c,c);
			printf("%c      ",c);
			printf("%c   %c\n",c,c);
			
		//fifth line
			printf("%c   %c  ",c,c);
			printf("%c      ",c);
			printf("%c %c %c \n\n\n",c,c,c);

	}while(main_menu(&n)!=13);//13=enter key
	
	
	return n;
}

int main_menu(int *n){
	
	char c;
	char *op[numOp];
	
	op[0] = "New game";
	op[1] = "Load game";
	op[2] = "Exit";
	

	switch(*n){
		case 1:
			printf("->%s \n  %s \n  %s",op[0],op[1],op[2]);
			break;
		case 2:
			printf("  %s \n->%s \n  %s",op[0],op[1],op[2]);
			break;
		case 3:
			printf("  %s \n  %s \n->%s",op[0],op[1],op[2]);
	}
	
	c = getch();

	switch(c){
		case 80: //down
			if((*n)<3) 
				++(*n);
			break;
		case 72: //up
			if((*n)>1) 
				--(*n);
	}

	return c;
}


//menu options

void new_game(){
	
	// char *a;
	// a = (char*)calloc(40, sizeof(char));
	
	int dim = 40;
	int dim2 = 4;
	int n=1;
	char f[dim];
	char t[dim];
	char g[dim];
	char c;
	int i=0, j=0;
	
	while(i<10){
		directional_key(&i, &j, &c);
		arrow_keys(&i, &j, &c);
		
		if(c==13)
			exit(1);
	}
		
	
	
	/*
	printf("%s\n%s", c, t);
	
	
	switch(n){
		case 1:
			printc(c, dim2); break;
		case 2:
			printc(t, dim2); break;
	}	
	*/
	
	
	
		
	return;
}




void arrow_keys(int *i, int *j, char *c){

	(*c) = getch();
	printf("%d,", (*c));
		
	if((*j)==1){
		switch(*c){
			case 72: //up
				printf("up"); break;
				
			case 80: //down
				printf("down"); break;
				
			case 75: //left
				printf("left"); break;
				
			case 77: //right
				printf("right"); break;
		}
		
		(*j)=0;
	}
	
	if((*c)==code && (*j)==0){
		printf("ok");
		*j=1; (*i)--;
	}	
	(*i)++;
		
	return;
}


