---
title: "bad_alloc Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::bad_alloc"
  - "new/std:bad_alloc"
  - "bad_alloc"
  - "std.bad_alloc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bad_alloc class"
ms.assetid: 6429a8e6-5a49-4907-8d56-f4a4ec8131d0
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
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
# bad_alloc Class
The class describes an exception thrown to indicate that an allocation request did not succeed.  
  
## Syntax  
  
```  
class bad_alloc : public exception {  
    bad_alloc();
virtual ~bad_alloc();

};  
```  
  
## Remarks  
 The value returned by **what** is an implementation-defined C string. None of the member functions throw any exceptions.  
  
## Requirements  
 **Header:** \<new>  
  
 **Namespace:** std  
  
## Example  
  
```cpp  
// bad_alloc.cpp  
// compile with: /EHsc  
#include<new>  
#include<iostream>  
using namespace std;  
  
int main() {  
   char* ptr;  
   try {  
      ptr = new char[(~unsigned int((int)0)/2) - 1];  
      delete[] ptr;  
   }  
   catch( bad_alloc &ba) {  
      cout << ba.what( ) << endl;  
   }  
}  
```  
  
## Sample Output  
  
```  
bad allocation  
```  
  
## Requirements  
 **Header:** \<new>  
  
## See Also
 [exception Class](../standard-library/exception-class.md)  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

