#include "AdsVector.h"

AdsVector::AdsVector(int capacity) : data{new int[capacity]}, count{0}, m_capacity{capacity}
{
}

AdsVector::AdsVector() : data{new int[DEFAULT_CAPACITY]}, count{0}, m_capacity{DEFAULT_CAPACITY}
{
}


// Add destructor to release dynamically allocated memory
AdsVector::~AdsVector()
{
    delete[] data;
}

void AdsVector::addLast(int el)
{
    if (count == m_capacity)
    {
        extendCapacity();
    }

    data[count] = el;
    count++;
}

void AdsVector::addFirst(int el)
{
    if(m_capacity == count){
        extendCapacity();
    }
    // we start left shifting from the last item
    for (int i = count; i > 0; i--)
    {
        data[i] = data[i - 1];
    }
    data[0] = el;
    count++;
}

int AdsVector::size()
{
    return count;
}

int AdsVector::get(int index)
{
    return data[index];
}

int AdsVector::getFirst()
{
    return data[0];
}

int AdsVector::getLast()
{
    return data[count-1];
}

void AdsVector::removeLast()
{
    count--;
}

void AdsVector::removeFirst()
{
    for (int i = 0; i < count - 1; i++) {
        data[i] = data[i + 1];
    }
    count--;
}

bool AdsVector::contains(int el)
{
    for(int i = 0; i < count; i++) {
        if(data[i] == el) {
            return true;
        }
    }
    return false;
}

void AdsVector::extendCapacity()
{
    int newCapacity = (m_capacity == 0) ? DEFAULT_CAPACITY : m_capacity * 2;
    int *newArr = new int[newCapacity];
    for (int i = 0; i < count; i++)
    {
        newArr[i] = data[i];
    }
    delete[] data; // Release the memory of the old array
    data = newArr;
    m_capacity = newCapacity;
}


void AdsVector::set(int index, int el)
{
    data[index] = el;
}

bool AdsVector::isEmpty()
{
    return size() == 0;
}



void AdsVector::print()
{
    for (int i = 0; i < count; i++)
    {
        std::cout << data[i] << std::endl;
    }
}
