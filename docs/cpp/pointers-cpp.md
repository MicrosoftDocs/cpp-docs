---
title: "Pointers (C++)"
ms.date: "11/07/2019"
helpviewer_keywords: ["declarators, pointers", "declarations, pointers", "pointers [C++]", "pointers, declarations"]
ms.assetid: 595387c5-8e58-4670-848f-344c7caf985e
---
# Pointers (C++)

A pointer stores the address of a object in memory and is used to access that object. On 64-bit operating systems a pointer has a size of 64 bits; a system's pointer size determines how much addressable memory it can have. A pointer can point to a typed object or to **void**. When a program allocates a new object on the [heap]() in memory, it receives the address of that object in the form of a pointer. Such pointers are called *owning pointers*; an owning pointer (or a copy of it) must be used to explicitly delete the heap-allocated object when it is no longer needed. Failure to delete the memory results in a *memory leak* and renders the memory unavailable to any other program on the machine.

A pointer (if it is not declared as **const**) can be incremented or decremented so that it points to a new location in memory. This is called *pointer arithmetic* and is used in C-style programming to iterate over elements in arrays or other data structures. A **const** pointer cannot be made to point to a different memory location, and in that sense is very similar to a [reference](references-cpp.md).

Pointers (along with references) are used extensively in C++ to pass larger objects to and from functions because it is usually far more efficient to copy a pointer than to copy an entire object. When defining a function, specify pointer parameters as **const** unless you intend for the function to modify the object. In general, **const** references are the preferred way to pass objects to functions unless the value of the object can possibly be **nullptr**.

Pointers to functions enable functions to be passed to other functions and are used for "callbacks" in C-style programming.

## Pointer errors

In C and C++, pointer errors are by far the greatest cause of crashes, hangs, data corruption, security holes and general programmer misery. In modern C++, the use of *raw pointers* is strongly discouraged except in very specific scenarios. Modern C++ provides *smart pointers* for allocating objects, *iterators* for traversing data structures, and *lambda expressions* for passing callable functions. By using these language and library facilities instead of raw pointers, you will make your program safer, easier to debug, and simpler to understand and maintain.

## Initialization and member access

The following example shows how to declare a pointer and initialize it with an object allocated on the heap, and then how to use it. It also shows a few of the dangers associated with pointers.

```cpp
// pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
    mc.print(); // "Lisa, 21"
}


int main()
{
    // Use the * operator to declare a pointer type
    // Use new to allocate and initialize memory
    MyClass* pmc = new MyClass{ 108, "Mike" };

    // Prints the memory address. Usually not what you want.
    std:: cout << pmc << std::endl;

    // Copy the pointed-to object by dereferencing the pointer
    // to access the contents of the memory location.
    // mc is a separate object, allocated here on the stack
    MyClass mc = *pmc;

    // Declare a pointer that points to mc using the addressof operator
    MyClass* pcopy = &mc;

    // Use the -> operator to access the object's public members
    pmc->print(); // "Mike, 108"

    // Copy the pointer. Now pmc and pmc2 point to same object!
    MyClass* pmc2 = pmc;

    // Use copied pointer to modify the original object
    pmc2->name = "Lisa";
    pmc->print(); // "Lisa, 108"
    pmc2->print(); // "Lisa, 108"

    // Pass the pointer to a function.
    func_A(mc);
    pmc->print(); // "Lisa, 3"
    pmc2->print(); // "Lisa, 3"

    // Dereference the pointer and pass a copy
    // of the pointed-to object to a function
    func_B(*mc);
    pmc->print(); // "Lisa, 3" (original not modified by function)

    delete(pmc); // don't forget to give memory back to operating system!
   // delete(pmc2); //crash! memory location was already deleted
}
```

## Const pointers and pointers to const objects

A const pointer can point to either a const or non-const object, but can't be modified to point to a new object. When a non-const or const pointer points to a const object, the pointer cannot be used to modify the object and can only call const member functions. For more information, see [const and volatile pointers](const-and-volatile-pointers.md).

## Pointer arithmetic

Certain arithmetic operations can be performed on non-const pointers to make them point to a new memory location. A pointer can be incremented and decremented using the **++**, **+=**, **-=** and **--** operators. This technique can be used in arrays and is especially useful in buffers of untyped data. A **void\*** increments by the size of a **char** (1 byte). A typed pointer increments by size of the type it points to. 

