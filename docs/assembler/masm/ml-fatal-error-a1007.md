---
description: "Learn more about: ML Fatal Error A1007"
title: "ML Fatal Error A1007"
ms.date: "12/17/2019"
ms.custom: "error-reference"
f1_keywords: ["A1007"]
helpviewer_keywords: ["A1007"]
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
---
# ML Fatal Error A1007

**nesting level too deep**

The assembler reached its nesting limit. The limit is 20 levels except where noted otherwise.

One of the following was nested too deeply:

- A high-level directive such as [.IF](dot-if.md), [.REPEAT](dot-repeat.md), or [.WHILE](dot-while.md).

- A structure definition.

- A conditional-assembly directive.

- A procedure definition.

- A [PUSHCONTEXT](pushcontext.md) directive (the limit is 10).

- A segment definition.

- An include file.

- A macro.

## See also

[ML Error Messages](ml-error-messages.md)
