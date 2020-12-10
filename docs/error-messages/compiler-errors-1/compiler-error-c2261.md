---
description: "Learn more about: Compiler Error C2261"
title: "Compiler Error C2261"
ms.date: "11/04/2016"
f1_keywords: ["C2261"]
helpviewer_keywords: ["C2261"]
ms.assetid: 60969482-9e83-49b5-9631-a04bc844da12
---
# Compiler Error C2261

'string' : assembly reference is invalid and cannot be resolved

A value was not valid.

<xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> is used to specify a friend assembly. For example, if a.dll wants to specify b.dll as a friend assembly, you would specify (in a.dll): InternalsVisibleTo("b"). The runtime then allows b.dll to access everything in a.dll (except private types).

For more on the correct syntax when specifying friend assemblies, see [Friend Assemblies (C++)](../../dotnet/friend-assemblies-cpp.md).

## Example

The following sample generates C2261.

```cpp
// C2261.cpp
// compile with: /clr /c
using namespace System::Runtime::CompilerServices;
[assembly: InternalsVisibleTo("a,a,a")];   // C2261
[assembly: InternalsVisibleTo("a.a")];   // OK
[assembly: InternalsVisibleTo("a")];   // OK
```
