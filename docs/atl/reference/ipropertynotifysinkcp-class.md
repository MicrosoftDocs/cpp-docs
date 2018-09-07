---
title: "IPropertyNotifySinkCP Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["IPropertyNotifySinkCP", "atlctl/ATL::IPropertyNotifySinkCP"]
dev_langs: ["C++"]
helpviewer_keywords: ["connection points [C++], managing", "sinks, notifying of changes", "IPropertyNotifySinkCP class"]
ms.assetid: 1b41445e-bc88-4fa6-bb62-d68aacec2bd5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# IPropertyNotifySinkCP Class

This class exposes [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) interface as an outgoing interface on a connectable object.

> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class T, class CDV = CComDynamicUnkArray>  
class IPropertyNotifySinkCP 
   : public IConnectionPointImpl<T, &IID_IPropertyNotifySink, CDV>
```

#### Parameters

*T*  
Your class, derived from `IPropertyNotifySinkCP`.

*CDV*  
A class that manages the connections between a connection point and its sinks. The default value is [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), which allows unlimited connections. You can also use [CComUnkArray](../../atl/reference/ccomunkarray-class.md), which specifies a fixed number of connections.

## Remarks

`IPropertyNotifySinkCP` inherits all methods through its base class, [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).

The [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) interface allows a sink object to receive notifications about property changes. Class `IPropertyNotifySinkCP` exposes this interface as an outgoing interface on a connectable object. The client must implement the `IPropertyNotifySink` methods on the sink.

Derive your class from `IPropertyNotifySinkCP` when you want to create a connection point that represents the `IPropertyNotifySink` interface.

For more information about using connection points in ATL, see the article [Connection Points](../../atl/atl-connection-points.md).

## Requirements

**Header:** atlctl.h

## See Also

[IConnectionPointImpl Class](../../atl/reference/iconnectionpointimpl-class.md)   
[IConnectionPointContainerImpl Class](../../atl/reference/iconnectionpointcontainerimpl-class.md)   
[Class Overview](../../atl/atl-class-overview.md)
