/**
 * @file sort.c
 * @author Morten Kjeldsen (s255531@dtu.dk)
 * @brief Function definitions for a bubble sort algorithm.
 * @date 2025-10-28
 *
 */
#include <stdbool.h> // Standard header file for type bool.
#include <stddef.h>  // Standard header file for type size_t.

/**
 * @brief Swaps two values.
 *
 * @param a The first value.
 * @param b The second value.
 */
void swap(char *a, char *b) {
  /* Swap the values. */
  char a1 = *a;
  *a = *b;
  *b = a1;
}

/**
 * @brief Rearrange an array using bubblesort.
 *
 * @param arr Array to be sorted.
 * @param length Length of the input array.
 * @param pair_is_in_order Function pointer to determine whether a pair in the
 * array needs to swapped.
 */
void bubble_sort(char arr[], size_t length,
                 bool (*pair_is_in_order)(char a, char b)) {
  bool swapping_occurred;

  /* Is the array big enough to sort?*/
  if (length < 2)
    return;

  do {
    swapping_occurred = false; // Did a swap occur in this pass of the array.

    /* Compare each value in the array with the next one, swapping if needed. */
    for (size_t i = 0; i < length - 1; ++i) {
      if (!pair_is_in_order(arr[i], arr[i + 1])) {
        swap(&arr[i], &arr[i + 1]); // Swaps the values.
        swapping_occurred = true;   // Swapping occured in this pass.
      }
    }
  } while (swapping_occurred == true); // If a swap occured,
                                       // make another pass over the array.
}

/**
 * @brief Checks if two alphapetic letters are in order, case-insensitive.
 *
 * @param a First alphapetic letter.
 * @param b Second alphapetic letter.
 * @return true Letters are in correct order.
 * @return false Letters are not in correct order.
 */
bool letters_in_order(char a, char b) {
  /* Copy the values of input variables to prevent them from being modified */
  char a1 = a;
  char b1 = b;

  /* Change a1 from ASCII value to 0-25.*/
  if (a1 >= 'A' && a1 <= 'Z') {
    a1 -= 'A';
  } else if (a1 >= 'a' && a1 <= 'z') {
    a1 -= 'a';
  }

  /* Change b1 from ASCII value to 0-25.*/
  if (b1 >= 'A' && b1 <= 'Z') {
    b1 -= 'A';
  } else if (b1 >= 'a' && b1 <= 'z') {
    b1 -= 'a';
  }

  if (a1 == b1) {
    return a <= b; // If a1==b1, check if uppercase before lowercase
  } else {
    return a1 < b1; // Otherwise, check if a1 is before b1
  }
}

/**
 * @brief Checks if two numbers are in ascending order.
 *
 * @param a First number.
 * @param b Second number.
 * @return true Numbers are in ascending order.
 * @return false Numbers are not in ascending order.
 */
bool numbers_in_ascending_order(char a, char b) { return a <= b; }
