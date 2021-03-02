---
title: "new-delete-type-mismatch error"
description: "Source examples and live debug screenshots for new delete type mismatch errors."
ms.date: 02/05/2021
f1_keywords: ["new-delete-type-mismatch"]
helpviewer_keywords: ["new delete type mismatch"]
---

# Example: `new-delete-type-mismatch` error

In this example, only `~Base`, and not `~Derived`, is called. The compiler generates a call to `~Base()` because the `Base` destructor isn't **`virtual`**. When we call `delete b`, the object's destructor is bound to the default definition. The code deletes an empty base class (or 1 byte on Windows). A missing **`virtual`** keyword on the destructor declaration is a common C++ error when using inheritance. Example sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

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

![Screenshot of debugger displaying error in example1](media/new-delete-type-mismatch-example1.png)

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadowbytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-examples.md)
