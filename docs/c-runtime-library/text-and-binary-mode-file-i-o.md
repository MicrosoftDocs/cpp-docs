---
description: "Learn more about: Text and Binary Mode File I/O"
title: "Text and Binary Mode File I/O"
ms.date: "04/11/2018"
helpviewer_keywords: ["files [C++], open functions", "I/O [CRT], text files", "functions [CRT], file access", "binary access, binary mode file I/O", "translation, modes", "I/O [CRT], binary", "text files, I/O", "I/O [CRT], translation modes", "translation modes (file I/O)", "binary access"]
ms.assetid: 3196e321-8b87-4609-b302-cd6f3c516051
---
# Text and binary mode file I/O

File I/O operations take place in one of two translation modes, *text* or *binary*, depending on the mode in which the file is opened. Data files are often processed in text mode. To control the file translation mode, one can:

- Retain the current default setting and specify the alternative mode only when you open selected files.

- Use the function [`_set_fmode`](./reference/set-fmode.md) to change the default mode for newly opened files. Use [`_get_fmode`](./reference/get-fmode.md) to find the current default mode. The initial default setting is text mode (`_O_TEXT`).

- Change the default translation mode directly by setting the global variable [`_fmode`](./fmode.md) in your program. The function `_set_fmode` sets the value of this variable, but it can also be set directly.

When you call a file-open function such as [`_open`](./reference/open-wopen.md), [`fopen`](./reference/fopen-wfopen.md), [`fopen_s`](./reference/fopen-s-wfopen-s.md), [`freopen`](./reference/freopen-wfreopen.md), [`freopen_s`](./reference/freopen-s-wfreopen-s.md), [`_fsopen`](./reference/fsopen-wfsopen.md) or [`_sopen_s`](./reference/sopen-s-wsopen-s.md), you can override the current default setting of `_fmode` by specifying the appropriate argument to the function [`_set_fmode`](./reference/set-fmode.md). The `stdin`, `stdout`, and `stderr` streams always open in text mode by default; you can also override this default when opening any of these files. Use [`_setmode`](./reference/setmode.md) to change the translation mode using the file descriptor after the file is open.

## See also

[Input and output](./input-and-output.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)
