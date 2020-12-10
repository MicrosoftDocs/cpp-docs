---
description: "Learn more about: weak_ptr Class"
title: "weak_ptr Class"
ms.date: "07/29/2019"
f1_keywords: ["memory/std::weak_ptr", "memory/std::weak_ptr::element_type", "memory/std::weak_ptr::expired", "memory/std::weak_ptr::lock", "memory/std::weak_ptr::owner_before", "memory/std::weak_ptr::reset", "memory/std::weak_ptr::swap", "memory/std::weak_ptr::use_count", "memory/std::weak_ptr::operator="]
helpviewer_keywords: ["std::weak_ptr [C++]", "std::weak_ptr [C++], element_type", "std::weak_ptr [C++], expired", "std::weak_ptr [C++], lock", "std::weak_ptr [C++], owner_before", "std::weak_ptr [C++], reset", "std::weak_ptr [C++], swap", "std::weak_ptr [C++], use_count", "std::weak_ptr [C++], element_type", "std::weak_ptr [C++], expired", "std::weak_ptr [C++], lock", "std::weak_ptr [C++], owner_before", "std::weak_ptr [C++], reset", "std::weak_ptr [C++], swap", "std::weak_ptr [C++], use_count"]
ms.assetid: 2db4afb2-c7be-46fc-9c20-34ec2f8cc7c2
---
# weak_ptr Class

Wraps a weakly linked pointer.

## Syntax

```cpp
template<class T> class weak_ptr;
```

### Parameters

*T*\
The type controlled by the weak pointer.

## Remarks

The class template describes an object that points to a resource that is managed by one or more [shared_ptr](shared-ptr-class.md) objects. The `weak_ptr` objects that point to a resource don't affect the resource's reference count. When the last `shared_ptr` object that manages that resource is destroyed, the resource will be freed, even if there are `weak_ptr` objects pointing to that resource. This behavior is essential for avoiding cycles in data structures.

