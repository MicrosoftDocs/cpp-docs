---
description: "Learn more about: Translation Mode Constants"
title: "Translation Mode Constants"
ms.date: "11/04/2016"
f1_keywords: ["_O_BINARY", "_O_TEXT", "_O_RAW"]
helpviewer_keywords: ["O_BINARY constant", "O_TEXT constant", "O_RAW constant", "_O_TEXT constant", "_O_RAW constant", "translation constants", "_O_BINARY constant", "translation, constants", "translation, modes", "translation modes (file I/O)"]
ms.assetid: a5993bf4-7e7a-47f9-83c3-e46332b85579
---
# Translation Mode Constants

## Syntax

```
#include <fcntl.h>
```

## Remarks

The `_O_BINARY` and `_O_TEXT` manifest constants determine the translation mode for files (`_open` and `_sopen`) or the translation mode for streams (`_setmode`).

The allowed values are:

|Value|Description|
|-|-|
`_O_TEXT`  | Opens file in text (translated) mode. Carriage return-line feed (CR-LF) combinations are translated into a single line feed (LF) on input. Line feed characters are translated into CR-LF combinations on output. Also, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading, and for reading and writing, `fopen` checks for CTRL+Z at the end of the file and removes it, if possible. This is done because using the `fseek` and `ftell` functions to move within a file ending with CTRL+Z may cause `fseek` to behave improperly near the end of the file.
`_O_BINARY`  | Opens file in binary (untranslated) mode. The above translations are suppressed.
`_O_RAW`  | Same as `_O_BINARY`. Supported for C 2.0 compatibility.

For more information, see [Text and Binary Mode File I/O](../c-runtime-library/text-and-binary-mode-file-i-o.md) and [File Translation](../c-runtime-library/file-translation-constants.md).

## See also

[_open, _wopen](../c-runtime-library/reference/open-wopen.md)<br/>
[_pipe](../c-runtime-library/reference/pipe.md)<br/>
[_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md)<br/>
[_setmode](../c-runtime-library/reference/setmode.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
