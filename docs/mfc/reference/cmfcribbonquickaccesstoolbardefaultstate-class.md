---
title: "CMFCRibbonQuickAccessToolBarDefaultState Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonQuickAccessToolBarDefaultState"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonQuickAccessToolBarDefaultState class"
ms.assetid: eca99200-b87b-47ba-b2e8-2f3f2444b176
caps.latest.revision: 28
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
# CMFCRibbonQuickAccessToolBarDefaultState Class
A helper class that manages default state for the Quick Access Toolbar that is positioned on the ribbon bar ( [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)).  
  
## Syntax  
  
```  
class CMFCRibbonQuickAccessToolBarDefaultState  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState](#cmfcribbonquickaccesstoolbardefaultstate__cmfcribbonquickaccesstoolbardefaultstate)|Constructs a `CMFCRibbonQuickAccessToolbarDefaultState` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#cmfcribbonquickaccesstoolbardefaultstate__addcommand)|Adds a command to the default state for the Quick Access Toolbar. This does not change the toolbar itself.|  
|[CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom](#cmfcribbonquickaccesstoolbardefaultstate__copyfrom)|Copies the properties of one Quick Access Toolbar to another.|  
|[CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll](#cmfcribbonquickaccesstoolbardefaultstate__removeall)|Removes all commands from the Quick Access Toolbar. This does not change the toolbar itself.|  
  
## Remarks  
 After you create the Quick Access Toolbar in your application, we recommend that you set its default state by calling [CMFCRibbonBar::SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#cmfcribbonbar__setquickaccessdefaultstate). This default state is restored when a user clicks the **Reset** button on the **Customize** page of your application's **Options** dialog box.  
  
## Inheritance Hierarchy  
 [CMFCRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md)  
  
## Example  
 The following example demonstrates how to construct an object of the `CMFCRibbonQuickAccessToolbarDefaultState` class and how to add a command to the default state for the Quick Access Toolbar.  
  
 [!code-cpp[NVC_MFC_RibbonApp#21](../../mfc/reference/codesnippet/cpp/cmfcribbonquickaccesstoolbardefaultstate-class_1.cpp)]  
  
## Requirements  
 **Header:** afxribbonquickaccesstoolbar.h  
  
##  <a name="cmfcribbonquickaccesstoolbardefaultstate__addcommand"></a>  CMFCRibbonQuickAccessToolBarDefaultState::AddCommand  
 Adds a command to the default state for the Quick Access Toolbar.  
  
```  
void AddCommand(
    UINT uiCmd,  
    BOOL bIsVisible=TRUE);
```  
  
### Parameters  
 `[in] uiCmd`  
 Specifies command ID.  
  
 `[in] bIsVisible`  
 Sets the visibility of the command when the Quick Access Toolbar is in the default state.  
  
### Remarks  
 Adding a command to the CMFCRibbonQuickAccessToolBarDefaultState accomplishes three results. First, each added command is listed on the dropdown on the right side of the Quick Access Toolbar. In this manner, a user can easily add or remove that command from the Quick Access Toolbar. Second, the Quick Access Toolbar is reset to show only those commands that are listed as visible in the default state when the user clicks the **Reset** button in the **Customize** dialog box. Third, if you have not called [CMFCRibbonBar::SetQuickAccessCommands](../../mfc/reference/cmfcribbonbar-class.md#cmfcribbonbar__setquickaccesscommands), the Quick Access Toolbar uses the visible commands from this list as the default visible commands the first time a user runs your application. After you have added all the commands that you want, call [CMFCRibbonBar::SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#cmfcribbonbar__setquickaccessdefaultstate) to set this instance as the default state for the Quick Access Toolbar of that Ribbon Bar.  
  
##  <a name="cmfcribbonquickaccesstoolbardefaultstate__copyfrom"></a>  CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom  
 Copies the properties of one Quick Access Toolbar to another.  
  
```  
void CopyFrom(const CMFCRibbonQuickAccessToolBarDefaultState& src);
```  
  
### Parameters  
 [in] `src`  
 A reference to the source `CMFCRibbonQuickAccessToolBarDefaultState` object to copy from.  
  
### Remarks  
 This method copies each command from the source `CMFCRibbonQuickAccessToolBarDefaultState` object to this object by using the [CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#cmfcribbonquickaccesstoolbardefaultstate__addcommand) method.  
  
##  <a name="cmfcribbonquickaccesstoolbardefaultstate__cmfcribbonquickaccesstoolbardefaultstate"></a>  CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState  
 Constructs the Quick Access Toolbar default state object.  
  
```  
CMFCRibbonQuickAccessToolBarDefaultState();
```  
  
### Remarks  
 By default, the list of commands that the new instance of [CMFRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md) contains is empty.  
  
##  <a name="cmfcribbonquickaccesstoolbardefaultstate__removeall"></a>  CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll  
 Clears the list of default commands in the Quick Access Toolbar.  
  
```  
void RemoveAll();
```  
  
### Remarks  
 This function removes from this instance all the commands that the previous calls to [CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#cmfcribbonquickaccesstoolbardefaultstate__addcommand) added.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)
