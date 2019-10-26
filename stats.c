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
  unsigned char *testArrayPtr = &test[0];
  //unsigned char *testArrayPtr = test;	 //this is equiv to above line



  /* Statistics and Printing Functions Go Here */
  printf("Printing unsorted array:\n");
  print_array(testArrayPtr, SIZE);
  printf("\n");
  print_statistics(testArrayPtr, SIZE);
}

/* Add other Implementation File Code Here */

void print_array(unsigned char *ptr, unsigned int count){
  
   for(int i=0; i<count; ++i){
     printf("%u ",  ptr[i]);
   }

	
}



unsigned char find_mean(unsigned char *ptr, int count){

   unsigned int total = 0; //if we use unsigned char, will overflow
   for(int i=0; i<count; ++i){
     total = total + (unsigned int)ptr[i];
   }
   //printf("\n");
   //printf("total = %d", total);

   unsigned char mean = (total) / (count);
   //printf("\nmean = %u", mean); 
   return mean;
}

unsigned char find_maximum(unsigned char *ptr, int count){

  unsigned char highest_so_far = 0;
  for(int i=0; i<count; ++i){
    if(ptr[i] > highest_so_far){

      highest_so_far = ptr[i];
    }
  }
  //printf("\n");
  //printf("highest_so_far = %u", highest_so_far); 
  return highest_so_far;
}

unsigned char find_minimum(unsigned char *ptr, int count){

  unsigned char lowest_so_far = 255;
  for(int i=0; i<count; ++i){
    if(ptr[i] < lowest_so_far){

      lowest_so_far = ptr[i];
    }
  }
  //printf("\n");
  //printf("lowest_so_far = %u", lowest_so_far); 
  return lowest_so_far;

}

void sort_array(unsigned char *ptr, int count){

   unsigned char swap=0;    //hold variable tempoarily
   unsigned char a=0;
   unsigned char b=0;
   
   for(a=0; a < count; ++a){

     for(b = a+1; b < count; ++b){
       
       if(ptr[a] < ptr[b]){   //check for > than to sort smallest to largest
         swap=ptr[a];
         ptr[a] = ptr[b];
         ptr[b]=swap;
         
       }
     }

   }

  //printf("\n");

}

unsigned char find_median(unsigned char *ptr, int count){
  unsigned char array_mid_point = count/2;
  unsigned char median = ptr[array_mid_point];
  //printf("\nmedian value = %u", median);  
  return median;
}



void print_statistics(unsigned char *ptr, int count){

  sort_array(ptr, count);//sort array if not already

  printf("\nminimum = %u", find_minimum(ptr, count));
  printf("\nmaximum = %u", find_maximum(ptr, count));
  printf("\nmean = %u", find_mean(ptr, count));
  printf("\nmedian = %u", find_median(ptr, count));
  printf("\n\nPrinting sorted array: \n");
  print_array(ptr, count);
  printf("\n");
}




























