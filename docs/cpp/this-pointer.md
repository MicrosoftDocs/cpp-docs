---
title: "this Pointer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "this"
  - "this_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nonstatic member functions"
  - "pointers, to class instance"
  - "this pointer"
ms.assetid: 92e3256a-4ad9-4d46-8be1-d77fad90791f
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# this Pointer
The **this** pointer is a pointer accessible only within the nonstatic member functions of a **class**, `struct`, or **union** type. It points to the object for which the member function is called. Static member functions do not have a **this** pointer.  
  
## Syntax  
  
```  
  
      this   
this->member-identifier  
```  
  
## Remarks  
 An object's **this** pointer is not part of the object itself; it is not reflected in the result of a `sizeof` statement on the object. Instead, when a nonstatic member function is called for an object, the address of the object is passed by the compiler as a hidden argument to the function. For example, the following function call:  
  
```  
myDate.setMonth( 3 );  
```  
  
 can be interpreted this way:  
  
```  
setMonth( &myDate, 3 );  
```  
  
 The object's address is available from within the member function as the **this** pointer. Most uses of **this** are implicit. It is legal, though unnecessary, to explicitly use **this** when referring to members of the class. For example:  
  
```  
void Date::setMonth( int mn )  
{  
   month = mn;            // These three statements  
   this->month = mn;      // are equivalent  
   (*this).month = mn;  
}  
```  
  
 The expression `*this` is commonly used to return the current object from a member function:  
  
```  
return *this;  
```  
  
 The **this** pointer is also used to guard against self-reference:  
  
```  
if (&Object != this) {  
// do not execute in cases of self-reference  
```  
  
> [!NOTE]
>  Because the **this** pointer is nonmodifiable, assignments to **this** are not allowed. Earlier implementations of C++ allowed assignments to **this**.  
  
 Occasionally, the **this** pointer is used directly — for example, to manipulate self-referential data structures, where the address of the current object is required.  
  
## Example  
  
```  
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
  
    // assignment opperator  
    myBuf = yourBuf;  
  
    // Display 'your buffer'  
    myBuf.Display();  
}  
```  
  
```Output  
my buffer  
your buffer  
```  
  
## Type of the this pointer  
 The **this** pointer's type can be modified in the function declaration by the **const** and `volatile` keywords. To declare a function as having the attributes of one or more of these keywords, add the keyword(s) after the function argument list.  
  
 Consider this example:  
  
```  
// type_of_this_pointer1.cpp  
class Point  
{  
    unsigned X() const;  
};  
int main()  
{  
}  
```  
  
 The preceding code declares a member function, `X`, in which the **this** pointer is treated as a **const** pointer to a **const** object. Combinations of *cv-mod-list* options can be used, but they always modify the object pointed to by **this**, not the **this** pointer itself. Therefore, the following declaration declares function `X`; the **this** pointer is a **const** pointer to a **const** object:  
  
```  
// type_of_this_pointer2.cpp  
class Point  
{  
    unsigned X() const;  
};  
int main()  
{  
}  
```  
  
 The type of **this** in a member function is described by the following syntax, where *cv-qualifier-list* is determined from the member functions declarator and can be **const** or **volatile** (or both), and *class-type* is the name of the class:  
  
 *[cv-qualifier-list] class-type*  **\* const this**  
  
 In other words, **this** is always a const pointer; it cannot be reassigned.  The **const** or `volatile` qualifiers used in the member function declaration apply to the class instance pointed to by **this** in the scope of that function.  
  
 The following table explains more about how these modifiers work.  
  
### Semantics of this Modifiers  
  
|Modifier|Meaning|  
|--------------|-------------|  
|**const**|Cannot change member data; cannot invoke member functions that are not **const**.|  
|`volatile`|Member data is loaded from memory each time it is accessed; disables certain optimizations.|  
  
 It is an error to pass a **const** object to a member function that is not **const**. Similarly, it is an error to pass a `volatile` object to a member function that is not `volatile`.  
  
 Member functions declared as **const** cannot change member data — in such functions, the **this** pointer is a pointer to a **const** object.  
  
> [!NOTE]
>  Constructors and destructors cannot be declared as **const** or `volatile`. They can, however, be invoked on **const** or `volatile` objects.  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)   
 