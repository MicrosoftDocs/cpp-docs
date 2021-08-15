---
description: "Learn more about: Linker Tools Warning LNK4006"
title: "Linker Tools Warning LNK4006"
ms.date: "11/04/2016"
f1_keywords: ["LNK4006"]
helpviewer_keywords: ["LNK4006"]
ms.assetid: 3a637d17-1676-4ea6-bd8b-290137d28d3b
---
# Linker Tools Warning LNK4006

symbol already defined in object; second definition ignored

The given `symbol`, displayed in its decorated form, was multiply defined. When this warning is encountered, `symbol` will be added twice, but only its first form will be used.

You can get this warning if you try to merge two import libs into one.

If you are rebuilding the C run-time library, you can ignore this message.

### To fix by using the following possible solutions

1. The given `symbol` may be a packaged function, created by compiling with [/Gy](../../build/reference/gy-enable-function-level-linking.md). This symbol was included in more than one file but was changed between compilations. Recompile all files that include the `symbol`.

1. The given `symbol` may have been defined differently in two member objects in different libraries.

1. An absolute may have been defined twice, with a different value in each definition.

1. If the error message is received when combining libraries, `symbol` already exists in the library being added to.
