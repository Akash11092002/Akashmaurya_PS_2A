
#include<iostream>
using namespace std;
void rotate90anticlockwise(int ){

    / REVERSE every row
	for (int i = 0; i < N; i++)
		reverse(mat[i], mat[i] + N);

	// Performing Transpose
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++)
			swap(mat[i][j], mat[j][i]);
	}
}



}
int main()

{
int n;
cout<<"enter the size of the matrix"<<"\n";
cin>>n;
int arr[n][n];
cout<<"enter the elements of the matrix ";
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}
   rotate90anticlockwise(arr);

}
