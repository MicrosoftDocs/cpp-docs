---
title: "CMFCTasksPaneTaskGroup Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCTasksPaneTaskGroup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCTasksPaneTaskGroup class"
ms.assetid: 2111640b-a46e-4b27-b033-29e88632b86a
caps.latest.revision: 33
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
# CMFCTasksPaneTaskGroup Class
The `CMFCTasksPaneTaskGroup` class is a helper class used by the [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md) control. Objects of type `CMFCTasksPaneTaskGroup` represent a *task group*. The task group is a list of items that the framework displays in a separate box that has a collapse button. The box can have an optional caption (group name). If a group is collapsed, the list of tasks is not visible.  
  
## Syntax  
  
```  
class CMFCTasksPaneTaskGroup : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup](#cmfctaskspanetaskgroup__cmfctaskspanetaskgroup)|Constructs a `CMFCTasksPaneTaskGroup` object.|  
|`CMFCTasksPaneTaskGroup::~CMFCTasksPaneTaskGroup`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCTasksPaneTaskGroup::SetACCData](#cmfctaskspanetaskgroup__setaccdata)|Determines the accessibility data for the current task group.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCTasksPaneTaskGroup::m_bIsBottom](#cmfctaskspanetaskgroup__m_bisbottom)|Determines whether the task group is aligned to the bottom of the task pane control.|  
|[CMFCTasksPaneTaskGroup::m_bIsCollapsed](#cmfctaskspanetaskgroup__m_biscollapsed)|Determines whether the task group is collapsed.|  
|[CMFCTasksPaneTaskGroup::m_bIsSpecial](#cmfctaskspanetaskgroup__m_bisspecial)|Determines whether the task group is *special.* The framework displays special captions in a different color.|  
|[CMFCTasksPaneTaskGroup::m_lstTasks](#cmfctaskspanetaskgroup__m_lsttasks)|Contains the internal list of tasks.|  
|[CMFCTasksPaneTaskGroup::m_rect](#cmfctaskspanetaskgroup__m_rect)|Specifies the bounding rectangle of the group caption.|  
|[CMFCTasksPaneTaskGroup::m_rectGroup](#cmfctaskspanetaskgroup__m_rectgroup)|Specifies the bounding rectangle of the group.|  
|[CMFCTasksPaneTaskGroup::m_strName](#cmfctaskspanetaskgroup__m_strname)|Specifies the name of the group.|  
  
## Remarks  
 The following illustration shows an expanded task group:  
  
 ![Task group, expanded](../../mfc/reference/media/nexttaskgrpexpand.png "nexttaskgrpexpand")  
  
 The following illustration shows a collapsed task group:  
  
 ![Collapsed task group](../../mfc/reference/media/nexttaskgrpcollapse.png "nexttaskgrpcollapse")  
  
 The following illustration shows a task group without a caption:  
  
 ![Task group without a caption](../../mfc/reference/media/nexttaskgrpnocapt.png "nexttaskgrpnocapt")  
  
 The following illustration shows two task groups. The first task group is marked as special by setting the `m_bIsSpecial` flag to `TRUE`, while the second task group is not special. Note how the caption for the first task group is darker than the second task group:  
  
 ![Special task group](../../mfc/reference/media/nexttaskgrpspecial.png "nexttaskgrpspecial")  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md)  
  
## Requirements  
 **Header:** afxTasksPane.h  
  
##  <a name="cmfctaskspanetaskgroup__cmfctaskspanetaskgroup"></a>  CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup  
 Constructs a `CMFCTasksPaneTaskGroup` object.  
  
```  
CMFCTasksPaneTaskGroup(
    LPCTSTR lpszName,  
    BOOL bIsBottom,  
    BOOL bIsSpecial=FALSE,  
    BOOL bIsCollapsed=FALSE,  
    CMFCTasksPanePropertyPage* pPage=NULL,  
    HICON hIcon=NULL);
