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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/******************************************************************************
 * Function: print_array
 * Description:
 *     This function takes in an array and given length and prints its contents
 *     
 * Parameters:
 *     unsigned char * ptr: Pointer to the array
 *     int count: length of the array
 * Return: 
 *     -
 *****************************************************************************/
void print_array(unsigned char * ptr, int count);

/******************************************************************************
 * Function: find_median
 * Description:
 *     This function takes in an array and given length and returns the median value
 *	(rounded down to the nearest integer) of the array its contents
 *     
 * Parameters:
 *     unsigned char * ptr: Pointer to the array
 *     int count: length of the array
 * Return: 
 *     nothing (prints using printf
 *****************************************************************************/
unsigned char find_median(unsigned char * ptr, int count);

/******************************************************************************
 * Function: find_mean
 * Description:
 *     This function takes in an array and number of items in the array 
 *	(given length) and returns the mean value rounded down to the nearest 
 *	integer of the array
 *     
 * Parameters:
 *     unsigned char * ptr: Pointer to the array
 *     int count: length of the array
 * Return: 
 *     Mean value of array
 *****************************************************************************/
unsigned char find_mean(unsigned char * ptr, int count);


/******************************************************************************
 * Function: find_maximum
 * Description:
 *     This function takes in an array and given length and returns the maximum value
 *	seen in the array
 *     
 * Parameters:
 *     unsigned char * ptr: Pointer to the array
 *     int count: length of the array
 * Return: 
 *     Maximum value found in the array
 *****************************************************************************/
unsigned char find_maximum(unsigned char * ptr, int count);

/******************************************************************************
 * Function: find_minimum
 * Description:
 *     This function takes in an array and given length and returns the minimum value
 *	seen in the array
 *     
 * Parameters:
 *     unsigned char * ptr: Pointer to the array
 *     int count: length of the array
 * Return: 
 *     minimum value found in the array
 *****************************************************************************/
unsigned char find_minimum(unsigned char * ptr, int count);

/******************************************************************************
 * Function: sort_array
 * Description:
 *     This function takes in an array and given length and sorts the array from
 *	 largest to smallest, starting at the zeroth element
 *	 *     
 * Parameters:
 *     unsigned char * ptr: Pointer to the array
 *     int count: length of the array
 * Return: 
 *     -
 *****************************************************************************/
void sort_array(unsigned char * ptr, int count);

/******************************************************************************
 * Function: print_statistics
 * Description:
 *     This function prints various statistics including minimum, maximum, mean
 *	and median for a given array and length. This function calls "find_minimum"
 *	, "find_maximum", "find_mean" and "find_median".     
 *
 * Parameters:
 *     unsigned char * ptr: Pointer to the array
 *     int count: length of the array
 * Return: 
 *     none, overrides array at provided memory address
 *****************************************************************************/
void print_statistics(unsigned char * ptr, int count);

/**
 * @brief p
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
