---
title: "IView Interface"
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
ms.assetid: 9321f299-486e-4551-bee9-d2c4a7b91548
caps.latest.revision: 18
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
# IView Interface
Implements several methods that [CWinFormsView](../VS_visualcpp/CWinFormsView-Class.md) uses to send view notifications to a managed control.  
  
## Syntax  
  
```  
interface class IView  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IView::OnActivateView](../VS_visualcpp/IView--OnActivateView.md)|Called by MFC when a view is activated or deactivated.|  
|[IView::OnInitialUpdate](../VS_visualcpp/IView--OnInitialUpdate.md)|Called by the framework after the view is first attached to the document, but before the view is initially displayed.|  
|[IView::OnUpdate](../VS_visualcpp/IView--OnUpdate.md)|Called by MFC after the view's document has been modified; this function allows the view to update its display to reflect modifications.|  
  
## Remarks  
 `IView` implements several methods that `CWinFormsView` uses to forward common view notifications to a hosted managed control. These are [OnInitialUpdate](../VS_visualcpp/IView--OnInitialUpdate.md), [OnUpdate](../VS_visualcpp/IView--OnUpdate.md) and [OnActivateView](../VS_visualcpp/IView--OnActivateView.md).  
  
 `IView` is similar to [CView](../VS_visualcpp/CView-Class.md), but is used only with managed views and controls.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../VS_visualcpp/Using-a-Windows-Form-User-Control-in-MFC.md).  
  
## Requirements  
 Header: afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)  
  
## See Also  
 [CWinFormsView Class](../VS_visualcpp/CWinFormsView-Class.md)   
 [CView Class](../VS_visualcpp/CView-Class.md)