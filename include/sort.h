/**
 * @file sort.h
 * @author Morten Kjeldsen (s255531@dtu.dk)
 * @brief Prototype for a bubble sort algorithm.
 * @date 2025-10-28
 *
 */
#include <stddef.h> // Standard header file for size_t type.

/**
 * @brief Rearrange an array using bubblesort.
 *
 * @param arr Array to be sorted.
 * @param length Length of the input array.
 * @param pair_is_in_order Function pointer to determine whether a pair in the
 * array needs to swapped.
 */
void bubble_sort(char arr[], size_t length,
                 bool (*pair_is_in_order)(char a, char b));

/**
 * @brief Swaps two values.
 *
 * @param a The first value.
 * @param b The second value.
 */
void swap(char *a, char *b);

/**
 * @brief Checks if two alphapetic letters are in order, case-insensitive.
 *
 * @param a First alphapetic letter.
 * @param b Second alphapetic letter.
 * @return true Letters are in correct order.
 * @return false Letters are not in correct order.
 */
bool letters_in_order(char a, char b);

/**
 * @brief Checks if two numbers are in ascending order.
 *
 * @param a First number.
 * @param b Second number.
 * @return true Numbers are in ascending order.
 * @return false Numbers are not in ascending order.
 */
bool numbers_in_ascending_order(char a, char b);