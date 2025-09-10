#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename C>
void itter(T *array, size_t length, void(* funct)(C &arg))
{
	for (size_t i = 0; i < length; i++)
		funct(array[i]);
}

#endif
