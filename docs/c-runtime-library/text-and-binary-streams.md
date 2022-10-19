---
title: "Text and Binary Streams"
description: "A description of text and binary streams in the Microsoft C runtime library."
ms.date: "11/04/2016"
ms.topic: "conceptual"
helpviewer_keywords: ["binary streams", "text streams"]
ms.assetid: 57035e4a-955d-4e04-a560-fcf67ce68b4e
---
# Text and binary streams

A text stream consists of one or more lines of text that can be written to a text-oriented display so that they can be read. When it reads from a text stream, the program reads a newline at the end of each line. When it writes to a text stream, the program writes a newline to signal the end of a line. To match differing conventions among target environments for representing text in files, the library functions can alter the number and representations of characters transmitted between the program and a text stream.

Positioning within a text stream is limited. You can obtain the current file-position indicator by calling [`fgetpos`](./reference/fgetpos.md) or [`ftell`](./reference/ftell-ftelli64.md). You can position a text stream at a position obtained this way, or at the beginning or end of the stream, by calling [`fsetpos`](./reference/fsetpos.md) or [`fseek`](./reference/fseek-fseeki64.md). Any other change of position might well be not supported.

For maximum portability, the program shouldn't write:

- Empty files.
- Space characters at the end of a line.
- Partial lines (by omitting the newline at the end of a file).
- Characters other than the printable characters, newline, and horizontal tab.

If you follow these rules, the sequence of characters you read from a text stream will match the sequence of characters you wrote, whether as bytes or as multibyte characters. Otherwise, the library functions can remove a file you create if the file is empty when you close it. Or, they can alter or delete characters you write to the file.

A binary stream consists of one or more bytes of arbitrary information. You can write the value stored in an arbitrary object to a (byte-oriented) binary stream and read exactly what was stored in the object when you wrote it. The library functions don't alter the bytes you transmit between the program and a binary stream. They can, however, append an arbitrary number of `NULL` bytes to the file that you write with a binary stream. The program must deal with these extra `NULL` bytes at the end of the binary stream.

Positioning within a binary stream is well-defined, except for positioning relative to the end of the stream. You can obtain and alter the current file-position indicator the same as for a text stream. The offsets used by [`ftell`](./reference/ftell-ftelli64.md) and [`fseek`](./reference/fseek-fseeki64.md) count bytes from the beginning of the stream (which is byte zero), so integer arithmetic on these offsets yields predictable results.

A byte stream treats a file as a sequence of bytes. Within the program, the stream looks like the same sequence of bytes, except for the possible alterations described above.

## See also

[Files and streams](./files-and-streams.md)
