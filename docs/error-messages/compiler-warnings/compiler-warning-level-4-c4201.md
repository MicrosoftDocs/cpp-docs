---
title: "Compiler Warning (level 4) C4201 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4201"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4201"]
ms.assetid: 6156f508-9393-4d77-9e73-1ec3e1c32d0d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4201

nonstandard extension used : nameless struct/union

Under Microsoft extensions (/Ze), you can specify a structure without a declarator as members of another structure or union. These structures generate an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).

## Example

```
// C4201.cpp
// compile with: /W4
struct S
{
   float y;
   struct
   {
      int a, b, c;  // C4201
   };
} *p_s;

int main()
{
}
```