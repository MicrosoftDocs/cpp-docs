---
description: "Learn more about: CMFCTasksPaneTaskGroup Class"
title: "CMFCTasksPaneTaskGroup Class"
ms.date: "11/19/2018"
f1_keywords: ["CMFCTasksPaneTaskGroup", "AFXTASKSPANE/CMFCTasksPaneTaskGroup", "AFXTASKSPANE/CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup", "AFXTASKSPANE/CMFCTasksPaneTaskGroup::SetACCData", "AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_bIsBottom", "AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_bIsCollapsed", "AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_bIsSpecial", "AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_lstTasks", "AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_rect", "AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_rectGroup", "AFXTASKSPANE/CMFCTasksPaneTaskGroup::m_strName"]
helpviewer_keywords: ["CMFCTasksPaneTaskGroup [MFC], CMFCTasksPaneTaskGroup", "CMFCTasksPaneTaskGroup [MFC], SetACCData", "CMFCTasksPaneTaskGroup [MFC], m_bIsBottom", "CMFCTasksPaneTaskGroup [MFC], m_bIsCollapsed", "CMFCTasksPaneTaskGroup [MFC], m_bIsSpecial", "CMFCTasksPaneTaskGroup [MFC], m_lstTasks", "CMFCTasksPaneTaskGroup [MFC], m_rect", "CMFCTasksPaneTaskGroup [MFC], m_rectGroup", "CMFCTasksPaneTaskGroup [MFC], m_strName"]
ms.assetid: 2111640b-a46e-4b27-b033-29e88632b86a
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
|[CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup](#cmfctaskspanetaskgroup)|Constructs a `CMFCTasksPaneTaskGroup` object.|
|`CMFCTasksPaneTaskGroup::~CMFCTasksPaneTaskGroup`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCTasksPaneTaskGroup::SetACCData](#setaccdata)|Determines the accessibility data for the current task group.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCTasksPaneTaskGroup::m_bIsBottom](#m_bisbottom)|Determines whether the task group is aligned to the bottom of the task pane control.|
|[CMFCTasksPaneTaskGroup::m_bIsCollapsed](#m_biscollapsed)|Determines whether the task group is collapsed.|
|[CMFCTasksPaneTaskGroup::m_bIsSpecial](#m_bisspecial)|Determines whether the task group is *special.* The framework displays special captions in a different color.|
|[CMFCTasksPaneTaskGroup::m_lstTasks](#m_lsttasks)|Contains the internal list of tasks.|
|[CMFCTasksPaneTaskGroup::m_rect](#m_rect)|Specifies the bounding rectangle of the group caption.|
|[CMFCTasksPaneTaskGroup::m_rectGroup](#m_rectgroup)|Specifies the bounding rectangle of the group.|
|[CMFCTasksPaneTaskGroup::m_strName](#m_strname)|Specifies the name of the group.|

## Remarks

The following illustration shows an expanded task group:

![Task group, expanded](../../mfc/reference/media/nexttaskgrpexpand.png "Task group, expanded")

The following illustration shows a collapsed task group:

![Collapsed task group](../../mfc/reference/media/nexttaskgrpcollapse.png "Collapsed task group")

The following illustration shows a task group without a caption:

![Task group without a caption](../../mfc/reference/media/nexttaskgrpnocapt.png "Task group without a caption")

The following illustration shows two task groups. The first task group is marked as special by setting the `m_bIsSpecial` flag to TRUE, while the second task group is not special. Note how the caption for the first task group is darker than the second task group:

![Special task group](../../mfc/reference/media/nexttaskgrpspecial.png "Special task group")

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md)

## Requirements

**Header:** afxTasksPane.h

## <a name="cmfctaskspanetaskgroup"></a> CMFCTasksPaneTaskGroup::CMFCTasksPaneTaskGroup

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

*lpszName*<br/>
Specifies the name of the group in the group caption.

*bIsBottom*<br/>
Specifies whether the group is aligned to the bottom of the task pane control.

*bIsSpecial*<br/>
Specifies whether the group is designated as *special* and thus, whether the group caption is filled with a different color.

*bIsCollapsed*<br/>
Specifies whether the group is collapsed.

*pPage*<br/>
Specifies the property page that this task group belongs to.

*hIcon*<br/>
Specifies the icon that displays in the group caption.

### Remarks

## <a name="m_bisbottom"></a> CMFCTasksPaneTaskGroup::m_bIsBottom

Determines whether the task group is aligned to the bottom of the task pane control.

```
BOOL m_bIsBottom;
```

### Remarks

Only one group can be aligned to the bottom of the task pane control. This task group must be added last. For more information, see [CMFCTasksPane::AddGroup](../../mfc/reference/cmfctaskspane-class.md#addgroup).

## <a name="m_biscollapsed"></a> CMFCTasksPaneTaskGroup::m_bIsCollapsed

Determines whether the task group is collapsed.

```
BOOL m_bIsCollapsed;
```

### Remarks

You can enable or disable the ability to collapse groups on the task pane by calling [CMFCTasksPane::EnableGroupCollapse](../../mfc/reference/cmfctaskspane-class.md#enablegroupcollapse).

## <a name="m_bisspecial"></a> CMFCTasksPaneTaskGroup::m_bIsSpecial

Determines whether the task group is *special* and whether the caption for a special task group should be identified by a different color.

```
BOOL m_bIsSpecial;
```

### Remarks

If your application is using the Windows XP visual theme and `m_bIsSpecial` is FALSE, the framework calls `DrawThemeBackground` with the EBP_NORMALGROUPBACKGROUND flag. If `m_bIsSpecial` is TRUE, the framework calls `DrawThemeBackground` with the EBP_SPECIALGROUPBACKGROUND flag.

## <a name="m_lsttasks"></a> CMFCTasksPaneTaskGroup::m_lstTasks

Contains the internal list of tasks.

```
CObList m_lstTasks;
```

### Remarks

To fill this list, call [CMFCTasksPane::AddTask](../../mfc/reference/cmfctaskspane-class.md#addtask).

## <a name="m_rect"></a> CMFCTasksPaneTaskGroup::m_rect

Specifies the bounding rectangle of the group caption.

```
CRect m_rect;
```

### Remarks

This value is automatically calculated by the framework.

## <a name="m_rectgroup"></a> CMFCTasksPaneTaskGroup::m_rectGroup

Specifies the bounding rectangle of the group.

```
CRect m_rectGroup;
```

### Remarks

This value is calculated automatically by the framework.

## <a name="m_strname"></a> CMFCTasksPaneTaskGroup::m_strName

Specifies the name of the group.

```
CString m_strName;
```

### Remarks

If this value is empty, the group caption is not displayed and the group cannot be collapsed.

## <a name="setaccdata"></a> CMFCTasksPaneTaskGroup::SetACCData

Determines the accessibility data for the current task group.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### Parameters

*pParent*<br/>
[in] Represents the parent window of the current task group.

*data*<br/>
[out] An object of type `CAccessibilityData` that is populated with the accessibility data of the current task group.

### Return Value

TRUE if the *data* parameter was successfully populated with the accessibility data of the current task group; otherwise, FALSE.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCTasksPane Class](../../mfc/reference/cmfctaskspane-class.md)<br/>
[CMFCTasksPaneTask Class](../../mfc/reference/cmfctaskspanetask-class.md)<br/>
[CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)
