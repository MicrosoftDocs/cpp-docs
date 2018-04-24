---
title: "bad_exception Class | Microsoft Docs"
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
  - "std.bad_exception"
  - "bad_exception"
  - "std::bad_exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bad_exception class"
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# bad_exception Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [bad_exception Class](https://docs.microsoft.com/cpp/standard-library/bad-exception-class).  
  
The class describes an exception that can be thrown from an unexpected handler.  
  
## Syntax  
  
```  
class bad_exception    : public exception {};  
```  
  
## Remarks  
 [unexpected](../standard-library/exception-functions.md#unexpected) will throw a `bad_exception` instead of terminating or instead of calling another function specified with [set_unexpected](../standard-library/exception-functions.md#set_unexpected) if `bad_exception` is included in the throw list of a function.  
  
 The value returned by **what** is an implementation-defined C string. None of the member functions throw any exceptions.  
  
 For a list of members inherited by the `bad_exception` class, see [exception Class](../standard-library/exception-class1.md).  
  
## Example  
 See [set_unexpected](../standard-library/exception-functions.md#set_unexpected) for an example of the use of [unexpected](../standard-library/exception-functions.md#unexpected) throwing a `bad_exception`.  
  
## Requirements  
 **Header:** \<exception>  
  
 **Namespace:** std  
  
## See Also  
[exception Class](../standard-library/exception-class1.md)
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)





