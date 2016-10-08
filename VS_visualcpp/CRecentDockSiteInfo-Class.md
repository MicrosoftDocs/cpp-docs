---
title: "CRecentDockSiteInfo Class"
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
ms.assetid: 2dd14f95-d5a2-4461-a7a5-2c6c36a3a165
caps.latest.revision: 22
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
# CRecentDockSiteInfo Class
The `CRecentDockSiteInfo` class is a helper class that stores recent state information for the [CPane Class](../VS_visualcpp/CPane-Class.md).  
  
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
|[CRecentDockSiteInfo::CleanUp](#crecentdocksiteinfo__cleanup)||  
|[CRecentDockSiteInfo::GetRecentDefaultPaneDivider](#crecentdocksiteinfo__getrecentdefaultpanedivider)||  
|[CRecentDockSiteInfo::GetRecentDockedPercent](#crecentdocksiteinfo__getrecentdockedpercent)||  
|[CRecentDockSiteInfo::GetRecentDockedRect](#crecentdocksiteinfo__getrecentdockedrect)||  
|[CRecentDockSiteInfo::GetRecentListOfPanes](#crecentdocksiteinfo__getrecentlistofpanes)||  
|[CRecentDockSiteInfo::GetRecentPaneContainer](#crecentdocksiteinfo__getrecentpanecontainer)||  
|[CRecentDockSiteInfo::GetRecentTabContainer](#crecentdocksiteinfo__getrecenttabcontainer)||  
|[CRecentDockSiteInfo::Init](#crecentdocksiteinfo__init)||  
|[CRecentDockSiteInfo::IsRecentLeftPane](#crecentdocksiteinfo__isrecentleftpane)||  
|[CRecentDockSiteInfo::operator =](#crecentdocksiteinfo__operator__eq)||  
|[CRecentDockSiteInfo::SaveListOfRecentPanes](#crecentdocksiteinfo__savelistofrecentpanes)||  
|[CRecentDockSiteInfo::SetInfo](#crecentdocksiteinfo__setinfo)||  
|[CRecentDockSiteInfo::StoreDockInfo](#crecentdocksiteinfo__storedockinfo)||  
  
## Remarks  
 The `CRecentDockSiteInfo` class is a data management class. It tracks the last state of a `CPane` as it transitions between being docked and floating. When a user double clicks a floating dockable pane, it becomes docked. Double clicking the docked pane returns it to its previous location, size, and state. Similarly, when the pane is re-docked it returns to its previous docking location. This data class is what makes that possible. Since the members of this class store state information for the docked pane, they should not be directly modified by your application.  
  
 A `CRecentDockSiteInfo` object is created every time that a pane is created. Each `CPane` object has a member variable, [CPane::m_recentDockInfo](../VS_visualcpp/CPane-Class.md#cpane__m_recentdockinfo), to store this information.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CRecentDockSiteInfo](../VS_visualcpp/CRecentDockSiteInfo-Class.md)  
  
## Requirements  
 **Header:** afxrecentDockSiteInfo.h  
  
##  <a name="crecentdocksiteinfo__cleanup"></a>  CRecentDockSiteInfo::CleanUp  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void CleanUp();  
```  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__crecentdocksiteinfo"></a>  CRecentDockSiteInfo::CRecentDockSiteInfo  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CRecentDockSiteInfo( CPane* pBar );  
```  
  
### Parameters  
 [in] `pBar`  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__getrecentdefaultpanedivider"></a>  CRecentDockSiteInfo::GetRecentDefaultPaneDivider  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CPaneDivider* GetRecentDefaultPaneDivider();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__getrecentdockedpercent"></a>  CRecentDockSiteInfo::GetRecentDockedPercent  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetRecentDockedPercent( BOOL bForSlider );  
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__getrecentdockedrect"></a>  CRecentDockSiteInfo::GetRecentDockedRect  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CRect& GetRecentDockedRect( BOOL bForSlider );  
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__getrecentlistofpanes"></a>  CRecentDockSiteInfo::GetRecentListOfPanes  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CList<HWND, HWND>& GetRecentListOfPanes(  
    BOOL bForSlider );  
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__getrecentpanecontainer"></a>  CRecentDockSiteInfo::GetRecentPaneContainer  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CPaneContainer* GetRecentPaneContainer( BOOL bForSlider );  
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__getrecenttabcontainer"></a>  CRecentDockSiteInfo::GetRecentTabContainer  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CPaneContainer* GetRecentTabContainer( BOOL bForSlider );  
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__init"></a>  CRecentDockSiteInfo::Init  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void Init();  
```  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__isrecentleftpane"></a>  CRecentDockSiteInfo::IsRecentLeftPane  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL IsRecentLeftPane( BOOL bForSlider );  
```  
  
### Parameters  
 [in] `bForSlider`  
  
### Return Value  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__operator__eq"></a>  CRecentDockSiteInfo::operator =  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CRecentDockSiteInfo& operator=( CRecentDockSiteInfo& src );  
```  
  
### Parameters  
 [in] `src`  
  
### Return Value  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__savelistofrecentpanes"></a>  CRecentDockSiteInfo::SaveListOfRecentPanes  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void SaveListOfRecentPanes( CList<HWND,  
    HWND>& lstOrg,  
    BOOL bForSlider );  
```  
  
### Parameters  
 [in] `CList<HWND`  
  [in] `lstOrg`  
  [in] `bForSlider`  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__setinfo"></a>  CRecentDockSiteInfo::SetInfo  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void SetInfo(  
    BOOL bForSlider,  
    CRecentDockSiteInfo& srcInfo );  
```  
  
### Parameters  
 [in] `bForSlider`  
  [in] `srcInfo`  
  
### Remarks  
  
##  <a name="crecentdocksiteinfo__storedockinfo"></a>  CRecentDockSiteInfo::StoreDockInfo  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
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
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CDockSite Class](../VS_visualcpp/CDockSite-Class.md)