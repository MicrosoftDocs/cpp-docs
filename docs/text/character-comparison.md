---
description: "Learn more about: Character Comparison"
title: "Character Comparison"
ms.date: "11/04/2016"
helpviewer_keywords: ["comparing characters", "MBCS [C++], character comparison", "characters [C++], comparing"]
ms.assetid: 18846e44-3e6e-40c4-9b42-3153fb15db20
---
# Character Comparison

Use the following tips:

- Comparing a known lead byte with an ASCII character works correctly:

    ```cpp
    if( *sz1 == 'A' )
    ```

- Comparing two unknown characters requires the use of one of the macros defined in Mbstring.h:

    ```cpp
    if( !_mbccmp( sz1, sz2) )
    ```

   This ensures that both bytes of a double-byte character are compared for equality.

## See also

[MBCS Programming Tips](../text/mbcs-programming-tips.md)<br/>
[Buffer Overflow](../text/buffer-overflow.md)
