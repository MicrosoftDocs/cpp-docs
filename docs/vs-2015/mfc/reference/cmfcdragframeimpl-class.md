---
title: "CMFCDragFrameImpl Class | Microsoft Docs"
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
  - "CMFCDragFrameImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDragFrameImpl class"
ms.assetid: 500cd824-8188-43c2-8754-b7bb46b5648a
caps.latest.revision: 31
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCDragFrameImpl Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CMFCDragFrameImpl Class](https://docs.microsoft.com/cpp/mfc/reference/cmfcdragframeimpl-class).  
  
  
The `CMFCDragFrameImpl` class draws the drag rectangle that appears when the user drags a pane in the standard dock mode.  
  
## Syntax  
  
```  
class CMFCDragFrameImpl  
```  
  
## Remarks  
 An object of this class is embedded in each [CPane Class](../../mfc/reference/cpane-class.md) object. Thus, each pane that uses the `CanFloat` method displays a drag rectangle when the user drags it.  
  
 You can control the thickness of the drag rectangle by using [AFX_GLOBAL_DATA::m_nDragFrameThicknessFloat]--brokenlink--(../Topic/AFX_GLOBAL_DATA%20Class.md#afx_global_data__m_ndragframethicknessfloat) and [AFX_GLOBAL_DATA::m_nDragFrameThicknessDock]--brokenlink--(../Topic/AFX_GLOBAL_DATA%20Class.md#afx_global_data__m_ndragframethicknessdock).  
  
## Inheritance Hierarchy  
 [CMFCDragFrameImpl](../../mfc/reference/cmfcdragframeimpl-class.md)  
  
## Requirements  
 **Header:** afxdragframeimpl.h  
  
##  <a name="cmfcdragframeimpl__enddrawdragframe"></a>  CMFCDragFrameImpl::EndDrawDragFrame  
 [!INCLUDE[cpp_fp_under_construction](../../includes/cpp-fp-under-construction-md.md)]  
  
```  
void EndDrawDragFrame(BOOL bClearInternalRects = TRUE);
```  
  
### Parameters  
 [in] `bClearInternalRects`  
  
### Remarks  
  
##  <a name="cmfcdragframeimpl__init"></a>  CMFCDragFrameImpl::Init  
 [!INCLUDE[cpp_fp_under_construction](../../includes/cpp-fp-under-construction-md.md)]  
  
```  
void Init(CWnd* pDraggedWnd);
```  
  
### Parameters  
 [in] `pDraggedWnd`  
  
### Remarks  
  
##  <a name="cmfcdragframeimpl__movedragframe"></a>  CMFCDragFrameImpl::MoveDragFrame  
 [!INCLUDE[cpp_fp_under_construction](../../includes/cpp-fp-under-construction-md.md)]  
  
```  
void MoveDragFrame(BOOL bForceMove = FALSE);
```  
  
### Parameters  
 [in] `bForceMove`  
  
### Remarks  
  
##  <a name="cmfcdragframeimpl__placetabpredocking"></a>  CMFCDragFrameImpl::PlaceTabPreDocking  
 [!INCLUDE[cpp_fp_under_construction](../../includes/cpp-fp-under-construction-md.md)]  
  
```  
void PlaceTabPreDocking(
    CBaseTabbedPane* pTabbedBar,  
    BOOL bFirstTime);  
  
void PlaceTabPreDocking(CWnd* pCBarToPlaceOn);
```  
  
### Parameters  
 [in] `pTabbedBar`  
 [in] `bFirstTime`  
 [in] `pCBarToPlaceOn`  
  
### Remarks  
  
##  <a name="cmfcdragframeimpl__removetabpredocking"></a>  CMFCDragFrameImpl::RemoveTabPreDocking  
 [!INCLUDE[cpp_fp_under_construction](../../includes/cpp-fp-under-construction-md.md)]  
  
```  
void RemoveTabPreDocking(CDockablePane* pOldTargetBar = NULL);
```  
  
### Parameters  
 [in] `pOldTargetBar`  
  
### Remarks  
  
##  <a name="cmfcdragframeimpl__resetstate"></a>  CMFCDragFrameImpl::ResetState  
 [!INCLUDE[cpp_fp_under_construction](../../includes/cpp-fp-under-construction-md.md)]  
  
```  
void ResetState();
```  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)







