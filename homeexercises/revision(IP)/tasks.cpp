//Да се дефинира функцияstrduplicate, която създавакопие на символен низ. Функцията да се грижи за заделянето на паметза новия низ.

#include <iostream>

char *strduplicate(char arr[], int size,int size1) {
	
	char *dupl = new char[size1];
	for (int i = 0; i < size; i++)
	{
		dupl[i] = arr[i];
	}
	return dupl;
}
int main()
{
	char arr[4] = {"Abc"};
	
	char *duple=strduplicate(arr, 4, 5);
	std::cout << strduplicate(arr, 4, 5);
	delete duple;
	return 0;
	
}
