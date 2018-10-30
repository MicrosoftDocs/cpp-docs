---
title: "FILETIME Structure"
ms.date: "11/04/2016"
f1_keywords: ["FILETIME"]
helpviewer_keywords: ["FILETIME structure [MFC]"]
ms.assetid: e09557e2-b6d7-4dd5-a5b9-6328bca88595
---
# FILETIME Structure

The `FILETIME` structure is a 64-bit value representing the number of 100-nanosecond intervals since January 1, 1601.

## Syntax

```
typedef struct _FILETIME {
    DWORD dwLowDateTime;   /* low 32 bits */
    DWORD dwHighDateTime;  /* high 32 bits */
} FILETIME, *PFILETIME, *LPFILETIME;
```

#### Parameters

*dwLowDateTime*<br/>
Specifies the low 32 bits of the file time.

*dwHighDateTime*<br/>
Specifies the high 32 bits of the file time.

## Requirements

**Header:** windef.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CTime::CTime](../../atl-mfc-shared/reference/ctime-class.md#ctime)

