---
title: "CGlobalUtils Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CGlobalUtils"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CGlobalUtils class"
ms.assetid: 2c5bd1a6-f80c-4e79-a476-b4ceebabfb2f
caps.latest.revision: 16
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
# CGlobalUtils Class
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
## Syntax  
  
```  
class CGlobalUtils  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CGlobalUtils::AdjustRectToWorkArea](#cglobalutils__adjustrecttoworkarea)||  
|[CGlobalUtils::CalcExpectedDockedRect](#cglobalutils__calcexpecteddockedrect)||  
|[CGlobalUtils::CanBeAttached](#cglobalutils__canbeattached)||  
|[CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd](#cglobalutils__canpanebeinfloatingmultipaneframewnd)||  
|[CGlobalUtils::CheckAlignment](#cglobalutils__checkalignment)||  
|[CGlobalUtils::CyFromString](#cglobalutils__cyfromstring)||  
|[CGlobalUtils::DecimalFromString](#cglobalutils__decimalfromstring)||  
|[CGlobalUtils::FlipRect](#cglobalutils__fliprect)||  
|[CGlobalUtils::ForceAdjustLayout](#cglobalutils__forceadjustlayout)||  
|[CGlobalUtils::GetDockingManager](#cglobalutils__getdockingmanager)||  
|[CGlobalUtils::GetOppositeAlignment](#cglobalutils__getoppositealignment)||  
|[CGlobalUtils::GetPaneAndAlignFromPoint](#cglobalutils__getpaneandalignfrompoint)||  
|[CGlobalUtils::GetWndIcon](#cglobalutils__getwndicon)||  
|[CGlobalUtils::SetNewParent](#cglobalutils__setnewparent)||  
|[CGlobalUtils::StringFromCy](#cglobalutils__stringfromcy)||  
|[CGlobalUtils::StringFromDecimal](#cglobalutils__stringfromdecimal)||  
  
## Remarks  
  
## Inheritance Hierarchy  
 [CGlobalUtils](../../mfc/reference/cglobalutils-class.md)  
  
## Requirements  
 **Header:** afxglobalutils.h  
  
##  <a name="cglobalutils__adjustrecttoworkarea"></a>  CGlobalUtils::AdjustRectToWorkArea  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AdjustRectToworkArea(
    CRect& rect,  
    CRect* pRectDelta = NULL);
```  
  
### Parameters  
 [in, out] `rect`  
 [in] `pRectDelta`  
  
### Remarks  
  
##  <a name="cglobalutils__calcexpecteddockedrect"></a>  CGlobalUtils::CalcExpectedDockedRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CalcExpectedDockedRect(
    CPaneContainerManager& barContainerManager,  
    CWnd* pWndTodock,  
    CPoint ptMouse,  
    CRect& rectResult,  
    BOOL& bDrawTab,  
    CDockablePane** ppTargetBar);
```  
  
### Parameters  
 [in] `barContainerManager`  
 [in] `pWndTodock`  
 [in] `ptMouse`  
 [out] `rectResult`  
 [out] `bDrawTab`  
 [out] `ppTargetBar`  
  
### Remarks  
  
##  <a name="cglobalutils__canbeattached"></a>  CGlobalUtils::CanBeAttached  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CanBeAttached(CWnd* pWnd) const;

 
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__canpanebeinfloatingmultipaneframewnd"></a>  CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CanPaneBeInFloatingMultiPaneFrameWnd(CWnd* pWnd) const;

 
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__checkalignment"></a>  CGlobalUtils::CheckAlignment  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CheckAlignment(
    CPoint point,  
    CBasePane* pBar,  
    int nSensitivity,  
    const CDockingManager* pDockManager,  
    BOOL bOuterEdge,  
    DWORD& dwAlignment,  
    DWORD dwEnabledDockBars = CBRS_ALIGN_ANY,  
    LPCRECT lpRectBounds = NULL) const;

 
```  
  
### Parameters  
 [in] `point`  
 [in] `pBar`  
 [in] `nSensitivity`  
 [in] `pDockManager`  
 [in] `bOuterEdge`  
 [out] `dwAlignment`  
 [in] `dwEnabledDockBars`  
 [in] `lpRectBounds`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__cyfromstring"></a>  CGlobalUtils::CyFromString  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL CyFromString(
    CY& cy,  
    LPCTSTR psz);
```  
  
### Parameters  
 [out] `cy`  
 [in] `psz`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__decimalfromstring"></a>  CGlobalUtils::DecimalFromString  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL DecimalFromString(
    DECIMAL& decimal,  
    LPCTSTR psz);
```  
  
### Parameters  
 [out] `decimal`  
 [in] `psz`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__fliprect"></a>  CGlobalUtils::FlipRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void FlipRect(
    CRect& rect,  
    int nDegrees);
```  
  
### Parameters  
 [in, out] `rect`  
 [in] `nDegrees`  
  
### Remarks  
  
##  <a name="cglobalutils__forceadjustlayout"></a>  CGlobalUtils::ForceAdjustLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ForceAdjustLayout(
    CDockingManager* pDockManager,  
    BOOL bForce = FALSE,  
    BOOL bForceInvisible = FALSE);
```  
  
### Parameters  
 [in, out] `pDockManager`  
 [in] `bForce`  
 [in] `bForceInvisible`  
  
### Remarks  
  
##  <a name="cglobalutils__getdockingmanager"></a>  CGlobalUtils::GetDockingManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockingManager* GetDockingManager(CWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__getoppositealignment"></a>  CGlobalUtils::GetOppositeAlignment  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
DWORD GetOppositeAlignment(DWORD dwAlign);
```  
  
### Parameters  
 [in] `dwAlign`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__getpaneandalignfrompoint"></a>  CGlobalUtils::GetPaneAndAlignFromPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL GetPaneAndAlignFromPoint(
    CPaneContainerManager& barContainerManager,  
    CPoint pt,  
    CDockablePane** ppTargetControlBar,  
    DWORD& dwAlignment,  
    BOOL& bTabArea,  
    BOOL& bCaption);
```  
  
### Parameters  
 [in] `barContainerManager`  
 [in] `pt`  
 [out] `ppTargetControlBar`  
 [out] `dwAlignment`  
 [out] `bTabArea`  
 [out] `bCaption`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__getwndicon"></a>  CGlobalUtils::GetWndIcon  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
HICON GetWndIcon(CWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__setnewparent"></a>  CGlobalUtils::SetNewParent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetNewParent(
    CObList& lstControlBars,  
    CWnd* pNewParent,  
    BOOL bCheckVisibility = TRUE);
```  
  
### Parameters  
 [in] `lstControlBars`  
 [in] `pNewParent`  
 [in] `bCheckVisibility`  
  
### Remarks  
  
##  <a name="cglobalutils__stringfromcy"></a>  CGlobalUtils::StringFromCy  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL StringFromCy(
    CString& str,  
    CY& cy);
```  
  
### Parameters  
 [out] `str`  
 [in] `cy`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__stringfromdecimal"></a>  CGlobalUtils::StringFromDecimal  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL StringFromDecimal(
    CString& str,  
    DECIMAL& decimal);
```  
  
### Parameters  
 [out] `str`  
 [in] `decimal`  
  
### Return Value  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
