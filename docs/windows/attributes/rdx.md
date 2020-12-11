---
description: "Learn more about: rdx"
title: "rdx (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.rdx"]
helpviewer_keywords: ["rdx attribute"]
ms.assetid: ff8e4312-c1ad-4934-bdaa-86f54409651e
---
# rdx

Creates a registry key or modifies an existing registry key.

## Syntax

```cpp
[ rdx(key, valuename=NULL, regtype) ]
```

### Parameters

*key*<br/>
The name of the key to be created or opened.

*valuename*<br/>
(Optional) Specifies the value field to be set. If a value field with this name does not already exist in the key, it is added.

*regtype*<br/>
The type of registry key being added. Can be one of the following: `text`, `dword`, `binary`, or `CString`.

## Remarks

The **rdx** C++ attribute creates or modifies an existing registry key for a COM component. The attribute adds a BEGIN_RDX_MAP macro to the object that implements the target member. `RegistryDataExchange`, a function injected as a result of the BEGIN_RDX_MAP macro, can be used to transfer data between the registry and the data members

This attribute can be used in conjunction with the [coclass](coclass.md), [progid](progid.md), or [vi_progid](vi-progid.md) attributes or other attributes that implies one of these.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`** or **`struct`** member|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## Example

The following code adds a registry key called MyValue to the system describing the CMyClass COM component.

```cpp
// cpp_attr_ref_rdx.cpp
// compile with: /LD /link /OPT:NOREF
#define _ATL_ATTRIBUTES
#include "atlbase.h"

[module (name="MyLib")];

class CMyClass {
public:
   CMyClass() {
      strcpy_s(m_sz, "SomeValue");
   }

   [ rdx(key = "HKCR\\MyApp.MyApp.1", valuename = "MyValue", regtype = "text")]
   char m_sz[256];
};
```

## See also

[COM Attributes](com-attributes.md)<br/>
[registration_script](registration-script.md)
