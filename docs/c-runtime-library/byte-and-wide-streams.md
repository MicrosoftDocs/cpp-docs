---
title: "Byte and Wide Streams"
description: "An overview of byte streams in the Microsoft C runtime library."
ms.date: "11/04/2016"
ms.topic: "conceptual"
helpviewer_keywords: ["byte streams", "wide streams"]
ms.assetid: 61ef0587-4cbc-4eb8-aae5-4c298dbbc6f9
---
# Byte and wide streams

A byte stream treats a file as a sequence of bytes. Within the program, the stream is the identical sequence of bytes.

By contrast, a wide stream treats a file as a sequence of generalized multibyte characters, which can have a broad range of encoding rules. (Text and binary files are still read and written as previously described.) Within the program, the stream looks like the corresponding sequence of wide characters. Conversions between the two representations occur within the Standard C Library. The conversion rules can, in principle, be altered by a call to [`setlocale`](./reference/setlocale-wsetlocale.md) that alters the category `LC_CTYPE`. Each wide stream determines its conversion rules at the time it becomes wide oriented, and retains these rules even if the category `LC_CTYPE` later changes.

Positioning within a wide stream suffers the same limitations as for text steams. Moreover, the file-position indicator may well have to deal with a state-dependent encoding. Typically, it includes both a byte offset within the stream and an object of type `mbstate_t`. Thus, the only reliable way to obtain a file position within a wide stream is by calling [`fgetpos`](./reference/fgetpos.md), and the only reliable way to restore a position obtained this way is by calling [`fsetpos`](./reference/fsetpos.md).

## See also

[Files and streams](./files-and-streams.md)\
[`setlocale`, `_wsetlocale`](./reference/setlocale-wsetlocale.md)
