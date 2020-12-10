---
description: "Learn more about: type_info Class"
title: "type_info Class"
ms.date: "11/04/2016"
f1_keywords: ["type_info"]
helpviewer_keywords: ["class type_info", "type_info class"]
ms.assetid: 894ddda2-7de4-4da3-9404-d2c74e356c16
---
# type_info Class

The **type_info** class describes type information generated within the program by the compiler. Objects of this class effectively store a pointer to a name for the type. The **type_info** class also stores an encoded value suitable for comparing two types for equality or collating order. The encoding rules and collating sequence for types are unspecified and may differ between programs.

The `<typeinfo>` header file must be included in order to use the **type_info** class. The interface for the **type_info** class is:

```cpp
class type_info {
public:
    type_info(const type_info& rhs) = delete; // cannot be copied
    virtual ~type_info();
    size_t hash_code() const;
    _CRTIMP_PURE bool operator==(const type_info& rhs) const;
    type_info& operator=(const type_info& rhs) = delete; // cannot be copied
    _CRTIMP_PURE bool operator!=(const type_info& rhs) const;
    _CRTIMP_PURE int before(const type_info& rhs) const;
    size_t hash_code() const noexcept;
    _CRTIMP_PURE const char* name() const;
    _CRTIMP_PURE const char* raw_name() const;
};
```

You cannot instantiate objects of the **type_info** class directly, because the class has only a private copy constructor. The only way to construct a (temporary) **type_info** object is to use the [typeid](../cpp/typeid-operator.md) operator. Since the assignment operator is also private, you cannot copy or assign objects of class **type_info**.

`type_info::hash_code` defines a hash function suitable for mapping values of type **typeinfo** to a distribution of index values.

The operators `==` and `!=` can be used to compare for equality and inequality with other **type_info** objects, respectively.

There is no link between the collating order of types and inheritance relationships. Use the `type_info::before` member function to determine the collating sequence of types. There is no guarantee that `type_info::before` will yield the same result in different programs or even different runs of the same program. In this manner, `type_info::before` is similar to the address-of `(&)` operator.

The `type_info::name` member function returns a `const char*` to a null-terminated string representing the human-readable name of the type. The memory pointed to is cached and should never be directly deallocated.

The `type_info::raw_name` member function returns a `const char*` to a null-terminated string representing the decorated name of the object type. The name is actually stored in its decorated form to save space. Consequently, this function is faster than `type_info::name` because it doesn't need to undecorate the name. The string returned by the `type_info::raw_name` function is useful in comparison operations but is not readable. If you need a human-readable string, use the `type_info::name` function instead.

Type information is generated for polymorphic classes only if the [/GR (Enable Run-Time Type Information)](../build/reference/gr-enable-run-time-type-information.md) compiler option is specified.

## See also

[Run-Time Type Information](../cpp/run-time-type-information.md)
