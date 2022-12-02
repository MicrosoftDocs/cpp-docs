---
description: "Learn more about: _com_error Class"
title: "_com_error Class"
ms.date: 11/17/2022
f1_keywords: ["_com_error"]
helpviewer_keywords: ["_com_error class"]
ms.assetid: 70dafa69-b1fb-4a5c-9249-e857e0793d42
---
# `_com_error` class

**Microsoft Specific**

A `_com_error` object represents an exception condition detected by the error-handling wrapper functions in the header files generated from the type library or by one of the COM support classes. The `_com_error` class encapsulates the `HRESULT` error code and any associated `IErrorInfo Interface` object.

### Construction

| Name | Description |
|---|---|
| [`_com_error`](../cpp/com-error-com-error.md) | Constructs a `_com_error` object. |

### Operators

| Name | Description |
|---|---|
| [`operator =`](../cpp/com-error-operator-equal.md) | Assigns an existing `_com_error` object to another. |

### Extractor functions

| Name | Description |
|---|---|
| [`Error`](../cpp/com-error-error.md) | Retrieves the `HRESULT` passed to the constructor. |
| [`ErrorInfo`](../cpp/com-error-errorinfo.md) | Retrieves the `IErrorInfo` object passed to the constructor. |
| [`WCode`](../cpp/com-error-wcode.md) | Retrieves the 16-bit error code mapped into the encapsulated `HRESULT`. |

### `IErrorInfo` functions

| Name | Description |
|---|---|
| [`Description`](../cpp/com-error-description.md) | Calls `IErrorInfo::GetDescription` function. |
| [`HelpContext`](../cpp/com-error-helpcontext.md) | Calls `IErrorInfo::GetHelpContext` function. |
| [`HelpFile`](../cpp/com-error-helpfile.md) | Calls `IErrorInfo::GetHelpFile` function |
| [`Source`](../cpp/com-error-source.md) | Calls `IErrorInfo::GetSource` function. |
| [`GUID`](../cpp/com-error-guid.md) | Calls `IErrorInfo::GetGUID` function. |

### Format message extractor

| Name | Description |
|---|---|
| [`ErrorMessage`](../cpp/com-error-errormessage.md) | Retrieves the string message for `HRESULT` stored in the `_com_error` object. |

### `ExepInfo.wCode` to `HRESULT` mappers

| Name | Description |
|---|---|
| [`HRESULTToWCode`](../cpp/com-error-hresulttowcode.md) | Maps 32-bit `HRESULT` to 16-bit `wCode`. |
| [`WCodeToHRESULT`](../cpp/com-error-wcodetohresult.md) | Maps 16-bit `wCode` to 32-bit `HRESULT`. |

**END Microsoft Specific**

## Requirements

**Header:** \<comdef.h>

**Library:** *`comsuppw.lib`* or *`comsuppwd.lib`* (for more information, see [`/Zc:wchar_t` (wchar_t is native type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md))

## See also

[Compiler COM support classes](../cpp/compiler-com-support-classes.md)\
[`IErrorInfo` interface](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo)
