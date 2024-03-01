#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* arr2, void* arr1, size_t n)
{
	assert(arr2 && arr1);
	void* rel = arr2;
	char* arr2_char = (char*)arr2;
	char* arr1_char = (char*)arr1;

	while (n--)
	{
		*arr2_char = *arr1_char;
		arr2_char++;
		arr1_char++;
	}
	return rel;
}
int main()
{
	int  arr1[] = {1,2,3,4,5,6,7,8,9};
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1,sizeof(arr1));



	return 0;
}