---
title: "IView::OnActivateView"
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
ms.topic: reference
ms.assetid: 7855222d-cbba-489a-ab11-56b4dc99a859
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
# IView::OnActivateView
Called by MFC when a view is activated or deactivated.  
  
## Syntax  
  
```  
void OnActivateView( bool activate );  
```  
  
#### Parameters  
 `activate`  
 Indicates whether the view is being activated or deactivated.  
  
## Requirements  
 **Header:** afxwinforms.h  
  
## See Also  
 [IView Interface](../VS_visualcpp/IView-Interface.md)   
 [CView::OnActivateView](../Topic/CView::OnActivateView.md)   
 [How to: Add Command Routing to the Windows Forms Control](../VS_visualcpp/How-to--Add-Command-Routing-to-the-Windows-Forms-Control.md)