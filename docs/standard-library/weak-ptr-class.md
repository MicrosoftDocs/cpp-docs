---
title: "weak_ptr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.weak_ptr"
  - "tr1.weak_ptr"
  - "weak_ptr"
  - "tr1::weak_ptr"
  - "std::tr1::weak_ptr"
  - "memory/std::tr1::weak_ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "weak_ptr class [TR1]"
  - "weak_ptr class"
ms.assetid: 2db4afb2-c7be-46fc-9c20-34ec2f8cc7c2
caps.latest.revision: 22
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
# weak_ptr Class
Wraps a weakly linked pointer.  
  
## Syntax  
```    
class weak_ptr {  
   public:  
   typedef Ty element_type;  
   weak_ptr();
   weak_ptr(const weak_ptr&);
   template <class Other>  
   weak_ptr(const weak_ptr<Other>&);
   template <class Other>  
   weak_ptr(const shared_ptr<Other>&);
   weak_ptr& operator=(const weak_ptr&);
   template <class Other>  
   weak_ptr& operator=(const weak_ptr<Other>&);
   template <class Other>  
   weak_ptr& operator=(shared_ptr<Other>&);
   void swap(weak_ptr&);
   void reset();
   long use_count() const;
   bool expired() const;
   shared_ptr<Ty>  
   lock() const;
   };  
```    
#### Parameters  
 `Ty`  
 The type controlled by the weak pointer.  
  
