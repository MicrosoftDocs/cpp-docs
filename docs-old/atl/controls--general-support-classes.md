---
title: "Controls: General Support Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.atl.controls"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controls [ATL]"
  - "general support classes"
ms.assetid: cf73f1d2-7542-48e3-b8c8-9d3abf29f85b
caps.latest.revision: 10
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
  
-   [CComControl](../atl/ccomcontrol-class.md) Consists of helper functions and data members that are essential to ATL controls.  
  
-   [IOleControlImpl](../atl/iolecontrolimpl-class.md) Provides methods necessary for controls.  
  
-   [IOleObjectImpl](../atl/ioleobjectimpl-class.md) Provides the principal methods through which a container communicates with a control. Manages the activation and deactivation of in-place controls.  
  
-   [IQuickActivateImpl](../atl/iquickactivateimpl-class.md) Combines initialization into a single call to help containers avoid delays when loading controls.  
  
-   [IPointerInactiveImpl](../atl/ipointerinactiveimpl-class.md) Provides minimal mouse interaction for an otherwise inactive control.  
  
## Sample Program  
 [ATLFire](../top/visual-c---samples.md)  
  
## Related Articles  
 [ATL Tutorial](../atl/active-template-library--atl--tutorial.md)  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)