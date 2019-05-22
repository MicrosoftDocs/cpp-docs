---
title: "Reserved words"
ms.date: "11/04/2016"
f1_keywords: ["code", "CONFORMING", "DISCARDABLE", "Description", "base", "APPLOADER", "Data", "DYNAMIC", "DEV386"]
helpviewer_keywords: [".def files [C++], reserved words", "def files [C++], reserved words", "linker [C++], reserved words", "reserved words [C++]"]
ms.assetid: 9b9f49e5-0739-45ab-a37e-81e3915ceb25
---
# Reserved words

The following words are reserved by the linker. These names can be used as arguments in [module-definition statements](module-definition-dot-def-files.md) only if the name is enclosed in double quotation marks ("").

||||
|-|-|-|
|**APPLOADER**<sup>1</sup>|**INITINSTANCE**<sup>2</sup>|**PRELOAD**|
|**BASE**|**IOPL**|**PRIVATE**|
|**CODE**|**LIBRARY**<sup>1</sup>|**PROTMODE**<sup>2</sup>|
|**CONFORMING**|**LOADONCALL**<sup>1</sup>|**PURE**<sup>1</sup>|
|**DATA**|**LONGNAMES**<sup>2</sup>|**READONLY**|
|**DESCRIPTION**|**MOVABLE**<sup>1</sup>|**READWRITE**|
|**DEV386**|**MOVEABLE**<sup>1</sup>|**REALMODE**<sup>1</sup>|
|**DISCARDABLE**|**MULTIPLE**|**RESIDENT**|
|**DYNAMIC**|**NAME**|**RESIDENTNAME**<sup>1</sup>|
|**EXECUTE-ONLY**|**NEWFILES**<sup>2</sup>|**SECTIONS**|
|**EXECUTEONLY**|**NODATA**<sup>1</sup>|**SEGMENTS**|
|**EXECUTEREAD**|**NOIOPL**<sup>1</sup>|**SHARED**|
|**EXETYPE**|**NONAME**|**SINGLE**|
|**EXPORTS**|**NONCONFORMING**<sup>1</sup>|**STACKSIZE**|
|**FIXED**<sup>1</sup>|**NONDISCARDABLE**|**STUB**|
|**FUNCTIONS**<sup>2</sup>|**NONE**|**VERSION**|
|**HEAPSIZE**|**NONSHARED**|**WINDOWAPI**|
|**IMPORTS**|**NOTWINDOWCOMPAT**<sup>1</sup>|**WINDOWCOMPAT**|
|**IMPURE**<sup>1</sup>|**OBJECTS**|**WINDOWS**|
|**INCLUDE**<sup>2</sup>|**OLD**<sup>1</sup>||

<sup>1</sup> The linker emits a warning ("ignored") when it encounters this term. However, the word is still reserved.

<sup>2</sup> The linker ignores this word but emits no warning.

## See also

- [MSVC linker reference](linking.md)
- [MSVC Linker Options](linker-options.md)