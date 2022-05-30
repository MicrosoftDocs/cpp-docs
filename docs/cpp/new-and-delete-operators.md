---
title: "new and delete operators"
description: "The C++ language new and delete operators allow control over allocation."
ms.date: 05/21/2022
helpviewer_keywords: ["new keyword [C++]", "delete keyword [C++]"]
---
# `new` and `delete` operators

C++ supports dynamic allocation and deallocation of objects using the [`new`](new-operator-cpp.md) and [`delete`](delete-operator-cpp.md) operators. These operators allocate memory for objects from a pool called the *free store* (also known as the *heap*). The **`new`** operator calls the special function [`operator new`](new-operator-cpp.md), and the **`delete`** operator calls the special function [`operator delete`](delete-operator-cpp.md).

For a list of the library files in the C Runtime Library and the C++ Standard Library, see [CRT Library Features](../c-runtime-library/crt-library-features.md).

## <a id="new_operator"> </a> The `new` operator

The compiler translates a statement such as this one into a call to the function **`operator new`**:

```cpp
char *pch = new char[BUFFER_SIZE];
```

If the request is for zero bytes of storage, **`operator new`** returns a pointer to a distinct object. That is, repeated calls to **`operator new`** return different pointers.

If there's insufficient memory for the allocation request, **`operator new`** throws a `std::bad_alloc` exception. Or, it returns **`nullptr`** if you've used the *placement* form `new(std::nothrow)`, or if you've linked in non-throwing **`operator new`** support. For more information, see [Allocation failure behavior](#allocation-failure-behavior).

The two scopes for **`operator new`** functions are described in the following table.

### Scope for `operator new` functions

| Operator | Scope |
|--|--|
| **`::operator new`** | Global |
| *class-name* **`::operator new`** | Class |

The first argument of **`operator new`** must be of type `size_t`, and the return type is always **`void*`**.

The global **`operator new`** function is called when the **`new`** operator is used to allocate objects of built-in types, objects of class type that don't contain user-defined **`operator new`** functions, and arrays of any type. When the **`new`** operator is used to allocate objects of a class type where an **`operator new`** is defined, that class's **`operator new`** is called.

