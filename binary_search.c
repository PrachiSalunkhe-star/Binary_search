#include<stdio.h>

int binarySearch(int arr[], int n, int key)
{
	//1. decide left and right of array
	int left = 0, right = n - 1, mid;

	//2. repeat below step till valid partition
	while(left <= right)
	{
		//3. find middle element
		mid = (left + right) / 2;
		//4. compare key with middle element, if matching then return index of middle element
		if(key == arr[mid])
			return mid;
		//5. if not matching and key is less than middle element then update right 
		else if(key < arr[mid])
			right = mid - 1;
		//6. if not matching and key is greater than middle element then update left
		else
			left = mid + 1;
	}
	//7. if invalid partition then key is not found, return -1
	return -1;
}

int main(void)
{
	int key;
	// Take collection from user
	int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};

	// Take key from user
	printf("Enter key to be searched : ");
	scanf("%d", &key);

	int index = binarySearch(arr, 9, key);
	if(index != -1)
		printf("Key is found at index %d\n", index);
	else
		printf("Key is not found\n");

	return 0;
}






