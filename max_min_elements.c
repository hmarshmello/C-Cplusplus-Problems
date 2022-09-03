#include <stdio.h>
		int main(){
			int array[5] = {2,10,1,4,50};
			int smallest,largest, i;
			smallest = array[0];
			largest = array[0];
			for(i = 0;  i <5; i++){
				if(smallest > array[i]) smallest = array[i];
                if(largest < array[i]) largest = array[i];
			}
			printf("Smallest Element is: %d\n", smallest);
			printf("Largest Element is: %d", largest);
			return 0;
		}