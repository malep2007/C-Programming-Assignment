// A function that accepts two arrays of same size, adds them and puts the new value in the third array

void addarrays(int firstarray[], int secondarray[], int thirdarray[])
{
  for (int i = 0; i < SIZE; i++)
  {
    thirdarray[i] = firstarray[i] + secondarray[i];
  }
}
