---
title: "IView Interface | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "views [MFC]"
  - "IView class"
  - "views, classes"
ms.assetid: 9321f299-486e-4551-bee9-d2c4a7b91548
caps.latest.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IView Interface
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IView Interface](https://docs.microsoft.com/cpp/mfc/reference/iview-interface).  
  
  
Implements several methods that [CWinFormsView](../../mfc/reference/cwinformsview-class.md) uses to send view notifications to a managed control.  
  
## Syntax  
  
```  
interface class IView  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IView::OnActivateView](#iview__onactivateview)|Called by MFC when a view is activated or deactivated.|  
|[IView::OnInitialUpdate](#iview__oninitialupdate)|Called by the framework after the view is first attached to the document, but before the view is initially displayed.|  
|[IView::OnUpdate](#iview__onupdate)|Called by MFC after the view's document has been modified; this function allows the view to update its display to reflect modifications.|  
  
## Remarks  
 `IView` implements several methods that `CWinFormsView` uses to forward common view notifications to a hosted managed control. These are [OnInitialUpdate](#iview__oninitialupdate), [OnUpdate](#iview__onupdate) and [OnActivateView](#iview__onactivateview).  
  
 `IView` is similar to [CView](../../mfc/reference/cview-class.md), but is used only with managed views and controls.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  

## Requirements  
 Header: afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)  

## <a name="iview__onactivateview"></a> IView::OnActivateView  
Called by MFC when a view is activated or deactivated.
```  
void OnActivateView(bool activate);
```
## Parameters
`activate`  
Indicates whether the view is being activated or deactivated.  

## <a name="iview__oninitialupdate"></a> IView::OnInitialUpdate
Called by the framework after the view is first attached to the document, but before the view is initially displayed.
```  
void OnInitialUpdate();
```

## <a name="iview__onupdate"></a> IView::OnUpdate 
Called by MFC after the view's document has been modified.  
```  
void OnUpdate();
```
## Remarks  
This function allows the view to update its display to reflect modifications.

## See Also  
 [CWinFormsView Class](../../mfc/reference/cwinformsview-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)








