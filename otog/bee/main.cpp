#include <bits/stdc++.h>
using namespace std;
int main(){
	while(1) {
		int year; scanf("%d",&year); if(year == -1) return 0; //End of Input = -1

		int soldier = 0, worker = 1, queen = 1, lastSoldier = 0, lastWorker = 0;
		for(int i = 0; i < year; i++) { //Loop Year
			lastSoldier = soldier; lastWorker = worker;
			soldier += lastWorker - lastSoldier; worker += lastSoldier + lastWorker + queen - lastWorker;
		}
		printf("%d %d\n", worker, worker + soldier + queen);
	}
}
