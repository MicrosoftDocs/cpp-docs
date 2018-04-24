---
title: "Creating an Aggregated Object | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggregation [C++], creating aggregated objects"
  - "aggregate objects [C++], creating"
ms.assetid: fc29d7aa-fd53-4276-9c2f-37379f71b179
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating an Aggregated Object
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Creating an Aggregated Object](https://docs.microsoft.com/cpp/atl/creating-an-aggregated-object).  
  
  
Aggregation delegates **IUnknown** calls, providing a pointer to the outer object's **IUnknown** to the inner object.  
  
### To create an aggregated object  
  
1.  Add an **IUnknown** pointer to your class object and initialize it to **NULL** in the constructor.  
  
2.  Override [FinalConstruct](../atl/reference/ccomobjectrootex-class.md#finalconstruct) to create the aggregate.  
  
3.  Use the **IUnknown** pointer, defined in Step 1, as the second parameter for the [COM_INTERFACE_ENTRY_AGGREGATE](../Topic/COM_INTERFACE_ENTRY_AGGREGATE.md) macros.  
  
4.  Override [FinalRelease](../atl/reference/ccomobjectrootex-class.md#finalrelease) to release the **IUnknown** pointer.  
  
> [!NOTE]
>  If you use and release an interface from the aggregated object during `FinalConstruct`, you should add the [DECLARE_PROTECT_FINAL_CONSTRUCT](../Topic/DECLARE_PROTECT_FINAL_CONSTRUCT.md) macro to the definition of your class object.  
  
## See Also  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)





