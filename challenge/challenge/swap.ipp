#pragma once

// use .ipp files to implement templates (than include them in header files)

template <typename T>
void my_swap(T& x, T& y)
{
    T const storage = y;
    y = x;
    x = storage;
}