```  
  
### Parameters  
 `lpszName`  
 Specifies the name of the group in the group caption.  
  
 `bIsBottom`  
 Specifies whether the group is aligned to the bottom of the task pane control.  
  
 `bIsSpecial`  
 Specifies whether the group is designated as *special* and thus, whether the group caption is filled with a different color.  
  
 `bIsCollapsed`  
 Specifies whether the group is collapsed.  
  
 `pPage`  
 Specifies the property page that this task group belongs to.  
  
 `hIcon`  
 Specifies the icon that displays in the group caption.  
  
### Remarks  
  
##  <a name="cmfctaskspanetaskgroup__m_bisbottom"></a>  CMFCTasksPaneTaskGroup::m_bIsBottom  
 Determines whether the task group is aligned to the bottom of the task pane control.  
  
```  
BOOL m_bIsBottom;  
```  
  
### Remarks  
 Only one group can be aligned to the bottom of the task pane control. This task group must be added last. For more information, see [CMFCTasksPane::AddGroup](../../mfc/reference/cmfctaskspane-class.md#cmfctaskspane__addgroup).  
  
##  <a name="cmfctaskspanetaskgroup__m_biscollapsed"></a>  CMFCTasksPaneTaskGroup::m_bIsCollapsed  
 Determines whether the task group is collapsed.  
  
```  
BOOL m_bIsCollapsed;  
```  
  
### Remarks  
 You can enable or disable the ability to collapse groups on the task pane by calling [CMFCTasksPane::EnableGroupCollapse](../../mfc/reference/cmfctaskspane-class.md#cmfctaskspane__enablegroupcollapse).  
  
##  <a name="cmfctaskspanetaskgroup__m_bisspecial"></a>  CMFCTasksPaneTaskGroup::m_bIsSpecial  
 Determines whether the task group is *special* and whether the caption for a special task group should be identified by a different color.  
  
```  
BOOL m_bIsSpecial;  
```  
  
### Remarks  
 If your application is using the Windows XP visual theme and `m_bIsSpecial` is `FALSE`, the framework calls `DrawThemeBackground` with the `EBP_NORMALGROUPBACKGROUND` flag. If `m_bIsSpecial` is `TRUE`, the framework calls `DrawThemeBackground` with the `EBP_SPECIALGROUPBACKGROUND` flag.  
  
##  <a name="cmfctaskspanetaskgroup__m_lsttasks"></a>  CMFCTasksPaneTaskGroup::m_lstTasks  
 Contains the internal list of tasks.  
  
```  
CObList m_lstTasks;  
```  
  
### Remarks  
 To fill this list, call [CMFCTasksPane::AddTask](../../mfc/reference/cmfctaskspane-class.md#cmfctaskspane__addtask).  
  
##  <a name="cmfctaskspanetaskgroup__m_rect"></a>  CMFCTasksPaneTaskGroup::m_rect  
 Specifies the bounding rectangle of the group caption.  
  
```  
CRect m_rect;  
```  
  
### Remarks  
 This value is automatically calculated by the framework.  
  
##  <a name="cmfctaskspanetaskgroup__m_rectgroup"></a>  CMFCTasksPaneTaskGroup::m_rectGroup  
 Specifies the bounding rectangle of the group.  
  
```  
CRect m_rectGroup;  
```  
  
### Remarks  
 This value is calculated automatically by the framework.  
  
##  <a name="cmfctaskspanetaskgroup__m_strname"></a>  CMFCTasksPaneTaskGroup::m_strName  
 Specifies the name of the group.  
  
```  
CString m_strName;  
```  
  
### Remarks  
 If this value is empty, the group caption is not displayed and the group cannot be collapsed.  
  
##  <a name="cmfctaskspanetaskgroup__setaccdata"></a>  CMFCTasksPaneTaskGroup::SetACCData  
 Determines the accessibility data for the current task group.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### Parameters  
 [in] `pParent`  
 Represents the parent window of the current task group.  
  
 [out] `data`  
 An object of type `CAccessibilityData` that is populated with the accessibility data of the current task group.  
  
### Return Value  
 `TRUE` if the `data` parameter was successfully populated with the accessibility data of the current task group; otherwise, `FALSE`.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCTasksPane Class](../../mfc/reference/cmfctaskspane-class.md)   
 [CMFCTasksPaneTask Class](../../mfc/reference/cmfctaskspanetask-class.md)   
 [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)
