---
title: "LINGER Structure"
ms.date: "11/04/2016"
f1_keywords: ["LINGER"]
helpviewer_keywords: ["LINGER structure [MFC]"]
ms.assetid: 1fb1c5bf-a64e-4a6c-89d6-1734e4fdbb1b
---
# LINGER Structure

The `LINGER` structure is used for manipulating the SO_LINGER and SO_DONTLINGER options of `CAsyncSocket::GetSockOpt`.

## Syntax

```
struct linger {
    u_short l_onoff;            // option on/off
    u_short l_linger;           // linger time
};
```

## Remarks

Setting the SO_DONTLINGER option prevents blocking on member function `Close` while waiting for unsent data to be sent. Setting this option is equivalent to setting SO_LINGER with `l_onoff` set to 0.

## Requirements

**Header:** winsock2.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CAsyncSocket::GetSockOpt](../../mfc/reference/casyncsocket-class.md#getsockopt)<br/>
[CAsyncSocket::SetSockOpt](../../mfc/reference/casyncsocket-class.md#setsockopt)

