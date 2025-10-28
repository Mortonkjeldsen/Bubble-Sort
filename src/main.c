/**
 * @file main.c
 * @author Morten Kjeldsen (s255531@dtu.dk)
 * @brief Sort two demo arrays using a bubble sort function, and print the
 * sorted arrays.
 * @date 2025-10-28
 *
 */
#include "sort.h" // Header file for the bubble sort function, and its helper functions.
#include <stdio.h> // Standard header file printf function.

/* The two demo arrays to be sorted. */
char letter_arr1[4] = {'z', 'S', 's', 'a'};
// aSsz
char number_arr1[4] = {4, -1, 2, 9};
// -1, 2, 4, 9

int main() {
  /* Sort the array of lettters. */
  bubble_sort(letter_arr1, sizeof(letter_arr1) / sizeof(letter_arr1[0]),
              letters_in_order);

  /* Print the sorted array. */
  for (size_t i = 0; i < sizeof(letter_arr1) / sizeof(letter_arr1[0]); ++i) {
    printf("%c ", letter_arr1[i]);
  }
  printf("\n"); // Separate the two sorted arrays for readability.

  /* Sort the array of numbers. */
  bubble_sort(number_arr1, sizeof(number_arr1) / sizeof(number_arr1[0]),
              numbers_in_ascending_order);

  /* Print the sorted array. */
  for (size_t i = 0; i < sizeof(number_arr1) / sizeof(number_arr1[0]); ++i) {
    printf("%d ", number_arr1[i]);
  }
}