---
description: "Learn more about: File Translation Constants"
title: "File Translation Constants"
ms.date: "11/04/2016"
helpviewer_keywords: ["translation constants", "file translation [C++], constants", "translation, file translation constants", "translation, constants", "constants [C++], file translation mode", "file translation [C++]"]
ms.assetid: 49b13bf3-442e-4d19-878b-bd1029fa666a
---
# File Translation Constants

## Syntax

```
#include <stdio.h>
```

## Remarks

These constants specify the mode of translation (**"b"** or **"t"**). The mode is included in the string specifying the type of access (**"r"**, **"w"**, **"a"**, **"r+"**, **"w+"**, **"a+"**).

The translation modes are as follows:

- **t**

   Opens in text (translated) mode. In this mode, carriage return-line feed (CR-LF) combinations are translated into single line feeds (LF) on input, and LF characters are translated into CR-LF combinations on output. Also, CTRL+Z is interpreted as an end-of-file character on input. In files opened for reading or reading and writing, `fopen` checks for CTRL+Z at the end of the file and removes it, if possible. This is done because using the `fseek` and `ftell` functions to move within a file ending with CTRL+Z may cause `fseek` to behave improperly near the end of the file.

   > [!NOTE]
   > The **t** option is not part of the ANSI standard for `fopen` and `freopen`. It is a Microsoft extension and should not be used where ANSI portability is desired.

- **b**

   Opens in binary (untranslated) mode. The above translations are suppressed.

If **t** or **b** is not given in *mode*, the translation mode is defined by the default-mode variable [_fmode](../c-runtime-library/fmode.md). For more information about using text and binary modes, see [Text and Binary Mode File I/O](../c-runtime-library/text-and-binary-mode-file-i-o.md).

## See also

[_fdopen, _wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)<br/>
[fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md)<br/>
[freopen, _wfreopen](../c-runtime-library/reference/freopen-wfreopen.md)<br/>
[_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