An **`operator new`** function defined for a class is a static member function (which can't be virtual) that hides the global **`operator new`** function for objects of that class type. Consider the case where **`new`** is used to allocate and set memory to a given value:

```cpp
#include <malloc.h>
#include <memory.h>

class Blanks
{
public:
    Blanks(){}
    void *operator new( size_t stAllocateBlock, char chInit );
};
void *Blanks::operator new( size_t stAllocateBlock, char chInit )
{
    void *pvTemp = malloc( stAllocateBlock );
    if( pvTemp != 0 )
        memset( pvTemp, chInit, stAllocateBlock );
    return pvTemp;
}
// For discrete objects of type Blanks, the global operator new function
// is hidden. Therefore, the following code allocates an object of type
// Blanks and initializes it to 0xa5
int main()
{
   Blanks *a5 = new(0xa5) Blanks;
   return a5 != 0;
}
```

The argument supplied in parentheses to **`new`** is passed to `Blanks::operator new` as the `chInit` argument. However, the global **`operator new`** function is hidden, causing code such as the following to generate an error:

```cpp
Blanks *SomeBlanks = new Blanks;
```

The compiler supports member array **`new`** and **`delete`** operators in a class declaration. For example:

```cpp
class MyClass
{
public:
   void * operator new[] (size_t)
   {
      return 0;
   }
   void   operator delete[] (void*)
   {
   }
};

int main()
{
   MyClass *pMyClass = new MyClass[5];
   delete [] pMyClass;
}
```

### Allocation failure behavior

The **`new`** function in the C++ Standard Library supports the behavior specified in the C++ standard since C++98. When there's insufficient memory for an allocation request, **`operator new`** throws a [`std::bad_alloc`](../standard-library/bad-alloc-class.md) exception.

Older C++ code returned a null pointer for a failed allocation. If you have code that expects the non-throwing version of **`new`**, link your program with *`nothrownew.obj`*. The *`nothrownew.obj`* file replaces global **`operator new`** with a version that returns **`nullptr`** if an allocation fails. **`operator new`** no longer throws `std::bad_alloc`. For more information about *`nothrownew.obj`* and other linker option files, see [Link options](../c-runtime-library/link-options.md).

You can't mix code that checks for exceptions from global **`operator new`** with code that checks for null pointers in the same application. However, you can still create class-local **`operator new`** that behaves differently. This possibility means the compiler must act defensively by default and include checks for null pointer returns in **`new`** calls. For more information on a way to optimize these compiler checks, see [`/Zc:throwingnew`](../build/reference/zc-throwingnew-assume-operator-new-throws.md).

### Handling insufficient memory

The way you test for a failed allocation from a **`new`** expression depends on whether you use the standard exception mechanism, or you use a **`nullptr`** return. Standard C++ expects an allocator to throw either `std::bad_alloc` or a class derived from `std::bad_alloc`. You can handle such an exception as shown in this sample:

```cpp
#include <iostream>
#include <new>
using namespace std;
#define BIG_NUMBER 10000000000LL
int main() {
   try {
      int *pI = new int[BIG_NUMBER];
   }
   catch (bad_alloc& ex) {
      cout << "Caught bad_alloc: " << ex.what() << endl;
      return -1;
   }
}
```

When you use the `nothrow` form of **`new`**, you can test for an allocation failure as shown in this sample:

```cpp
#include <iostream>
#include <new>
using namespace std;
#define BIG_NUMBER 10000000000LL
int main() {
   int *pI = new(nothrow) int[BIG_NUMBER];
   if ( pI == nullptr ) {
      cout << "Insufficient memory" << endl;
      return -1;
   }
}
```

You can test for a failed memory allocation when you've used *`nothrownew.obj`* file to replace global **`operator new`** as shown here:

```cpp
#include <iostream>
#include <new>
using namespace std;
#define BIG_NUMBER 10000000000LL
int main() {
   int *pI = new int[BIG_NUMBER];
   if ( !pI ) {
      cout << "Insufficient memory" << endl;
      return -1;
   }
}
```

You can provide a handler for failed memory allocation requests. It's possible to write a custom recovery routine to handle such a failure. It could, for example, release some reserved memory, then allow the allocation to run again. For more information, see [`_set_new_handler`](../c-runtime-library/reference/set-new-handler.md).

## <a id="delete_operator"> </a> The `delete` operator

Memory that is dynamically allocated using the **`new`** operator can be freed using the **`delete`** operator. The delete operator calls the **`operator delete`** function, which frees memory back to the available pool. Using the **`delete`** operator also causes the class destructor (if one exists) to be called.

There are global and class-scoped **`operator delete`** functions. Only one **`operator delete`** function can be defined for a given class; if defined, it hides the global **`operator delete`** function. The global **`operator delete`** function is always called for arrays of any type.

The global **`operator delete`** function. Two forms exist for the  global **`operator delete`**  and class-member **`operator delete`** functions:

```cpp
void operator delete( void * );
void operator delete( void *, size_t );
```

Only one of the preceding two forms can be present for a given class. The first form takes a single argument of type **`void *`**, which contains a pointer to the object to deallocate. The second form, sized deallocation, takes two arguments: the first is a pointer to the memory block to deallocate, and the second is the number of bytes to deallocate. The return type of both forms is **`void`** (**`operator delete`** can't return a value).

The intent of the second form is to speed up searching for the correct size category of the object to delete. This information often isn't stored near the allocation itself, and is likely uncached. The second form is useful when an **`operator delete`** function from a base class is used to delete an object of a derived class.

The **`operator delete`** function is static, so it can't be virtual. The **`operator delete`** function obeys access control, as described in [Member-Access Control](member-access-control-cpp.md).

The following example shows user-defined **`operator new`** and **`operator delete`** functions designed to log allocations and deallocations of memory:

```cpp
#include <iostream>
using namespace std;

int fLogMemory = 0;      // Perform logging (0=no; nonzero=yes)?
int cBlocksAllocated = 0;  // Count of blocks allocated.

// User-defined operator new.
void *operator new( size_t stAllocateBlock ) {
   static int fInOpNew = 0;   // Guard flag.

   if ( fLogMemory && !fInOpNew ) {
      fInOpNew = 1;
      clog << "Memory block " << ++cBlocksAllocated
          << " allocated for " << stAllocateBlock
          << " bytes\n";
      fInOpNew = 0;
   }
   return malloc( stAllocateBlock );
}

// User-defined operator delete.
void operator delete( void *pvMem ) {
   static int fInOpDelete = 0;   // Guard flag.
   if ( fLogMemory && !fInOpDelete ) {
      fInOpDelete = 1;
      clog << "Memory block " << cBlocksAllocated--
          << " deallocated\n";
      fInOpDelete = 0;
   }

   free( pvMem );
}

int main( int argc, char *argv[] ) {
   fLogMemory = 1;   // Turn logging on
   if( argc > 1 )
      for( int i = 0; i < atoi( argv[1] ); ++i ) {
         char *pMem = new char[10];
         delete[] pMem;
      }
   fLogMemory = 0;  // Turn logging off.
   return cBlocksAllocated;
}
```

The preceding code can be used to detect "memory leakage", that is, memory that's allocated on the free store but never freed. To detect leaks, the global **`new`** and **`delete`** operators are redefined to count allocation and deallocation of memory.

The compiler supports member array **`new`** and **`delete`** operators in a class declaration. For example:

```cpp
// spec1_the_operator_delete_function2.cpp
// compile with: /c
class X  {
public:
   void * operator new[] (size_t) {
      return 0;
   }
   void operator delete[] (void*) {}
};

void f() {
   X *pX = new X[5];
   delete [] pX;
}
```
