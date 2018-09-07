---
title: "COM Map Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["atlcom/ATL::BEGIN_COM_MAP", "atlcom/ATL::END_COM_MAP"]
dev_langs: ["C++"]
helpviewer_keywords: ["COM interfaces, COM map macros"]
ms.assetid: 0f33656d-321f-4996-90cc-9a7f21ab73c3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# COM Map Macros

These macros define COM interface maps.

|||
|-|-|
|[BEGIN_COM_MAP](#begin_com_map)|Marks the beginning of the COM interface map entries.|
|[END_COM_MAP](#end_com_map)|Marks the end of the COM interface map entries.|  

## Requirements

**Header:** atlcom.h

##  <a name="begin_com_map"></a>  BEGIN_COM_MAP

The COM map is the mechanism that exposes interfaces on an object to a client through `QueryInterface`.

```
BEGIN_COM_MAP(x)
```

### Parameters

*x*  
[in] The name of the class object you are exposing interfaces on.

### Remarks

[CComObjectRootEx::InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) only returns pointers for interfaces in the COM map. Start your interface map with the BEGIN_COM_MAP macro, add entries for each of your interfaces with the [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) macro or one of its variants, and complete the map with the [END_COM_MAP](#end_com_map) macro.  

### Example

From the ATL [BEEPER](../../visual-cpp-samples.md) sample:

[!code-cpp[NVC_ATL_COM#1](../../atl/codesnippet/cpp/com-map-macros_1.h)]

##  <a name="end_com_map"></a>  END_COM_MAP

Ends the definition of your COM interface map.

```
END_COM_MAP()
```

## See Also

[Macros](../../atl/reference/atl-macros.md)   
[COM Map Global Functions](../../atl/reference/com-map-global-functions.md)
