---
title: "enable_shared_from_this Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1.enable_shared_from_this"
  - "enable_shared_from_this"
  - "std.tr1.enable_shared_from_this"
  - "memory/std::tr1::enable_shared_from_this"
  - "std::tr1::enable_shared_from_this"
  - "tr1::enable_shared_from_this"
  - "std.enable_shared_from_this"
  - "memory/std::enable_shared_from_this"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "enable_shared_from_this class"
  - "enable_shared_from_this class [TR1]"
ms.assetid: 9237603d-22e2-421f-b070-838ac006baf5
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# enable_shared_from_this Class
Helps generate a `shared_ptr`.  
  
## Syntax  
```    
class enable_shared_from_this {
public:
    shared_ptr<Ty>
        shared_from_this();
    shared_ptr<const Ty> shared_from_this() const;
protected:
    enable_shared_from_this();
    enable_shared_from_this(const enable_shared_from_this&);
    enable_shared_from_this& operator=(const enable_shared_from_this&);
    ~enable_shared_from_this();
}; 
``` 
#### Parameters  
 `Ty`  
 The type controlled by the shared pointer.  
  
## Remarks  
 Objects derived from `enable_shared_from_this` can use the `shared_from_this` methods in member functions to create [shared_ptr](../standard-library/shared-ptr-class.md) owners of the instance that share ownership with existing `shared_ptr` owners. Otherwise, if you create a new `shared_ptr` by using `this`, it is distinct from existing `shared_ptr` owners, which can lead to invalid references or cause the object to be deleted more than once.  
  
 The constructors, destructor, and assignment operator are protected to help prevent accidental misuse. The template argument type `Ty` must be the type of the derived class.  
  
 For an example of usage, see [enable_shared_from_this::shared_from_this](#enable_shared_from_this__shared_from_this).  
  
## Requirements  
 **Header:** \<memory>  
  
 **Namespace:** std  
  
##  <a name="enable_shared_from_this__shared_from_this"></a>  enable_shared_from_this::shared_from_this  
 Generates a `shared_ptr` that shares ownership of the instance with existing `shared_ptr` owners.  
  
```  
shared_ptr<T> shared_from_this();
shared_ptr<const T> shared_from_this() const;
```  
  
### Remarks  
 When you derive objects from the `enable_shared_from_this` base class, the `shared_from_this` template member functions return a [shared_ptr Class](../standard-library/shared-ptr-class.md) object that shares ownership of this instance with existing `shared_ptr` owners. Otherwise, if you create a new `shared_ptr` from `this`, it is distinct from existing `shared_ptr` owners, which can lead to invalid references or cause the object to be deleted more than once. The  behavior is undefined if you call `shared_from_this` on an instance that is not already owned by a `shared_ptr` object.  
  
### Example  
  
```cpp  
// std_memory_shared_from_this.cpp   
// compile with: /EHsc   
#include <memory>  
#include <iostream>  
  
using namespace std;  
  
struct base : public std::enable_shared_from_this<base>  
{  
    int val;    
    shared_ptr<base> share_more()  
    {  
        return shared_from_this();  
    }  
};  
  
int main()  
{  
    auto sp1 = make_shared<base>();  
    auto sp2 = sp1->share_more();  
  
    sp1->val = 3;  
    cout << "sp2->val == " << sp2->val << endl;    
    return 0;  
}   
```  
  
```Output  
sp2->val == 3  
```  
  
## See Also  
 [enable_shared_from_this::shared_from_this](#enable_shared_from_this__shared_from_this)   
 [shared_ptr Class](../standard-library/shared-ptr-class.md)