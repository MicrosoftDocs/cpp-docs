---
title: "Controls: General Support Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.atl.controls"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controls [ATL]"
  - "general support classes"
ms.assetid: cf73f1d2-7542-48e3-b8c8-9d3abf29f85b
caps.latest.revision: 12
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
# Controls: General Support Classes
The following classes provide general support for ATL controls:  
  
-   [CComControl](../atl/reference/ccomcontrol-class.md) Consists of helper functions and data members that are essential to ATL controls.  
  
-   [IOleControlImpl](../atl/reference/iolecontrolimpl-class.md) Provides methods necessary for controls.  
  
-   [IOleObjectImpl](../atl/reference/ioleobjectimpl-class.md) Provides the principal methods through which a container communicates with a control. Manages the activation and deactivation of in-place controls.  
  
-   [IQuickActivateImpl](../atl/reference/iquickactivateimpl-class.md) Combines initialization into a single call to help containers avoid delays when loading controls.  
  
-   [IPointerInactiveImpl](../atl/reference/ipointerinactiveimpl-class.md) Provides minimal mouse interaction for an otherwise inactive control.  
  
## Sample Program  
 [ATLFire](../visual-cpp-samples.md)  
  
## Related Articles  
 [ATL Tutorial](../atl/active-template-library-atl-tutorial.md)  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)

