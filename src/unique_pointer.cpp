#include "unique_pointer.h"

template<typename T>
unique_pointer<T>::unique_pointer() : smart_pointer<T>()
{

}

template<typename T>
unique_pointer<T>::unique_pointer(T* ptr) : smart_pointer<T>(ptr)
{

}