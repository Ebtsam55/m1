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
/*
 * function that prints the statistics of an array including minimum, maximum, mean, and median
 * @param refence to array and its size 
 * @return nothing 
 */

void print_statistics (unsigned char * , unsigned int size );

/*
 * function that prints the array to the screen
 * @param refence to array and its size 
 * @return nothing 
 */
void print_array (unsigned char * , unsigned int size );

/*
 * function that returns the median value of array 
 * @param refence to array and its size 
 * @return unsigned char value
 */
unsigned char find_median (unsigned char * , unsigned int size );

/*
 * function that returns the mean value of array 
 * @param refence to array and its size 
 * @return unsigned char value
 */
unsigned char find_mean (unsigned char * , unsigned int size );

/*
 * function that returns the maximum value of array 
 * @param refence to array and its size 
 * @return unsigned char value
 */
unsigned char find_maximum (unsigned char * , unsigned int size );

/*
 * function that returns the minmum value of array 
 * @param refence to array and its size 
 * @return unsigned char value
 */
unsigned char find_minimum (unsigned char * , unsigned int size );

/*
 * function that sorts the array 
 * @param refence to array and its size 
 * @return nothing
 */
void sort_array(unsigned char * , unsigned int size);

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
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
