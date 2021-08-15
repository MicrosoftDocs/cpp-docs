---
description: "Learn more about: source (C++)"
title: "source  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.source"]
helpviewer_keywords: ["source attribute"]
ms.assetid: 1878d05d-7709-4e97-b114-c62f38f5140e
---
# source (C++)

On a class, specifies the COM object's source interfaces for connection points. On a property or method, indicates that the member returns an object or VARIANT that is a source of events.

## Syntax

```cpp
[ source(interfaces) ]
```

### Parameters

*interfaces*<br/>
One or more interfaces that you specify when you apply the source attribute to a class. This parameter is not used when source is applied to a property or method.

## Remarks

The **source** C++ attribute has the same functionality as the [source](/windows/win32/Midl/source) MIDL attribute.

You can use the [default](default-cpp.md) attribute to specify the default source interface for an object.

## Example

```cpp
// cpp_attr_ref_source.cpp
// compile with: /LD
#include "windows.h"
#include "unknwn.h"
[module(name="MyLib")];

[object, uuid(11111111-1111-1111-1111-111111111111)]
__interface b
{
   [id(0), propget, bindable, displaybind, defaultbind, requestedit]
   HRESULT get_I([out, retval]long *i);
};

[object, uuid(11111111-1111-1111-1111-111111111131)]
__interface c
{
   [id(0), propget, bindable, displaybind, defaultbind, requestedit]
   HRESULT et_I([out, retval]long *i);
};

[coclass, default(c), uuid(11111111-1111-1111-1111-111111111132)]
class N : public b
{
};

[coclass, source(c), default(b, c), uuid(11111111-1111-1111-1111-111111111133)]
class NN : public b
{
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**, **interface**|
|**Repeatable**|No|
|**Required attributes**|`coclass` (when applied to class or struct)|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[coclass](coclass.md)
