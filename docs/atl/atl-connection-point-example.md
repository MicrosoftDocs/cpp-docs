---
title: "ATL Connection Point Example | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["connection points [C++], examples", "examples [ATL]"]
ms.assetid: a49721b7-f308-43de-8868-f662a94bc81a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# ATL Connection Point Example

This example shows an object that supports [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) as an outgoing interface:

[!code-cpp[NVC_ATL_Windowing#84](../atl/codesnippet/cpp/atl-connection-point-example_1.h)]

When specifying `IPropertyNotifySink` as an outgoing interface, you can use class [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) instead of `IConnectionPointImpl`. For example:

[!code-cpp[NVC_ATL_Windowing#85](../atl/codesnippet/cpp/atl-connection-point-example_2.h)]

## See Also

[Connection Point](../atl/atl-connection-points.md)

