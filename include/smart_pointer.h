#pragma once

template<typename T>
class smart_pointer
{
    protected:
    T* m_ptr;

    public:
    smart_pointer();
    smart_pointer(T* ptr);
    T& operator*();
    T* operator->();
    ~smart_pointer();
};