A `weak_ptr` object points to a resource if it was constructed from a `shared_ptr` object that owns that resource, if it was constructed from a `weak_ptr` object that points to that resource, or if that resource was assigned to it with [operator=](#op_eq). A `weak_ptr` object doesn't provide direct access to the resource that it points to. Code that needs to use the resource does so through a `shared_ptr` object that owns that resource, created by calling the member function [lock](#lock). A `weak_ptr` object has expired when the resource that it points at has been freed because all of the `shared_ptr` objects that own the resource have been destroyed. Calling `lock` on a `weak_ptr` object that has expired creates an empty shared_ptr object.

An empty weak_ptr object doesn't point to any resources and has no control block. Its member function `lock` returns an empty shared_ptr object.

A cycle occurs when two or more resources controlled by `shared_ptr` objects hold mutually referencing `shared_ptr` objects. For example, a circular linked list with three elements has a head node `N0`; that node holds a `shared_ptr` object that owns the next node, `N1`; that node holds a `shared_ptr` object that owns the next node, `N2`; that node, in turn, holds a `shared_ptr` object that owns the head node, `N0`, closing the cycle. In this situation, the reference counts never become zero, and the nodes in the cycle are never freed. To eliminate the cycle, the last node `N2` should hold a `weak_ptr` object pointing to `N0` instead of a `shared_ptr` object. Since the `weak_ptr` object doesn't own `N0` it doesn't affect `N0`'s reference count, and when the program's last reference to the head node is destroyed the nodes in the list will also be destroyed.

## Members

|Name|Description|
|-|-|
| **Constructors** | |
|[weak_ptr](#weak_ptr)|Constructs a `weak_ptr`.|
| **Destructors** | |
|[~weak_ptr](#tilde-weak_ptr)|Constructs a `weak_ptr`.|
| **Typedefs** | |
|[element_type](#element_type)|The type of the element.|
| **Member functions** | |
|[expired](#expired)|Tests if ownership has expired.|
|[lock](#lock)|Obtains exclusive ownership of a resource.|
|[owner_before](#owner_before)|Returns **`true`** if this `weak_ptr` is ordered before (or less than) the provided pointer.|
|[reset](#reset)|Releases owned resource.|
|[swap](#swap)|Swaps two `weak_ptr` objects.|
|[use_count](#use_count)|Counts number of `shared_ptr` objects.|
| **Operators** | |
|[operator=](#op_eq)|Replaces owned resource.|

## <a name="element_type"></a> element_type

The type of the element.

```cpp
typedef T element_type; // through C++17
using element_type = remove_extent_t<T>; // C++20
```

### Remarks

The type is a synonym for the template parameter `T`.

### Example

```cpp
// std__memory__weak_ptr_element_type.cpp
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

## <a name="expired"></a> expired

Tests if ownership has expired, that is, the referenced object has been deleted.

```cpp
bool expired() const noexcept;
```

### Remarks

The member function returns **`true`** if **`*this`** has expired, otherwise **`false`**.

### Example

```cpp
// std__memory__weak_ptr_expired.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

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

## <a name="lock"></a> lock

Obtains a `shared_ptr` that shares ownership of a resource.

```cpp
shared_ptr<T> lock() const noexcept;
```

### Remarks

The member function returns an empty [shared_ptr](shared-ptr-class.md) object if **`*this`** has expired; otherwise it returns a `shared_ptr<T>` object that owns the resource that **`*this`** points to. Returns a value equivalent to the atomic execution of `expired() ? shared_ptr<T>() : shared_ptr<T>(*this)`.

### Example

```cpp
// std__memory__weak_ptr_lock.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

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

## <a name="op_eq"></a> operator=

Replaces owned resource.

```cpp
weak_ptr& operator=(const weak_ptr& ptr) noexcept;

template <class Other>
weak_ptr& operator=(const weak_ptr<Other>& ptr) noexcept;

template <class Other>
weak_ptr& operator=(const shared_ptr<Other>& ptr) noexcept;
```

### Parameters

*Other*\
The type controlled by the argument shared or weak pointer.

*ptr*\
The weak pointer or shared pointer to copy.

### Remarks

The operators all release the resource currently pointed to by **`*this`** and assign ownership of the resource named by *ptr* to **`*this`**. If an operator fails, it leaves **`*this`** unchanged. Each operator has an effect equivalent to `weak_ptr(ptr).swap(*this)`.

### Example

```cpp
// std__memory__weak_ptr_operator_as.cpp
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

## <a name="owner_before"></a> owner_before

Returns **`true`** if this `weak_ptr` is ordered before (or less than) the provided pointer.

```cpp
template <class Other>
bool owner_before(const shared_ptr<Other>& ptr) const noexcept;

template <class Other>
bool owner_before(const weak_ptr<Other>& ptr) const noexcept;
```

### Parameters

*ptr*\
An lvalue reference to either a `shared_ptr` or a `weak_ptr`.

### Remarks

The template member function returns **`true`** if **`*this`** is ordered before *ptr*.

## <a name="reset"></a> reset

Releases the owned resource.

```cpp
void reset() noexcept;
```

### Remarks

The member function releases the resource pointed to by **`*this`** and converts **`*this`** to an empty `weak_ptr` object.

### Example

```cpp
// std__memory__weak_ptr_reset.cpp
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

## <a name="swap"></a> swap

Swaps two `weak_ptr` objects.

```cpp
void swap(weak_ptr& wp) noexcept;
```

Also includes the specialization:

```cpp
template<class T>
void swap(weak_ptr<T>& a, weak_ptr<T>& b) noexcept;
```

### Parameters

*wp*\
The weak pointer to swap with.

### Remarks

After a `swap`, the resource originally pointed to by **`*this`** is pointed to by *wp*, and the resource originally pointed to by *wp* is pointed to by **`*this`**. The function doesn't change the reference counts for the two resources and it doesn't throw any exceptions. The effect of the template specialization is the equivalent of `a.swap(b)`.

### Example

```cpp
// std__memory__weak_ptr_swap.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

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

## <a name="use_count"></a> use_count

Counts the number of `shared_ptr` objects that own the shared resource.

```cpp
long use_count() const noexcept;
```

### Remarks

The member function returns the number of `shared_ptr` objects that own the resource pointed to by **`*this`**.

### Example

```cpp
// std__memory__weak_ptr_use_count.cpp
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

## <a name="weak_ptr"></a> weak_ptr

Constructs a `weak_ptr`.

```cpp
constexpr weak_ptr() noexcept;

weak_ptr(const weak_ptr& wp) noexcept;

weak_ptr(weak_ptr&& wp) noexcept;

template <class Other>
weak_ptr(const weak_ptr<Other>& wp) noexcept;

template <class Other>
weak_ptr(weak_ptr<Other>&& sp) noexcept;

template <class Other>
weak_ptr(const shared_ptr<Other>& sp) noexcept;
```

### Parameters

*Other*\
The type controlled by the argument shared/weak pointer. These constructors don't participate in overload resolution unless _Other\*_ is compatible with `element_type*`.

*wp*\
The weak pointer to copy.

*sp*\
The shared pointer to copy.

### Remarks

The default constructor constructs an empty `weak_ptr` object. The constructors that take an argument each construct an empty `weak_ptr` object if the argument pointer is empty. Otherwise, they construct a `weak_ptr` object that points to the resource named by the argument. The reference count of the shared object isn't changed.

### Example

```cpp
// std__memory__weak_ptr_construct.cpp
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

## <a name="tilde-weak_ptr"></a> ~weak_ptr

Destroys a `weak_ptr`.

```cpp
~weak_ptr();
```

### Remarks

The destructor destroys this `weak_ptr` but has no effect on the reference count of the object its stored pointer points at.

## See also

[Header Files Reference](cpp-standard-library-header-files.md)\
[\<memory>](memory.md)\
[shared_ptr class](shared-ptr-class.md)
