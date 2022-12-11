#include "prototypes.h"

int getDED(int asciiDec)
{
	return asciiDec - 48;
}
void bubbleSort(int arr[], int counts)
{
	int exchange;
	for (int i = 0; i < counts; i++)
	{
		for (int j = 0; j < counts - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				exchange = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = exchange;
			}
		}
	}
}
void selectSort(int arr[], int counts)
{
	int max, maxIndex, exchange;
	for (int i = 0; i < counts; i++)
	{
		max = arr[0];
		maxIndex = 0;
		for (int j = 1; j < counts - i; j++)
		{
			if (max < arr[j])
			{
				max = arr[j];
				maxIndex = j;
			}
		}
		if (maxIndex != counts - i - 1 && max > arr[counts - i - 1])
		{
			exchange = arr[counts - i - 1];
			arr[counts - i - 1] = max;
			arr[maxIndex] = exchange;
		}
	}
}