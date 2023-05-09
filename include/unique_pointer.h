#pragma once
#include "smart_pointer.h"

template<typename T>
class unique_pointer : public smart_pointer
{
    public:
    unique_pointer();
    unique_pointer(T* ptr);
};