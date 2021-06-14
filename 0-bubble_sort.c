#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in asc order
 *
 * @array: an array store
 * @size: sizesssss
 */
void bubble_sort(int *array, size_t size)
{
int tmp;
int swapped;
for (i = 0; i < size; i++)
{
swapped = 0;
for (j = 0; j < size - 1 - i; j++)
{
if (array[j + 1] > array[j])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
swapped = 1;
}
}
if (!swapped)
{
break;
}
}
