---
title: "CRecentDockSiteInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ['CRecentDockSiteInfo', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::CleanUp', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDefaultPaneDivider', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDockedPercent', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentDockedRect', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentListOfPanes', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentPaneContainer', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::GetRecentTabContainer', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::Init', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::IsRecentLeftPane', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::SaveListOfRecentPanes', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::SetInfo', 'AFXRECENTDOCKSITEINFO/CRecentDockSiteInfo::StoreDockInfo']
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRecentDockSiteInfo class"
ms.assetid: 2dd14f95-d5a2-4461-a7a5-2c6c36a3a165
caps.latest.revision: 26
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
# CRecentDockSiteInfo Class
The `CRecentDockSiteInfo` class is a helper class that stores recent state information for the [CPane Class](../../mfc/reference/cpane-class.md).  
  
## Syntax  
  
```  
class CRecentDockSiteInfo : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CRecentDockSiteInfo::CRecentDockSiteInfo`|Default constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRecentDockSiteInfo::CleanUp](#cleanup)||  
|[CRecentDockSiteInfo::GetRecentDefaultPaneDivider](#getrecentdefaultpanedivider)||  
|[CRecentDockSiteInfo::GetRecentDockedPercent](#getrecentdockedpercent)||  
|[CRecentDockSiteInfo::GetRecentDockedRect](#getrecentdockedrect)||  
|[CRecentDockSiteInfo::GetRecentListOfPanes](#getrecentlistofpanes)||  
|[CRecentDockSiteInfo::GetRecentPaneContainer](#getrecentpanecontainer)||  
|[CRecentDockSiteInfo::GetRecentTabContainer](#getrecenttabcontainer)||  
|[CRecentDockSiteInfo::Init](#init)||  
|[CRecentDockSiteInfo::IsRecentLeftPane](#isrecentleftpane)||  
|[CRecentDockSiteInfo::operator =](#operator_eq)||  
|[CRecentDockSiteInfo::SaveListOfRecentPanes](#savelistofrecentpanes)||  
|[CRecentDockSiteInfo::SetInfo](#setinfo)||  
|[CRecentDockSiteInfo::StoreDockInfo](#storedockinfo)||  
  
## Remarks  
 The `CRecentDockSiteInfo` class is a data management class. It tracks the last state of a `CPane` as it transitions between being docked and floating. When a user double clicks a floating dockable pane, it becomes docked. Double clicking the docked pane returns it to its previous location, size, and state. Similarly, when the pane is re-docked it returns to its previous docking location. This data class is what makes that possible. Since the members of this class store state information for the docked pane, they should not be directly modified by your application.  
  
 A `CRecentDockSiteInfo` object is created every time that a pane is created. Each `CPane` object has a member variable, [CPane::m_recentDockInfo](../../mfc/reference/cpane-class.md#m_recentdockinfo), to store this information.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRecentDockSiteInfo](../../mfc/reference/crecentdocksiteinfo-class.md)  
  
## Requirements  
 **Header:** afxrecentDockSiteInfo.h  
  
##  <a name="cleanup"></a>  CRecentDockSiteInfo::CleanUp  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CleanUp();
```  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo"></a>  CRecentDockSiteInfo::CRecentDockSiteInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRecentDockSiteInfo(CPane* pBar);
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="getrecentdefaultpanedivider"></a>  CRecentDockSiteInfo::GetRecentDefaultPaneDivider  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneDivider* GetRecentDefaultPaneDivider();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrecentdockedpercent"></a>  CRecentDockSiteInfo::GetRecentDockedPercent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetRecentDockedPercent(BOOL bForSlider);
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrecentdockedrect"></a>  CRecentDockSiteInfo::GetRecentDockedRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect& GetRecentDockedRect(BOOL bForSlider);
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrecentlistofpanes"></a>  CRecentDockSiteInfo::GetRecentListOfPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CList<HWND, HWND>& GetRecentListOfPanes(BOOL bForSlider);
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrecentpanecontainer"></a>  CRecentDockSiteInfo::GetRecentPaneContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneContainer* GetRecentPaneContainer(BOOL bForSlider);
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="getrecenttabcontainer"></a>  CRecentDockSiteInfo::GetRecentTabContainer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CPaneContainer* GetRecentTabContainer(BOOL bForSlider);
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="init"></a>  CRecentDockSiteInfo::Init  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void Init();
```  
  
### Remarks  
  
##  <a name="isrecentleftpane"></a>  CRecentDockSiteInfo::IsRecentLeftPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsRecentLeftPane(BOOL bForSlider);
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="operator_eq"></a>  CRecentDockSiteInfo::operator =  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRecentDockSiteInfo& operator=(CRecentDockSiteInfo& src);
```  
  
### Parameters  
 [in] `src`  
  
### Return Value  
  
### Remarks  
  
##  <a name="savelistofrecentpanes"></a>  CRecentDockSiteInfo::SaveListOfRecentPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SaveListOfRecentPanes(CList<HWND,  
    HWND>& lstOrg,  
    BOOL bForSlider);
```  
  
### Parameters  
 [in] `CList<HWND`  
 [in] `lstOrg`  
 [in] `bForSlider`  
  
### Remarks  
  
##  <a name="setinfo"></a>  CRecentDockSiteInfo::SetInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetInfo(
    BOOL bForSlider,  
    CRecentDockSiteInfo& srcInfo);
```  
  
### Parameters  
 [in] `bForSlider`  
 [in] `srcInfo`  
  
### Remarks  
  
##  <a name="storedockinfo"></a>  CRecentDockSiteInfo::StoreDockInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreDockInfo(
    CPaneContainer* pRecentContainer,  
    CDockablePane* pTabbedBar = NULL);
```  
  
### Parameters  
 [in] `pRecentContainer`  
 [in] `pTabbedBar`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CDockSite Class](../../mfc/reference/cdocksite-class.md)
