#include <stdio.h>
#include <stdlib.h>

#define numOp 3

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


//function prototypes

int title_screen();
int main_menu();


int main(){
	
	title_screen();
	
	printf("\n\nBye");
	
	return 0;
}


//functions

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
			for(i=0; i<3; i++)
				printf("%c %c %c  ",c,c,c);
				
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











