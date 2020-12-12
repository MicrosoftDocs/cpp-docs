---
description: "Learn more about: Compiler Warning (level 1) C4364"
title: "Compiler Warning (level 1) C4364"
ms.date: "11/04/2016"
f1_keywords: ["C4364"]
helpviewer_keywords: ["C4364"]
ms.assetid: 1477634c-d60f-4570-ad16-1aaeae24ac7f
---
# Compiler Warning (level 1) C4364

\#using for assembly 'file' previously seen at location(line_number) without as_friend attribute; as_friend not applied

A `#using` directive was repeated for a given metadata file, but the **`as_friend`** qualifier was not used in the first occurrence; the compiler will ignore the second **`as_friend`**.

For more information, see [Friend Assemblies (C++)](../../dotnet/friend-assemblies-cpp.md).

## Examples

The following sample creates a component.

```cpp
// C4364.cpp
// compile with: /clr /LD
ref class A {};
```

The following sample generates C4364.

```cpp
// C4364_b.cpp
// compile with: /clr /W1 /c
#using " C4364.dll"
#using " C4364.dll" as_friend   // C4364
```
