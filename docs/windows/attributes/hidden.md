---
title: "hidden | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.hidden"]
dev_langs: ["C++"]
helpviewer_keywords: ["hidden attribute"]
ms.assetid: 199c96dd-fc07-46c7-af93-92020aebebe7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# hidden

Indicates that the item exists but should not be displayed in a user-oriented browser.

## Syntax

```cpp
[hidden]
```

## Remarks

The **hidden** C++ attribute has the same functionality as the [hidden](/windows/desktop/Midl/hidden) MIDL attribute.

## Example

See the example for [bindable](bindable.md) for an example of how to use **hidden**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**interface**, **class**, **struct**, method, property|
|**Repeatable**|No|
|**Required attributes**|**coclass** (when applied to **class** or **struct**)|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](attribute-contexts.md).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Method Attributes](method-attributes.md)  