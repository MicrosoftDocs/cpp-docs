---
description: "Learn more about: Platform, default, and cli Namespaces  (C++/CLI and C++/CX)"
title: "Platform, default, and cli Namespaces  (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
f1_keywords: ["lang", "cli"]
helpviewer_keywords: ["lang namespace", "cli namespace"]
ms.assetid: 9d38bd1e-dc78-47d1-a84b-9b4683e52c9c
---
# Platform, default, and cli Namespaces  (C++/CLI and C++/CX)

A namespace qualifies the names of language elements so the names do not conflict with otherwise identical names elsewhere in the source code. For example, a name collision might prevent the compiler from recognizing [Context-Sensitive Keywords](context-sensitive-keywords-cpp-component-extensions.md). Namespaces are used by the compiler but are not preserved in the compiled assembly.

## All Runtimes

Visual Studio provides a default namespace for your project when you create the project. You can manually rename the namespace, although in C++/CX the name of the .winmd file must match the name of the root namespace.

## Windows Runtime

For more information, see [Namespaces and type visibility (C++/CX)](../cppcx/namespaces-and-type-visibility-c-cx.md).

### Requirements

Compiler option: `/ZW`

## Common Language Runtime

### Syntax

```cpp
using namespace cli;
```

### Remarks

The C++/CLI supports the **cli** namespace. When compiling with `/clr`, the **`using`** statement in the Syntax section is implied.

The following language features are in the **cli** namespace:

- [Arrays](arrays-cpp-component-extensions.md)

- [interior_ptr (C++/CLI)](interior-ptr-cpp-cli.md)

- [pin_ptr (C++/CLI)](pin-ptr-cpp-cli.md)

- [safe_cast](safe-cast-cpp-component-extensions.md)

### Requirements

Compiler option: `/clr`

### Examples

The following code example demonstrates that it is possible to use a symbol in the **cli** namespace as a user-defined symbol in your code.  However, once you have done so, you will have to explicitly or implicitly qualify your references to the **cli** language element of the same name.

```cpp
// cli_namespace.cpp
// compile with: /clr
using namespace cli;
int main() {
   array<int> ^ MyArray = gcnew array<int>(100);
   int array = 0;

   array<int> ^ MyArray2 = gcnew array<int>(100);   // C2062

   // OK
   cli::array<int> ^ MyArray2 = gcnew cli::array<int>(100);
   ::array<int> ^ MyArray3 = gcnew ::array<int>(100);
}
```

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)
