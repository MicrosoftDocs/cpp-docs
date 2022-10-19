---
description: "Learn more about: Stream States"
title: "Stream States"
ms.date: "11/19/2018"
helpviewer_keywords: ["streams, states"]
ms.assetid: 5f28c968-f132-403f-968c-8417ff315e52
---
# Stream states

The valid states, and state transitions, for a stream are shown in the following figure.

![Stream state diagram.](./media/stream.gif "Stream state diagram")

Each of the circles denotes a stable state. Each of the lines denotes a transition that can occur as the result of a function call that operates on the stream. Five groups of functions can cause state transitions.

Functions in the first three groups are declared in \<stdio.h>:

- The byte read functions: [`fgetc`](./reference/fgetc-fgetwc.md), [`fgets`](./reference/fgets-fgetws.md), [`fread`](./reference/fread.md), [`fscanf`](./reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md), [`getc`](./reference/getc-getwc.md), [`getchar`](./reference/getc-getwc.md), [`gets`](./gets-getws.md), [`scanf`](./reference/scanf-scanf-l-wscanf-wscanf-l.md), and [`ungetc`](./reference/ungetc-ungetwc.md)

- The byte write functions: [`fprintf`](./reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md), [`fputc`](./reference/fputc-fputwc.md), [`fputs`](./reference/fputs-fputws.md), [`fwrite`](./reference/fwrite.md), [`printf`](./reference/printf-printf-l-wprintf-wprintf-l.md), [`putc`](./reference/putc-putwc.md), [`putchar`](./reference/putc-putwc.md), [`puts`](./reference/puts-putws.md), [`vfprintf`](./reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md), and [`vprintf`](./reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)

- The position functions: [`fflush`](./reference/fflush.md), [`fseek`](./reference/fseek-fseeki64.md), [`fsetpos`](./reference/fsetpos.md), and [`rewind`](./reference/rewind.md)

Functions in the remaining two groups are declared in \<wchar.h>:

- The wide read functions: [`fgetwc`](./reference/fgetc-fgetwc.md), [`fgetws`](./reference/fgets-fgetws.md), [`fwscanf`](./reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md), [`getwc`](./reference/getc-getwc.md), [`getwchar`](./reference/getc-getwc.md), [`ungetwc`](./reference/ungetc-ungetwc.md), and [`wscanf`](./reference/scanf-scanf-l-wscanf-wscanf-l.md),

- The wide write functions: [`fwprintf`](./reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md), [`fputwc`](./reference/fputc-fputwc.md), [`fputws`](./reference/fputs-fputws.md), [`putwc`](./reference/putc-putwc.md), [`putwchar`](./reference/fputc-fputwc.md), [`vfwprintf`](./reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md), [`vwprintf`](./reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md), and [`wprintf`](./reference/printf-printf-l-wprintf-wprintf-l.md),

The state diagram shows that you must call one of the position functions between most write and read operations:

- You can't call a read function if the last operation on the stream was a write.

- You can't call a write function if the last operation on the stream was a read, unless that read operation set the end-of-file indicator.

Finally, the state diagram shows that a position operation never decreases the number of valid function calls that can follow.

## See also

[Files and streams](./files-and-streams.md)
