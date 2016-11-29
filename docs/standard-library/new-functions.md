---
title: "&lt;new&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: e250f06a-b025-4509-ae7a-5356d56aad7d
caps.latest.revision: 10
manager: "ghogen"
---
# &lt;new&gt; functions
|||  
|-|-|  
|[nothrow](#nothrow)|[set_new_handler](#set_new_handler)|  
  
##  <a name="nothrow"></a>  nothrow  
 Provides an object to be used as an argument for the `nothrow` versions of **new** and **delete**.  
  
```  
extern const std::nothrow_t nothrow;  
```  
  
### Remarks  
 The object is used as a function argument to match the parameter type [std::nothrow_t](../standard-library/nothrow-t-structure.md).  
  
### Example  
  See [operator new](../standard-library/new-operators.md#operator_new) and [operator new&#91;&#93;](../standard-library/new-operators.md#operator_new_arr) for examples of how `std::nothrow_t` is used as a function parameter.  
  
##  <a name="set_new_handler"></a>  set_new_handler  
 Installs a user function that is to be called when `operator new` fails in its attempt to allocate memory.  
  
```  
new_handler set_new_handler(new_handler Pnew) throw();
```  
  
### Parameters  
 `Pnew`  
 The new_handler to be installed.  
  
### Return Value  
 0 on the first call and the previous `new_handler` on subsequent calls.  
  
### Remarks  
 The function stores `Pnew` in a static [new handler](../standard-library/new-typedefs.md#new_handler) pointer that it maintains, then returns the value previously stored in the pointer. The new handler is used by [operator new](../standard-library/new-operators.md#operator_new)( **size_t**).  
  
### Example  
  
```cpp  
// new_set_new_handler.cpp  
// compile with: /EHsc  
#include<new>  
#include<iostream>  
  
using namespace std;  
void __cdecl newhandler( )  
{  
   cout << "The new_handler is called:" << endl;  
   throw bad_alloc( );  
   return;  
}  
  
int main( )   
{  
   set_new_handler (newhandler);  
   try  
   {  
      while ( 1 )   
      {  
         new int[5000000];  
         cout << "Allocating 5000000 ints." << endl;  
      }  
   }  
   catch ( exception e )  
   {  
      cout << e.what( ) << endl;  
   }  
}  
```  
  
```Output  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
Allocating 5000000 ints.  
The new_handler is called:  
bad allocation  
```  
  
## See Also  
 [\<new>](../standard-library/new.md)

