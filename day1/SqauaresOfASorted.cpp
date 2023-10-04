#include<bits/stdc++.h>
using namespace std;

void Sortsqarr(int arr1[],  int n1)
{ for (int i=0; i < n1; i++)
		 arr1[i] = arr1[i]*arr1[i];
	
	
	sort(arr1, arr1+n1);
}

int main()
{
	int arr1[] = {1, 3, 5, 7};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);

	Sortsqarr(arr1,  n1);

	cout << "Array after merging" <<endl;
	for (int i=0; i < n1; i++)
		cout << arr1[i] << " ";

	return 0;
}
