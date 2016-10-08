---
title: "How to: Access Characters in a System::String"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: get-started-article
ms.assetid: cfc89756-aef3-4988-907e-fb236dcb7087
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# How to: Access Characters in a System::String
You can access characters of a <xref:System.String?qualifyHint=False> object for high-performance calls to unmanaged functions that take `wchar_t*` strings. The method yields an interior pointer to the first character of the <xref:System.String?qualifyHint=False> object. This pointer can be manipulated directly or pinned and passed to a function expecting an ordinary `wchar_t` string.  
  
## Example  
 `PtrToStringChars` returns a <xref:System.Char?qualifyHint=False>, which is an interior pointer (also known as a `byref`). As such, it is subject to garbage collection. You don't have to pin this pointer unless you're going to pass it to a native function.  
  
 Consider the following code.  Pinning is not needed because `ppchar` is an interior pointer, and if the garbage collector moves the string it points to, it will also update `ppchar`. Without a [pin_ptr (C++/CLI)](../VS_visualcpp/pin_ptr--C---CLI-.md), the code will work and not have the potential performance hit caused by pinning.  
  
 If you pass `ppchar` to a native function, then it must be a pinning pointer; the garbage collector will not be able to update any pointers on the unmanaged stack frame.  
  
```  
// PtrToStringChars.cpp  
// compile with: /clr  
#include<vcclr.h>  
using namespace System;  
  
int main() {  
   String ^ mystring = "abcdefg";  
  
   interior_ptr<const Char> ppchar = PtrToStringChars( mystring );  
  
   for ( ; *ppchar != L'\0'; ++ppchar )  
      Console::Write(*ppchar);  
}  
```  
  
 **abcdefg**   
## Example  
 This example shows where pinning is needed.  
  
```  
// PtrToStringChars_2.cpp  
// compile with: /clr  
#include <string.h>  
#include <vcclr.h>  
// using namespace System;  
  
size_t getlen(System::String ^ s) {  
   // Since this is an outside string, we want to be secure.  
   // To be secure, we need a maximum size.  
   size_t maxsize = 256;  
   // make sure it doesn't move during the unmanaged call  
   pin_ptr<const wchar_t> pinchars = PtrToStringChars(s);  
   return wcsnlen(pinchars, maxsize);  
};  
  
int main() {  
   System::Console::WriteLine(getlen("testing"));  
}  
```  
  
 **7**   
## Example  
 An interior pointer has all the properties of a native C++ pointer. For example, you can use it to walk a linked data structure and do insertions and deletions using only one pointer:  
  
```  
// PtrToStringChars_3.cpp  
// compile with: /clr /LD  
using namespace System;  
ref struct ListNode {  
   Int32 elem;   
   ListNode ^ Next;  
};  
  
void deleteNode( ListNode ^ list, Int32 e ) {   
   interior_ptr<ListNode ^> ptrToNext = &list;  
   while (*ptrToNext != nullptr) {  
      if ( (*ptrToNext) -> elem == e )  
         *ptrToNext = (*ptrToNext) -> Next;   // delete node  
      else  
         ptrToNext = &(*ptrToNext) -> Next;   // move to next node  
   }  
}  
```  
  
## See Also  
 [Using C++ Interop (Implicit PInvoke)](../VS_visualcpp/Using-C---Interop--Implicit-PInvoke-.md)