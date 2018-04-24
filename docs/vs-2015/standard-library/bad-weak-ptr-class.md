---
title: "bad_weak_ptr Class | Microsoft Docs"
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
  - "memory/std::tr1::bad_weak_ptr"
  - "std::tr1::bad_weak_ptr"
  - "bad_weak_ptr"
  - "tr1::bad_weak_ptr"
  - "tr1.bad_weak_ptr"
  - "std.tr1.bad_weak_ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bad_weak_ptr class [TR1]"
  - "bad_weak_ptr class"
ms.assetid: a09336d5-7237-4480-ab6b-3787e0e6025e
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# bad_weak_ptr Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [bad_weak_ptr Class](https://docs.microsoft.com/cpp/standard-library/bad-weak-ptr-class).  
  
Reports bad weak_ptr exception.  
  
## Syntax  
  
```  
class bad_weak_ptr  
 : public std::exception {  
public:  
    bad_weak_ptr();
const char *what() throw();

 };  
```  
  
## Remarks  
 The class describes an exception that can be thrown from the [shared_ptr Class](../standard-library/shared-ptr-class.md) constructor that takes an argument of type [weak_ptr Class](../standard-library/weak-ptr-class.md). The member function `what` returns `"bad_weak_ptr"`.  
  
## Example  
  
```  
// std_tr1__memory__bad_weak_ptr.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()   
    {   
    std::weak_ptr<int> wp;   
  
     {   
    std::shared_ptr<int> sp(new int);   
    wp = sp;   
     }   
  
    try   
        {   
        std::shared_ptr<int> sp1(wp); // weak_ptr has expired   
        }   
    catch (const std::bad_weak_ptr&)   
        {   
        std::cout << "bad weak pointer" << std::endl;   
        }   
    catch (...)   
        {   
        std::cout << "unknown exception" << std::endl;   
        }   
  
    return (0);   
    }  
  
```  
  
```Output  
bad weak pointer  
```  
  
## Requirements  
 **Header:** \<memory>  
  
 **Namespace:** std  
  
## See Also  
 [weak_ptr Class](../standard-library/weak-ptr-class.md)




