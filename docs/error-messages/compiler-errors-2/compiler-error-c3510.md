---
description: "Learn more about: Compiler Error C3510"
title: "Compiler Error C3510"
ms.date: "11/04/2016"
f1_keywords: ["C3510"]
helpviewer_keywords: ["C3510"]
ms.assetid: c48387bc-0300-4a4d-97f7-3fb90f82a451
---
# Compiler Error C3510

cannot locate dependent type library 'type_lib'

[no_registry](../../preprocessor/no-registry.md) and [auto_search](../../preprocessor/auto-search.md) were passed to `#import` but the compiler was not able to find a referenced type library.

To resolve this error, make sure that all type libraries and referenced type libraries are available to the compiler.

The following sample generates C3510:

Assume that the following two type libraries were built, and that C3510a.tlb was deleted or not on the path.

```
// C3510a.idl
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12b")]
library C3510aLib
{
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12c")]
   enum E_C3510
   {
      one, two, three
   };
};
```

And then the source code for the second type library:

```
// C3510b.idl
// post-build command: del /f C3510a.tlb
[uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12e")]
library C3510bLib
{
   importlib ("C3510a.tlb");
   [uuid("f87070ba-c6d9-405c-a8e4-8cd9ca25c12d")]
   struct S_C3510 {
      enum E_C3510 e;
   };
};
```

And then the client code:

```cpp
// C3510.cpp
#import "c3510b.tlb" no_registry auto_search   // C3510
int main() {
   C3510aLib::S_C4336 ccc;
}
```
