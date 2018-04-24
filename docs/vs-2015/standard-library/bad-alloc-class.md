---
title: "bad_alloc Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# bad_alloc Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [bad_alloc Class](https://docs.microsoft.com/cpp/standard-library/bad-alloc-class).  
  
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
  
```  
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
 [exception Class](../standard-library/exception-class1.md)  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)





