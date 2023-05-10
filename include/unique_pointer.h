#pragma once
#include "smart_pointer.h"

template<typename T>
class unique_pointer : public smart_pointer<T>
{
    public:
    unique_pointer();
    unique_pointer(T* ptr);
    unique_pointer(const unique_pointer & obj) = delete; // copy constructor is deleted
	unique_pointer& operator=(const unique_pointer & obj) = delete; // copy assignment is deleted
};