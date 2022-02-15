---
title: "Storage classes (C++)"
description: "In C++, the static, extern and thread_local keywords specify the lifetime, linkage, and memory location of a variable or function."
ms.date: 02/14/2022
f1_keywords: ["thread_local_cpp", "static_cpp", "register_cpp"]
helpviewer_keywords: ["storage classes [C++], basic concepts"]
ms.assetid: f10e1c56-6249-4eb6-b08f-09ab1eef1992
---
# Storage classes

A *storage class* in the context of C++ variable declarations is a type specifier that governs the lifetime, linkage, and memory location of objects. A given object can have only one storage class. Variables defined within a block have automatic storage unless otherwise specified using the **`extern`**, **`static`**, or **`thread_local`** specifiers. Automatic objects and variables have no linkage; they aren't visible to code outside the block. Memory is allocated for them automatically when execution enters the block, and it's de-allocated when the block is exited.

## Notes

- The [`mutable`](../cpp/mutable-data-members-cpp.md) keyword may be considered a storage class specifier. However, it's only available in the member list of a class definition.

- **Visual Studio 2010 and later:** The **`auto`** keyword is no longer a C++ storage-class specifier, and the **`register`** keyword is deprecated. **Visual Studio 2017 version 15.7 and later:** (available in [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) mode and later): The **`register`** keyword is removed from the C++ language. Its use causes a diagnostic message:

  ```cpp
  // c5033.cpp
  // compile by using: cl /c /std:c++17 c5033.cpp
  register int value; // warning C5033: 'register' is no longer a supported storage class
  ```

## <a name="static"></a> `static`

The **`static`** keyword can be used to declare variables and functions at global scope, namespace scope, and class scope. Static variables can also be declared at local scope.

Static duration means that the object or variable is allocated when the program starts and is deallocated when the program ends. External linkage means that the name of the variable is visible from outside the file where the variable is declared. Conversely, internal linkage means that the name isn't visible outside the file where the variable is declared. By default, an object or variable that is defined in the global namespace has static duration and external linkage. The **`static`** keyword can be used in the following situations.

1. When you declare a variable or function at file scope (global and/or namespace scope), the **`static`** keyword specifies that the variable or function has internal linkage. When you declare a variable, the variable has static duration and the compiler initializes it to 0 unless you specify another value.

1. When you declare a variable in a function, the **`static`** keyword specifies that the variable retains its state between calls to that function.

1. When you declare a data member in a class declaration, the **`static`** keyword specifies that one copy of the member is shared by all instances of the class. A `static` data member must be defined at file scope. An integral data member that you declare as **`const static`** can have an initializer.

1. When you declare a member function in a class declaration, the **`static`** keyword specifies that the function is shared by all instances of the class. A `static` member function can't access an instance member because the function doesn't have an implicit **`this`** pointer. To access an instance member, declare the function with a parameter that's an instance pointer or reference.

1. You can't declare the members of a `union` as **`static`**. However, a globally declared anonymous `union` must be explicitly declared **`static`**.

This example shows how a variable declared **`static`** in a function retains its state between calls to that function.

```cpp
// static1.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
void showstat( int curr ) {
   static int nStatic;    // Value of nStatic is retained
                          // between each function call
   nStatic += curr;
   cout << "nStatic is " << nStatic << endl;
}

int main() {
   for ( int i = 0; i < 5; i++ )
      showstat( i );
}
```

```Output
nStatic is 0
nStatic is 1
nStatic is 3
nStatic is 6
nStatic is 10
```

This example shows the use of **`static`** in a class.

```cpp
// static2.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class CMyClass {
public:
   static int m_i;
};

int CMyClass::m_i = 0;
CMyClass myObject1;
CMyClass myObject2;

int main() {
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;

   myObject1.m_i = 1;
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;

   myObject2.m_i = 2;
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;

   CMyClass::m_i = 3;
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;
}
```

```Output
0
0
1
1
2
2
3
3
```

The following example shows a local variable declared **`static`** in a member function. The **`static`** variable is available to the whole program; all instances of the type share the same copy of the **`static`** variable.

```cpp
// static3.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;
struct C {
   void Test(int value) {
      static int var = 0;
      if (var == value)
         cout << "var == value" << endl;
      else
         cout << "var != value" << endl;

      var = value;
   }
};

int main() {
   C c1;
   C c2;
   c1.Test(100);
   c2.Test(100);
}
```

```Output
var != value
var == value
```

Starting in C++11, a **`static`** local variable initialization is guaranteed to be thread-safe. This feature is sometimes called *magic statics*. However, in a multithreaded application all subsequent assignments must be synchronized. The thread-safe static initialization feature can be disabled by using the [`/Zc:threadSafeInit-`](../build/reference/zc-threadsafeinit-thread-safe-local-static-initialization.md) flag to avoid taking a dependency on the CRT.

## <a name="extern"></a> `extern`

Objects and variables declared as **`extern`** declare an object that is defined in another translation unit or in an enclosing scope as having external linkage. For more information, see [`extern`](extern-cpp.md) and [Translation units and linkage](program-and-linkage-cpp.md).

