---
title: "Adding Functionality to the Composite Control | Microsoft Docs"
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
  - "event handlers [C++], ActiveX controls"
  - "composite controls, handling events"
  - "ActiveX controls [C++], events"
ms.assetid: 98f85681-9564-480d-af38-03f9733fe58b
caps.latest.revision: 10
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
# Adding Functionality to the Composite Control
Once you have inserted any necessary controls into the composite control, the next step involves adding new functionality. This new functionality usually falls into two categories:  
  
-   Supporting additional interfaces and customizing the behavior of your composite control with additional, specific features.  
  
-   Handling events from the contained ActiveX control (or controls).  
  
 For the purpose and scope of this article, the remainder of this section focuses solely on handling events from ActiveX controls.  
  
> [!NOTE]
>  If you need to handle messages from Windows controls, see [Implementing a Window](../atl/implementing-a-window.md) for more information on message handling in ATL.  
  
 After inserting an ActiveX control in the dialog resource, right-click the control and click **Add Event Handler**. Select the event you want to handle and click **Add and Edit**. The event handler code will be added to the control's .h file.  
  
 Connection points for ActiveX controls on the composite control are automatically connected and disconnected via calls to [CComCompositeControl::AdviseSinkMap](../atl/reference/ccomcompositecontrol-class.md#ccomcompositecontrol__advisesinkmap).  
  
## See Also  
 [Composite Control Fundamentals](../atl/atl-composite-control-fundamentals.md)

