---
title: "CMFCRibbonMainPanel Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonMainPanel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonMainPanel class"
ms.assetid: 1af78798-5e75-4365-9c81-a54aa5679602
caps.latest.revision: 23
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
# CMFCRibbonMainPanel Class
Implements a ribbon panel that displays when you click the [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md).  
  
## Syntax  
  
```  
class CMFCRibbonMainPanel : public CMFCRibbonPanel  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCRibbonMainPanel::CMFCRibbonMainPanel`|Default constructor.|  
|`CMFCRibbonMainPanel::~CMFCRibbonMainPanel`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonMainPanel::Add](#cmfcribbonmainpanel__add)|Adds a ribbon element to the left pane of the application button panel. (Overrides [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#cmfcribbonpanel__add).)|  
|[CMFCRibbonMainPanel::AddRecentFilesList](#cmfcribbonmainpanel__addrecentfileslist)|Adds a text string to the recent files list menu.|  
|[CMFCRibbonMainPanel::AddToBottom](#cmfcribbonmainpanel__addtobottom)|Adds a ribbon element to the bottom pane of the ribbon application panel.|  
|[CMFCRibbonMainPanel::AddToRight](#cmfcribbonmainpanel__addtoright)|Adds a ribbon element to the right pane of the application button panel.|  
|`CMFCRibbonMainPanel::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMFCRibbonMainPanel::GetCommandsFrame](#cmfcribbonmainpanel__getcommandsframe)|Returns a rectangle that represents the area of the ribbon main panel.|  
|`CMFCRibbonMainPanel::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
  
## Remarks  
 The framework displays the `CMFCRibbonMainPanel` when you open the application panel. It contains three panes:  
  
-   The left pane contains commands associated with files, such as **Open**, **Save**, **Print**, and **Close**. To add a command to this pane, call [CMFCRibbonMainPanel::Add](#cmfcribbonmainpanel__add).  
  
-   The right pane contains options that modify the command that you click in the left pane. For example, if you click **Save As** from the left pane, the right pane can display available file types. To add an item to this pane, call [CMFCRibbonMainPanel::AddToRight](#cmfcribbonmainpanel__addtoright).  
  
-   The bottom pane contains buttons that allow you to change the application's settings and to exit the program. To add an item to this pane, call [CMFCRibbonMainPanel::AddToBottom](#cmfcribbonmainpanel__addtobottom).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)  
  
 [CMFCRibbonMainPanel](../../mfc/reference/cmfcribbonmainpanel-class.md)  
  
## Requirements  
 **Header:** afxRibbonMainPanel.h  
  
##  <a name="cmfcribbonmainpanel__add"></a>  CMFCRibbonMainPanel::Add  
 Adds a ribbon element to the left pane of the application button panel.  
  
```  
virtual void Add(CMFCRibbonBaseElement* pElem);
```  
  
### Parameters  
 [in] [out] `pElem`  
 A pointer to the ribbon element to add to the main panel.  
  
### Remarks  
 Adds a ribbon element to the panel. Elements added using this method will be located in the left column of the main panel.  
  
##  <a name="cmfcribbonmainpanel__addrecentfileslist"></a>  CMFCRibbonMainPanel::AddRecentFilesList  
 Adds a text string to the recent files list menu.  
  
```  
void AddRecentFilesList(
    LPCTSTR lpszLabel,  
    int nWidth = 300);
```  
  
### Parameters  
 `lpszLabel`  
 Specifies the string to add to the recent files list.  
  
 `nWidth`  
 Specifies the width, in pixels, of the recent files list panel.  
  
### Remarks  
  
##  <a name="cmfcribbonmainpanel__addtobottom"></a>  CMFCRibbonMainPanel::AddToBottom  
 Adds a ribbon element to the bottom pane of the ribbon application panel.  
  
```  
void AddToBottom(CMFCRibbonMainPanelButton* pElem);
```  
  
### Parameters  
 [in] [out] `pElem`  
 A pointer to the ribbon element to add to the bottom of the main panel.  
  
### Remarks  
  
##  <a name="cmfcribbonmainpanel__addtoright"></a>  CMFCRibbonMainPanel::AddToRight  
 Adds a ribbon element to the right pane of the application button panel.  
  
```  
void AddToRight(
    CMFCRibbonBaseElement* pElem,  
    int nWidth = 300);
```  
  
### Parameters  
 `pElem`  
 A pointer to a ribbon element to be added to the right side of the main panel.  
  
 `nWidth`  
 Specifies the width, in pixels, of the right panel.  
  
### Remarks  
 Use this function to add a ribbon element to the right panel. The right panel typically displays the recent files list, but you can add any other ribbon element here.  
  
##  <a name="cmfcribbonmainpanel__getcommandsframe"></a>  CMFCRibbonMainPanel::GetCommandsFrame  
 Returns a rectangle that represents the area of the ribbon main panel.  
  
```  
CRect GetCommandsFrame() const;

 
```  
  
### Return Value  
 A rectangle that represents the area of the ribbon main panel.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonPanel Class](../../mfc/reference/cmfcribbonpanel-class.md)
