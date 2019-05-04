#include <stdio.h>
#include <stdlib.h>
//adding values of an array and placing them in another array
int addarrays()
{
    int size;
    int semps1[size]={/*array values*/}
    int semps2[size]={/*array values*/}
    int flow[size];
    int i;
    for(i=0;i<size;i++)
    {
        flow[i]=semps1[i]+semps2[i];
        printf("flow is %d\n",flow[i]);

    }
    return 0;
}
int main()
{
   addarrays();
    return 0;
}
