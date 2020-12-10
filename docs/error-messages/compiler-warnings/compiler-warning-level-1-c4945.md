---
description: "Learn more about: Compiler Warning (level 1) C4945"
title: "Compiler Warning (level 1) C4945"
ms.date: "11/04/2016"
f1_keywords: ["C4945"]
helpviewer_keywords: ["C4945"]
ms.assetid: 6d2079ea-dc59-4611-bc68-9a22c06f7587
---
# Compiler Warning (level 1) C4945

'symbol' : cannot import symbol from 'assembly2': as 'symbol' has already been imported from another assembly 'assembly1'

A symbol was imported from a referenced assembly but that symbol was already imported from another referenced assembly. Either do not reference one of the assemblies or get the symbol name changed in one of the assemblies.

The following samples generate C4945.

```csharp
// C4945a.cs
// compile with: /target:library
// C# source code to create a dll
public class ClassA {
   public int i;
}
```

and then,

```csharp
// C4945b.cs
// compile with: /target:library
// C# source code to create a dll
public class ClassA {
   public int i;
}
```

and then,

```cpp
// C4945c.cpp
// compile with: /clr /LD /W1
#using "C4945a.dll"
#using "C4945b.dll"   // C4945
```