## Remarks  
 The template class describes an object that points to a resource that is managed by one or more [shared_ptr Class](../standard-library/shared-ptr-class.md) objects. The `weak_ptr` objects that point to a resource do not affect the resource's reference count. Thus, when the last `shared_ptr` object that manages that resource is destroyed the resource will be freed, even if there are `weak_ptr` objects pointing to that resource. This is essential for avoiding cycles in data structures.  
  
 A `weak_ptr` object points to a resource if it was constructed from a `shared_ptr` object that owns that resource, if it was constructed from a `weak_ptr` object that points to that resource, or if that resource was assigned to it with [operator=](#weak_ptr__operator_eq). A `weak_ptr` object does not provide direct access to the resource that it points to. Code that needs to use the resource does so through a `shared_ptr` object that owns that resource, created by calling the member function [lock](#weak_ptr__lock). A `weak_ptr` object has expired when the resource that it points to has been freed because all of the `shared_ptr` objects that own the resource have been destroyed. Calling `lock` on a `weak_ptr` object that has expired creates an empty shared_ptr object.  
  
 An empty weak_ptr object does not point to any resources and has no control block. Its member function `lock` returns an empty shared_ptr object.  
  
 A cycle occurs when two or more resources controlled by `shared_ptr` objects hold mutually referencing `shared_ptr` objects. For example, a circular linked list with three elements has a head node `N0`; that node holds a `shared_ptr` object that owns the next node, `N1`; that node holds a `shared_ptr` object that owns the next node, `N2`; that node, in turn, holds a `shared_ptr` object that owns the head node, `N0`, closing the cycle. In this situation, none of the reference counts will ever become zero, and the nodes in the cycle will not be freed. To eliminate the cycle, the last node `N2` should hold a `weak_ptr` object pointing to `N0` instead of a `shared_ptr` object. Since the `weak_ptr` object does not own `N0` it doesn't affect `N0`'s reference count, and when the program's last reference to the head node is destroyed the nodes in the list will also be destroyed.  
  
## Members  
  
### Constructors  
  
|||  
|-|-|  
|[weak_ptr](#weak_ptr__weak_ptr)|Constructs a `weak_ptr`.|  
  
### Methods  
  
|||  
|-|-|  
|[element_type](#weak_ptr__element_type)|The type of the element.|  
|[expired](#weak_ptr__expired)|Tests if ownership has expired.|  
|[lock](#weak_ptr__lock)|Obtains exclusive ownership of a resource.|  
|[owner_before](#weak_ptr__owner_before)|Returns `true` if this `weak_ptr` is ordered before (or less than) the provided pointer.|  
|[reset](#weak_ptr__reset)|Releases owned resource.|  
|[swap](#weak_ptr__swap)|Swaps two `weak_ptr` objects.|  
|[use_count](#weak_ptr__use_count)|Counts number of designated `shared_ptr` objects.|  
  
### Operators  
  
|||  
|-|-|  
|[operator=](#weak_ptr__operator_eq)|Replaces owned resource.|  
  
## Requirements  
 **Header:** \<memory>  
  
 **Namespace:** std  
  
##  <a name="weak_ptr__element_type"></a>  element_type  
 The type of the element.  
  
```  
typedef Ty element_type;  
```  
  
### Remarks  
 The type is a synonym for the template parameter `Ty`.  
  
### Example  
  
```cpp  
// std_tr1__memory__weak_ptr_element_type.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()   
    {   
    std::shared_ptr<int> sp0(new int(5));   
    std::weak_ptr<int> wp0(sp0);   
    std::weak_ptr<int>::element_type val = *wp0.lock();   
  
    std::cout << "*wp0.lock() == " << val << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
*wp0.lock() == 5  
```  
  
##  <a name="weak_ptr__expired"></a>  expired  
 Tests if ownership has expired.  
  
```  
bool expired() const;
```  
  
### Remarks  
 The member function returns `true` if `*this` has expired, otherwise `false`.  
  
### Example  
  
```cpp  
// std_tr1__memory__weak_ptr_expired.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   

struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::weak_ptr<int> wp;

    {
        std::shared_ptr<int> sp(new int(10));
        wp = sp;
        std::cout << "wp.expired() == " << std::boolalpha
            << wp.expired() << std::endl;
        std::cout << "*wp.lock() == " << *wp.lock() << std::endl;
    }

    // check expired after sp is destroyed   
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;
    std::cout << "(bool)wp.lock() == " << std::boolalpha
        << (bool)wp.lock() << std::endl;

    return (0);
}
  
```  
  
```Output  
wp.expired() == false  
*wp.lock() == 10  
wp.expired() == true  
(bool)wp.lock() == false  
```  
  
##  <a name="weak_ptr__lock"></a>  lock  
 Obtains exclusive ownership of a resource.  
  
```  
shared_ptr<Ty> lock() const;
```  
  
### Remarks  
 The member function returns an empty shared_ptr object if `*this` has expired; otherwise it returns a [shared_ptr Class](../standard-library/shared-ptr-class.md)`<Ty>` object that owns the resource that `*this` points to.  
  
### Example  
  
```cpp  
// std_tr1__memory__weak_ptr_lock.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   

struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::weak_ptr<int> wp;

    {
        std::shared_ptr<int> sp(new int(10));
        wp = sp;
        std::cout << "wp.expired() == " << std::boolalpha
            << wp.expired() << std::endl;
        std::cout << "*wp.lock() == " << *wp.lock() << std::endl;
    }

    // check expired after sp is destroyed   
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;
    std::cout << "(bool)wp.lock() == " << std::boolalpha
        << (bool)wp.lock() << std::endl;

    return (0);
}
  
```  
  
```Output  
wp.expired() == false  
*wp.lock() == 10  
wp.expired() == true  
(bool)wp.lock() == false  
```  
  
##  <a name="weak_ptr__operator_eq"></a>  operator=  
 Replaces owned resource.  
  
```  
weak_ptr& operator=(const weak_ptr& wp);

template <class Other>  
weak_ptr& operator=(const weak_ptr<Other>& wp);

template <class Other>  
weak_ptr& operator=(const shared_ptr<Other>& sp);
```  
  
### Parameters  
 `Other`  
 The type controlled by the argument shared/weak pointer.  
  
 `wp`  
 The weak pointer to copy.  
  
 `sp`  
 The shared pointer to copy.  
  
### Remarks  
 The operators all release the resource currently pointed to by `*this` and assign ownership of the resource named by the operand sequence to `*this`. If an operator fails it leaves `*this` unchanged.  
  
### Example  
  
```cpp  
// std_tr1__memory__weak_ptr_operator_as.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()
{
    std::shared_ptr<int> sp0(new int(5));
    std::weak_ptr<int> wp0(sp0);
    std::cout << "*wp0.lock() == " << *wp0.lock() << std::endl;

    std::shared_ptr<int> sp1(new int(10));
    wp0 = sp1;
    std::cout << "*wp0.lock() == " << *wp0.lock() << std::endl;

    std::weak_ptr<int> wp1;
    wp1 = wp0;
    std::cout << "*wp1.lock() == " << *wp1.lock() << std::endl;

    return (0);
}
  
```  
  
```Output  
*wp0.lock() == 5  
*wp0.lock() == 10  
*wp1.lock() == 10  
```  
  
##  <a name="weak_ptr__owner_before"></a>  owner_before  
 Returns `true` if this `weak_ptr` is ordered before (or less than) the provided pointer.  
  
```  
template <class Other>  
bool owner_before(const shared_ptr<Other>& ptr);

template <class Other>  
bool owner_before(const weak_ptr<Other>& ptr);
```  
  
### Parameters  
 `ptr`  
 An `lvalue` reference to either a `shared_ptr` or a `weak_ptr`.  
  
### Remarks  
 The template member function returns `true` if `*this` is `ordered before``ptr`.  
  
##  <a name="weak_ptr__reset"></a>  reset  
 Releases owned resource.  
  
```  
void reset();
```  
  
### Remarks  
 The member function releases the resource pointed to by `*this` and converts `*this` to an empty weak_ptr object.  
  
### Example  
  
```cpp  
// std_tr1__memory__weak_ptr_reset.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()
{
    std::shared_ptr<int> sp(new int(5));
    std::weak_ptr<int> wp(sp);
    std::cout << "*wp.lock() == " << *wp.lock() << std::endl;
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;

    wp.reset();
    std::cout << "wp.expired() == " << std::boolalpha
        << wp.expired() << std::endl;

    return (0);
}

```  
  
```Output  
*wp.lock() == 5  
wp.expired() == false  
wp.expired() == true  
```  
  
##  <a name="weak_ptr__swap"></a>  swap  
 Swaps two `weak_ptr` objects.  
  
```  
void swap(weak_ptr& wp);
```  
  
### Parameters  
 `wp`  
 The weak pointer to swap with.  
  
### Remarks  
 The member function leaves the resource originally pointed to by `*this` subsequently pointed to by `wp`, and the resource originally pointed to by `wp` subsequently pointed to by `*this`. The function does not change the reference counts for the two resources and it does not throw any exceptions.  
  
### Example  
  
```cpp  
// std_tr1__memory__weak_ptr_swap.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
 
struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::shared_ptr<int> sp2(new int(10));
    std::cout << "*sp1 == " << *sp1 << std::endl;

    sp1.swap(sp2);
    std::cout << "*sp1 == " << *sp1 << std::endl;

    swap(sp1, sp2);
    std::cout << "*sp1 == " << *sp1 << std::endl;
    std::cout << std::endl;

    std::weak_ptr<int> wp1(sp1);
    std::weak_ptr<int> wp2(sp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    wp1.swap(wp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    swap(wp1, wp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    return (0);
}

```  
  
```Output  
*sp1 == 5  
*sp1 == 10  
*sp1 == 5  
  
*wp1 == 5  
*wp1 == 10  
*wp1 == 5  
```  
  
##  <a name="weak_ptr__use_count"></a>  use_count  
 Counts number of designated `shared_ptr` objects.  
  
```  
long use_count() const;
```  
  
### Remarks  
 The member function returns the number of `shared_ptr` objects that own the resource pointed to by `*this`.  
  
### Example  
  
```cpp  
// std_tr1__memory__weak_ptr_use_count.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::weak_ptr<int> wp(sp1);
    std::cout << "wp.use_count() == "
        << wp.use_count() << std::endl;

    std::shared_ptr<int> sp2(sp1);
    std::cout << "wp.use_count() == "
        << wp.use_count() << std::endl;

    return (0);
} 
  
```  
  
```Output  
wp.use_count() == 1  
wp.use_count() == 2  
```  
  
##  <a name="weak_ptr__weak_ptr"></a>  weak_ptr  
 Constructs a `weak_ptr`.  
  
```  
weak_ptr();

weak_ptr(const weak_ptr& wp);

template <class Other>  
weak_ptr(const weak_ptr<Other>& wp);

template <class Other>  
weak_ptr(const shared_ptr<Other>& sp);
```  
  
### Parameters  
 `Other`  
 The type controlled by the argument shared/weak pointer.  
  
 `wp`  
 The weak pointer to copy.  
  
 `sp`  
 The shared pointer to copy.  
  
### Remarks  
 The constructors each construct an object that points to the resource named by the operand sequence.  
  
### Example  
  
```cpp  
// std_tr1__memory__weak_ptr_construct.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
int main()
{
    std::weak_ptr<int> wp0;
    std::cout << "wp0.expired() == " << std::boolalpha
        << wp0.expired() << std::endl;

    std::shared_ptr<int> sp1(new int(5));
    std::weak_ptr<int> wp1(sp1);
    std::cout << "*wp1.lock() == "
        << *wp1.lock() << std::endl;

    std::weak_ptr<int> wp2(wp1);
    std::cout << "*wp2.lock() == "
        << *wp2.lock() << std::endl;

    return (0);
}
  
```  
  
```Output  
wp0.expired() == true  
*wp1.lock() == 5  
*wp2.lock() == 5  
```  
  
## See Also  
 [shared_ptr Class](../standard-library/shared-ptr-class.md)

