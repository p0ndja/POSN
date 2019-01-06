#include <stdio.h>
#include <string.h>

//Fix when A can mod with B
//Make chair position can be divide and continue drop another orange juice

fixMod(int i, int o){

	if (i%o==0) {
        return o; //Like 4%4 = 4 for make position can be running
	} else {
        return i%o;
	}

}

//Remove int from int[] array
//Search from internet.... Sorry ;w;

remove_element(int *array, int index, int array_length) {
    int i;
    for(i = index; i < array_length - 1; i++) {
        array[i] = array[i + 1];
    }
}

int main(){

	int people,number;
	int position = 0;

	scanf("%d%d", &number, &people);

	//======================Add People to ARRAY=====================
	int PeopleInArray[number];
	for(int i = 0; i < number; i++) {

        PeopleInArray[i] = (i+1);
        //Add all number from 1 to &people to array

	}
	//==============================================================

	//========================Check where orange juice drop===========================
	for (int i = number; i > 0; i--){

		position = fixMod(position + people,i) - 1; //Who need to drink orange juice.

		printf("%d ", PeopleInArray[position]); //Print who drink orange juice.
		remove_element(PeopleInArray,position, i); //Remove him from array.

	}
	//================================================================================

	return 0;
}
