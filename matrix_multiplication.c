#include<stdio.h>   // Matrix Multiplication
	int main() {	
		int arr1[3][3], arr2[3][3];
		printf("Enter the number in the matrix 1:\n");     // Taking input of Matrix 1
		for(int i=0; i<3; i++) {
			for(int j=0; j<3; j++) {
				scanf("%d", &arr2[i][j]);
			}
		}
		printf("Enter the numbers in the matrix 2:\n");       // Taking input for Matrix 2
		for(int i=0; i<3; i++) {
			for(int j=0; j<3; j++) {
				scanf("%d", &arr1[i][j]);
			}
		}
		int x=0, y=0, mul[3][3];
		printf("Mul. of the matrices are:\n");
		for(int i=0; i<3; i++) {
			for(int j=0; j<3; j++) {
				mul[i][j] = 0;
				for(int k=0; k<3; k++) {
					mul[i][j] += arr1[y][x] * arr2[x][j];          // Multiplying the matrix
					x += 1;
				}
				x = 0;
			}
			y += 1;
		}
		for(int i=0; i<3; i++) {                          // Printing the multiplication of the matrices
			for(int j=0; j<3; j++) {
				printf("%d ", mul[i][j]);
			}
			printf("\n");
		}
	return 0;
}
