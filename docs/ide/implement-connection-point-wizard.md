---
title: "Implement Connection Point Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.impl.cp.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Implement Connection Point Wizard [C++]"
ms.assetid: c117f6c6-30f0-4adb-82b4-b1f34e0f0fa8
caps.latest.revision: 6
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
# Implement Connection Point Wizard
This wizard implements a connection point for a COM object. A connectable object (that is, a source) can expose a connection point for its own interfaces or for any outgoing interface. Visual C++ and Windows both provide type libraries that have outgoing interfaces. Each outgoing interface can be implemented by a client on an object (that is, a sink).  
  
 For more information, see [ATL Connection Points](../atl/atl-connection-points.md).  
  
 **Available type libraries**  
 Displays the available type libraries containing the interface definitions for which you can implement connection points. Click the ellipsis button to locate a file containing the type library to use.  
  
 **Location**  
 Displays the location of the type library currently selected in the **Available type libraries** list.  
  
 **Interfaces**  
 Displays the interfaces whose definitions are contained in the type library currently selected in the **Available type libraries** box.  
  
|Transfer button|Description|  
|---------------------|-----------------|  
|**>**|Adds to the **Implement connection points** list the interface name currently selected in the **Interfaces** list.|  
|**>>**|Adds to the **Implement connection points** list all interface names available in the **Interfaces** list.|  
|**<**|Removes the interface name currently selected in the **Implement connection points** list.|  
|**<<**|Removes all interface names currently listed in the **Implement connection points** list.|  
  
 **Implement connection points**  
 Displays the names of the interfaces for which you implement connection points when you click **Finish**.  
  
## See Also  
 [Implementing a Connection Point](../ide/implementing-a-connection-point-visual-cpp.md)