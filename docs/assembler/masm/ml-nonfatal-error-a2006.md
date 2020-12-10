---
description: "Learn more about: ML Nonfatal Error A2006"
title: "ML Nonfatal Error A2006"
ms.date: "12/17/2019"
ms.custom: "error-reference"
f1_keywords: ["A2006"]
helpviewer_keywords: ["A2006"]
ms.assetid: b8a8f096-95df-42b5-85ed-d2530560a84c
---
# ML Nonfatal Error A2006

**undefined symbol : identifier**

An attempt was made to use a symbol that was not defined.

One of the following may have occurred:

- A symbol was not defined.

- A field was not a member of the specified structure.

- A symbol was defined in an include file that was not included.

- An external symbol was used without an [EXTERN](extern-masm.md) or [EXTERNDEF](externdef.md) directive.

- A symbol name was misspelled.

- A local code label was referenced outside of its scope.

## See also

[ML Error Messages](ml-error-messages.md)
