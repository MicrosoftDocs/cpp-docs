---
title: "Compiler Warning (level 4) C4125 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4125"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4125"]
ms.assetid: a081d1f4-0789-4915-91df-7ff0b28ca245
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4125

decimal digit terminates octal escape sequence

The compiler evaluates the octal number without the decimal digit and assumes the decimal digit is a character.

## Example

```
// C4125a.cpp
// compile with: /W4
char array1[] = "\709"; // C4125
int main()
{
}
```

If the digit 9 is intended as a character, correct the example as follows:

```
// C4125b.cpp
// compile with: /W4
char array[] = "\0709";  // C4125 String containing "89"
int main()
{
}
```