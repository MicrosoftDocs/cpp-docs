---
title: "The this pointer"
description: "The this pointer is a compiler-generated pointer to the current object in nonstatic member functions."
ms.date: 12/11/2023
f1_keywords: ["this_cpp"]
helpviewer_keywords: ["nonstatic member functions [C++]", "pointers, to class instance", "this pointer"]
no-loc: [this, class, struct, union, sizeof, const, volatile]
---
# The `this` pointer

The **`this`** pointer is a pointer accessible only within the nonstatic member functions of a **`class`**, **`struct`**, or **`union`** type. It points to the object for which the member function is called. Static member functions don't have a **`this`** pointer.

## Syntax

```cpp
this
this->member-identifier
```

## Remarks

An object's **`this`** pointer isn't part of the object itself. It's not part of the result of a **`sizeof`** statement on the object. When a nonstatic member function is called for an object, the compiler passes the object's address to the function as a hidden argument. For example, the following function call:

```cpp
myDate.setMonth( 3 );
```

can be interpreted as:

```cpp
setMonth( &myDate, 3 );
```

The object's address is available from within the member function as the **`this`** pointer. Most **`this`** pointer uses are implicit. It's legal, though unnecessary, to use an explicit **`this`** when referring to members of the class. For example:

```cpp
void Date::setMonth( int mn )
{
   month = mn;            // These three statements
   this->month = mn;      // are equivalent
   (*this).month = mn;
}
```

The expression **`*this`** is commonly used to return the current object from a member function:

```cpp
return *this;
```

The **`this`** pointer is also used to guard against self-reference:

```cpp
if (&Object != this) {
// do not execute in cases of self-reference
```

> [!NOTE]
> Because the **`this`** pointer is nonmodifiable, assignments to the **`this`** pointer are not allowed. Earlier implementations of C++ allowed assignment to **`this`**.

Occasionally, the **`this`** pointer is used directly—for example, to manipulate self-referential data structures, where the address of the current object is required.

## Example

```cpp
// this_pointer.cpp
// compile with: /EHsc

#include <iostream>
#include <string.h>

using namespace std;

class Buf
{
public:
    Buf( char* szBuffer, size_t sizeOfBuffer );
    Buf& operator=( const Buf & );
    void Display() { cout << buffer << endl; }

private:
    char*   buffer;
    size_t  sizeOfBuffer;
};

Buf::Buf( char* szBuffer, size_t sizeOfBuffer )
{
    sizeOfBuffer++; // account for a NULL terminator

    buffer = new char[ sizeOfBuffer ];
    if (buffer)
    {
        strcpy_s( buffer, sizeOfBuffer, szBuffer );
        sizeOfBuffer = sizeOfBuffer;
    }
}

Buf& Buf::operator=( const Buf &otherbuf )
{
    if( &otherbuf != this )
    {
        if (buffer)
            delete [] buffer;

        sizeOfBuffer =  strlen( otherbuf.buffer ) + 1;
        buffer = new char[sizeOfBuffer];
        strcpy_s( buffer, sizeOfBuffer, otherbuf.buffer );
    }
    return *this;
}

int main()
{
    Buf myBuf( "my buffer", 10 );
    Buf yourBuf( "your buffer", 12 );

    // Display 'my buffer'
    myBuf.Display();

    // assignment operator
    myBuf = yourBuf;

    // Display 'your buffer'
    myBuf.Display();
}
```

```Output
my buffer
your buffer
```

## Type of the `this` pointer

The **`this`** pointer's type changes depending on whether the function declaration includes the **`const`** and/or **`volatile`** keywords. The following syntax describes the type of **`this`** in a member function:

[*`cv-qualifier-list`*] *`class-type`* **`* const this`**

The member function's declarator determines *`cv-qualifier-list`*. It can be **`const`** or **`volatile`** (or both). *`class-type`* is the name of the class.

The **`this`** pointer can't be reassigned. The **`const`** or **`volatile`** qualifiers used in the member function declaration apply to the class instance the **`this`** pointer points at, in the scope of that function, as shown in the following table:

| Member function declaration | type of `this` pointer for a class named `myClass` |
|---|---|
| `void Func()` | `myClass *` |
| `void Func() const` | `const myClass *` |
| `void Func() volatile` | `volatile myClass *` |
| `void Func() const volatile` | `const volatile myClass *` |

The following table explains more about `const` and `volatile`.

### Semantics of `this` modifiers

|Modifier|Meaning|
|--------------|-------------|
|**`const`**|Can't change member data; can't invoke member functions that aren't **`const`**.|
|**`volatile`**|Member data is loaded from memory each time it's accessed; disables certain optimizations.|

It's an error to pass a **`const`** object to a member function that isn't **`const`**.

Similarly, it's also an error to pass a **`volatile`** object to a member function that isn't **`volatile`**.

Member functions declared as **`const`** can't change member data. In `const` functions, the **`this`** pointer is a pointer to a **`const`** object.

> [!NOTE]
> Constructors and destructors can't be declared as **`const`** or **`volatile`**. They can, however, be invoked on **`const`** or **`volatile`** objects.

## See also

[Keywords](../cpp/keywords-cpp.md)
