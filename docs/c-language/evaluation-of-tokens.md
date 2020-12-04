---
description: "Learn more about: Evaluation of Tokens"
title: "Evaluation of Tokens"
ms.date: "11/04/2016"
helpviewer_keywords: ["tokens, evaluating"]
ms.assetid: 28870b62-dff6-4644-8b75-d58f340b48d2
---
# Evaluation of Tokens

When the compiler interprets tokens, it includes as many characters as possible in a single token before moving on to the next token. Because of this behavior, the compiler may not interpret tokens as you intended if they are not properly separated by white space. Consider the following expression:

```
i+++j
```

In this example, the compiler first makes the longest possible operator (`++`) from the three plus signs, then processes the remaining plus sign as an addition operator (`+`). Thus, the expression is interpreted as `(i++) + (j)`, not `(i) + (++j)`. In this and similar cases, use white space and parentheses to avoid ambiguity and ensure proper expression evaluation.

**Microsoft Specific**

The C compiler treats a CTRL+Z character as an end-of-file indicator. It ignores any text after CTRL+Z.

**END Microsoft Specific**

## See also

[C Tokens](../c-language/c-tokens.md)
