---
description: "Learn more about: Incrementing and Decrementing Pointers"
title: "Incrementing and Decrementing Pointers"
ms.date: "11/04/2016"
helpviewer_keywords: ["incrementing pointers", "MBCS [C++], pointers", "pointers [C++], multibyte characters", "decrementing pointers"]
ms.assetid: 0872b4a0-e2bd-4004-8319-070efb76f2fd
---
# Incrementing and Decrementing Pointers

Use the following tips:

- Point to lead bytes, not trail bytes. It is usually unsafe to have a pointer to a trail byte. It is usually safer to scan a string forward rather than in reverse.

- There are pointer increment/decrement functions and macros available that move over a whole character:

    ```cpp
    sz1++;
    ```

   becomes:

    ```cpp
    sz1 = _mbsinc( sz1 );
    ```

   The `_mbsinc` and `_mbsdec` functions correctly increment and decrement in `character` units, regardless of the character size.

- For decrements, you need a pointer to the head of the string, as in the following:

    ```cpp
    sz2--;
    ```

   becomes:

    ```cpp
    sz2 = _mbsdec( sz2Head, sz2 );
    ```

   Alternatively, your head pointer could be to a valid character in the string, such that:

    ```cpp
    sz2Head < sz2
    ```

   You must have a pointer to a known valid lead byte.

- You might want to maintain a pointer to the previous character for faster calls to `_mbsdec`.

## See also

[MBCS Programming Tips](../text/mbcs-programming-tips.md)<br/>
[Byte Indices](../text/byte-indices.md)
