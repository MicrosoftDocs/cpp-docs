---
title: "Compiler Error C3846 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3846"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3846"]
ms.assetid: c470f8a5-106b-4efb-b8dc-e1319e04130f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3846

'symbol' : cannot import symbol from 'assembly2': as 'symbol' has already been imported from another assembly 'assembly1'

A symbol could not be imported from a referenced assembly because it was previously imported from a referenced assembly.

## Example

The following sample generates C3846:

```
// C3846a.cpp
// compile with: /LD /clr
public ref struct G
{
};
```

And then compile this:

```
// C3846b.cpp
// compile with: /clr
#using "c3846a.dll"
#using "c3846a.obj"   // C3846

int main()
{
}
```
