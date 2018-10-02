---
title: "lcid (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.lcid"]
dev_langs: ["C++"]
helpviewer_keywords: ["LCID attribute"]
ms.assetid: 7f248c69-ee1c-42c3-9411-39cf27c9f43d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# lcid

Lets you pass a locale identifier to a function.

## Syntax

```cpp
[lcid]
```

## Remarks

The **lcid** C++ attribute implements the functionality of the [lcid](/windows/desktop/Midl/lcid) MIDL attribute. If you want to implement locale for a library block, use the **lcid=**`lcid` parameter to the [module](module-cpp.md) attribute.

## Example

```cpp
// cpp_attr_ref_lcid.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLibrary")];
typedef long HRESULT;

[dual, uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA")]
__interface IStatic {
   HRESULT MyFunc([in, lcid] long LocaleID, [out, retval] BSTR * ReturnVal);
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface parameter|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](attribute-contexts.md).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)  