```cpp
#include <iostream>
#include <string>

using namespace std;


class MyClass
{
public:
    int num;
    std::string name;
    void print() { std::cout << name << ":" << num << std::endl; }
};


int main()
{
   // Pointer arithmetic may be done with an array declared
   // on the stack or allocated on the heap with new.
   // The increment operator takes into account the size
   // of the objects pointed to. In this example p increments by sizeof(int)
   int* p = new int[5];
   for (i = 0; i < 5; i++, p++)
   {
      *p = i * 10; // set the value of the pointed-to int
      printf_s("0x%p %d\n", p, *p); //print the pointer address, and the value of the pointed-to int
   }

   MyClass arr[3];
   arr[0] = {108, "Mike"};
   arr[1] = {109, "Lisa"};
   arr[2] = {110, "Tabby"};

    // pmc increments by sizeof(MyClass):

    MyClass* pmc = &arr[0];
    cout << pmc->name; // Mike
    pmc++;
    cout << pmc->name; // Lisa
    pmc++;
    cout << pmc->name; //Tabby

   // A common expression seen is dereferencing in combination
   // with increment or decrement operators, as shown here.
   // The indirection operator * takes precedence over the
   // increment operator ++.
   // These are particularly useful in manipulating char arrays.
   char s1[4] = "cat";
   char s2[4] = "dog";
   char* p1 = s1;
   char* p2 = s2;

   // the following is a string copy operation
   while (*p1++ = *p2++);

   // s2 was copied into s1, so now they are both equal to "dog"
   printf_s("%s %s", s1, s2);
}
```

## void* pointers

A pointer to **void** simply points to a raw memory location. Sometimes it is unfortunately necessary to cast a typed pointer to **void\***, for example when passing a pointer to a C++ class object to a C function. The contents of the memory location are not changed, but the type information is lost, so that you cannot perform increment or decrement operations. A memory location can be cast from MyClass* to void* and back again to MyClass* although such operations are inherently error-prone. Modern C++ discourages the use of void pointers unless absolutely necessary.

## Pointers to functions

TBD 
The declarator for a pointer to function looks like this:

> __(\*__ \[*cv-qualifiers*] *identifier* **)(** *argument-list* **)** \[*cv-qualifers*] \[*exception-specification*] \[**=** *expression*] **;**

For an array of pointers, the syntax looks like this:

> __\*__ *identifier* **\[** \[*constant-expression*] **]**


## Example

Another example illustrates the use of pointers in data structures; in this case, a linked list.

```cpp
// pointer_linkedlist.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

struct NewNode {
   NewNode() : node(0){}
   int i;
   NewNode * node;
};

void WalkList(NewNode * ptr) {
   if (ptr != 0) {
      int i = 1;
      while (ptr->node != 0 ) {
         cout << "node " << i++ << " = " << ptr->i << endl;
         ptr = ptr->node;
      }
      cout << "node " << i++ << " = " << ptr->i << endl;
   }
}

void AddNode(NewNode ** ptr) {
   NewNode * walker = 0;
   NewNode * MyNewNode = new NewNode;
   cout << "enter a number: " << endl;
   cin >> MyNewNode->i;

   if (*ptr == 0)
      *ptr = MyNewNode;
   else  {
      walker = *ptr;
      while (walker->node != 0)
         walker = walker->node;

      walker->node = MyNewNode;
   }
}

int main() {
   char ans = ' ';
   NewNode * ptr = 0;
   do {
      cout << "a (add node)  d (display list)  q (quit)" << endl;
      cin >> ans;
      switch (ans) {
      case 'a':
         AddNode(&ptr);
         break;
      case 'd':
         WalkList(ptr);
         break;
      }
   } while (ans != 'q');
}
```

```Output
a
45
d
a
789
d
qa (add node)  d (display list)  q (quit)
enter a number:
a (add node)  d (display list)  q (quit)
node 1 = 45
a (add node)  d (display list)  q (quit)
enter a number:
a (add node)  d (display list)  q (quit)
node 1 = 45
node 2 = 789
a (add node)  d (display list)  q (quit)
```

## Example

The following example demonstrates how pointer arithmetic can be used to access individual pixels in a bitmap. Note the use of **new** and **delete**, and the dereference operator.

```cpp

#include <iostream>
#include <string>
#include <Windows.h>
#include <ostream>
#include <fstream>

using namespace std;

int main()
{

    BITMAPINFOHEADER header;
    header.biHeight = 100;
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

    // Create a gray square with a 2-pixel wide outline
    unsigned char* begin = &buffer[0];
    unsigned char* end = &buffer[0] + bufferSize;
    unsigned char* p = begin;
    constexpr int pixelWidth = 3;
    constexpr int borderWidth = 2;

    while (p < end)
    {
            // is top or bottom row:
        if ((p < begin + header.biWidth * pixelWidth * borderWidth)
            || (p > end - header.biWidth * pixelWidth * borderWidth) 
            // is left or right edge:
            || (p - begin) % (header.biWidth * pixelWidth) < (borderWidth * pixelWidth)
            || (p - begin) % (header.biWidth * pixelWidth) > ((header.biWidth - borderWidth) * pixelWidth))
        {
            *p = 0x0;
        }
        else
        {
            *p = 0xC3;
        }
        p++; //increment one byte (char)
    }

    ofstream wf(R"(box.bmp)", ios::out | ios::binary);

    wf.write(reinterpret_cast<char*>(&bf), sizeof(bf));
    wf.write(reinterpret_cast<char*>(&header), sizeof(header));
    wf.write(reinterpret_cast<char*>(begin), bufferSize);
    delete[] buffer;
    wf.close();
}
```

## See also

[Indirection Operator: *](../cpp/indirection-operator-star.md)<br/>
[Address-of Operator: &](../cpp/address-of-operator-amp.md)
