---
description: "Learn more about: Pointers to Members"
title: "Pointers to Members"
ms.date: "11/04/2016"
helpviewer_keywords: ["declarations, pointers", "class members [C++], pointers to", "pointers, to members", "members [C++], pointers to", "pointers, declarations"]
ms.assetid: f42ddb79-9721-4e39-95b1-c56b55591f68
---
# Pointers to Members

Declarations of pointers to members are special cases of pointer declarations.  They're declared using the following sequence:

> *storage-class-specifiers*<sub>opt</sub> *cv-qualifiers*<sub>opt</sub> *type-specifier* *ms-modifier*<sub>opt</sub> *qualified-name* **`::*`** *cv-qualifiers*<sub>opt</sub> *identifier* *pm-initializer*<sub>opt</sub> **`;`**

1. The declaration specifier:

   - An optional storage class specifier.

   - Optional **`const`** and **`volatile`** specifiers.

   - The type specifier: the name of a type. It's the type of the member to be pointed to, not the class.

1. The declarator:

   - An optional Microsoft-specific modifier. For more information, see [Microsoft-Specific Modifiers](../cpp/microsoft-specific-modifiers.md).

   - The qualified name of the class containing the members to be pointed to.

   - The __`::`__ operator.

   - The __`*`__ operator.

   - Optional **`const`** and **`volatile`** specifiers.

   - The identifier naming the pointer to member.

1. An optional pointer-to-member initializer:

   - The **`=`** operator.

   - The **`&`** operator.

   - The qualified name of the class.

   - The __`::`__ operator.

   - The name of a non-static member of the class of the appropriate type.

As always, multiple declarators (and any associated initializers) are allowed in a single declaration. A pointer to member may not point to a static member of the class, a member of reference type, or **`void`**.

A pointer to a member of a class differs from a normal pointer: it has both type information for the type of the member and for the class to which the member belongs. A normal pointer identifies (has the address of) only a single object in memory. A pointer to a member of a class identifies that member in any instance of the class. The following example declares a class, `Window`, and some pointers to member data.

```cpp
// pointers_to_members1.cpp
class Window
{
public:
   Window();                               // Default constructor.
   Window( int x1, int y1,                 // Constructor specifying
   int x2, int y2 );                       // Window size.
   bool SetCaption( const char *szTitle ); // Set window caption.
   const char *GetCaption();               // Get window caption.
   char *szWinCaption;                     // Window caption.
};

// Declare a pointer to the data member szWinCaption.
char * Window::* pwCaption = &Window::szWinCaption;
int main()
{
}
```

In the preceding example, `pwCaption` is a pointer to any member of class `Window` that's of type **`char*`**. The type of `pwCaption` is `char * Window::*`. The next code fragment declares pointers to the `SetCaption` and `GetCaption` member functions.

```cpp
const char * (Window::* pfnwGC)() = &Window::GetCaption;
bool (Window::* pfnwSC)( const char * ) = &Window::SetCaption;
```

The pointers `pfnwGC` and `pfnwSC` point to `GetCaption` and `SetCaption` of the `Window` class, respectively. The code copies information to the window caption directly using the pointer to member `pwCaption`:

```cpp
Window  wMainWindow;
Window *pwChildWindow = new Window;
char   *szUntitled    = "Untitled -  ";
int     cUntitledLen  = strlen( szUntitled );

strcpy_s( wMainWindow.*pwCaption, cUntitledLen, szUntitled );
(wMainWindow.*pwCaption)[cUntitledLen - 1] = '1';     // same as
// wMainWindow.SzWinCaption [cUntitledLen - 1] = '1';
strcpy_s( pwChildWindow->*pwCaption, cUntitledLen, szUntitled );
(pwChildWindow->*pwCaption)[cUntitledLen - 1] = '2'; // same as
// pwChildWindow->szWinCaption[cUntitledLen - 1] = '2';
```

The difference between the **`.*`** and **`->*`** operators (the pointer-to-member operators) is that the **`.*`** operator selects members given an object or object reference, while the **`->*`** operator selects members through a pointer. For more information about these operators, see [Expressions with Pointer-to-Member Operators](../cpp/pointer-to-member-operators-dot-star-and-star.md).

The result of the pointer-to-member operators is the type of the member. In this case, it's `char *`.

The following code fragment invokes the member functions `GetCaption` and `SetCaption` using pointers to members:

```cpp
// Allocate a buffer.
enum {
    sizeOfBuffer = 100
};
char szCaptionBase[sizeOfBuffer];

// Copy the main window caption into the buffer
//  and append " [View 1]".
strcpy_s( szCaptionBase, sizeOfBuffer, (wMainWindow.*pfnwGC)() );
strcat_s( szCaptionBase, sizeOfBuffer, " [View 1]" );
// Set the child window's caption.
(pwChildWindow->*pfnwSC)( szCaptionBase );
```

## Restrictions on Pointers to Members

The address of a static member isn't a pointer to a member. It's a regular pointer to the one instance of the static member. Only one instance of a static member exists for all objects of a given class. That means you can use the ordinary address-of (**&**) and dereference (<strong>\*</strong>) operators.

## Pointers to Members and Virtual Functions

Invoking a virtual function through a pointer-to-member function works as if the function had been called directly. The correct function is looked up in the v-table and invoked.

The key to virtual functions working, as always, is invoking them through a pointer to a base class. (For more information about virtual functions, see [Virtual Functions](../cpp/virtual-functions.md).)

The following code shows how to invoke a virtual function through a pointer-to-member function:

```cpp
// virtual_functions.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void Print();
};
void (Base::* bfnPrint)() = &Base::Print;
void Base::Print()
{
    cout << "Print function for class Base" << endl;
}

class Derived : public Base
{
public:
    void Print();  // Print is still a virtual function.
};

void Derived::Print()
{
    cout << "Print function for class Derived" << endl;
}

int main()
{
    Base   *bPtr;
    Base    bObject;
    Derived dObject;
    bPtr = &bObject;    // Set pointer to address of bObject.
    (bPtr->*bfnPrint)();
    bPtr = &dObject;    // Set pointer to address of dObject.
    (bPtr->*bfnPrint)();
}

// Output:
// Print function for class Base
// Print function for class Derived
```
