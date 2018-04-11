/*Write a function named addarrays() that accepts two arrays that are the same size.
 The function should add each element in the arrays together and place the values in a third array.*/
int array3[] = {};
void addarrays(int array1[], int array2[], int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    array3[i] = array1[i] + array2[i];
  }
}
