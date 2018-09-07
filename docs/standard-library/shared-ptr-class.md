---
title: "shared_ptr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["memory/std::shared_ptr", "memory/std::shared_ptr::element_type", "memory/std::shared_ptr::get", "memory/std::shared_ptr::owner_before", "memory/std::shared_ptr::reset", "memory/std::shared_ptr::swap", "memory/std::shared_ptr::unique", "memory/std::shared_ptr::use_count", "memory/std::shared_ptr::operator boolean-type", "memory/std::shared_ptr::operator*", "memory/std::shared_ptr::operator=", "memory/std::shared_ptr::operator->"]
dev_langs: ["C++"]
helpviewer_keywords: ["std::shared_ptr [C++]", "std::shared_ptr [C++], element_type", "std::shared_ptr [C++], get", "std::shared_ptr [C++], owner_before", "std::shared_ptr [C++], reset", "std::shared_ptr [C++], swap", "std::shared_ptr [C++], unique", "std::shared_ptr [C++], use_count", "std::shared_ptr [C++], element_type", "std::shared_ptr [C++], get", "std::shared_ptr [C++], owner_before", "std::shared_ptr [C++], reset", "std::shared_ptr [C++], swap", "std::shared_ptr [C++], unique", "std::shared_ptr [C++], use_count"]
ms.assetid: 1469fc51-c658-43f1-886c-f4530dd84860
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# shared_ptr Class

Wraps a reference-counted smart pointer around a dynamically allocated object.

## Syntax

```cpp
template <class T>
class shared_ptr;
```

## Remarks

The shared_ptr class describes an object that uses reference counting to manage resources. A `shared_ptr` object effectively holds a pointer to the resource that it owns or holds a null pointer. A resource can be owned by more than one `shared_ptr` object; when the last `shared_ptr` object that owns a particular resource is destroyed, the resource is freed.

A `shared_ptr` stops owning a resource when it is reassigned or reset.

The template argument `T` might be an incomplete type except as noted for certain member functions.

When a `shared_ptr<T>` object is constructed from a resource pointer of type `G*` or from a `shared_ptr<G>`, the pointer type `G*` must be convertible to `T*`. If it is not, the code will not compile. For example:

```cpp
#include <memory>
using namespace std;

class F {};
class G : public F {};

shared_ptr<G> sp0(new G);   // okay, template parameter G and argument G*
shared_ptr<G> sp1(sp0);     // okay, template parameter G and argument shared_ptr<G>
shared_ptr<F> sp2(new G);   // okay, G* convertible to F*
shared_ptr<F> sp3(sp0);     // okay, template parameter F and argument shared_ptr<G>
shared_ptr<F> sp4(sp2);     // okay, template parameter F and argument shared_ptr<F>
shared_ptr<int> sp5(new G); // error, G* not convertible to int*
shared_ptr<int> sp6(sp2);   // error, template parameter int and argument shared_ptr<F>
```

A `shared_ptr` object owns a resource:

- if it was constructed with a pointer to that resource,

- if it was constructed from a `shared_ptr` object that owns that resource,

- if it was constructed from a [weak_ptr Class](../standard-library/weak-ptr-class.md) object that points to that resource, or

