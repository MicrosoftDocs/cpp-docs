---
description: "Learn more about: nonextensible Attribute"
title: "nonextensible Attribute"
ms.date: "11/04/2016"
helpviewer_keywords: ["nonextensible attribute", "dual interfaces, nonextensible attribute"]
ms.assetid: 02a4a18b-ffd3-4d53-8fd1-feb1c05ad5ac
---
# nonextensible Attribute

If a dual interface will not be extended at run time (that is, you won't provide methods or properties via `IDispatch::Invoke` that are not available via the vtable), you should apply the **nonextensible** attribute to your interface definition. This attribute provides information to client languages (such as Visual Basic) that can be used to enable full code verification at compile time. If this attribute is not supplied, bugs may remain hidden in the client code until run time.

For more information on the **nonextensible** attribute and an example, see [nonextensible](../windows/attributes/nonextensible.md).

## See also

[Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md)
