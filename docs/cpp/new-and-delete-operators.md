---
title: "new and delete Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "delete_cpp"
  - "new_cpp"
  - "new"
  - "delete"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "new keyword [C++], dynamic allocation of objects"
  - "nothrownew.obj"
  - "delete keyword [C++], syntax"
ms.assetid: fa721b9e-0374-4f04-bb87-032ea775bcc8
caps.latest.revision: 16
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
# new and delete Operators

C++ supports dynamic allocation and deallocation of objects using the [new](../cpp/new-operator-cpp.md) and [delete](../cpp/delete-operator-cpp.md) operators. These operators allocate memory for objects from a pool called the free store. The `new` operator calls the special function [operator new](../cpp/new-operator-cpp.md), and the `delete` operator calls the special function [operator delete](../cpp/delete-operator-cpp.md).  
  
 In [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] .NET 2002, the `new` function in the Standard C++ Library will support the behavior specified in the C++ standard, which is to throw a std::bad_alloc exception if the memory allocation fails. If you still want the non-throwing version of `new`, link your program with nothrownew.obj. However, when you link with nothrownew.obj, the default `operator new` in the Standard C++ Library no longer functions.  
  
 For a list of the library files that comprise the C Runtime Library and the Standard C++ Library, see [CRT Library Features](../c-runtime-library/crt-library-features.md).  
  
##  <a id="new_operator"> </a> The new operator  
 When a statement such as the following is encountered in a program, it translates into a call to the function `operator new`:  
  
```cpp  
char *pch = new char[BUFFER_SIZE];  
```  
  
If the request is for zero bytes of storage, **operator new** returns a pointer to a distinct object (that is, repeated calls to **operator new** return different pointers). If there is insufficient memory for the allocation request, **operator new** throws a std::bad_alloc exception, or returns **nullptr** if you have linked in non-throwing `operator new` support.  
  
You can write a routine that attempts to free memory and retry the allocation; see [_set_new_handler](../c-runtime-library/reference/set-new-handler.md) for more information. For more details on the recovery scheme, see the Handling insufficient memory section of this topic.  

  
The two scopes for `operator new` functions are described in the following table.  
  
### Scope for operator new Functions  
  
|Operator|Scope|  
|--------------|-----------|  
|**::operator new**|Global|  
|*class-name* **::operator new**|Class|  
  
 The first argument to **operator new** must be of type **size_t** (a type defined in STDDEF.H), and the return type is always **void \***.  
  
 The global **operator new** function is called when the **new** operator is used to allocate objects of built-in types, objects of class type that do not contain user-defined **operator new** functions, and arrays of any type. When the **new** operator is used to allocate objects of a class type where an **operator new** is defined, that class's **operator new** is called.  
  
 An **operator new** function defined for a class is a static member function (which cannot, therefore, be virtual) that hides the global **operator new** function for objects of that class type. Consider the case where **new** is used to allocate and set memory to a given value:  
  
```cpp  
// spec1_the_operator_new_function1.cpp  
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
  
 The argument supplied in parentheses to **new** is passed to `Blanks::operator new` as the `chInit` argument. However, the global **operator new** function is hidden, causing code such as the following to generate an error:  
  
```cpp  
Blanks *SomeBlanks = new Blanks;  
```  
  
 In Visual C++ 5.0 and earlier, nonclass types and all arrays (regardless of whether they were of **class** type) allocated using the **new** operator always used the global **operator new** function.  
  
 Beginning with Visual C++ 5.0, the compiler supports member array **new** and **delete** operators in a class declaration. For example:  
  
```cpp  
// spec1_the_operator_new_function2.cpp  
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
  
### Handling insufficient memory  
 Testing for failed memory allocation can be done with code such as the following:  
  
```cpp  
// insufficient_memory_conditions.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
#define BIG_NUMBER 100000000  
int main() {  
   int *pI = new int[BIG_NUMBER];  
   if( pI == 0x0 ) {  
      cout << "Insufficient memory" << endl;  
      return -1;  
   }  
}  
```  
  
 There is another ways to handle failed memory allocation requests: write a custom recovery routine to handle such a failure, then register your function by calling the [_set_new_handler](../c-runtime-library/reference/set-new-handler.md) run-time function.  
  
##  <a id="delete_operator"> </a> The delete operator  
 Memory that is dynamically allocated using the **new** operator can be freed using the **delete** operator. The delete operator calls the **operator delete** function, which frees memory back to the available pool. Using the **delete** operator also causes the class destructor (if there is one) to be called.  
  
 There are global and class-scoped **operator delete** functions. Only one **operator delete** function can be defined for a given class; if defined, it hides the global **operator delete** function. The global **operator delete** function is always called for arrays of any type.  
  
 The global **operator delete** function. Two forms exist for the  global **operator delete**  and class-member **operator delete** functions:  
  
```cpp  
void operator delete( void * );  
void operator delete( void *, size_t );  
```  
  
 Only one of the preceding two forms can be present for a given class. The first form takes a single argument of type **void \***, which contains a pointer to the object to deallocate. The second form—sized deallocation—takes two arguments, the first of which is a pointer to the memory block to deallocate and the second of which is the number of bytes to deallocate. The return type of both forms is `void` (**operator delete** cannot return a value).  
  
 The intent of the second form is to speed up searching for the correct size category of the object to be deleted, which is often not stored near the allocation itself and likely uncached; the second form is particularly useful when an **operator delete** function from a base class is used to delete an object of a derived class.  
  
 The **operator delete** function is static; therefore, it cannot be virtual. The `operator delete` function obeys access control, as described in [Member-Access Control](../cpp/member-access-control-cpp.md).  
  
 The following example shows user-defined **operator new** and **operator delete** functions designed to log allocations and deallocations of memory:  
  
```cpp  
// spec1_the_operator_delete_function1.cpp  
// compile with: /EHsc  
// arguments: 3  
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
  
 The preceding code can be used to detect "memory leakage" — that is, memory that is allocated on the free store but never freed. To perform this detection, the global **new** and **delete** operators are redefined to count allocation and deallocation of memory.  
  
 Beginning with Visual C++ 5.0, the compiler supports member array **new** and **delete** operators in a class declaration. For example:  
  
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

