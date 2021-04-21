#include "Sorter.h"
#include <iostream>

void Sorter::bubbleSort(double* vector, int size) {
	double swap;
	for (int i = 0; i < size - 2; i++)
		for (int j = size-1; j > i; j--) {
			if (vector[j] < vector[j - 1]) {
				swap = vector[j];
				vector[j] = vector[j - 1];
				vector[j - 1] = swap;
			}
		}
}

void Sorter::showVector(double* vector, int size) {
	for (int i = 0; i < size; i++)
		std::cout << vector[i] << ", ";
}
