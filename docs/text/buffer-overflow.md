---
description: "Learn more about: Buffer Overflow"
title: "Buffer Overflow"
ms.date: "11/04/2016"
helpviewer_keywords: ["buffers [C++], character sizes", "buffer overflows [C++]", "MBCS [C++], buffer overflow"]
ms.assetid: f2b7e40a-f02b-46d8-a449-51d26fc0c663
---
# Buffer Overflow

Varying character sizes can cause problems when you put characters into a buffer. Consider the following code, which copies characters from a string, `sz`, into a buffer, `rgch`:

```cpp
cb = 0;
while( cb < sizeof( rgch ) )
    rgch[ cb++ ] = *sz++;
```

The question is: Was the last byte copied a lead byte? The following does not solve the problem because it can potentially overflow the buffer:

```cpp
cb = 0;
while( cb < sizeof( rgch ) )
{
    _mbccpy( rgch + cb, sz );
    cb += _mbclen( sz );
    sz = _mbsinc( sz );
}
```

The `_mbccpy` call attempts to do the correct thing — copy the full character, whether it is 1 or 2 bytes. But it does not take into account that the last character copied might not fit the buffer if the character is 2 bytes wide. The correct solution is:

```cpp
cb = 0;
while( (cb + _mbclen( sz )) <= sizeof( rgch ) )
{
    _mbccpy( rgch + cb, sz );
    cb += _mbclen( sz );
    sz = _mbsinc( sz );
}
```

This code tests for possible buffer overflow in the loop test, using `_mbclen` to test the size of the current character pointed to by `sz`. By making a call to the `_mbsnbcpy` function, you can replace the code in the **`while`** loop with a single line of code. For example:

```cpp
_mbsnbcpy( rgch, sz, sizeof( rgch ) );
```

## See also

[MBCS Programming Tips](../text/mbcs-programming-tips.md)
