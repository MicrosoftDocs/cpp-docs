---
title: "SOCKADDR_IN Structure"
ms.date: "11/04/2016"
f1_keywords: ["SOCKADDR_IN"]
helpviewer_keywords: ["SOCKADDR_IN structure [MFC]"]
ms.assetid: e8cd7c34-78bd-4e28-a990-eb3ca070b7a6
---
# SOCKADDR_IN Structure

In the Internet address family, the `SOCKADDR_IN` structure is used by Windows Sockets to specify a local or remote endpoint address to which to connect a socket.

## Syntax

```
struct sockaddr_in{
    short sin_family;
    unsigned short sin_port;
struct in_addr sin_addr;
    char sin_zero[8];
};
```

#### Parameters

*sin_family*<br/>
Address family (must be AF_INET).

*sin_port*<br/>
IP port.

*sin_addr*<br/>
IP address.

*sin_zero*<br/>
Padding to make structure the same size as `SOCKADDR`.

## Remarks

This is the form of the `SOCKADDR` structure specific to the Internet address family and can be cast to `SOCKADDR`.

The IP address component of this structure is of type `IN_ADDR`. The `IN_ADDR` structure is defined in Windows Sockets header file WINSOCK.H as follows:

```
struct in_addr {
    union {
        struct {
            unsigned char s_b1, s_b2, s_b3, s_b4;
        } S_un_b;
        struct {
            unsigned short s_w1, s_w2;
        } S_un_w;
        unsigned long S_addr;
    } S_un;
};
```

## Requirements

**Header:** winsock2.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[SOCKADDR Structure](../../mfc/reference/sockaddr-structure.md)
