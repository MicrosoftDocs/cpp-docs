---
title: "Based Pointers (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__based"
  - "__based_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__based keyword [C++]"
  - "based pointers"
  - "pointers, based"
ms.assetid: 1e5f2e96-c52e-4738-8e14-87278681205e
caps.latest.revision: 10
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
# Based Pointers (C++)
**Microsoft Specific**  
  
 The `__based` keyword allows you to declare pointers based on pointers (pointers that are offsets from existing pointers).  
  
## Syntax  
  
```  
  
type __based( base ) declarator   
```  
  
## Remarks  
 Pointers based on pointer addresses are the only form of the `__based` keyword valid in 32-bit or 64-bit compilations. For the Microsoft 32-bit C/C++ compiler, a based pointer is a 32-bit offset from a 32-bit pointer base. A similar restriction holds for 64-bit environments, where a based pointer is a 64-bit offset from the 64-bit base.  
  
 One use for pointers based on pointers is for persistent identifiers that contain pointers. A linked list that consists of pointers based on a pointer can be saved to disk, then reloaded to another place in memory, with the pointers remaining valid. For example:  
  
```  
// based_pointers1.cpp  
// compile with: /c  
void *vpBuffer;  
struct llist_t {  
   void __based( vpBuffer ) *vpData;  
   struct llist_t __based( vpBuffer ) *llNext;  
};  
```  
  
 The pointer `vpBuffer` is assigned the address of memory allocated at some later point in the program. The linked list is relocated relative to the value of `vpBuffer`.  
  
> [!NOTE]
>  Persisting identifiers containing pointers can also be accomplished by using [memory-mapped files](http://msdn.microsoft.com/library/windows/desktop/aa366556).  
  
 When dereferencing a based pointer, the base must be either explicitly specified or implicitly known through the declaration.  
  
 For compatibility with previous versions, **_based** is a synonym for `__based`.  
  
## Example  
 The following code demonstrates changing a based pointer by changing its base.  
  
```  
// based_pointers2.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int a1[] = { 1,2,3 };  
int a2[] = { 10,11,12 };  
int *pBased;  
  
typedef int __based(pBased) * pBasedPtr;  
  
using namespace std;  
int main() {  
   pBased = &a1[0];  
   pBasedPtr pb = 0;  
  
   cout << *pb << endl;  
   cout << *(pb+1) << endl;  
  
   pBased = &a2[0];  
  
   cout << *pb << endl;  
   cout << *(pb+1) << endl;  
}  
```  
  
```Output  
1  
2  
10  
11  
```  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)   
 [alloc_text](../preprocessor/alloc-text.md)