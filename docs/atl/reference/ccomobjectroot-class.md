---
title: "CComObjectRoot Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CComObjectRoot", "atlcom/ATL::CComObjectRoot"]
dev_langs: ["C++"]
helpviewer_keywords: ["CComObjectRoot class"]
ms.assetid: f8797c38-6e73-4f67-85c2-71654cffa8eb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CComObjectRoot Class

This typedef of [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) is templatized on the default threading model of the server.

## Syntax

```
typedef CComObjectRootEx<CComObjectThreadModel> CComObjectRoot;
```

## Remarks

`CComObjectRoot` is a `typedef` of [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) templatized on the default threading model of the server. Thus [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) will reference either [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) or [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md).

`CComObjectRootEx` handles object reference count management for both nonaggregated and aggregated objects. It holds the object reference count if your object is not being aggregated, and holds the pointer to the outer unknown if your object is being aggregated. For aggregated objects, `CComObjectRootEx` methods can be used to handle the failure of the inner object to construct, and to protect the outer object from deletion when inner interfaces are released or the inner object is deleted.

## Requirements

**Header:** atlcom.h

## See Also

[CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
[CComAggObject Class](../../atl/reference/ccomaggobject-class.md)   
[CComObject Class](../../atl/reference/ccomobject-class.md)   
[CComPolyObject Class](../../atl/reference/ccompolyobject-class.md)   
[Class Overview](../../atl/atl-class-overview.md)
