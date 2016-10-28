// allocators.cpp
// compile with: /EHsc 
#include <windows.h>
#include <ppl.h>
#include <iostream>

using namespace concurrency;
using namespace std;

// Calls the provided work function and returns the number of milliseconds 
// that it takes to call that function.
template <class Function>
__int64 time_call(Function&& f)
{
   __int64 begin = GetTickCount();
   f();
   return GetTickCount() - begin;
}

// A type that defines the new and delete operators. These operators 
// call the global new and delete operators, respectively.
class new_delete
{
public:
   static void* operator new(size_t size)
   {
      return ::operator new(size);
   }
   
   static void operator delete(void *p)
   {
      return ::operator delete(p);
   }

   int _data;
};

// A type that defines the new and delete operators. These operators 
// call the C Runtime malloc and free functions, respectively.
class malloc_free
{
public:
   static void* operator new(size_t size)
   {
      return malloc(size);
   }
   static void operator delete(void *p)
   {
      return free(p);
   }

   int _data;
};

// A type that defines the new and delete operators. These operators 
// call the Concurrency Runtime Alloc and Free functions, respectively.
class Alloc_Free
{
public:
   static void* operator new(size_t size)
   {
      return Alloc(size);
   }
   static void operator delete(void *p)
   {
      return Free(p);
   }

   int _data;
};

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

int wmain()
{  
   // Compute the time that it takes to reverse large arrays of 
   // different types.

   // new_delete
   wcout << L"Took " << reverse_array<new_delete>() 
         << " ms with new/delete." << endl;

   // malloc_free
   wcout << L"Took " << reverse_array<malloc_free>() 
         << " ms with malloc/free." << endl;

   // Alloc_Free
   wcout << L"Took " << reverse_array<Alloc_Free>() 
         << " ms with Alloc/Free." << endl;
}