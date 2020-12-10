---
description: "Learn more about: CMFCTasksPaneTask Class"
title: "CMFCTasksPaneTask Class"
ms.date: "11/19/2018"
f1_keywords: ["CMFCTasksPaneTask", "AFXTASKSPANE/CMFCTasksPaneTask", "AFXTASKSPANE/CMFCTasksPaneTask::CMFCTasksPaneTask", "AFXTASKSPANE/CMFCTasksPaneTask::SetACCData", "AFXTASKSPANE/CMFCTasksPaneTask::m_bAutoDestroyWindow", "AFXTASKSPANE/CMFCTasksPaneTask::m_bIsBold", "AFXTASKSPANE/CMFCTasksPaneTask::m_dwUserData", "AFXTASKSPANE/CMFCTasksPaneTask::m_hwndTask", "AFXTASKSPANE/CMFCTasksPaneTask::m_nIcon", "AFXTASKSPANE/CMFCTasksPaneTask::m_nWindowHeight", "AFXTASKSPANE/CMFCTasksPaneTask::m_pGroup", "AFXTASKSPANE/CMFCTasksPaneTask::m_rect", "AFXTASKSPANE/CMFCTasksPaneTask::m_strName", "AFXTASKSPANE/CMFCTasksPaneTask::m_uiCommandID"]
helpviewer_keywords: ["CMFCTasksPaneTask [MFC], CMFCTasksPaneTask", "CMFCTasksPaneTask [MFC], SetACCData", "CMFCTasksPaneTask [MFC], m_bAutoDestroyWindow", "CMFCTasksPaneTask [MFC], m_bIsBold", "CMFCTasksPaneTask [MFC], m_dwUserData", "CMFCTasksPaneTask [MFC], m_hwndTask", "CMFCTasksPaneTask [MFC], m_nIcon", "CMFCTasksPaneTask [MFC], m_nWindowHeight", "CMFCTasksPaneTask [MFC], m_pGroup", "CMFCTasksPaneTask [MFC], m_rect", "CMFCTasksPaneTask [MFC], m_strName", "CMFCTasksPaneTask [MFC], m_uiCommandID"]
ms.assetid: c5a7513b-cd8f-4e2e-b16f-650e1fe30954
---
# CMFCTasksPaneTask Class

The `CMFCTasksPaneTask` class is a helper class that represents tasks for the task pane control ( [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md)). The task object represents an item in the task group ( [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md)). Each task can have a command that the framework executes when a user clicks on the task and an icon that appears to the left of the task name.

## Syntax

```
class CMFCTasksPaneTask : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCTasksPaneTask::CMFCTasksPaneTask](#cmfctaskspanetask)|Creates and initializes a `CMFCTasksPaneTask` object.|
|`CMFCTasksPaneTask::~CMFCTasksPaneTask`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCTasksPaneTask::SetACCData](#setaccdata)|Determines the accessibility data for the current task.|

### Data Members

|Name|Description|
|----------|-----------------|
|[CMFCTasksPaneTask::m_bAutoDestroyWindow](#m_bautodestroywindow)|Determines whether the task window is automatically destroyed.|
|[CMFCTasksPaneTask::m_bIsBold](#m_bisbold)|Determines whether the framework draws a task label in bold text.|
|[CMFCTasksPaneTask::m_dwUserData](#m_dwuserdata)|Contains user-defined data that the framework associates with the task. Set to zero if the task has no associated data.|
|[CMFCTasksPaneTask::m_hwndTask](#m_hwndtask)|A handle to the task window.|
|[CMFCTasksPaneTask::m_nIcon](#m_nicon)|The index in the image list of the image that the framework displays next to the task.|
|[CMFCTasksPaneTask::m_nWindowHeight](#m_nwindowheight)|The height of the task window. If the task has no task window, this value is zero.|
|[CMFCTasksPaneTask::m_pGroup](#m_pgroup)|A pointer to the `CMFCTasksPaneTaskGroup` that this task belongs to.|
|[CMFCTasksPaneTask::m_rect](#m_rect)|Specifies the bounding rectangle of the task.|
|[CMFCTasksPaneTask::m_strName](#m_strname)|The name of the task.|
|[CMFCTasksPaneTask::m_uiCommandID](#m_uicommandid)|Specifies the command ID of the command that the framework executes when the user clicks the task. If this value is not a valid command ID, the task is treated as a simple label.|

## Remarks

The following illustration shows a task group that contains three tasks:

![Task group, expanded](../../mfc/reference/media/nexttaskgrpexpand.png "Task group, expanded")

> [!NOTE]
> If a task does not have a valid command ID, it is treated as a simple label.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCTasksPaneTask](../../mfc/reference/cmfctaskspanetask-class.md)

## Requirements

**Header:** afxTasksPane.h

## <a name="cmfctaskspanetask"></a> CMFCTasksPaneTask::CMFCTasksPaneTask

Creates and initializes a `CMFCTasksPaneTask` object.

```
CMFCTasksPaneTask(
    CMFCTasksPaneTaskGroup* pGroup,
    LPCTSTR lpszName,
    int nIcon,
    UINT uiCommandID,
    DWORD dwUserData = 0,
    HWND hwndTask = NULL,
    BOOL bAutoDestroyWindow = FALSE,
    int nWindowHeight = 0);
