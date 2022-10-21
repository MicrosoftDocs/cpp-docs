---
title: "Unicode Stream I/O in Text and Binary Modes"
description: "A description of character conversions with Unicode stream I/O."
ms.topic: "conceptual"
ms.date: "11/04/2016"
helpviewer_keywords: ["stream I/O routines", "I/O [CRT], unicode stream", "Unicode, stream I/O routines", "Unicode stream I/O"]
ms.assetid: 68be0c3e-a9e6-4fd5-b34a-1b5207f0e7d6
---
# Unicode stream I/O in text and binary modes

When a Unicode stream I/O routine (such as `fwprintf`, `fwscanf`, `fgetwc`, `fputwc`, `fgetws`, or `fputws`) operates on a file that is open in text mode (the default), two kinds of character conversions take place:

- Unicode-to-MBCS or MBCS-to-Unicode conversion. When a Unicode stream-I/O function operates in text mode, the source or destination stream is assumed to be a sequence of multibyte characters. Therefore, the Unicode stream-input functions convert multibyte characters to wide characters (as if by a call to the `mbtowc` function). For the same reason, the Unicode stream-output functions convert wide characters to multibyte characters (as if by a call to the `wctomb` function).

- Carriage return-line feed (CR-LF) translation. This translation occurs before the MBCS - Unicode conversion (for Unicode stream input functions) and after the Unicode - MBCS conversion (for Unicode stream output functions). During input, each carriage return-line feed combination is translated into a single line feed character. During output, each line feed character is translated into a carriage return-line feed combination.

However, when a Unicode stream-I/O function operates in binary mode, the file is assumed to be Unicode, and no CR-LF translation or character conversion occurs during input or output. Use the `_setmode( _fileno( stdin ), _O_BINARY );` instruction in order to correctly use `wcin` on a UNICODE text file.

## See also

[Universal C runtime routines by category](./run-time-routines-by-category.md)\
[Input and output](./input-and-output.md)
