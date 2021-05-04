---
description: "Learn more about: Compiler Warning (level 1) C4179"
title: "Compiler Warning (level 1) C4179"
ms.date: 05/03/2021
f1_keywords: ["C4179"]
helpviewer_keywords: ["C4179"]
---
# Compiler Warning (level 1) C4179

> '`//*`' : parsed as '`/`' and '`/*`': confusion with standard '`//`' comments

In standard C89, **`//*`** is an incorrect comment delimiter. Use **`/*`** under **`/Za`** instead.

## Remarks

Before Visual Studio 2017 version 15.5, under **`/Za`**, the C compiler emits C4179 for a non-standard comment delimiter.

In Visual Studio 2017 version 15.5, the C compiler no longer emits warnings C4001 and C4179. The warnings aren't needed because single-line comments have been part of the C standard since C99.

```C
/* C only */
#pragma warning(disable:4001) // C4619
#pragma warning(disable:4179)
// single line comment
//* also a single line comment */    // Caused C4179
```

```Output
warning C4619: #pragma warning: there is no warning number '4001'
```

When the code doesn't need to be backwards compatible, avoid the warning by removing the C4001 and C4179 suppression. If the code does need to be backward compatible, then suppress C4619 only.

```C
/* C only */
#pragma warning(disable:4619)
#pragma warning(disable:4001)
#pragma warning(disable:4179)

// single line comment
//* also a single line comment */
```
