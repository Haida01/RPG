#include <stdio.h>
#include <stdlib.h>


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










