/******************************************************
 * This is an easy question which we did in class.
 * ***************************************************/
 main() {
    //TODO 1: Declaration for an array that will hold 50 type long values
    double long array[50];

    //TODO 2: Statement that assigns 123.456 to 50th element
    array[49] = 123.456;

    //TODO 3: value of x from for loop. In this question 99 and 100 are correct because it was not explicit which x to consisder
    for (int x = 0; x < 100; ++x) {
        //x == 99
    }
    //Outside loop x == 100 is correct

    //TODO 4: similar thinking applies to
    for (int ctr = 2; ctr < 10; ctr+=3) {
        //ctr == 8
    }
    //ctr == 11;

    //TODO 5: Wha is wrong; indentation without the {} is important it should be
    for (int counter = 0; counter < MAXVALUES; ++counter)
        printf("\nCounter = %d", counter);

}