---
description: "Learn more about: _bstr_t Class"
title: "_bstr_t Class"
ms.date: "11/04/2016"
f1_keywords: ["_bstr_t"]
helpviewer_keywords: ["BSTR object", "_bstr_t class", "BSTR object [C++], COM encapsulation"]
ms.assetid: 58841fef-fe21-4a84-aab9-780262b5201f
---
# _bstr_t Class

**Microsoft Specific**

A `_bstr_t` object encapsulates the [BSTR data type](/previous-versions/windows/desktop/automat/bstr). The class manages resource allocation and deallocation through function calls to `SysAllocString` and `SysFreeString` and other `BSTR` APIs when appropriate. The **_bstr_t** class uses reference counting to avoid excessive overhead.

### Construction

| Constructor | Description |
|--|--|
| [_bstr_t](../cpp/bstr-t-bstr-t.md) | Constructs a `_bstr_t` object. |

### Operations

| Function | Description |
|--|--|
| [Assign](../cpp/bstr-t-assign.md) | Copies a `BSTR` into the `BSTR` wrapped by a `_bstr_t`. |
| [Attach](../cpp/bstr-t-attach.md) | Links a `_bstr_t` wrapper to a `BSTR`. |
| [copy](../cpp/bstr-t-copy.md) | Constructs a copy of the encapsulated `BSTR`. |
| [Detach](../cpp/bstr-t-detach.md) | Returns the `BSTR` wrapped by a `_bstr_t` and detaches the `BSTR` from the `_bstr_t`. |
| [GetAddress](../cpp/bstr-t-getaddress.md) | Points to the `BSTR` wrapped by a `_bstr_t`. |
| [GetBSTR](../cpp/bstr-t-getbstr.md) | Points to the beginning of the `BSTR` wrapped by the `_bstr_t`. |
| [length](../cpp/bstr-t-length.md) | Returns the number of characters in the `_bstr_t`. |

### Operators

| Operator | Description |
|--|--|
| [operator =](../cpp/bstr-t-operator-equal.md) | Assigns a new value to an existing `_bstr_t` object. |
| [operator +=](../cpp/bstr-t-operator-add-equal-plus.md) | Appends characters to the end of the `_bstr_t` object. |
| [operator +](../cpp/bstr-t-operator-add-equal-plus.md) | Concatenates two strings. |
| [operator !](../cpp/bstr-t-operator-logical-not.md) | Checks if the encapsulated `BSTR` is a NULL string. |
| [operator ==, !=, \<, >, \<=, >=](../cpp/bstr-t-relational-operators.md) | Compares two `_bstr_t` objects. |
| [operator wchar_t* &#124; char\*](../cpp/bstr-t-wchar-t-star-bstr-t-char-star.md) | Extract the pointers to the encapsulated Unicode or multibyte `BSTR` object. |

**END Microsoft Specific**

## Requirements

**Header:** \<comutil.h>

**Lib:** comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) for more information)

## See also

[Compiler COM Support Classes](../cpp/compiler-com-support-classes.md)
