/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
   print_statistics(test, SIZE );

}

/* Add other Implementation File Code Here */
void print_statistics (unsigned char * test, unsigned int size )
{  
   printf("the Array values :  \n" );
   print_array(test, size );
   printf("the median value : %d \n" , find_median(test, size));
   printf("the mean value : %d \n" , find_mean(test, size));
   printf("the maximum value : %d \n" , find_maximum(test, size)); 
   printf("the minmum value : %d \n" , find_minimum(test, size));
   printf("the sorted Array  :  \n" );
   sort_array(test, size );
   print_array(test, size );
}

void print_array (unsigned char *test  , unsigned int size )
{  unsigned char i;
   for (i=0; i<size ; i++)
      { printf("%d ",test[i]);}
   printf("\n");

}

unsigned char find_median (unsigned char * test, unsigned int size )
{
   sort_array (test , size );
   if (size%2==0)
    {
      return (test[size/2]+test[(size-1)/2])/2;
    }
    else 
    {
     return test[size/2];
    } 
}
unsigned char find_mean (unsigned char * test , unsigned int size )
{
   unsigned char i, sum =0;
   for (i=0; i<size ; i++)
      { sum+=test[i];}
   return sum ; 
}
unsigned char find_maximum (unsigned char * test, unsigned int size )
{
	unsigned char i;
	unsigned char max= test[0];
	   for (i=1; i<size ; i++)
	      {
		 if (test[i]>max )
		   max=test[i];
	      }
	return max ; 
}


unsigned char find_minimum (unsigned char * test , unsigned int size )
{
	unsigned char i;
	unsigned char min= test[0];
	   for (i=1; i<size ; i++)
	      {
		 if (test[i]<min)
		   min=test[i];
	      }
	return min ; 
}


void sort_array(unsigned char * test, unsigned int size)
{
   unsigned char i , j , temp ; 
	for (i=0; i<size ; i++)
	{
	   for (j=i+1; j<size-1 ; j++)
		{
		   if (test[j]<test[i])
		     {
		           temp = test[j]; 
		           test[j]=test[i]; 
		           test[i]=temp;
		     }
		}
	}
}
