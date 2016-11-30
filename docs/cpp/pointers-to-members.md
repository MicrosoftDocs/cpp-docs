---
title: "Pointers to Members | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "declarations, pointers"
  - "class members, pointers to"
  - "pointers, to members"
  - "members, pointers to"
  - "pointers, declarations"
ms.assetid: f42ddb79-9721-4e39-95b1-c56b55591f68
caps.latest.revision: 9
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
# Pointers to Members
Declarations of pointers to members are special cases of pointer declarations.  They are declared using the following sequence:  
  
```  
[storage-class-specifiers] [cv-qualifiers] type-specifiers [ms-modifier]qualified-name ::* [cv-qualifiers] identifier  
[= & qualified-name :: member-name];  
```  
  
1.  The declaration specifier:  
  
    -   An optional storage class specifier.  
  
    -   Optional **const** and/or `volatile` specifiers.  
  
    -   The type specifier: the name of a type.  This is the type of the member to be pointed to, not the class.  
  
2.  The declarator:  
  
    -   An optional Microsoft specific modifier. For more information, see [Microsoft-Specific Modifiers](../cpp/microsoft-specific-modifiers.md).  
  
    -   The qualified name of the class containing the members to be pointed to.   
  
    -   The :: operator.  
  
    -   The **\*** operator.  
  
    -   Optional **const** and/or `volatile` specifiers.  
  
    -   The identifier naming the pointer to member.  
  
    -   An optional initializer:  
  
 The **=** operator.  
  
 The **&** operator.  
  
 The qualified name of the class.  
  
 The `::` operator.  
  
 The name of a nonstatic member of the class of the appropriate type.  
  
 As always, multiple declarators (and any associated initializers) are allowed in a single declaration.  
  
 A pointer to a member of a class differs from a normal pointer because it has type information for the type of the member and for the class to which the member belongs. A normal pointer identifies (has the address of) only a single object in memory. A pointer to a member of a class identifies that member in any instance of the class. The following example declares a class, `Window`, and some pointers to member data.  
  
```  
// pointers_to_members1.cpp  
class Window  
{  
public:  
   Window();                               // Default constructor.  
   Window( int x1, int y1,                 // Constructor specifying  
   int x2, int y2 );                       //  window size.  
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
  
 In the preceding example, `pwCaption` is a pointer to any member of class `Window` that has type **char\***. The type of `pwCaption` is `char * Window::*`. The next code fragment declares pointers to the `SetCaption` and `GetCaption` member functions.  
  
```  
const char * (Window::*pfnwGC)() = &Window::GetCaption;  
bool (Window::*pfnwSC)( const char * ) = &Window::SetCaption;  
```  
  
 The pointers `pfnwGC` and `pfnwSC` point to `GetCaption` and `SetCaption` of the `Window` class, respectively. The code copies information to the window caption directly using the pointer to member `pwCaption`:  
  
```  
Window wMainWindow;  
Window *pwChildWindow = new Window;  
char   *szUntitled    = "Untitled -  ";  
int    cUntitledLen   = strlen( szUntitled );  
  
strcpy_s( wMainWindow.*pwCaption, cUntitledLen, szUntitled );  
(wMainWindow.*pwCaption)[cUntitledLen - 1] = '1';     //same as  
//wMainWindow.SzWinCaption [cUntitledLen - 1] = '1';  
strcpy_s( pwChildWindow->*pwCaption, cUntitledLen, szUntitled );   
(pwChildWindow->*pwCaption)[cUntitledLen - 1] = '2'; //same as //pwChildWindow->szWinCaption[cUntitledLen - 1] = '2';  
```  
  
 The difference between the **.\*** and **–>\*** operators (the pointer-to-member operators) is that the **.\*** operator selects members given an object or object reference, while the **–>\*** operator selects members through a pointer. (For more about these operators, see [Expressions with Pointer-to-Member Operators](../cpp/pointer-to-member-operators-dot-star-and-star.md).)  
  
 The result of the pointer-to-member operators is the type of the member — in this case, **char \***.  
  
 The following code fragment invokes the member functions `GetCaption` and `SetCaption` using pointers to members:  
  
```  
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
 The address of a static member is not a pointer to a member. It is a regular pointer to the one instance of the static member. Because only one instance of a static member exists for all objects of a given class, the ordinary address-of **(&)** and dereference **(\*)** operators can be used.  
  
## Pointers to Members and Virtual Functions  
 Invoking a virtual function through a pointer-to-member function works as if the function had been called directly; the correct function is looked up in the v-table and invoked.  
  
 The key to virtual functions working, as always, is invoking them through a pointer to a base class. (For more information about virtual functions, see [Virtual Functions](../cpp/virtual-functions.md).)  
  
 The following code shows how to invoke a virtual function through a pointer-to-member function:  
  
```  
// virtual_functions.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
class Base  
{  
public:  
virtual void Print();  
};  
void (Base ::* bfnPrint)() = &Base :: Print;  
void Base :: Print()  
{  
cout << "Print function for class Base\n";  
}  
  
class Derived : public Base  
{  
public:  
void Print();  // Print is still a virtual function.  
};  
  
void Derived :: Print()  
{  
cout << "Print function for class Derived\n";  
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
  
//Output: Print function for class Base  
Print function for class Derived  
```  
  
## See Also  
 [C++ Abstract Declarators](http://msdn.microsoft.com/en-us/e7e18c18-0cad-4450-942b-d27e1d4dd088)