---
description: "Learn more about: Defining a Rule"
title: "Defining a Rule"
ms.date: "11/04/2016"
helpviewer_keywords: ["NMAKE program, inference rules", "defining inference rules"]
ms.assetid: 071cd092-3f2e-4065-b0fb-36a9d393cfa8
---
# Defining a Rule

The *fromext* represents the extension of a dependent file, and *toext* represents the extension of a target file.

```
.fromext.toext:
   commands
```

## Remarks

Extensions are not case sensitive. Macros can be invoked to represent *fromext* and *toext*; the macros are expanded during preprocessing. The period (.) preceding *fromext* must appear at the beginning of the line. The colon (:) is preceded by zero or more spaces or tabs. It can be followed only by spaces or tabs, a semicolon (;) to specify a command, a number sign (#) to specify a comment, or a newline character. No other spaces are allowed. Commands are specified as in description blocks.

## What do you want to know more about?

[Search paths in rules](search-paths-in-rules.md)

## See also

[Inference Rules](inference-rules.md)
