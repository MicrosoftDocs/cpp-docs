---
description: "Learn more about: _bstr_t::Attach"
title: "_bstr_t::Attach"
ms.date: "11/04/2016"
f1_keywords: ["_bstr_t::Attach"]
helpviewer_keywords: ["Attach method [C++]"]
ms.assetid: 8cad867e-40fc-435b-841f-0d412c2f58d3
---
# _bstr_t::Attach

**Microsoft Specific**

Links a `_bstr_t` wrapper to a `BSTR`.

## Syntax

```cpp
void Attach(
   BSTR s
);
```

#### Parameters

*s*<br/>
A `BSTR` to be associated with, or assigned to, the `_bstr_t` variable.

## Remarks

If the `_bstr_t` was previously attached to another `BSTR`, the `_bstr_t` will clean up the `BSTR` resource, if no other `_bstr_t` variables are using the `BSTR`.

## Example

See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for an example using **Attach**.

**END Microsoft Specific**

## See also

[_bstr_t Class](../cpp/bstr-t-class.md)
