---
title: "Implement Interface Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.impl.interface.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Implement Interface Wizard [C++]"
ms.assetid: 947c329e-0815-4ca7-835e-c41dfeb75f9e
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Implement Interface Wizard
This wizard implements an interface for a COM object. Implementations of many interfaces are included in the COM libraries available with Visual Studio and Windows. An interface implementation is associated with an object when an instance of that object is created, and it provides the services that the object offers.  
  
 For a discussion of interfaces and implementations, see [Interfaces and Interface Implementations](http://msdn.microsoft.com/library/windows/desktop/ms694356) in the [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
 **Implement interface from**  
 Specifies the location of the type library, from which the interface is created.  
  
|Option|Description|  
|------------|-----------------|  
|**Project**|The type library is part of the project.|  
|**Registry**|The type library is registered in the system. Registered type libraries are listed in **Available type libraries**.|  
|**File**|The type library is not necessarily registered in the system but is contained in a file. You must provide the file location in **Location**.|  
  
 **Available type libraries**  
 Displays the available type libraries containing the interface definitions that you can implement. If you click **File** under **Implement interface from**, this box is unavailable for change.  
  
 **Location**  
 Displays the location of the type library currently selected in the **Available type libraries** list. If you selected **File** under **Implement interface from**, click the ellipsis button to locate a file containing the type library to use.  
  
 **Interfaces**  
 Displays the interfaces whose definitions are contained in the type library currently selected in the **Available type libraries** box.  
  
> [!NOTE]
>  Interfaces that have the same name as those already implemented by the selected object are not displayed in the **Interfaces** box.  
  
|Transfer button|Description|  
|---------------------|-----------------|  
|**>**|Adds to the **Implement interfaces** list the interface name currently selected in the **Interfaces** list.|  
|**>>**|Adds to the **Implement interfaces** list all interface names available in the **Interfaces** list.|  
|**<**|Removes the interface name currently selected in the **Implement interfaces** list.|  
|**<\<**|Removes all interface names currently listed in the **Implement interfaces** list.|  
  
 **Implement Interfaces**  
 Displays the names of the interfaces that you have selected to implement on your object.  
  
> [!NOTE]
>  If you include more than one interface that derives from `IDispatch`, or if you try to implement an interface that is derived from another interface already on your class, then you must disambiguate the COM_MAP entries. See [COM_INTERFACE_ENTRY2](http://msdn.microsoft.com/Library/3d48c53b-827b-42cc-9e22-594f7ea2bf0b) for more information.  
  
## See Also  
 [Implementing an Interface](../ide/implementing-an-interface-visual-cpp.md)