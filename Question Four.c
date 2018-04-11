       #include<stdio.h>
       #include<stdlib.h>
     
       int i;
       
       int d[4]={1,2,3,4};  /*first array*/
       
       int k[4]={7,8,9,6];   /*second array*/
       
       int z[4]; /* sum of the two arrays d and k*/
       
       int main() { 
                    addarrays(d,k);
                    return 0; 
                              }
        void addarrays(int d[],int k[])
                  { int *p=&z;               /*pointer variable is introduced for array z, thesum of array d and k*/
                  
                      for(i=0;i<3;i++) { printf("%d",d[i]);
                       
                       printf("\n"); }
                      
                      for(i=0;i<3;i++) {printf("%d",k[i];
                       
                       printf("\n");}
                       
                       for(i=0;i<3;i++) { z[i]=d[i]+k[i]
                      
                      printf("%d",z[i]);
                          }
                       printf("/nThe address of array z is %u",p);
                       }
                       
                      
             
