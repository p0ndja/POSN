#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int Hinvel(int oop,int hinx,int hiny,int hinf){
	if(oop==2){if(abs(hinf%(hinx-hiny))%3==1)return 1;else return 0;}

	if(oop==3){if(abs(hinf%(hinx-hiny))%5==1)return 2;else if(abs(hinf%(hinx-hiny))%5==2||abs(hinf%(hinx-hiny))%5==3) return 1;else 0;}

	if(oop==4){if(abs(hinf%(hinx-hiny))%8==1)return 3;
	else if(abs(hinf%(hinx-hiny))%8==2||abs(hinf%(hinx-hiny))%8==3) return 2;
	else if(abs(hinf%(hinx-hiny))%8==5||abs(hinf%(hinx-hiny))%8==4||abs(hinf%(hinx-hiny))%8==5) return 1;
	else 0;}

	if(oop==5){if(abs(hinf%(hinx-hiny))%12==1)return 4;
	else if(abs(hinf%(hinx-hiny))%12==2||abs(hinf%(hinx-hiny))%12==3) return 3;
	else if(abs(hinf%(hinx-hiny))%12==5||abs(hinf%(hinx-hiny))%12==4||abs(hinf%(hinx-hiny))%12==6) return 2;
	else if(abs(hinf%(hinx-hiny))%12==9||abs(hinf%(hinx-hiny))%12==7||abs(hinf%(hinx-hiny))%12==8||abs(hinf%(hinx-hiny))%12==9) return 1;
	else 0;}

	if(oop==6){if(abs(hinf%(hinx-hiny))%18==1)return 5;
	else if(abs(hinf%(hinx-hiny))%18<=3) return 4;
	else if(abs(hinf%(hinx-hiny))%18<=6) return 3;
	else if(abs(hinf%(hinx-hiny))%18<=10) return 2;
	else if(abs(hinf%(hinx-hiny))%18<=15) return 1;
	else 0;}

	if(oop==6){if(abs(hinf%(hinx-hiny))%25==1)return 6;
	else if(abs(hinf%(hinx-hiny))%25<=3+4) return 5;
	else if(abs(hinf%(hinx-hiny))%25<=6+4) return 4;
	else if(abs(hinf%(hinx-hiny))%25<=10+4) return 3;
	else if(abs(hinf%(hinx-hiny))%25<=15+4) return 2;
	else if(abs(hinf%(hinx-hiny))%25<=22) return 1;
	else 0;}

}
int ADVmod(int a,int b){if(a%b==0) return b;else return a%b;}
int main(){
	int line = 45;
	int cum=20,HIN=500,Hindex=0,ftee =20,LEVEL=1-1,maxwel;
	int ROCK[HIN][4];
	int f=0,i,j,k;



	int posx = 5,posy = 45;
	goto LEVELCOM;

	/* TODO (Guuaeng#1#): Adding Stone count
 */
	while(1){
		GAMECOM:printf("");
		char inp[1];
		f++;
		for(i=0;i<line;i++){//LINE
			for(j=0;j<cum;j++){//Collum
			int Ostone = 1;
				for(k=0;k<Hindex;k++){
				if(f >= ROCK[k][0]){
				if(ROCK[k][3]==0&& ROCK[k][1]+1==posx && (ROCK[k][2]+1==posy||ROCK[k][2]+2==posy)) goto GAMEOVER;
				else if(ROCK[k][3]==1&& ROCK[k][1]+1==posx && (ROCK[k][2]+1==posy||ROCK[k][2]+2==posy||ROCK[k][2]+3==posy)) goto GAMEOVER;
				else if(ROCK[k][3]==2&& ROCK[k][1]+1==posx && (ROCK[k][2]+2==posy||ROCK[k][2]+3==posy||ROCK[k][2]+4==posy)) goto GAMEOVER;
				else if(ROCK[k][3]==3&& ROCK[k][1]+1==posx && (ROCK[k][2]+2==posy||ROCK[k][2]+3==posy||ROCK[k][2]+4==posy||ROCK[k][2]+5==posy)) goto GAMEOVER;
				else if(ROCK[k][3]==4&& ROCK[k][1]+1==posx && (ROCK[k][2]+2==posy||ROCK[k][2]+3==posy||ROCK[k][2]+4==posy||ROCK[k][2]+5==posy||ROCK[k][2]+6==posy)) goto GAMEOVER;
				else if(ROCK[k][3]==5&& ROCK[k][1]+1==posx && (ROCK[k][2]+2==posy||ROCK[k][2]+3==posy||ROCK[k][2]+4==posy||ROCK[k][2]+5==posy||ROCK[k][2]+6==posy||ROCK[k][2]+7==posy)) goto GAMEOVER;
				//SLDE else if(ROCK[k][3]==6&& ROCK[k][1]+1==posx && (ROCK[k][2]+2==posy||ROCK[k][2]+3==posy||ROCK[k][2]+4==posy||ROCK[k][2]+5==posy||ROCK[k][2]+6==posy||ROCK[k][2]+7==posy||ROCK[k][2]+8==posy||ROCK[k][2]+3==posy)) goto GAMEOVER;
				if(ROCK[k][1]==j && ROCK[k][2]==i){
				if(ROCK[k][3]==0) {printf("1"); Ostone=0;break;}
				else if(ROCK[k][3]==1) {printf("2"); Ostone=0;break;}
				else if(ROCK[k][3]==2) {printf("3"); Ostone=0;break;}
				else if(ROCK[k][3]==3) {printf("4"); Ostone=0;break;}
				else if(ROCK[k][3]==4) {printf("5"); Ostone=0;break;}
				else if(ROCK[k][3]==5) {printf("6"); Ostone=0;break;}
				else if(ROCK[k][3]==6) {printf(">"); Ostone=0;break;}
				}
				}
				}
				if(i == posy - 1 && j == posx - 1) printf("X");
				else if(Ostone) {printf(" ");}
			}
			if(i==line-1) printf("%d %d\n",f,ftee);
			else printf("|\n");
		}

		if(Hindex>= HIN) goto LEVELCOM;

	while(1){
		for(k=0;k<Hindex;k++){
		if(f >= ROCK[k][0]){
			ROCK[k][2]+=ROCK[k][3]+1;
		}
	}
		int ch;
		ch = getch();//97 100 119 115
		if(Hindex < HIN){
		ROCK[Hindex][0]=f+ftee*(Hindex+1)/10;
			if((f%(posx-posy)+(int)pow((double)f,2)%5)%6==1&&(f%(posx-posy)+(int)pow((double)f,2)%5)%3==0) ROCK[Hindex][1]=0;
			else if ((f%(posx-posy)+(int)pow((double)f,2)%5)%6==1&&(f%(posx-posy)+(int)pow((double)f,2)%5)%3==1) ROCK[Hindex][1]=cum-1;
			else ROCK[Hindex][1]=(f%(posx-posy))+(int)pow((double)f,2)%5%cum;
		ROCK[Hindex][2]=0;
		ROCK[Hindex][3]=Hinvel(maxwel,posx,posy,f);
		if(f%5==1&& ftee > 1) {ftee--;}
		else if(f%9==1){ftee--;}
		Hindex++;}

		if(ch == 97||ch==65) { if(posx > 1) posx-=1;break;}//LEFT
		else if(ch == 100||ch==68) { if(posx < cum) posx+=1;break;}//RIGHT
		if(ch == 119||ch==87) { if(posy >= 30) posy-=1;break;}//UP
		else if(ch == 115||ch==83) { if(posy < 45) posy+=1;break;}//DOWN
		printf("%d",ch);
	}


	}


	LEVELCOM:
	LEVEL++;
	if(LEVEL == 1){cum=20;HIN=200;ftee =50;maxwel=2;}
	else if(LEVEL == 2){cum=10;HIN=300;ftee =40;maxwel=2;}
	else if(LEVEL == 3){cum=10;HIN=300;ftee =30;maxwel=3;}
	else if(LEVEL == 4){cum=8;HIN=400;ftee =20;maxwel=3;}
	else if(LEVEL == 5){cum=8;HIN=400;ftee =20;maxwel=5;}
	else if(LEVEL == 6){cum=7;HIN=500;ftee =15;maxwel=5;}
	else if(LEVEL == 7){cum=7;HIN=600;ftee =10;maxwel=6;}
	else if(LEVEL == 8){cum=6;HIN=600;ftee =5;maxwel=6;}
	else if(LEVEL >= 9){cum=5;HIN=1400;ftee =0;maxwel=7;}

	Hindex=0;posx = cum/2;posy = 45;
	for(i=0;i<line/2;i++)printf("\n");
	printf("  LEVEL %d",LEVEL);for(i=0;i<line/2;i++)printf("\n");
	//sleep(2);
	printf("Press any key to continue...\n");
	getch();
	goto GAMECOM;




	GAMEOVER:for(i=0;i<line/2-6+10;i++)printf("\n");
	printf("  _____   ___  ___  ___ _____   _____  _   _ ___________\n |  __ \\ / _ \\ |  \\/  ||  ___| |  _  || | | |  ___| ___ \\\n | |  \\// /_\\ \\| .  . || |__   | | | || | | | |__ | |_/ /\n | | __ |  _  || |\\/| ||  __|  | | | || | | |  __||    / \n | |_\\ \\| | | || |  | || |___  \\ \\_/ /\\ \\_/ / |___| |\\ \\ \n  \\____/\\_| |_/\\_|  |_/\\____/   \\___/  \\___/\\____/\\_| \\_|\n");
	printf("                    YOUR SCORE IS %d",f-1);
	for(i=0;i<line/2-10;i++)printf("\n");
}
