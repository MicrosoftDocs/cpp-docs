---
title: /Zc:u8EscapeEncoding (numeric escape sequence encoding in u8 strings)
description: "Learn more about the compiler option /Zc:u8EscapeEncoding (numeric escape sequence encoding in u8 strings)"
author:      Rastaban
ms.author:   philc
ms.service: visual-cpp
ms.topic: article
ms.date: 06/01/2026
ms.subservice: cpp-lang
---
# `/Zc:u8EscapeEncoding` (numeric escape sequence encoding in u8 strings)

Keep the value of numeric escape sequences in `u8` string literals without encoding them as utf-8.

Use this switch to increase cross compatibility or when a non-utf-8 character is embedded in a utf-8 string literal.

## Syntax

> **/Zc:u8EscapeEncoding**[**-**]

## Remarks

In C++, `u8` string literals are utf-8 encoded sequences of `char8_t`. This flag changes the way numeric escape sequences are interpreted in `u8` string literals. The behavior under `/Zc:u8EscapeEncoding` is to keep their value as-is. The behavior under `/Zc:u8EscapeEncoding-` is to re-encode the value in utf-8 as if it's a universal-character. The behavior of universal-character sequences is always to encode them as utf-8.

The following example shows the behavior:

```cpp
#include <cstdio>
int main()
{
    const char8_t str[] = u8" \x00ff \u00ff ";
    for(char8_t c : str) {
        printf("0x%X ", c);
    }
    return 0;
}
```

The differences in the example string escape sequences are subtle. Notice the example string contains both a hex escape sequence '\\__x__' and a universal escape sequence '\\__u__'. `/Zc:u8EscapeEncoding[-]` affects the encoding of the hex escape sequence, but the universal escape sequence is always encoded as utf-8. The example string also includes the space character, which is encoded as `0x20`.

Under `/Zc:u8EscapeEncoding`, the escape sequence `\x00ff` is encoded as `0xFF` and the universal-character sequence `\u00ff` is encoded as the utf-8 sequence `0xC3 0xBF`. The result is the following output when run:

```output
0x20 0xFF 0x20 0xC3 0xBF 0x20 0x0
```

Under `/Zc:u8EscapeEncoding-`, the value of both `\x00ff` and `\u00ff` are re-encoded as the utf-8 sequence `0xC3 0xBF`. The result is the following output when run:

```output
0x20 0xC3 0xBF 0x20 0xC3 0xBF 0x20 0x0
```

## See also

[/Zc (Conformance)](zc-conformance.md)<br/>
