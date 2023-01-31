---
description: "Learn more about: Translation Mode Constants"
title: "Translation Mode Constants"
ms.date: "11/04/2016"
f1_keywords: ["FCNTL/_O_BINARY", "FCNTL/_O_TEXT", "FCNTL/_O_WTEXT", "FCNTL/_O_U16TEXT", "FCNTL/_O_U8TEXT", "FCNTL/_O_RAW", "_O_BINARY", "_O_TEXT", "_O_WTEXT", "_O_U16TEXT", "_O_U8TEXT", "_O_RAW"]
helpviewer_keywords: ["_O_BINARY constant", "_O_TEXT constant", "_O_WTEXT constant", "_O_U16TEXT constant", "_O_U8TEXT constant", "_O_RAW constant", "translation constants", "translation, constants", "translation, modes", "translation modes (file I/O)"]
ms.assetid: a5993bf4-7e7a-47f9-83c3-e46332b85579
---
# Translation mode constants

## Syntax

```C
#include <fcntl.h>
```

## Remarks

The `_O_BINARY`, `_O_TEXT`, `_O_WTEXT`, `_O_U16TEXT`, and `_O_U8TEXT` manifest constants determine the translation mode for files (`_open` and `_sopen`) or the translation mode for streams (`_setmode`).

The allowed values are:

| Value | Description |
|---|---|
| `_O_TEXT` | Opens file in text (translated) mode. Carriage return-line feed (CR-LF) combinations are translated into a single line feed (LF) on input. Line feed characters are translated into CR-LF combinations on output. Also, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading, and for reading and writing, `fopen` checks for CTRL+Z at the end of the file and removes it, if possible. It's removed because using the `fseek` and `ftell` functions to move within a file ending with CTRL+Z may cause `fseek` to behave improperly near the end of the file. |
| `_O_WTEXT` | Opens file in UTF16 (translated) mode. The wide-character versions of the text translations of `_O_TEXT` are supported. |
| `_O_U16TEXT` | Opens file in UTF16 no BOM (translated) mode. The wide-character versions of the text translations of `_O_TEXT` are supported. |
| `_O_U8TEXT` | Opens file in UTF8 no BOM (translated) mode. The text translations of `_O_TEXT` are supported. |
| `_O_BINARY` | Opens file in binary (untranslated) mode. The above translations are suppressed. |
| `_O_RAW` | Same as `_O_BINARY`. Supported for C 2.0 compatibility. |

For more information, see [Text and binary mode file I/O](./text-and-binary-mode-file-i-o.md) and [File translation constants](./file-translation-constants.md).

## See also

[`_open`, `_wopen`](./reference/open-wopen.md)\
[`_pipe`](./reference/pipe.md)\
[`_sopen`, `_wsopen`](./reference/sopen-wsopen.md)\
[`_setmode`](./reference/setmode.md)\
[Global constants](./global-constants.md)
