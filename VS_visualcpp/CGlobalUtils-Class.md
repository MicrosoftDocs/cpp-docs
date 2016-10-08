---
title: "CGlobalUtils Class"
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
ms.assetid: 2c5bd1a6-f80c-4e79-a476-b4ceebabfb2f
caps.latest.revision: 13
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
# CGlobalUtils Class
This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 [CGlobalUtils](../VS_visualcpp/CGlobalUtils-Class.md)  
  
## Requirements  
 **Header:** afxglobalutils.h  
  
##  <a name="cglobalutils__adjustrecttoworkarea"></a>  CGlobalUtils::AdjustRectToWorkArea  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void CalcExpectedDockedRect(  
    CPaneContainerManager& barContainerManager,  
    CWnd* pWndTodock,  
    CPoint ptMouse,  
    CRect& rectResult,  
    BOOL& bDrawTab,  
    CDockablePane** ppTargetBar );  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL CanBeAttached( CWnd* pWnd ) const;  
```  
  
### Parameters  
 [in]  `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__canpanebeinfloatingmultipaneframewnd"></a>  CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL CanPaneBeInFloatingMultiPaneFrameWnd( CWnd* pWnd ) const;  
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__checkalignment"></a>  CGlobalUtils::CheckAlignment  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL CheckAlignment(  
    CPoint point,  
    CBasePane* pBar,  
    int nSensitivity,  
    const CDockingManager* pDockManager,  
    BOOL bOuterEdge,  
    DWORD& dwAlignment,  
    DWORD dwEnabledDockBars = CBRS_ALIGN_ANY,  
    LPCRECT lpRectBounds = NULL  
) const;  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL CyFromString(  
    CY& cy,  
    LPCTSTR psz );  
```  
  
### Parameters  
 [out] `cy`  
  [in] `psz`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__decimalfromstring"></a>  CGlobalUtils::DecimalFromString  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL DecimalFromString(  
    DECIMAL& decimal,  
    LPCTSTR psz );  
```  
  
### Parameters  
 [out]  `decimal`  
  [in] `psz`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__fliprect"></a>  CGlobalUtils::FlipRect  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void FlipRect(  
    CRect& rect,  
    int nDegrees );  
```  
  
### Parameters  
 [in, out]  `rect`  
  [in]  `nDegrees`  
  
### Remarks  
  
##  <a name="cglobalutils__forceadjustlayout"></a>  CGlobalUtils::ForceAdjustLayout  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CDockingManager* GetDockingManager( CWnd* pWnd );  
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__getoppositealignment"></a>  CGlobalUtils::GetOppositeAlignment  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
DWORD GetOppositeAlignment( DWORD dwAlign );  
```  
  
### Parameters  
 [in] `dwAlign`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__getpaneandalignfrompoint"></a>  CGlobalUtils::GetPaneAndAlignFromPoint  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL GetPaneAndAlignFromPoint(  
    CPaneContainerManager& barContainerManager,  
    CPoint pt,  
    CDockablePane** ppTargetControlBar,  
    DWORD& dwAlignment,  
    BOOL& bTabArea,  
    BOOL& bCaption );  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
HICON GetWndIcon( CWnd* pWnd );  
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__setnewparent"></a>  CGlobalUtils::SetNewParent  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL StringFromCy(  
    CString& str,  
    CY& cy );  
```  
  
### Parameters  
 [out] `str`  
  [in] `cy`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cglobalutils__stringfromdecimal"></a>  CGlobalUtils::StringFromDecimal  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL StringFromDecimal(  
    CString& str,  
    DECIMAL& decimal );  
```  
  
### Parameters  
 [out] `str`  
  [in] `decimal`  
  
### Return Value  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)