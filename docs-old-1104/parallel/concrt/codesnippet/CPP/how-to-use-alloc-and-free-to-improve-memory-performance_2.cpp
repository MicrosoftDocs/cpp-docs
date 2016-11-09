// Exchanges the contents of a[index1] with a[index2].
template<class T>
void swap(T* a, int index1, int index2)
{
   // For illustration, allocate memory from the heap.
   // This is useful when sizeof(T) is large.
   T* temp = new T;
   
   *temp = a[index1];
   a[index1] = a[index2];
   a[index2] = *temp;
   
   delete temp;
}

// Computes the time that it takes to reverse the elements of a 
// large array of the specified type.
template <typename T>
__int64 reverse_array()
{
    const int size = 5000000;
    T* a = new T[size];   
    
    __int64 time = 0;
    const int repeat = 11;

    // Repeat the operation several times to amplify the time difference.
    for (int i = 0; i < repeat; ++i)
    {
        time += time_call([&] {
            parallel_for(0, size/2, [&](int index) 
            {
                swap(a, index, size-index-1); 
            });
        });
    }

    delete[] a;
    return time;
}