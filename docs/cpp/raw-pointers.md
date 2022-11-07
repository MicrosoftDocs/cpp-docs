---
title: "Raw pointers (C++)"
description: "How to use raw pointers in C++"
ms.date: 02/03/2022
helpviewer_keywords: ["pointers [C++]"]
no-loc: [void, nullptr, const, char, new, delete]
---
# Raw pointers (C++)

A *pointer* is a type of variable. It stores the address of an object in memory, and is used to access that object. A *raw pointer* is a pointer whose lifetime isn't controlled by an encapsulating object, such as a [smart pointer](smart-pointers-modern-cpp.md). A raw pointer can be assigned the address of another non-pointer variable, or it can be assigned a value of [`nullptr`](nullptr.md). A pointer that hasn't been assigned a value contains random data.

A pointer can also be *dereferenced* to retrieve the value of the object that it points at. The *member access operator* provides access to an object's members.

```cpp
    int* p = nullptr; // declare pointer and initialize it
                      // so that it doesn't store a random address
    int i = 5;
    p = &i; // assign pointer to address of object
    int j = *p; // dereference p to retrieve the value at its address
```

A pointer can point to a typed object or to **`void`**. When a program allocates an object on the [heap](https://wikipedia.org/wiki/Heap) in memory, it receives the address of that object in the form of a pointer. Such pointers are called *owning pointers*. An owning pointer (or a copy of it) must be used to explicitly free the heap-allocated object when it's no longer needed. Failure to free the memory results in a *memory leak*, and renders that memory location unavailable to any other program on the machine. Memory allocated using **`new`** must be freed by using **`delete`** (or **`delete[]`**). For more information, see [`new` and `delete` operators](new-and-delete-operators.md).

```cpp
    MyClass* mc = new MyClass(); // allocate object on the heap
    mc->print(); // access class member
    delete mc; // delete object (please don't forget!)
```

A pointer (if it isn't declared as **`const`**) can be incremented or decremented to point at another location in memory. This operation is called *pointer arithmetic*. It's used in C-style programming to iterate over elements in arrays or other data structures. A **`const`** pointer can't be made to point to a different memory location, and in that sense is similar to a [reference](references-cpp.md). For more information, see [`const` and `volatile` pointers](const-and-volatile-pointers.md).

```cpp
    // declare a C-style string. Compiler adds terminating '\0'.
    const char* str = "Hello world";

    const int c = 1;
    const int* pconst = &c; // declare a non-const pointer to const int
    const int c2 = 2;
    pconst = &c2;  // OK pconst itself isn't const
    const int* const pconst2 = &c;
    // pconst2 = &c2; // Error! pconst2 is const.
```

On 64-bit operating systems, a pointer has a size of 64 bits. A system's pointer size determines how much addressable memory it can have. All copies of a pointer point to the same memory location. Pointers (along with references) are used extensively in C++ to pass larger objects to and from functions. It's often more efficient to copy an object's address than to copy the entire object. When defining a function, specify pointer parameters as **`const`** unless you intend the function to modify the object. In general, **`const`** references are the preferred way to pass objects to functions unless the value of the object can possibly be **`nullptr`**.

[Pointers to functions](#pointers_to_functions) enable functions to be passed to other functions. They're used for "callbacks" in C-style programming. Modern C++ uses [lambda expressions](lambda-expressions-in-cpp.md) for this purpose.

## Initialization and member access

The following example shows how to declare, initialize, and use a raw pointer. It's initialized using **`new`** to point an object allocated on the heap, which you must explicitly **`delete`**. The example also shows a few of the dangers associated with raw pointers. (Remember, this example is C-style programming and not modern C++!)

```cpp
#include <iostream>
#include <string>

class MyClass
{
public:
    int num;
    std::string name;
    void print() { std::cout << name << ":" << num << std::endl; }
};

// Accepts a MyClass pointer
void func_A(MyClass* mc)
{
    // Modify the object that mc points to.
    // All copies of the pointer will point to
    // the same modified object.
    mc->num = 3;
}

// Accepts a MyClass object
void func_B(MyClass mc)
{
    // mc here is a regular object, not a pointer.
    // Use the "." operator to access members.
    // This statement modifies only the local copy of mc.
    mc.num = 21;
    std::cout << "Local copy of mc:";
    mc.print(); // "Erika, 21"
}


int main()
{
    // Use the * operator to declare a pointer type
    // Use new to allocate and initialize memory
    MyClass* pmc = new MyClass{ 108, "Nick" };

    // Prints the memory address. Usually not what you want.
    std:: cout << pmc << std::endl;

    // Copy the pointed-to object by dereferencing the pointer
    // to access the contents of the memory location.
    // mc is a separate object, allocated here on the stack
    MyClass mc = *pmc;

    // Declare a pointer that points to mc using the addressof operator
    MyClass* pcopy = &mc;

    // Use the -> operator to access the object's public members
    pmc->print(); // "Nick, 108"

    // Copy the pointer. Now pmc and pmc2 point to same object!
    MyClass* pmc2 = pmc;

    // Use copied pointer to modify the original object
    pmc2->name = "Erika";
    pmc->print(); // "Erika, 108"
    pmc2->print(); // "Erika, 108"

    // Pass the pointer to a function.
    func_A(pmc);
    pmc->print(); // "Erika, 3"
    pmc2->print(); // "Erika, 3"

    // Dereference the pointer and pass a copy
    // of the pointed-to object to a function
    func_B(*pmc);
    pmc->print(); // "Erika, 3" (original not modified by function)

    delete(pmc); // don't forget to give memory back to operating system!
   // delete(pmc2); //crash! memory location was already deleted
}
```

## Pointer arithmetic and arrays

Pointers and arrays are closely related. When an array is passed by-value to a function, it's passed as a pointer to the first element. The following example demonstrates the following important properties of pointers and arrays:

- The **`sizeof`** operator returns the total size in bytes of an array
- To determine the number of elements, divide total bytes by the size of one element
- When an array is passed to a function, it *decays* to a pointer type
- When the **`sizeof`** operator is applied to a pointer, it returns the pointer size, for example, 4 bytes on x86 or 8 bytes on x64

```cpp
#include <iostream>

void func(int arr[], int length)
{
    // returns pointer size. not useful here.
    size_t test = sizeof(arr);

    for(int i = 0; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{

    int i[5]{ 1,2,3,4,5 };
    // sizeof(i) = total bytes
    int j = sizeof(i) / sizeof(i[0]);
    func(i,j);
}
```

Certain arithmetic operations can be used on non-`const` pointers to make them point to another memory location. Pointers are incremented and decremented using the **`++`**, **`+=`**, **`-=`** and **`--`** operators. This technique can be used in arrays and is especially useful in buffers of untyped data. A `void*` gets incremented by the size of a **`char`** (1 byte). A typed pointer gets incremented by size of the type it points to.

The following example demonstrates how pointer arithmetic can be used to access individual pixels in a bitmap on Windows. Note the use of **`new`** and **`delete`**, and the dereference operator.

```cpp
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{

    BITMAPINFOHEADER header;
    header.biHeight = 100; // Multiple of 4 for simplicity.
    header.biWidth = 100;
    header.biBitCount = 24;
    header.biPlanes = 1;
    header.biCompression = BI_RGB;
    header.biSize = sizeof(BITMAPINFOHEADER);

    constexpr int bufferSize = 30000;
    unsigned char* buffer = new unsigned char[bufferSize];

    BITMAPFILEHEADER bf;
    bf.bfType = 0x4D42;
    bf.bfSize = header.biSize + 14 + bufferSize;
    bf.bfReserved1 = 0;
    bf.bfReserved2 = 0;
    bf.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER); //54

    // Create a gray square with a 2-pixel wide outline.
    unsigned char* begin = &buffer[0];
    unsigned char* end = &buffer[0] + bufferSize;
    unsigned char* p = begin;
    constexpr int pixelWidth = 3;
    constexpr int borderWidth = 2;

    while (p < end)
    {
            // Is top or bottom edge?
        if ((p < begin + header.biWidth * pixelWidth * borderWidth)
            || (p > end - header.biWidth * pixelWidth * borderWidth)
            // Is left or right edge?
            || (p - begin) % (header.biWidth * pixelWidth) < (borderWidth * pixelWidth)
            || (p - begin) % (header.biWidth * pixelWidth) > ((header.biWidth - borderWidth) * pixelWidth))
        {
            *p = 0x0; // Black
        }
        else
        {
            *p = 0xC3; // Gray
        }
        p++; // Increment one byte sizeof(unsigned char).
    }

    ofstream wf(R"(box.bmp)", ios::out | ios::binary);

    wf.write(reinterpret_cast<char*>(&bf), sizeof(bf));
    wf.write(reinterpret_cast<char*>(&header), sizeof(header));
    wf.write(reinterpret_cast<char*>(begin), bufferSize);

    delete[] buffer; // Return memory to the OS.
    wf.close();
}
```

## `void*` pointers

A pointer to **`void`** simply points to a raw memory location. Sometimes it's necessary to use `void*` pointers, for example when passing between C++ code and C functions.

When a typed pointer is cast to a `void` pointer, the contents of the memory location are unchanged. However, the type information is lost, so that you can't do increment or decrement operations. A memory location can be cast, for example, from `MyClass*` to `void*` and back again to `MyClass*`. Such operations are inherently error-prone and require great care to avoid errors. Modern C++ discourages the use of `void` pointers in almost all circumstances.

```cpp
//func.c
void func(void* data, int length)
{
    char* c = (char*)(data);

    // fill in the buffer with data
    for (int i = 0; i < length; ++i)
    {
        *c = 0x41;
        ++c;
    }
}

// main.cpp
#include <iostream>

extern "C"
{
    void func(void* data, int length);
}

class MyClass
{
public:
    int num;
    std::string name;
    void print() { std::cout << name << ":" << num << std::endl; }
};

int main()
{
    MyClass* mc = new MyClass{10, "Marian"};
    void* p = static_cast<void*>(mc);
    MyClass* mc2 = static_cast<MyClass*>(p);
    std::cout << mc2->name << std::endl; // "Marian"
    delete(mc);

    // use operator new to allocate untyped memory block
    void* pvoid = operator new(1000);
    char* pchar = static_cast<char*>(pvoid);
    for(char* c = pchar; c < pchar + 1000; ++c)
    {
        *c = 0x00;
    }
    func(pvoid, 1000);
    char ch = static_cast<char*>(pvoid)[0];
    std::cout << ch << std::endl; // 'A'
    operator delete(pvoid);
}
```

## <a name="pointers_to_functions"></a> Pointers to functions

In C-style programming, function pointers are used primarily to pass functions to other functions. This technique allows the caller to customize the behavior of a function without modifying it. In modern C++, [lambda expressions](lambda-expressions-in-cpp.md) provide the same capability with greater type safety and other advantages.

A function pointer declaration specifies the signature that the pointed-to function must have:

```cpp
// Declare pointer to any function that...

// ...accepts a string and returns a string
string (*g)(string a);

// has no return value and no parameters
void (*x)();

// ...returns an int and takes three parameters
// of the specified types
int (*i)(int i, string s, double d);
```

The following example shows a function `combine` that takes as a parameter any function that accepts a `std::string` and returns a `std::string`. Depending on the function that's passed to `combine`, it either prepends or appends a string.

```cpp
#include <iostream>
#include <string>

using namespace std;

string base {"hello world"};

string append(string s)
{
    return base.append(" ").append(s);
}

string prepend(string s)
{
    return s.append(" ").append(base);
}

string combine(string s, string(*g)(string a))
{
    return (*g)(s);
}

int main()
{
    cout << combine("from MSVC", append) << "\n";
    cout << combine("Good morning and", prepend) << "\n";
}
```

## See also

[Smart pointers](smart-pointers-modern-cpp.md)
[Indirection Operator: *](indirection-operator-star.md)<br/>
[Address-of Operator: &](address-of-operator-amp.md)</br>
[Welcome back to C++](welcome-back-to-cpp-modern-cpp.md)
