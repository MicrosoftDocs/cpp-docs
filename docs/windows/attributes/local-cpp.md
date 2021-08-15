---
description: "Learn more about: local (C++)"
title: "local  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.local"]
helpviewer_keywords: ["local attribute"]
ms.assetid: 35cdd668-bd8e-492a-b7b8-263e7b662437
---
# local (C++)

When used in the interface header, allows you to use the MIDL compiler as a header generator. When used in an individual function, designates a local procedure for which no stubs are generated.

## Syntax

```cpp
[local]
```

## Remarks

The **local** C++ attribute has the same functionality as the [local](/windows/win32/Midl/local) MIDL attribute.

## Example

See [call_as](call-as.md) for an example of how to use **local**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**interface**, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`dispinterface`|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[call_as](call-as.md)
