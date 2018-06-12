// Project Name: Vector
// Name: Allysa Sewell
// Date: 5/29/18
// Class: CS 172

#ifndef VECTOR_H_
#define VECTOR_H_


template<typename elementType>
class vector<elementType>
{
public:
  vector<elementType>();
  vector<elementType>(int size);
  vector<elementType>(int size, elementType defaultValue);
  void push_back(elementType element);
  void pop_back();
  unsigned size() const;
  elementType at(int index) const;
  bool empty() const;
  void clear();
  void swap(vector v2);
private:
  int size;
  elementType* elements;
  int capacity;
  void increaseCapacity();
};

//program only compiles if declaration and implementation are in
//the same file

//no arg constructor
template<typename elementType>
vector<elementType>::vector<elementType>() : size(0), capacity(10)
{
  elements = new elementType[capacity];
}

//constructs vector with specified size
template<typename elementType>
vector<elementType>::vector <elementType>(int size) : capacity(10)
{
  this->size = size;
  elements = new elementType[capacity];
}

//constructs vector with specified size and value
template<typename elementType>
vector<elementType>::vector <elementType>(int size, element
Type defaultValue) : capacity(10)
{
  this->size = size;
  elements = new elementType[capacity];
  elements = defaultValue;
}

//increases the capacity if needed
template<typename elementType>
void vector<elementType>::increaseCapacity()
{
  if (size >= capacity)
  {
    elementType* old = elements;
    elements = new elementType[size * 2]; //doubles the capacity of an array
    //adds values from the old array to the new array
    for (int i = 0; i < size; i++)
      elements[i] = old[i];
    delete old;
  }
}


//adds the specified element to the vector
template<typename elementType>
void vector<elementType>::push_back(elementType element)
{
  increaseCapacity();
  elements[size++] = element;
}

//removes the last element from the vector
template<typename elementType>
void vector<elementType>::pop_back()
{
  elements[--size];
}

//returns the size of the vector
template<typename elementType>
unsigned Vector<elementType>::size()
{
  return size;
}

//returns the element at the specified index
template<typename elementType>
elementType vector<elementType>::at(int index) const
{
	return elements[index];
}

//shows if the vector is empty
template<typename elementType>
bool vector<elementType>::empty() const
{
  return size == 0;
}

//clears all elements from the vector
template<typename elementType>
void vector<elementType>::clear()
{
  size = 0;
}

//swaps 2 vectors
template<typename elementType>
void vector<elementType>::swap(Vector v2)
{
  int temp = size;
  size = v2.size;
  v2.size = temp;

  int temp = capacity;
  capacity = v2.capacity;
  v2.capacity = temp;

  elementType* temp;
  for (int i = 0; i < v2.size; i++)
    temp[i] = elements[i];

  for (int i = 0; i < size; i++)
    elements[i] = v2.elements[i]

  for (int i = 0; i < v2.size; i++)
    v2.elements[i] = temp[i];
}


#endif

