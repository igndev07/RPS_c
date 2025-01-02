#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main() {
	char nm[30];
	int sys = 1;
	printf("Enter your name:  \n");
	scanf("%s", nm);




	while (sys==1) {
		int hu;
		int hp=0;
		int cp=0;
		for (int i=0; i<3 ; i++) {
			printf("Enter a number to choose:  \n");
			printf("Press 1 for ROCK\n");
			printf("Press 2 for PAPER\n");
			printf("Press 3 for SCISSOR\n");
			scanf("%d", &hu);


			srand(time(0));
			int mi = 1;
			int mx=3;
			int rn = mi + rand() % (mx- mi + 1);

			if (rn ==1) {
				printf("Computer choose ROCK\n");
			}
			else if (rn ==2) {
				printf("Computer choose PAPER\n");
			}
			else if (rn ==3) {
				printf("Computer choose SCISSOR\n");
			}


			if (hu == rn) {
				continue;
			}
			else if (hu==1 && rn==2) {
				cp+=1;
			}
			else if (hu==1 && rn==3) {
				hp+=1;
			}
			else if (hu==2 && rn ==1) {
				hp+=1;
			}
			else if (hu==2 && rn==3) {
				cp+=1;
			}
			else if (hu==3 && rn==1) {
				cp+=1;
			}
			else if (hu==3 && rn==2) {
				hp+=1;
			}

		}
		if (hp==cp) {
			printf("IT'S A TIE!\n");
			printf("Well played %s\n",nm);
			printf("If you want to continue to play type (y/n)...\n");
			char cnt[10];
			scanf("%s", cnt);
			if(strcmp(cnt, "y") == 0) {
				sys = 1;
			}
			else {
				sys = 0;
			}

		}
		else if (hp>cp) {
			printf("Congratulation %s! you won the game\n", nm);
			printf("your score: %d\ncomputer score:%d\n", hp, cp);
			printf("If you want to continue to play type (y/n)...\n");
			char cnt[10];
			scanf("%s", cnt);
			if(strcmp(cnt, "y") == 0) {
				sys = 1;
			}
			else {
				sys = 0;
			}
		}
		else if (hp<cp) {
			printf("Ouch %s you lost, better luck next time\n", nm);
			printf("your score: %d\ncomputer score:%d\n", hp, cp);
			printf("If you want to continue to play type (y/n)...\n");
			char cnt[10];
			scanf("%s", cnt);
			if(strcmp(cnt, "y") == 0) {
				sys = 1;
			}
			else {
				sys = 0;
			}
		}





	}

	return 0;

}