## <a name="thread_local"></a> `thread_local` (C++11)

A variable declared with the **`thread_local`** specifier is accessible only on the thread on which it's created. The variable is created when the thread is created, and it's destroyed when the thread is destroyed. Each thread has its own copy of the variable. On Windows, **`thread_local`** is functionally equivalent to the Microsoft-specific [`__declspec( thread )`](../cpp/thread.md) attribute.

```cpp
thread_local float f = 42.0; // Global namespace. Not implicitly static.

struct S // cannot be applied to type definition
{
    thread_local int i; // Illegal. The member must be static.
    thread_local static char buf[10]; // OK
};

void DoSomething()
{
    // Apply thread_local to a local variable.
    // Implicitly "thread_local static S my_struct".
    thread_local S my_struct;
}
```

Things to note about the **`thread_local`** specifier:

- Dynamically initialized thread-local variables in DLLs may not be correctly initialized on all calling threads. For more information, see [`thread`](thread.md).

- The **`thread_local`** specifier may be combined with **`static`** or **`extern`**.

- You can apply **`thread_local`** only to data declarations and definitions; **`thread_local`** can't be used on function declarations or definitions.

- You can specify **`thread_local`** only on data items with static storage duration, which includes global data objects (both **`static`** and **`extern`**), local static objects, and static data members of classes. Any local variable declared **`thread_local`** is implicitly static if no other storage class is provided; in other words, at block scope **`thread_local`** is equivalent to **`thread_local static`**.

- You must specify **`thread_local`** for both the declaration and the definition of a thread local object, whether the declaration and definition occur in the same file or separate files.

- We don't recommend you use **`thread_local`** variables with `std::launch::async`. For more information, see [`<future>` functions](../standard-library/future-functions.md).

On Windows, **`thread_local`** is functionally equivalent to  [`__declspec(thread)`](../cpp/thread.md) except that *`*__declspec(thread)`** can be applied to a type definition and is valid in C code. Whenever possible, use **`thread_local`** because it's part of the C++ standard and is therefore more portable.

## <a name="register"></a> register

**Visual Studio 2017 version 15.3 and later** (available in [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) mode and later): The **`register`** keyword is no longer a supported storage class. Its use causes a diagnostic. The keyword is still reserved in the standard for future use.

```cpp
   register int val; // warning C5033: 'register' is no longer a supported storage class
```

## Example: automatic vs. static initialization

A local automatic object or variable is initialized every time the flow of control reaches its definition. A local static object or variable is initialized the first time the flow of control reaches its definition.

Consider the following example, which defines a class that logs initialization and destruction of objects and then defines three objects, `I1`, `I2`, and `I3`:

```cpp
// initialization_of_objects.cpp
// compile with: /EHsc
#include <iostream>
#include <string.h>
using namespace std;

// Define a class that logs initializations and destructions.
class InitDemo {
public:
    InitDemo( const char *szWhat );
    ~InitDemo();

private:
    char *szObjName;
    size_t sizeofObjName;
};

// Constructor for class InitDemo
InitDemo::InitDemo( const char *szWhat ) :
    szObjName(NULL), sizeofObjName(0) {
    if ( szWhat != 0 && strlen( szWhat ) > 0 ) {
        // Allocate storage for szObjName, then copy
        // initializer szWhat into szObjName, using
        // secured CRT functions.
        sizeofObjName = strlen( szWhat ) + 1;

        szObjName = new char[ sizeofObjName ];
        strcpy_s( szObjName, sizeofObjName, szWhat );

        cout << "Initializing: " << szObjName << "\n";
    }
    else {
        szObjName = 0;
    }
}

// Destructor for InitDemo
InitDemo::~InitDemo() {
    if( szObjName != 0 ) {
        cout << "Destroying: " << szObjName << "\n";
        delete szObjName;
    }
}

// Enter main function
int main() {
    InitDemo I1( "Auto I1" ); {
        cout << "In block.\n";
        InitDemo I2( "Auto I2" );
        static InitDemo I3( "Static I3" );
    }
    cout << "Exited block.\n";
}
```

```Output
Initializing: Auto I1
In block.
Initializing: Auto I2
Initializing: Static I3
Destroying: Auto I2
Exited block.
Destroying: Auto I1
Destroying: Static I3
```

This example demonstrates how and when the objects `I1`, `I2`, and `I3` are initialized and when they're destroyed.

There are several points to note about the program:

- First, `I1` and `I2` are automatically destroyed when the flow of control exits the block in which they're defined.

- Second, in C++, it isn't necessary to declare objects or variables at the beginning of a block. Furthermore, these objects are initialized only when the flow of control reaches their definitions. (`I2` and `I3` are examples of such definitions.) The output shows exactly when they're initialized.

- Finally, static local variables such as `I3` retain their values while the program runs, but are destroyed as the program terminates.

## See also

[Declarations and Definitions](../cpp/declarations-and-definitions-cpp.md)
