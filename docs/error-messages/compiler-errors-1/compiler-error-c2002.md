---
description: "Learn more about: Compiler Error C2002"
title: "Compiler Error C2002"
ms.date: "11/04/2016"
f1_keywords: ["C2002"]
helpviewer_keywords: ["C2002"]
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
---
# Compiler Error C2002

invalid wide-character constant

The multibyte-character constant is not valid.

### To fix by checking the following possible causes

1. The wide-character constant contains more bytes than expected.

1. The standard header STDDEF.h is not included.

1. Wide characters cannot be concatenated with ordinary string literals.

1. A wide-character constant must be preceded by the character 'L':

    ```
    L'mbconst'
    ```

1. For Microsoft C++, the text arguments of a preprocessor directive must be ASCII. For example, the directive, `#pragma message(L"string")`, is not valid.
