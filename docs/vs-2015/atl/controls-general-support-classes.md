---
title: "Controls: General Support Classes | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controls: General Support Classes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ATL Controls: General Support Classes](https://docs.microsoft.com/cpp/atl/controls-general-support-classes).  
  
  
The following classes provide general support for ATL controls:  
  
-   [CComControl](../atl/reference/ccomcontrol-class.md) Consists of helper functions and data members that are essential to ATL controls.  
  
-   [IOleControlImpl](../atl/reference/iolecontrolimpl-class.md) Provides methods necessary for controls.  
  
-   [IOleObjectImpl](../atl/reference/ioleobjectimpl-class.md) Provides the principal methods through which a container communicates with a control. Manages the activation and deactivation of in-place controls.  
  
-   [IQuickActivateImpl](../atl/reference/iquickactivateimpl-class.md) Combines initialization into a single call to help containers avoid delays when loading controls.  
  
-   [IPointerInactiveImpl](../atl/reference/ipointerinactiveimpl-class.md) Provides minimal mouse interaction for an otherwise inactive control.  
  
## Sample Program  
 [ATLFire](../top/visual-cpp-samples.md)  
  
## Related Articles  
 [ATL Tutorial](../atl/active-template-library-atl-tutorial.md)  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)





