
/*Write a function named addarrays() that accepts two arrays that are the same size.
 The function should add each element in the arrays together and place the values in a third array.*/
int three[] = {};
void addarrays(int one[], int two[], int n) {
  int i = 0;
  for (i = 0; i < n; i++) {
    three[i] = one[i] + two[i];
  }
}
