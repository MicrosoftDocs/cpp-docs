---
title: "Model for Hosting RDO Data Controls in a Container | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RDO RemoteData control, hosting model"
  - "RemoteData control, hosting model"
ms.assetid: ca598bac-9fef-40e6-b6cd-03d817e16b2e
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
# Model for Hosting RDO Data Controls in a Container
A container hosts an RDO data control as follows:  
  
-   The container obtains an IVBDSC interface from the data control. If it cannot find IVBDSC, it is not a data control.  
  
-   The container obtains the **ICursor** interfaces from the data control. These interfaces supply a Cursor object that can be manipulated by a client.  
  
-   The container hooks up to the data control's **INotifyDBEvents** interface. This interface allows the container to receive notifications from the data control. The container should support the **INotifyDBEventsSink** interface to do this.  
  
 A container hosts an RDO data-bound control as follows:  
  
-   The control supports the **IBoundObject** interface and the container supports the **IBoundObjectSite** interface. The control obtains the container's **IBoundObjectSite** interface, and the container obtains the **IBoundObject** interface from the control.  
  
-   The control supports the **IPropNotifySink** interface and hooks up with the container. This allows the container to receive notifications from the control.  
  
-   If the control supports **INotifyDBEventsSink**, it can receive notifications from an RDO data control after connecting with the data control's **INotifyDBEvents** interface.  
  
-   The control then can receive cursor objects from the data control (directly or through the container). The cursors can then be manipulated and scrolled. At this point, the RDO data-bound control is successfully bound.  
  
## See Also  
 [RDO Databinding](../../data/ado-rdo/rdo-databinding.md)   
 [Using RDO Databinding in Visual C++](../../data/ado-rdo/using-rdo-databinding-in-visual-cpp.md)