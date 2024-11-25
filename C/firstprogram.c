 #include <stdio.h>

int main() 
{
    //  4x3 matrix
    int matrix[4][3] ={{1,3,0}, {4,5,6}, {5,3,1}, {4,5,7}};

    // Input elements into the matrix
   // printf("Enter the elements of the 4x3 matrix:\n");
    //for (int i = 0; i < 4; i++) {
      //  for (int j = 0; j < 3; j++) {
       //     printf("Enter element at position [%d][%d]: ", i, j);
        //    scanf("%d", &matrix[i][j]);
        //}
    //}

    // sum of even and odd numbers separately
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] % 2 == 0) {
                sumEven += matrix[i][j];
            } else {
                sumOdd += matrix[i][j];
            }
        }
    }

    // result
    printf("\nSum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}

