---
title: "Controls: General Support Classes"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: cf73f1d2-7542-48e3-b8c8-9d3abf29f85b
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Controls: General Support Classes
The following classes provide general support for ATL controls:  
  
-   [CComControl](../VS_visualcpp/CComControl-Class.md) Consists of helper functions and data members that are essential to ATL controls.  
  
-   [IOleControlImpl](../VS_visualcpp/IOleControlImpl-Class.md) Provides methods necessary for controls.  
  
-   [IOleObjectImpl](../VS_visualcpp/IOleObjectImpl-Class.md) Provides the principal methods through which a container communicates with a control. Manages the activation and deactivation of in-place controls.  
  
-   [IQuickActivateImpl](../VS_visualcpp/IQuickActivateImpl-Class.md) Combines initialization into a single call to help containers avoid delays when loading controls.  
  
-   [IPointerInactiveImpl](../VS_visualcpp/IPointerInactiveImpl-Class.md) Provides minimal mouse interaction for an otherwise inactive control.  
  
## Sample Program  
 [ATLFire](../VS_visualcpp/Visual-C---Samples.md)  
  
## Related Articles  
 [ATL Tutorial](../VS_visualcpp/Active-Template-Library--ATL--Tutorial.md)  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)