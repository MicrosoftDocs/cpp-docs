---
title: "Charizing Operator (#@) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["#@"]
dev_langs: ["C++"]
helpviewer_keywords: ["preprocessor, operators", "charizing operator", "#@ preprocessor operator"]
ms.assetid: dee03314-d27c-4063-965c-64756efbef22
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Charizing Operator (#@)
**Microsoft Specific**

The charizing operator can be used only with arguments of macros. If `#@` precedes a formal parameter in the definition of the macro, the actual argument is enclosed in single quotation marks and treated as a character when the macro is expanded. For example:

```
#define makechar(x)  #@x
```

causes the statement

```
a = makechar(b);
```

to be expanded to

```
a = 'b';
```

The single-quotation character cannot be used with the charizing operator.

**END Microsoft Specific**

## See Also

[Preprocessor Operators](../preprocessor/preprocessor-operators.md)