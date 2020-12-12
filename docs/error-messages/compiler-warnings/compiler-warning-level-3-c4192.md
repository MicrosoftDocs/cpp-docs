---
description: "Learn more about: Compiler Warning (level 3) C4192"
title: "Compiler Warning (level 3) C4192"
ms.date: "11/04/2016"
f1_keywords: ["C4192"]
helpviewer_keywords: ["C4192"]
ms.assetid: ea5f91fa-8c96-4f3f-ac42-0c8a86d4e5df
---
# Compiler Warning (level 3) C4192

automatically excluding 'name' while importing type library 'library'

A `#import` library contains an item, *name*, that is also defined in the Win32 system headers. Due to limitations of type libraries, names such as **IUnknown** or GUID are often defined in a type library, duplicating the definition from the system headers. `#import` will detect these items and refuse to incorporate them in the .tlh and .tli header files.

To override this behavior, use `#import` attributes [no_auto_exclude](../../preprocessor/no-auto-exclude.md) and [include()](../../preprocessor/include-parens.md).
