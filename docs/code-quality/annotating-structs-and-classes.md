---
description: "Learn more about: Annotating Structs and Classes"
title: Annotating Structs and Classes
ms.date: 06/28/2019
ms.topic: "conceptual"
f1_keywords:
  - "_Field_size_bytes_part_"
  - "_Field_size_bytes_full_opt_"
  - "_Field_size_bytes_"
  - "_Field_size_opt_"
  - "_Field_size_part_"
  - "_Field_size_bytes_part_opt_"
  - "_Field_range_"
  - "_Field_size_part_opt_"
  - "_Field_size_"
  - "_Field_size_bytes_opt_"
  - "_Struct_size_bytes_"
  - "_Field_size_bytes_full_"
  - "_Field_size_full_"
  - "_Field_size_full_opt_"
  - "_Field_z_"
ms.assetid: b8278a4a-c86e-4845-aa2a-70da21a1dd52
---
# Annotating Structs and Classes

You can annotate struct and class members by using annotations that act like invariants—they are presumed to be true at any function call or function entry/exit that involves the enclosing structure as a parameter or a result value.

## Struct and Class Annotations

- `_Field_range_(low, high)`

     The field is in the range (inclusive) from `low` to `high`.  Equivalent to `_Satisfies_(_Curr_ >= low && _Curr_ <= high)` applied to the annotated object by using the appropriate pre or post conditions.

- `_Field_size_(size)`, `_Field_size_opt_(size)`, `_Field_size_bytes_(size)`, `_Field_size_bytes_opt_(size)`

     A field that has a writable size in elements (or bytes) as specified by `size`.

- `_Field_size_part_(size, count)`, `_Field_size_part_opt_(size, count)`,         `_Field_size_bytes_part_(size, count)`, `_Field_size_bytes_part_opt_(size, count)`

     A field that has a writable size in elements (or bytes) as specified by `size`, and the `count` of those elements (bytes) that are readable.

- `_Field_size_full_(size)`, `_Field_size_full_opt_(size)`, `_Field_size_bytes_full_(size)`, `_Field_size_bytes_full_opt_(size)`

     A field that has both readable and writable size in elements (or bytes) as specified by `size`.

- `_Field_z_`

     A field that has a null-terminated string.

- `_Struct_size_bytes_(size)`

     Applies to struct or class declaration.  Indicates that a valid object of that type may be larger than the declared type, with the number of bytes being specified by `size`.  For example:

    ```cpp

    typedef _Struct_size_bytes_(nSize)
    struct MyStruct {
        size_t nSize;
        ...
    };

    ```

     The buffer size in bytes of a parameter `pM` of type `MyStruct *` is then taken to be:

    ```cpp
    min(pM->nSize, sizeof(MyStruct))
    ```

## Example

```cpp
#include <sal.h>

// This _Struct_size_bytes_ is equivalent to what below _Field_size_ means.
_Struct_size_bytes_(__builtin_offsetof(MyBuffer, buffer) + bufferSize * sizeof(int))
struct MyBuffer
{
    static int MaxBufferSize;

    _Field_z_
    const char* name;

    int firstField;

    // ... other fields

    _Field_range_(1, MaxBufferSize)
    int bufferSize;

    _Field_size_(bufferSize)        // Preferred way - easier to read and maintain.
    int buffer[]; // Using C99 Flexible array member
};
```

Notes for this example:

- `_Field_z_` is equivalent to `_Null_terminated_`.  `_Field_z_` for the name field specifies that the name field is a null-terminated string.
- `_Field_range_` for `bufferSize` specifies that the value of `bufferSize` should be within 1 and `MaxBufferSize` (both inclusive).
- The end results of the `_Struct_size_bytes_` and `_Field_size_` annotations are equivalent. For structures or classes that have a similar layout, `_Field_size_` is easier to read and maintain, because it has fewer references and calculations than the equivalent `_Struct_size_bytes_` annotation. `_Field_size_` doesn’t require conversion to the byte size. If byte size is the only option, for example, for a void pointer field, `_Field_size_bytes_` can be used. If both `_Struct_size_bytes_` and `_Field_size_` exist, both will be available to tools. It is up to the tool what to do if the two annotations disagree.

## See also

- [Using SAL Annotations to Reduce C/C++ Code Defects](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Understanding SAL](../code-quality/understanding-sal.md)
- [Annotating Function Parameters and Return Values](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotating Function Behavior](../code-quality/annotating-function-behavior.md)
- [Annotating Locking Behavior](../code-quality/annotating-locking-behavior.md)
- [Specifying When and Where an Annotation Applies](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Intrinsic Functions](../code-quality/intrinsic-functions.md)
- [Best Practices and Examples](../code-quality/best-practices-and-examples-sal.md)
