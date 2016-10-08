---
title: "COleResizeBar Class"
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
ms.assetid: 56a708d9-28c5-4eb0-9404-77b688d91c63
caps.latest.revision: 19
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
# COleResizeBar Class
A type of control bar that supports resizing of in-place OLE items.  
  
## Syntax  
  
```  
class COleResizeBar : public CControlBar  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleResizeBar::COleResizeBar](#coleresizebar__coleresizebar)|Constructs a `COleResizeBar` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleResizeBar::Create](#coleresizebar__create)|Creates and initializes a Windows child window and associates it to the `COleResizeBar` object.|  
  
## Remarks  
 `COleResizeBar` objects appear as a [CRectTracker](../VS_visualcpp/CRectTracker-Class.md) with a hatched border and outer resize handles.  
  
 `COleResizeBar` objects are usually embedded members of frame-window objects derived from the [COleIPFrameWnd](../VS_visualcpp/COleIPFrameWnd-Class.md) class.  
  
 For more information, see the article [Activation](../VS_visualcpp/Activation--C---.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CControlBar](../VS_visualcpp/CControlBar-Class.md)  
  
 `COleResizeBar`  
  
## Requirements  
 **Header:** afxole.h  
  
##  <a name="coleresizebar__coleresizebar"></a>  COleResizeBar::COleResizeBar  
 Constructs a `COleResizeBar` object.  
  
```  
COleResizeBar();  
```  
  
### Remarks  
 Call **Create** to create the resize bar object.  
  
##  <a name="coleresizebar__create"></a>  COleResizeBar::Create  
 Creates a child window and associates it with the `COleResizeBar` object.  
  
```  
virtual BOOL Create(  
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE,  
    UINT nID = AFX_IDW_RESIZE_BAR );  
```  
  
### Parameters  
 `pParentWnd`  
 Pointer to the parent window of the resize bar.  
  
 `dwStyle`  
 Specifies the [window style](../VS_visualcpp/Window-Styles.md) attributes.  
  
 `nID`  
 The resize bar's child window ID.  
  
### Return Value  
 Nonzero if the resize bar was created; otherwise 0.  
  
## See Also  
 [MFC Sample SUPERPAD](../VS_visualcpp/Visual-C---Samples.md)   
 [CControlBar Class](../VS_visualcpp/CControlBar-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [COleServerDoc Class](../VS_visualcpp/COleServerDoc-Class.md)