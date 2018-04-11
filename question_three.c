
/*a*/long maliraim[50];

/*b*/long maliraim[49] = 123.456;

/*c*/for (x = 0; x < 100; x++) // final value of x is 100

/*d*/for (ctr = 2; ctr < 10; ctr+=3) // final value of ctr = 11

/*(e) While statement to count from 1 to 100 by 3's:*/
int counter, i = 1;
while ( i <= 100) {
  counter = i;
  i += 3;
}
 /*(f) code fragment*/
for (counter = 1; counter < MAXVALUES; counter++ ); //unless counter is undeclared before, there are no errors
printf("\nCounter = %d", counter);
