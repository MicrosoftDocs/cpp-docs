---
title: "CMFCDragFrameImpl Class"
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
ms.assetid: 500cd824-8188-43c2-8754-b7bb46b5648a
caps.latest.revision: 23
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
# CMFCDragFrameImpl Class
The `CMFCDragFrameImpl` class draws the drag rectangle that appears when the user drags a pane in the standard dock mode.  
  
## Syntax  
  
```  
class CMFCDragFrameImpl  
```  
  
## Remarks  
 An object of this class is embedded in each [CPane Class](../VS_visualcpp/CPane-Class.md) object. Thus, each pane that uses the `CanFloat` method displays a drag rectangle when the user drags it.  
  
 You can control the thickness of the drag rectangle by using [AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat](../VS_visualcpp/AFX_GLOBAL_DATA--m_nDragFrameThicknessFloat.md) and [AFX_GLOBAL_DATA::m_nDragFrameThicknessDock](../VS_visualcpp/AFX_GLOBAL_DATA--m_nDragFrameThicknessDock.md).  
  
## Inheritance Hierarchy  
 [CMFCDragFrameImpl](../VS_visualcpp/CMFCDragFrameImpl-Class.md)  
  
## Requirements  
 **Header:** afxdragframeimpl.h  
  
##  <a name="cmfcdragframeimpl__enddrawdragframe"></a>  CMFCDragFrameImpl::EndDrawDragFrame  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void EndDrawDragFrame(  
    BOOL bClearInternalRects = TRUE);  
```  
  
### Parameters  
 [in] `bClearInternalRects`  
  
### Remarks  
  
##  <a name="cmfcdragframeimpl__init"></a>  CMFCDragFrameImpl::Init  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void Init( CWnd* pDraggedWnd );  
```  
  
### Parameters  
 [in] `pDraggedWnd`  
  
### Remarks  
  
##  <a name="cmfcdragframeimpl__movedragframe"></a>  CMFCDragFrameImpl::MoveDragFrame  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void MoveDragFrame(  
    BOOL bForceMove = FALSE);  
```  
  
### Parameters  
 [in] `bForceMove`  
  
### Remarks  
  
##  <a name="cmfcdragframeimpl__placetabpredocking"></a>  CMFCDragFrameImpl::PlaceTabPreDocking  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void PlaceTabPreDocking(  
    CBaseTabbedPane* pTabbedBar,  
    BOOL bFirstTime );  
  
void PlaceTabPreDocking(  
    CWnd* pCBarToPlaceOn );  
```  
  
### Parameters  
 [in] `pTabbedBar`  
  [in] `bFirstTime`  
  [in] `pCBarToPlaceOn`  
  
### Remarks  
  
##  <a name="cmfcdragframeimpl__removetabpredocking"></a>  CMFCDragFrameImpl::RemoveTabPreDocking  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void RemoveTabPreDocking(  
    CDockablePane* pOldTargetBar = NULL);  
```  
  
### Parameters  
 [in] `pOldTargetBar`  
  
### Remarks  
  
##  <a name="cmfcdragframeimpl__resetstate"></a>  CMFCDragFrameImpl::ResetState  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void ResetState();  
```  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CPane Class](../VS_visualcpp/CPane-Class.md)   
 [AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat](../VS_visualcpp/AFX_GLOBAL_DATA--m_nDragFrameThicknessFloat.md)   
 [AFX_GLOBAL_DATA::m_nDragFrameThicknessDock](../VS_visualcpp/AFX_GLOBAL_DATA--m_nDragFrameThicknessDock.md)