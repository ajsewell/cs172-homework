// Project Name: Vector
// Name: Allysa Sewell
// Date: 5/29/18
// Class: CS 172

#include "Vector.h"

//no arg constructor
template<typename elementType>
Vector<elementType>::vector<elementType>(): size(0), capacity(10)
{
	elements = new elementType[capacity];
}

//constructs vector with specified size
template<typename elementType>
Vector<elementType>::vector <elementType>(int size): capacity(10)
{
	this->size = size;
	elements = new elementType[capacity];
}

//constructs vector with specified size and value
template<typename elementType>
Vector<elementType>::vector < elementType>(int size, element
	Type defaultValue) : capacity(10)
{
	this->size = size;
	elements = new elementType[capacity];
	elements = defaultValue;
}