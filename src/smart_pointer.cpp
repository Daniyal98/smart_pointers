#include "smart_pointer.h"

template<typename T>
smart_pointer<T>::smart_pointer()
{
    m_ptr = nullptr;
}

template<typename T>
smart_pointer<T>::smart_pointer(T* ptr)
{
    m_ptr = ptr;
}

template<typename T>
T& smart_pointer<T>::operator*()
{
    return *m_ptr;
}

template<typename T>
T* smart_pointer<T>::operator->()
{
    return m_ptr;
}

template<typename T>
smart_pointer<T>::~smart_pointer()
{
    delete [] m_ptr;
}