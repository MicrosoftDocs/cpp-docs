---
title: "CCreateContext Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCreateContext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCreateContext structure"
ms.assetid: 337a0e44-d910-49a8-afc0-c7207666a9dc
caps.latest.revision: 22
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
# CCreateContext Structure
The framework uses the `CCreateContext` structure when it creates the frame windows and views that are associated with a document.  
  
## Syntax  
  
```  
struct CCreateContext  
```  
  
## Remarks  
 `CCreateContext` is a structure and does not have a base class.  
  
 When you create a window, the values in this structure provide the information used to connect the components of a document to the view of its data. You only have to use `CCreateContext` if you are overriding parts of the creation process.  
  
 A `CCreateContext` structure contains pointers to the document, the frame window, the view, and the document template. It also contains a pointer to a `CRuntimeClass` that identifies the type of view to create. The run-time class information and the current document pointer are used to create a new view dynamically. The following table suggests how and when each `CCreateContext` member might be used:  
  
|Member|Type|What it is for|  
|------------|----------|--------------------|  
|`m_pNewViewClass`|`CRuntimeClass*`|`CRuntimeClass` of the new view to create.|  
|`m_pCurrentDoc`|`CDocument*`|The existing document to be associated with the new view.|  
|`m_pNewDocTemplate`|`CDocTemplate*`|The document template associated with the creation of a new MDI frame window.|  
|`m_pLastView`|`CView*`|The original view on which additional views are modeled, as in the creation of splitter window views or the creation of a second view on a document.|  
|`m_pCurrentFrame`|`CFrameWnd*`|The frame window on which additional frame windows are modeled, as in the creation of a second frame window on a document.|  
  
 When a document template creates a document and its associated components, it validates the information stored in the `CCreateContext` structure. For example, a view should not be created for a nonexistent document.  
  
> [!NOTE]
>  All of the pointers in `CCreateContext` are optional and can be `NULL` if unspecified or unknown.  
  
 `CCreateContext` is used by the member functions listed under "See Also." Consult the descriptions of these functions for specific information if you plan to override them.  
  
 Here are a few general guidelines:  
  
-   When passed as an argument for window creation, as in `CWnd::Create`, `CFrameWnd::Create`, and `CFrameWnd::LoadFrame`, the create context specifies what the new window should be connected to. For most windows, the entire structure is optional and a `NULL` pointer can be passed.  
  
-   For overridable member functions, such as `CFrameWnd::OnCreateClient`, the `CCreateContext` argument is optional.  
  
-   For member functions involved in view creation, you must provide enough information to create the view. For example, for the first view in a splitter window, you must supply the view class information and the current document.  
  
 In general, if you use the framework defaults, you can ignore `CCreateContext`. If you attempt more advanced modifications, the Microsoft Foundation Class Library source code or the sample programs, such as VIEWEX, will guide you. If you do forget a required parameter, a framework assertion will tell you what you forgot.  
  
 For more information on `CCreateContext`, see the MFC sample [VIEWEX](../../visual-cpp-samples.md).  
  
## Requirements  
 **Header:** afxext.h  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CFrameWnd::Create](../../mfc/reference/cframewnd-class.md#cframewnd__create)   
 [CFrameWnd::LoadFrame](../../mfc/reference/cframewnd-class.md#cframewnd__loadframe)   
 [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#cframewnd__oncreateclient)   
 [CSplitterWnd::Create](../../mfc/reference/csplitterwnd-class.md#csplitterwnd__create)   
 [CSplitterWnd::CreateView](../../mfc/reference/csplitterwnd-class.md#csplitterwnd__createview)   
 [CWnd::Create](../../mfc/reference/cwnd-class.md#cwnd__create)

