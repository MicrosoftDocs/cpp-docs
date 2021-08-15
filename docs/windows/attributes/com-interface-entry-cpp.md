---
description: "Learn more about: com_interface_entry (C++)"
title: "com_interface_entry  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.com_interface_entry"]
helpviewer_keywords: ["com_interface_entry attribute"]
ms.assetid: 10368f81-b99b-4a0f-ba4f-a142e6911a5c
---
# com_interface_entry (C++)

Adds an interface entry into the COM map of the target class.

## Syntax

```cpp
[ com_interface_entry(
  com_interface_entry) ]
```

### Parameters

*com_interface_entry*<br/>
A string containing the actual text of the entry. For a list of possible values, see [COM_INTERFACE_ENTRY Macros](../../atl/reference/com-interface-entry-macros.md).

## Remarks

The **com_interface_entry** C++ attribute inserts the unabridged contents of a character string into the COM interface map of the target object. If the attribute is applied once to the target object, the entry is inserted into the beginning of the existing interface map. If the attribute is applied repeatedly to the same target object, the entries are inserted at the beginning of the interface map in the order they are received.

This attribute requires that the [coclass](coclass.md), [progid](progid.md), or [vi_progid](vi-progid.md) attribute (or another attribute that implies one of these) also be applied to the same element. If any single attribute is used, the other two are automatically applied. For example, if `progid` is applied, `vi_progid` and `coclass` are also applied.

Because the first usage of **com_interface_entry** causes the new interface to be inserted at the beginning of the interface map, it must be one of the following COM_INTERFACE_ENTRY types:

- COM_INTERFACE_ENTRY

- COM_INTERFACE_ENTRY_IID

- COM_INTERFACE_ENTRY2

- COM_INTERFACE_ENTRY2_IID

Additional usages of the **com_interface_entry** attribute can use all supported COM_INTERFACE_ENTRY types.

This restriction is necessary because ATL uses the first entry in the interface map as the identity `IUnknown`; therefore, the entry must be a valid interface. For example, the following code sample is invalid because the first entry in the interface map does not specify an actual COM interface.

```cpp
[ coclass, com_interface_entry =
    "COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)"
]
   class CMyClass
   {
   };
```

## Example

The following code adds two entries to the existing COM interface map of `CMyBaseClass`. The first is a standard interface, and the second hides the `IDebugTest` interface.

```cpp
// cpp_attr_ref_com_interface_entry.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module (name ="ldld")];

[ object,
  uuid("7dbebed3-d636-4917-af62-c767a720a5b9")]
__interface IDebugTest{};

[ object,
  uuid("2875ceac-f94b-4087-8e13-d13dc167fcfc")]
__interface IMyClass{};

[ coclass,
  com_interface_entry ("COM_INTERFACE_ENTRY (IMyClass)"),
  com_interface_entry ("COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)"),
  uuid("b85f8626-e76e-4775-b6a0-4826a9e94af2")
]

class CMyClass: public IMyClass, public IDebugTest
{
};
```

The resulting COM object map for `CMyBaseClass` is as follows:

```cpp
BEGIN_COM_MAP(CMyClass)
    COM_INTERFACE_ENTRY (IMyClass)
    COM_INTERFACE_ENTRY_NOINTERFACE(IDebugTest)
    COM_INTERFACE_ENTRY(IMyClass)
    COM_INTERFACE_ENTRY2(IDispatch, IMyClass)
    COM_INTERFACE_ENTRY(IDebugTest)
    COM_INTERFACE_ENTRY(IProvideClassInfo)
END_COM_MAP()
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**|
|**Repeatable**|Yes|
|**Required attributes**|One or more of the following: `coclass`, `progid`, or `vi_progid`.|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[COM Attributes](com-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)