```

### Parameters

*pGroup*<br/>
Specifies the [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) to which the task belongs.

*lpszName*<br/>
Specifies the name of the task.

*nIcon*<br/>
Specifies the index of the task's image in the image list.

*uiCommandID*<br/>
Specifies the command ID of the command that is executed when the task is clicked.

*dwUserData*<br/>
User-defined data.

*hwndTask*<br/>
Specifies the handle to the task window.

*bAutoDestroyWindow*<br/>
If TRUE, the task window will be destroyed automatically.

*nWindowHeight*<br/>
Specifies the height of the task window.

### Remarks

## <a name="m_bautodestroywindow"></a> CMFCTasksPaneTask::m_bAutoDestroyWindow

Determines whether the task window is automatically destroyed.

```
BOOL m_bAutoDestroyWindow;
```

### Remarks

Set to TRUE to specify that the task window ( [CMFCTasksPaneTask::m_hwndTask](#m_hwndtask)) should be destroyed automatically; otherwise, FALSE.

## <a name="m_bisbold"></a> CMFCTasksPaneTask::m_bIsBold

Determines whether a task label is drawn in bold text.

```
BOOL m_bIsBold;
```

### Remarks

Set this member to TRUE to display bold text for the task label.

## <a name="m_dwuserdata"></a> CMFCTasksPaneTask::m_dwUserData

Contains user-defined data that is associated with the task. Set to zero if no data is associated with the task.

```
DWORD m_dwUserData;
```

### Remarks

## <a name="m_hwndtask"></a> CMFCTasksPaneTask::m_hwndTask

A handle to the task window.

```
HWND m_hwndTask;
```

### Remarks

To add a task window, call [CMFCTasksPane::AddWindow](../../mfc/reference/cmfctaskspane-class.md#addwindow).

## <a name="m_nicon"></a> CMFCTasksPaneTask::m_nIcon

The index position in an image list that identifies an image that is displayed next to the specified task.

```
int m_nIcon;
```

### Remarks

The image list is set by [CMFCTasksPane::SetIconsList](../../mfc/reference/cmfctaskspane-class.md#seticonslist).

Set `m_nIcon` to -1 if you want to display the task without an image.

## <a name="m_nwindowheight"></a> CMFCTasksPaneTask::m_nWindowHeight

The height of the task window. If the task has no task window, this value is zero.

```
int m_nWindowHeight;
```

### Remarks

## <a name="m_pgroup"></a> CMFCTasksPaneTask::m_pGroup

Pointer to the [CMFCTasksPaneTaskGroup](../../mfc/reference/cmfctaskspanetaskgroup-class.md) to which this task belongs.

```
CMFCTasksPaneTaskGroup* m_pGroup;
```

### Remarks

Every task must have a parent group. You add groups to a task pane by calling [CMFCTasksPane::AddGroup](../../mfc/reference/cmfctaskspane-class.md#addgroup).

## <a name="m_rect"></a> CMFCTasksPaneTask::m_rect

Specifies the bounding rectangle of the task.

```
CRect m_rect;
```

### Remarks

This value is calculated by the framework when the task is drawn.

## <a name="m_strname"></a> CMFCTasksPaneTask::m_strName

The name of the task.

```
CString m_strName;
```

### Remarks

## <a name="m_uicommandid"></a> CMFCTasksPaneTask::m_uiCommandID

Specifies the command ID of the command that is executed when the user clicks the task. If this value is not a valid command ID, the task is treated as a simple label.

```
UINT m_uiCommandID;
```

### Remarks

## <a name="setaccdata"></a> CMFCTasksPaneTask::SetACCData

Determines the accessibility data for the current task.

```
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### Parameters

*pParent*<br/>
[in] Represents the parent window of the current task.

*data*<br/>
[out] An object of type `CAccessibilityData` that is populated with the accessibility data of the current task.

### Return Value

TRUE if the *data* parameter was successfully populated with the accessibility data of the current task; otherwise, FALSE.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)
