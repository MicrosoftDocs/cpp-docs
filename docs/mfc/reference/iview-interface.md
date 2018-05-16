---
title: "IView Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["IView", "AFXWINFORMS/IView", "AFXWINFORMS/IView::OnActivateView", "AFXWINFORMS/IView::OnInitialUpdate", "AFXWINFORMS/IView::OnUpdate"]
dev_langs: ["C++"]
helpviewer_keywords: ["views [MFC]", "IView class [MFC]", "views [MFC], classes"]
ms.assetid: 9321f299-486e-4551-bee9-d2c4a7b91548
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# IView Interface
Implements several methods that [CWinFormsView](../../mfc/reference/cwinformsview-class.md) uses to send view notifications to a managed control.  
  
## Syntax  
  
```  
interface class IView  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IView::OnActivateView](#onactivateview)|Called by MFC when a view is activated or deactivated.|  
|[IView::OnInitialUpdate](#oninitialupdate)|Called by the framework after the view is first attached to the document, but before the view is initially displayed.|  
|[IView::OnUpdate](#onupdate)|Called by MFC after the view's document has been modified; this function allows the view to update its display to reflect modifications.|  
  
## Remarks  
 `IView` implements several methods that `CWinFormsView` uses to forward common view notifications to a hosted managed control. These are [OnInitialUpdate](#oninitialupdate), [OnUpdate](#onupdate) and [OnActivateView](#onactivateview).  
  
 `IView` is similar to [CView](../../mfc/reference/cview-class.md), but is used only with managed views and controls.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  

## Requirements  
 Header: afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)  

## <a name="onactivateview"></a> IView::OnActivateView  
Called by MFC when a view is activated or deactivated.
```
void OnActivateView(bool activate);
```
## Parameters
`activate`  
Indicates whether the view is being activated or deactivated.  

## <a name="oninitialupdate"></a> IView::OnInitialUpdate
Called by the framework after the view is first attached to the document, but before the view is initially displayed.
```
void OnInitialUpdate();
```

## <a name="onupdate"></a> IView::OnUpdate 
Called by MFC after the view's document has been modified.  
```
void OnUpdate();
```
## Remarks  
This function allows the view to update its display to reflect modifications.

## See Also  
 [CWinFormsView Class](../../mfc/reference/cwinformsview-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)