- if ownership of that resource was assigned to it, either with [shared_ptr::operator=](#op_eq) or by calling the member function [shared_ptr::reset](#reset).

The `shared_ptr` objects that own a resource share a control block. The control block holds:

- the number of `shared_ptr` objects that own the resource,

- the number of `weak_ptr` objects that point to the resource,

- the deleter for that resource if it has one,

- the custom allocator for the control block if it has one.

A `shared_ptr` object that is initialized by using a null pointer has a control block and is not empty. After a `shared_ptr` object releases a resource, it no longer owns that resource. After a `weak_ptr` object releases a resource, it no longer points to that resource.

When the number of `shared_ptr` objects that own a resource becomes zero, the resource is freed, either by deleting it or by passing its address to a deleter, depending on how ownership of the resource was originally created. When the number of `shared_ptr` objects that own a resource is zero, and the number of `weak_ptr` objects that point to that resource is zero, the control block is freed, using the custom allocator for the control block if it has one.

An empty `shared_ptr` object does not own any resources and has no control block.

A deleter is a function object that has a member function `operator()`. Its type must be copy constructible, and its copy constructor and destructor must not throw exceptions. It accepts one parameter, the object to be deleted.

Some functions take an argument list that defines properties of the resulting `shared_ptr<T>` or `weak_ptr<T>` object. You can specify such an argument list in several ways:

no arguments -- the resulting object is an empty `shared_ptr` object or an empty `weak_ptr` object.

`ptr` -- a pointer of type `Other*` to the resource to be managed. `T` must be a complete type. If the function fails (because the control block cannot be allocated) it evaluates the expression `delete ptr`.

`ptr, dtor` -- a pointer of type `Other*` to the resource to be managed and a deleter for that resource. If the function fails (because the control block cannot be allocated), it calls `dtor(ptr)`, which must be well defined.

`ptr, dtor, alloc` -- a pointer of type `Other*` to the resource to be managed, a deleter for that resource, and an allocator to manage any storage that must be allocated and freed. If the function fails (because the control block can't be allocated) it calls `dtor(ptr)`, which must be well defined.

`sp` -- a `shared_ptr<Other>` object that owns the resource to be managed.

`wp` -- a `weak_ptr<Other>` object that points to the resource to be managed.

`ap` -- an `auto_ptr<Other>` object that holds a pointer to the resource to be managed. If the function succeeds it calls `ap.release()`; otherwise it leaves `ap` unchanged.

In all cases, the pointer type `Other*` must be convertible to `T*`.

## Thread Safety

Multiple threads can read and write different `shared_ptr` objects at the same time, even when the objects are copies that share ownership.

## Members

### Constructors

|Constructor|Description|
|-|-|
|[shared_ptr](#shared_ptr)|Constructs a `shared_ptr`.|
|[shared_ptr::~shared_ptr](#dtorshared_ptr)|Destroys a `shared_ptr`.|

### Types

|Type name|Description|
|-|-|
|[element_type](#element_type)|The type of an element.|

### Functions

|Function|Description|
|-|-|
|[get](#get)|Gets address of owned resource.|
|[owner_before](#owner_before)|Returns true if this `shared_ptr` is ordered before (or less than) the provided pointer.|
|[reset](#reset)|Replace owned resource.|
|[swap](#swap)|Swaps two `shared_ptr` objects.|
|[unique](#unique)|Tests if owned resource is unique.|
|[use_count](#use_count)|Counts numbers of resource owners.|

### Operators

|Operator|Description|
|-|-|
|[shared_ptr::operator bool](#op_bool)|Tests if an owned resource exists.|
|[shared_ptr::operator*](#op_star)|Gets the designated value.|
|[shared_ptr::operator=](#op_eq)|Replaces the owned resource.|
|[shared_ptr::operator-&gt;](#op_arrow)|Gets a pointer to the designated value.|

## Requirements

**Header:** \<memory>

**Namespace:** std

## <a name="element_type"></a>  shared_ptr::element_type

The type of an element.

```cpp
typedef T element_type;
```

### Remarks

The type is a synonym for the template parameter `T`.

### Example

```cpp
// std__memory__shared_ptr_element_type.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0(new int(5));
    std::shared_ptr<int>::element_type val = *sp0;

    std::cout << "*sp0 == " << val << std::endl;

    return (0);
}

```

```Output
*sp0 == 5
```

## <a name="get"></a>  shared_ptr::get

Gets address of owned resource.

```cpp
T *get() const;
```

### Remarks

The member function returns the address of the owned resource. If the object does not own a resource it returns 0.

### Example

```cpp
// std__memory__shared_ptr_get.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0;
    std::shared_ptr<int> sp1(new int(5));

    std::cout << "sp0.get() == 0 == " << std::boolalpha
        << (sp0.get() == 0) << std::endl;
    std::cout << "*sp1.get() == " << *sp1.get() << std::endl;

    return (0);
}

```

```Output
sp0.get() == 0 == true
*sp1.get() == 5
```

## <a name="op_bool"></a>  shared_ptr::operator bool

Tests if an owned resource exists.

```cpp
explicit operator bool() const noexcept;
```

### Remarks

The operator returns a value of **true** when `get() != nullptr`, otherwise **false**.

### Example

```cpp
// std__memory__shared_ptr_operator_bool.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0;
    std::shared_ptr<int> sp1(new int(5));

    std::cout << "(bool)sp0 == " << std::boolalpha
        << (bool)sp0 << std::endl;
    std::cout << "(bool)sp1 == " << std::boolalpha
        << (bool)sp1 << std::endl;

    return (0);
}

```

```Output
(bool)sp0 == false
(bool)sp1 == true
```

## <a name="op_star"></a>  shared_ptr::operator*

Gets the designated value.

```cpp
T& operator*() const;
```

### Remarks

The indirection operator returns `*get()`. Hence, the stored pointer must not be null.

### Example

```cpp
// std__memory__shared_ptr_operator_st.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0(new int(5));

    std::cout << "*sp0 == " << *sp0 << std::endl;

    return (0);
}

```

```Output
*sp0 == 5
```

## <a name="op_eq"></a>  shared_ptr::operator=

Replaces the owned resource.

```cpp
shared_ptr& operator=(const shared_ptr& sp);

template <class Other>
shared_ptr& operator=(const shared_ptr<Other>& sp);

template <class Other>
shared_ptr& operator=(auto_ptr<Other>& ap);

template <class Other>
shared_ptr& operator=(auto_ptr<Other>& ap);

template <class Other>
shared_ptr& operator=(auto_ptr<Other>&& ap);

template <class Other, class Deletor>
shared_ptr& operator=(unique_ptr<Other, Deletor>&& ap);
```

### Parameters

*sp*<br/>
The shared pointer to copy.

*ap*<br/>
The auto pointer to copy.

### Remarks

The operators all decrement the reference count for the resource currently owned by `*this` and assign ownership of the resource named by the operand sequence to `*this`. If the reference count falls to zero, the resource is released. If an operator fails it leaves `*this` unchanged.

### Example

```cpp
// std__memory__shared_ptr_operator_as.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0;
    std::shared_ptr<int> sp1(new int(5));
    std::auto_ptr<int> ap(new int(10));

    sp0 = sp1;
    std::cout << "*sp0 == " << *sp0 << std::endl;

    sp0 = ap;
    std::cout << "*sp0 == " << *sp0 << std::endl;

    return (0);
}

```

```Output
*sp0 == 5
*sp0 == 10
```

## <a name="op_arrow"></a>  shared_ptr::operator-&gt;

Gets a pointer to the designated value.

```cpp
T * operator->() const;
```

### Remarks

The selection operator returns `get()`, so that the expression `sp->member` behaves the same as `(sp.get())->member` where `sp` is an object of class `shared_ptr<T>`. Hence, the stored pointer must not be null, and `T` must be a class, structure, or union type with a member `member`.

### Example

```cpp
// std__memory__shared_ptr_operator_ar.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

typedef std::pair<int, int> Mypair;
int main()
{
    std::shared_ptr<Mypair> sp0(new Mypair(1, 2));

    std::cout << "sp0->first == " << sp0->first << std::endl;
    std::cout << "sp0->second == " << sp0->second << std::endl;

    return (0);
}

```

```Output
sp0->first == 1
sp0->second == 2
```

## <a name="owner_before"></a>  shared_ptr::owner_before

Returns true if this `shared_ptr` is ordered before (or less than) the provided pointer.

```cpp
template <class Other>
bool owner_before(const shared_ptr<Other>& ptr);

template <class Other>
bool owner_before(const weak_ptr<Other>& ptr);
```

### Parameters

*ptr*<br/>
An `lvalue` reference to either a `shared_ptr` or a `weak_ptr`.

### Remarks

The template member function returns true if `*this` is `ordered before` `ptr`.

## <a name="reset"></a>  shared_ptr::reset

Replace owned resource.

```cpp
void reset();

template <class Other>
void reset(Other *ptr;);

template <class Other, class D>
void reset(Other *ptr, D dtor);

template <class Other, class D, class A>
void reset(Other *ptr, D dtor, A alloc);
```

### Parameters

*Other*<br/>
The type controlled by the argument pointer.

*D*<br/>
The type of the deleter.

*ptr*<br/>
The pointer to copy.

*dtor*<br/>
The deleter to copy.

*A*<br/>
The type of the allocator.

*alloc*<br/>
The allocator to copy.

### Remarks

The operators all decrement the reference count for the resource currently owned by `*this` and assign ownership of the resource named by the operand sequence to `*this`. If the reference count falls to zero, the resource is released. If an operator fails it leaves `*this` unchanged.

### Example

```cpp
// std__memory__shared_ptr_reset.cpp
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
    std::shared_ptr<int> sp(new int(5));

    std::cout << "*sp == " << std::boolalpha
        << *sp << std::endl;

    sp.reset();
    std::cout << "(bool)sp == " << std::boolalpha
        << (bool)sp << std::endl;

    sp.reset(new int(10));
    std::cout << "*sp == " << std::boolalpha
        << *sp << std::endl;

    sp.reset(new int(15), deleter());
    std::cout << "*sp == " << std::boolalpha
        << *sp << std::endl;

    return (0);
}

```

```Output
*sp == 5
(bool)sp == false
*sp == 10
*sp == 15
```

## <a name="shared_ptr"></a>  shared_ptr::shared_ptr

Constructs a `shared_ptr`.

```cpp
shared_ptr();

shared_ptr(nullptr_t);

shared_ptr(const shared_ptr& sp);

shared_ptr(shared_ptr&& sp);

template <class Other>
explicit shared_ptr(Other* ptr);

template <class Other, class D>
shared_ptr(Other* ptr, D dtor);

template <class D>
shared_ptr(nullptr_t ptr, D dtor);

template <class Other, class D, class A>
shared_ptr(Other* ptr, D dtor, A  alloc);

template <class D, class A>
shared_ptr(nullptr_t ptr, D dtor, A alloc);

template <class Other>
shared_ptr(const shared_ptr<Other>& sp);

template <class Other>
shared_ptr(const weak_ptr<Other>& wp);

template <class &>
shared_ptr(std::auto_ptr<Other>& ap);

template <class &>
shared_ptr(std::auto_ptr<Other>&& ap);

template <class Other, class D>
shared_ptr(unique_ptr<Other, D>&& up);

template <class Other>
shared_ptr(const shared_ptr<Other>& sp, T* ptr);

template <class Other, class D>
shared_ptr(const unique_ptr<Other, D>& up) = delete;
```

### Parameters

*Other*<br/>
The type controlled by the argument pointer.

*ptr*<br/>
The pointer to copy.

*D*<br/>
The type of the deleter.

*A*<br/>
The type of the allocator.

*dtor*<br/>
The deleter.

*ator*<br/>
The allocator.

*sp*<br/>
The smart pointer to copy.

*wp*<br/>
The weak pointer.

*ap*<br/>
The auto pointer to copy.

### Remarks

The constructors each construct an object that owns the resource named by the operand sequence. The constructor `shared_ptr(const weak_ptr<Other>& wp)` throws an exception object of type [bad_weak_ptr Class](../standard-library/bad-weak-ptr-class.md) if `wp.expired()`.

### Example

```cpp
// std__memory__shared_ptr_construct.cpp
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
    std::shared_ptr<int> sp0;
    std::cout << "(bool)sp0 == " << std::boolalpha
        << (bool)sp0 << std::endl;

    std::shared_ptr<int> sp1(new int(5));
    std::cout << "*sp1 == " << *sp1 << std::endl;

    std::shared_ptr<int> sp2(new int(10), deleter());
    std::cout << "*sp2 == " << *sp2 << std::endl;

    std::shared_ptr<int> sp3(sp2);
    std::cout << "*sp3 == " << *sp3 << std::endl;

    std::weak_ptr<int> wp(sp3);
    std::shared_ptr<int> sp4(wp);
    std::cout << "*sp4 == " << *sp4 << std::endl;

    std::auto_ptr<int> ap(new int(15));
    std::shared_ptr<int> sp5(ap);
    std::cout << "*sp5 == " << *sp5 << std::endl;

    return (0);
}

```

```Output
(bool)sp0 == false
*sp1 == 5
*sp2 == 10
*sp3 == 10
*sp4 == 10
*sp5 == 15
```

## <a name="dtorshared_ptr"></a>  shared_ptr::~shared_ptr

Destroys a `shared_ptr`.

```cpp
~shared_ptr();
```

### Remarks

The destructor decrements the reference count for the resource currently owned by `*this`. If the reference count falls to zero, the resource is released.

### Example

```cpp
// std__memory__shared_ptr_destroy.cpp
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
    std::cout << "*sp1 == " << *sp1 << std::endl;
    std::cout << "use count == " << sp1.use_count() << std::endl;

    {
        std::shared_ptr<int> sp2(sp1);
        std::cout << "*sp2 == " << *sp2 << std::endl;
        std::cout << "use count == " << sp1.use_count() << std::endl;
    }

    // check use count after sp2 is destroyed
    std::cout << "use count == " << sp1.use_count() << std::endl;

    return (0);
}

```

```Output
*sp1 == 5
use count == 1
*sp2 == 5
use count == 2
use count == 1
```

## <a name="swap"></a>  shared_ptr::swap

Swaps two `shared_ptr` objects.

```cpp
void swap(shared_ptr& sp);
```

### Parameters

*sp*<br/>
The shared pointer to swap with.

### Remarks

The member function leaves the resource originally owned by `*this` subsequently owned by *sp*, and the resource originally owned by *sp* subsequently owned by `*this`. The function does not change the reference counts for the two resources and it does not throw any exceptions.

### Example

```cpp
// std__memory__shared_ptr_swap.cpp
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

## <a name="unique"></a>  shared_ptr::unique

Tests if owned resource is unique.

```cpp
bool unique() const;
```

### Remarks

The member function returns **true** if no other `shared_ptr` object owns the resource that is owned by `*this`, otherwise **false**.

### Example

```cpp
// std__memory__shared_ptr_unique.cpp
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
    std::cout << "sp1.unique() == " << std::boolalpha
        << sp1.unique() << std::endl;

    std::shared_ptr<int> sp2(sp1);
    std::cout << "sp1.unique() == " << std::boolalpha
        << sp1.unique() << std::endl;

    return (0);
}

```

```Output
sp1.unique() == true
sp1.unique() == false
```

## <a name="use_count"></a>  shared_ptr::use_count

Counts numbers of resource owners.

```cpp
long use_count() const;
```

### Remarks

The member function returns the number of `shared_ptr` objects that own the resource that is owned by `*this`.

### Example

```cpp
// std__memory__shared_ptr_use_count.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::cout << "sp1.use_count() == "
        << sp1.use_count() << std::endl;

    std::shared_ptr<int> sp2(sp1);
    std::cout << "sp1.use_count() == "
        << sp1.use_count() << std::endl;

    return (0);
}

```

```Output
sp1.use_count() == 1
sp1.use_count() == 2
```

## See also

[weak_ptr Class](../standard-library/weak-ptr-class.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
