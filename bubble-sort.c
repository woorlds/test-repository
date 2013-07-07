#include "common.h"

void bubble_sort()
{
	unsigned int data[4]={4, 7, 5, 1};
	unsigned int data_length=4, first_count=0, second_count=0, temp=0;
	unsigned int count=0;

	puts("\n*****BUBBLE SORTING*****");

	for(first_count=0; first_count<data_length; first_count++)
	{
		for(second_count=0; second_count<data_length-1; second_count++)
		{
			if(data[second_count] > data[second_count+1])
			{
				temp=data[second_count];
				data[second_count]=data[second_count+1];
				data[second_count+1]=temp;
				for(count=0; count<data_length; count++)
				{
					printf("%d \t", data[count]);
				}
				puts("");
			}
		}
	}

	for(count=0; count<data_length; count++)
	{
		printf("%d \t", data[count]);
	}
	puts("");
}
