---
title: "Objects Own Resources (RAII)"
ms.date: "11/04/2016"
ms.topic: "conceptual"
ms.assetid: f86b484e-5a27-4c3b-a92a-dfaa5dd6d93a
---
# Objects Own Resources (RAII)

Make sure that objects own resources. This principle is also known as “resource acquisition is initialization” or “RAII.”

## Example

Pass every “new” object as a constructor argument to another named object that owns it (almost always unique_ptr).

```cpp
void f() {
    unique_ptr<widget> p( new widget() );
    my_class x( new widget() );
    // ...
} // automatic destruction and deallocation for both widget objects
  // automatic exception safety, as if "finally { p->dispose(); x.w.dispose(); }"
```

Always immediately pass any new resource to another object that owns it.

```cpp
void g() {
    other_class y( OpenFile() );
    // ...
} // automatic closing and release for file resource
  // automatic exception safety, as if "finally { y.file.dispose(); }"
```

## See also

[Welcome Back to C++ (Modern C++)](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
