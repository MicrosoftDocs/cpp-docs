---
# Required metadata
# For more information, see https://learn.microsoft.com/en-us/help/platform/learn-editor-add-metadata
# For valid values of ms.service, ms.prod, and ms.topic, see https://learn.microsoft.com/en-us/help/platform/metadata-taxonomies

title:       # Add a title for the browser tab
description: # Add a meaningful description for search results
author:      Rastaban # GitHub alias
ms.author:   philc # Microsoft alias
ms.service:  # Add the ms.service or ms.prod value
# ms.prod:   # To use ms.prod, uncomment it and delete ms.service
ms.topic:    # Add the ms.topic value
ms.date:     02/10/2026
---
# /Zc:u8EscapeEncoding (numeric escape sequence encoding in u8 strings)

Keep the value of numeric escape sequences in `u8` string literals and don't re-encode them as utf-8.

## Syntax

> **/Zc:u8EscapeEncoding**[**-**]

## Remarks

This flag changes the way numeric escape sequences are interpreted in `u8` string literals. The behavior under `/Zc:u8EscapeEncoding` is to keep their value as-is. The behavior under `/Zc:u8EscapeEncoding-` is to re-encode the value in utf-8 as if it is a universal-character. The behavior of universal-character sequences is always to encode them as utf-8.

This demonstrates the behavior:

```
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

Under `/Zc:u8EscapeEncoding` the escape sequence `\x00ff` is encoded as `0xFF` and the universal-character sequence `\u00ff` is encoded as the utf-8 sequence `0xC3 0xBF`. This gives the following output when run:

```
0x20 0xFF 0x20 0xC3 0xBF 0x20 0x0
```

Under `/Zc:u8EscapeEncoding-` the value of both `\x00ff` and `\u00ff` are re-encoded as the utf-8 sequence `0xC3 0xBF`. This gives the following output when run:

```
0x20 0xC3 0xBF 0x20 0xC3 0xBF 0x20 0x0
```

## See also

[/Zc (Conformance)](zc-conformance.md)<br/>