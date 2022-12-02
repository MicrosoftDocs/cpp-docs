---
description: "Learn more about: Constant and Global Variable Mappings"
title: "Constant and Global Variable Mappings"
ms.date: "11/04/2016"
f1_keywords: ["_tenviron", "TCHAR/_tenviron", "_TEOF", "TCHAR/_TEOF", "_tpgmptr", "TCHAR/_tpgmptr"]
helpviewer_keywords: ["_tenviron global constant", "_TEOF global constant", "_tpgmptr global constant"]
ms.assetid: 3af4fd3e-9ed5-4ed9-96fd-7031e5126fd1
---
# Constant and global variable mappings

These generic-text constant, global variable, and standard-type mappings are defined in TCHAR.H and depend on whether the constant `_UNICODE` or `_MBCS` has been defined in your program.

### Generic-text constant and global variable mappings

| Generic-text - object name | SBCS (`_UNICODE`, `_MBCS` not defined) | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_TEOF` | `EOF` | `EOF` | `WEOF` |
| `_tenviron` | `_environ` | `_environ` | `_wenviron` |
| `_tpgmptr` | `_pgmptr` | `_pgmptr` | `_wpgmptr` |

## See also

[Generic-text mappings](./generic-text-mappings.md)\
[Data type mappings](./data-type-mappings.md)\
[Routine mappings](./routine-mappings.md)\
[A sample generic-text program](./a-sample-generic-text-program.md)\
[Using generic-text mappings](./using-generic-text-mappings.md)
