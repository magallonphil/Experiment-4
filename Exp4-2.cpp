#include<iostream>
using namespace std;

int main(){
	int i, j, temp, myArray, arr[30];
	char ab;
{
	
	cout<<"Choose either Selection or Bubble sorting";
	cout << "\nA.Selection\nB.Bubble\n";
	cin >> ab;
	if ( ab == 'a')
	{
	cout << "Enter array size: ";
	cin >> myArray;
	cout <<"Enter array elements: ";

	for (i = 0; i < myArray; i++)
	{
		cin >> arr[i];
	}



	cout <<"Sorting array using selection sort...\n";

	for (i = 0; i < myArray; i++)
	{
		for (j= i + 1; j < myArray; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout <<" Now the array after sorting is: \n";
	for ( i=0; i < myArray; i++)
	{
		cout << arr[i] << ", ";
	}

}
	else if ( ab == 'b')
{

	cout << "Enter the no. of elements to be sorted: " << flush;
	cin >> myArray;

	for (i = 0; i < myArray; i++)
	{
		cin >> arr[i];
		cout << arr[i] << ", ";

	}

	cout << endl << endl;

	for (i = 0; i < myArray; i++)
	{
		for (j= 0; j < myArray - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	cout <<" The array elements after sorting is: ";
	for ( i=0; i < myArray; i++)
	{
		cout << arr[i] << ", ";
	}
}
return 0;
}

}



