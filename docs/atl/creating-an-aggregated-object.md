---
title: "Creating an Aggregated Object | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["aggregation [C++], creating aggregated objects", "aggregate objects [C++], creating"]
ms.assetid: fc29d7aa-fd53-4276-9c2f-37379f71b179
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Creating an Aggregated Object
Aggregation delegates **IUnknown** calls, providing a pointer to the outer object's **IUnknown** to the inner object.  
  
### To create an aggregated object  
  
1.  Add an **IUnknown** pointer to your class object and initialize it to **NULL** in the constructor.  
  
2.  Override [FinalConstruct](../atl/reference/ccomobjectrootex-class.md#finalconstruct) to create the aggregate.  
  
3.  Use the **IUnknown** pointer, defined in Step 1, as the second parameter for the [COM_INTERFACE_ENTRY_AGGREGATE](reference/com-interface-entry-macros.md#com_interface_entry_aggregate) macros.  
  
4.  Override [FinalRelease](../atl/reference/ccomobjectrootex-class.md#finalrelease) to release the **IUnknown** pointer.  
  
> [!NOTE]
>  If you use and release an interface from the aggregated object during `FinalConstruct`, you should add the [DECLARE_PROTECT_FINAL_CONSTRUCT](reference/aggregation-and-class-factory-macros.md#declare_protect_final_construct) macro to the definition of your class object.  
  
## See Also  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)

