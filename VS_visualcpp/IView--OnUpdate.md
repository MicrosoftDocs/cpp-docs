---
title: "IView::OnUpdate"
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
ms.assetid: a5827cbe-a654-4147-8d3c-9b9588b64df1
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
# IView::OnUpdate
Called by MFC after the view's document has been modified.  
  
## Syntax  
  
```  
void OnUpdate();  
```  
  
## Remarks  
 This function allows the view to update its display to reflect modifications.  
  
## Requirements  
 **Header:** afxwinforms.h  
  
## See Also  
 [IView Interface](../VS_visualcpp/IView-Interface.md)   
 [CView::OnUpdate](../Topic/CView::OnUpdate.md)   
 [How to: Add Command Routing to the Windows Forms Control](../VS_visualcpp/How-to--Add-Command-Routing-to-the-Windows-Forms-Control.md)