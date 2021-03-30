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

//Да се реализира шаблон на функция void input ([подходящ тип] array,int n),
//която въвежда от клавиатурата стойностите на елементите на масива array от произволен тип T с големина n.

template<typename T>
void  input(T* array, int size) {
	
	for (int i = 0; i < size; i++)
	{
		std::cin >> array[i];
	}
}
template <typename T>
void test(T *array,int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i];
	}
}
int main() {
	int arr[4] ;
	input<int>(arr, 4);
	test<int>(arr, 4);
	
}
