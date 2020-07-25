---
title: "BufferCommand enumeration"
description: "Describes the BufferCommand enum, which is used to work with memory files via CMemFile::GetBufferPtr()"
ms.date: "07/23/2020"
f1_keywords: ["afx/buffercommand"]
helpviewer_keywords: ["buffercommand enumeration [MFC]"]
---
# BufferCommand enumeration

Used by [CMemFile::GetBufferPtr](cmemfile-class.md#getbufferptr) to determine what action to take on the file-backed memory buffer.

## Syntax

``` cpp
public enum BufferCommand
{
   bufferRead,
   bufferWrite,
   bufferCommit,
   bufferCheck
};
```

## Members

|Name|Description|
|-|-|
| `bufferRead` | Read the file-backed memory buffer. |
| `bufferWrite` | Write to the file-backed memory buffer. |
| `bufferCommit` | Advances the current position in the file-backed memory buffer to the end of the committed buffer. |
| `bufferCheck` | Determine whether the file-backed memory buffer can grow in size. |

## Requirements

**Header:** afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)
