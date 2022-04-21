---
title: "Error: new-delete-type-mismatch"
description: "Source examples and live debug screenshots for new delete type mismatch errors."
ms.date: 03/02/2021
f1_keywords: ["new-delete-type-mismatch"]
helpviewer_keywords: ["new-delete-type-mismatch error", "AddressSanitizer error new-delete-type-mismatch"]
---
# Error: `new-delete-type-mismatch`

> Address Sanitizer Error: Deallocation size different from allocation size

In this example, only `~Base`, and not `~Derived`, is called. The compiler generates a call to `~Base()` because the `Base` destructor isn't **`virtual`**. When we call `delete b`, the object's destructor is bound to the default definition. The code deletes an empty base class (or 1 byte on Windows). A missing **`virtual`** keyword on the destructor declaration is a common C++ error when using inheritance.

## Example - virtual destructor

```cpp
// example1.cpp
// new-delete-type-mismatch error
#include <memory>
#include <vector>

struct T {
    T() : v(100) {}
    std::vector<int> v;
};

struct Base {};

struct Derived : public Base {
    T t;
};

int main() {
    Base *b = new Derived;

    delete b;  // Boom! 

    std::unique_ptr<Base> b1 = std::make_unique<Derived>();

    return 0;
}
```

Polymorphic base classes should declare **`virtual`** destructors. If a class has any virtual functions, it should have a virtual destructor.

To fix the example, add:

```cpp
struct Base {
  virtual ~Base() = default;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

:::image type="content" source="media/new-delete-type-mismatch-example-1.png" alt-text="Screenshot of debugger displaying new-delete-type-mismatch error in example 1.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
