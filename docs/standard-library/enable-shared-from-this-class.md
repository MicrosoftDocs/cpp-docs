---
description: "Learn more about: enable_shared_from_this Class"
title: "enable_shared_from_this Class"
ms.date: "11/04/2016"
f1_keywords: ["memory/std::enable_shared_from_this"]
helpviewer_keywords: ["enable_shared_from_this class", "enable_shared_from_this"]
ms.assetid: 9237603d-22e2-421f-b070-838ac006baf5
---
# enable_shared_from_this Class

Helps generate a `shared_ptr`.

## Syntax

```cpp
class enable_shared_from_this {
public:
    shared_ptr<Ty>
        shared_from_this();
    shared_ptr<const Ty> shared_from_this() const;
    weak_ptr<T> weak_from_this() noexcept;
    weak_ptr<T const> weak_from_this() const noexcept;
protected:
    enable_shared_from_this();
    enable_shared_from_this(const enable_shared_from_this&);
    enable_shared_from_this& operator=(const enable_shared_from_this&);
    ~enable_shared_from_this();
};
```

### Parameters

*Ty*\
The type controlled by the shared pointer.

## Remarks

Objects derived from `enable_shared_from_this` can use the `shared_from_this` methods in member functions to create [shared_ptr](../standard-library/shared-ptr-class.md) owners of the instance that share ownership with existing `shared_ptr` owners. Otherwise, if you create a new `shared_ptr` by using **`this`**, it is distinct from existing `shared_ptr` owners, which can lead to invalid references or cause the object to be deleted more than once.

The constructors, destructor, and assignment operator are protected to help prevent accidental misuse. The template argument type *Ty* must be the type of the derived class.

For an example of usage, see [enable_shared_from_this::shared_from_this](#shared_from_this).

## <a name="shared_from_this"></a> shared_from_this

Generates a `shared_ptr` that shares ownership of the instance with existing `shared_ptr` owners.

```cpp
shared_ptr<T> shared_from_this();
shared_ptr<const T> shared_from_this() const;
```

### Remarks

When you derive objects from the `enable_shared_from_this` base class, the `shared_from_this` template member functions return a [shared_ptr Class](../standard-library/shared-ptr-class.md) object that shares ownership of this instance with existing `shared_ptr` owners. Otherwise, if you create a new `shared_ptr` from **`this`**, it is distinct from existing `shared_ptr` owners, which can lead to invalid references or cause the object to be deleted more than once. The  behavior is undefined if you call `shared_from_this` on an instance that is not already owned by a `shared_ptr` object.

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

## <a name="weak_from_this"></a> weak_from_this

```cpp
weak_ptr<T> weak_from_this() noexcept;
weak_ptr<T const> weak_from_this() const noexcept;
```
