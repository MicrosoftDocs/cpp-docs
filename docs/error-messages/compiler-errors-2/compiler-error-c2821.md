---
description: "Learn more about: Compiler Error C2821"
title: "Compiler Error C2821"
ms.date: "11/04/2016"
f1_keywords: ["C2821"]
helpviewer_keywords: ["C2821"]
ms.assetid: e8d71988-a968-4484-94db-e8c3bad74a4a
---
# Compiler Error C2821

first formal parameter to 'operator new' must be 'unsigned int'

The first formal parameter of the [operator new](../../standard-library/new-operators.md#op_new) must be an unsigned **`int`**.

## Example

The following sample generates C2821:

```cpp
// C2821.cpp
// compile with: /c
void * operator new( /* unsigned int,*/ void * );   // C2821
void * operator new( unsigned int, void * );
```
