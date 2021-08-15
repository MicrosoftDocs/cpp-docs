---
description: "Learn more about: Character Assignment"
title: "Character Assignment"
ms.date: "11/04/2016"
helpviewer_keywords: ["characters [C++], assignments", "MBCS [C++], character assignments"]
ms.assetid: dcc329cd-92df-4e20-817d-364be62ff28f
---
# Character Assignment

Consider the following example, in which the **`while`** loop scans a string, copying all characters except 'X' into another string:

```cpp
while( *sz2 )
{
    if( *sz2 != 'X' )
        *sz1++ = *sz2++;
    else
        sz2++;
}
```

The code copies the byte at `sz2` to the location pointed to by `sz1`, then increments `sz1` to receive the next byte. But if the next character in `sz2` is a double-byte character, the assignment to `sz1` copies only the first byte. The following code uses a portable function to copy the character safely and another to increment `sz1` and `sz2` correctly:

```cpp
while( *sz2 )
{
    if( *sz2 != 'X' )
    {
        _mbscpy_s( sz1, 1, sz2 );
        sz1 = _mbsinc( sz1 );
        sz2 = _mbsinc( sz2 );
    }
    else
        sz2 = _mbsinc( sz2 );
}
```

## See also

[MBCS Programming Tips](../text/mbcs-programming-tips.md)<br/>
[Character Comparison](../text/character-comparison.md)
