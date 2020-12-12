---
description: "Learn more about: Constant and Global Variable Mappings"
title: "Constant and Global Variable Mappings"
ms.date: "11/04/2016"
f1_keywords: ["_tenviron", "_TEOF", "_tfinddata_t"]
helpviewer_keywords: ["tfinddatat function", "tenviron function", "TEOF type", "_TEOF type", "generic-text mappings", "_tenviron function", "_tfinddata_t function"]
ms.assetid: 3af4fd3e-9ed5-4ed9-96fd-7031e5126fd1
---
# Constant and Global Variable Mappings

These generic-text constant, global variable, and standard-type mappings are defined in TCHAR.H and depend on whether the constant `_UNICODE` or `_MBCS` has been defined in your program.

### Generic-Text Constant and Global Variable Mappings

|Generic-text - object name|SBCS (_UNICODE, _MBCS not defined)|_MBCS defined|_UNICODE defined|
|----------------------------------|--------------------------------------------|--------------------|-----------------------|
|`_TEOF`|`EOF`|`EOF`|`WEOF`|
|`_tenviron`|`_environ`|`_environ`|`_wenviron`|
|`_tpgmptr`|`_pgmptr`|`_pgmptr`|`_wpgmptr`|

## See also

[Generic-Text Mappings](../c-runtime-library/generic-text-mappings.md)<br/>
[Data Type Mappings](../c-runtime-library/data-type-mappings.md)<br/>
[Routine Mappings](../c-runtime-library/routine-mappings.md)<br/>
[A Sample Generic-Text Program](../c-runtime-library/a-sample-generic-text-program.md)<br/>
[Using Generic-Text Mappings](../c-runtime-library/using-generic-text-mappings.md)
