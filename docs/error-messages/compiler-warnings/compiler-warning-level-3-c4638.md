---
description: "Learn more about: Compiler Warning (level 3) C4638"
title: "Compiler Warning (level 3) C4638"
ms.date: "08/27/2018"
f1_keywords: ["C4638"]
helpviewer_keywords: ["C4638"]
ms.assetid: 2c07923a-e103-4e40-bd11-fdfed428a5ec
---
# Compiler Warning (level 3) C4638

> XML document comment target: reference to unknown symbol '*symbol*'

## Remarks

The compiler was unable to resolve a symbol (*symbol*). The symbol must be valid in the compilation.

## Example

The following sample generates C4638:

```cpp
// C4638.cpp
// compile with: /clr /doc /LD /W3
using namespace System;

/// Text for class MyClass.
public ref class MyClass {
public:
   /// <summary> Text </summary>
   /// <see cref="aSymbolThatAppearsNowhereInMyProject"/>
   // Try the following line instead:
   // /// <see cref="System::Console::WriteLine"/>
   void MyMethod() {}
};   // C4638
```
