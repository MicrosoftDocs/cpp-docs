---
description: "Learn more about: ATL Connection Point Example"
title: "ATL Connection Point Example"
ms.date: "11/04/2016"
helpviewer_keywords: ["connection points [C++], examples", "examples [ATL]"]
ms.assetid: a49721b7-f308-43de-8868-f662a94bc81a
---
# ATL Connection Point Example

This example shows an object that supports [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) as an outgoing interface:

[!code-cpp[NVC_ATL_Windowing#84](../atl/codesnippet/cpp/atl-connection-point-example_1.h)]

When specifying `IPropertyNotifySink` as an outgoing interface, you can use class [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) instead of `IConnectionPointImpl`. For example:

[!code-cpp[NVC_ATL_Windowing#85](../atl/codesnippet/cpp/atl-connection-point-example_2.h)]

## See also

[Connection Point](../atl/atl-connection-points.md)
