---
description: "Learn more about: Compiler Warning (level 1) C4651"
title: "Compiler Warning (level 1) C4651"
ms.date: "11/04/2016"
f1_keywords: ["C4651"]
helpviewer_keywords: ["C4651"]
ms.assetid: f1ea82aa-4dc1-4972-b55a-57fdb962f0dd
---
# Compiler Warning (level 1) C4651

'definition' specified for precompiled header but not for current compile

The definition was specified when the precompiled header was generated, but not in this compilation.

The definition will be in effect inside the precompiled header, but not in the rest of the code.

If a precompiled header was built with /DSYMBOL, the compiler will generate this warning if the /Yu compile doesn't have /DSYMBOL.  Adding /DSYMBOL to the /Yu command line resolves this warning.
