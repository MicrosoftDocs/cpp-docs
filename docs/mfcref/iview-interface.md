---
title: "IView Interface"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 19
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
# IView Interface
Implements several methods that [CWinFormsView](../mfcref/cwinformsview-class.md) uses to send view notifications to a managed control.  
  
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
 `IView` implements several methods that `CWinFormsView` uses to forward common view notifications to a hosted managed control. These are [OnInitialUpdate](../Topic/IView::OnInitialUpdate.md), [OnUpdate](../Topic/IView::OnUpdate.md) and [OnActivateView](../Topic/IView::OnActivateView.md).  
  
 `IView` is similar to [CView](../mfcref/cview-class.md), but is used only with managed views and controls.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../cli/using-a-windows-form-user-control-in-mfc.md).  
  

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
 [CWinFormsView Class](../mfcref/cwinformsview-class.md)   
 [CView Class](../mfcref/cview-class.md)