---
title: "CMFCTasksPane Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCTasksPane"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCTasksPane class"
ms.assetid: b456328e-2525-4642-b78b-9edd1a1a7d3f
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
# CMFCTasksPane Class
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 The `CMFCTasksPane` class implements a list of clickable items (tasks).  
  
## Syntax  
  
```  
class CMFCTasksPane : public CDockablePane  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCTasksPane::CMFCTasksPane](#cmfctaskspane__cmfctaskspane)|Constructs a `CMFCTasksPane` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCTasksPane::AddGroup](#cmfctaskspane__addgroup)|Adds a new group of tasks to the task pane control.|  
|[CMFCTasksPane::AddLabel](#cmfctaskspane__addlabel)|Adds a new static label into the specified task group.|  
|[CMFCTasksPane::AddMRUFilesList](#cmfctaskspane__addmrufileslist)|Adds tasks specified by a Most Recently Used (MRU) file list into a group.|  
|[CMFCTasksPane::AddPage](#cmfctaskspane__addpage)|Adds a new page to the task pane.|  
|[CMFCTasksPane::AddSeparator](#cmfctaskspane__addseparator)||  
|[CMFCTasksPane::AddTask](#cmfctaskspane__addtask)|Adds a new task to the specified task group.|  
|[CMFCTasksPane::AddWindow](#cmfctaskspane__addwindow)|Adds a child window to the task pane.|  
|[CMFCTasksPane::CollapseAllGroups](#cmfctaskspane__collapseallgroups)||  
|[CMFCTasksPane::CollapseGroup](#cmfctaskspane__collapsegroup)|Programmatically collapses a group.|  
|[CMFCTasksPane::CreateDefaultMiniframe](#cmfctaskspane__createdefaultminiframe)|(Overrides [CPane::CreateDefaultMiniframe](../../mfc/reference/cpane-class.md#cpane__createdefaultminiframe).)|  
|[CMFCTasksPane::CreateMenu](#cmfctaskspane__createmenu)|Called by the framework to create a menu for the **Other Tasks Panes** menu button.|  
|[CMFCTasksPane::EnableAnimation](#cmfctaskspane__enableanimation)|Enables or disables animation while collapsing or expanding task groups.|  
|[CMFCTasksPane::EnableGroupCollapse](#cmfctaskspane__enablegroupcollapse)|Specifies whether tasks groups can be collapsed.|  
|[CMFCTasksPane::EnableHistoryMenuButtons](#cmfctaskspane__enablehistorymenubuttons)|Enables or disables drop-down menus in **Next** and **Previous** navigation buttons.|  
|[CMFCTasksPane::EnableNavigationToolbar](#cmfctaskspane__enablenavigationtoolbar)|Enables or disables the navigation toolbar.|  
|[CMFCTasksPane::EnableOffsetCustomControls](#cmfctaskspane__enableoffsetcustomcontrols)||  
|[CMFCTasksPane::EnableScrollButtons](#cmfctaskspane__enablescrollbuttons)|Enables scroll buttons instead of a scrollbar.|  
|[CMFCTasksPane::EnableWrapLabels](#cmfctaskspane__enablewraplabels)|Enables or disables word wrapping for labels.|  
|[CMFCTasksPane::EnableWrapTasks](#cmfctaskspane__enablewraptasks)|Enables or disables word wrapping for tasks.|  
|[CMFCTasksPane::GetActivePage](#cmfctaskspane__getactivepage)|Returns the zero-based index for the active page.|  
|[CMFCTasksPane::GetGroupCaptionHeight](#cmfctaskspane__getgroupcaptionheight)|Returns the height of the group captions.|  
|[CMFCTasksPane::GetGroupCaptionHorzOffset](#cmfctaskspane__getgroupcaptionhorzoffset)|Returns the current offset of a group caption from the left and right edges of the task pane.|  
|[CMFCTasksPane::GetGroupCaptionVertOffset](#cmfctaskspane__getgroupcaptionvertoffset)|Returns the current offset of a group caption from the top and bottom edges of the task pane.|  
|[CMFCTasksPane::GetGroupCount](#cmfctaskspane__getgroupcount)|Returns the total number of groups.|  
|[CMFCTasksPane::GetGroupLocation](#cmfctaskspane__getgrouplocation)|Returns the internal group index for a given group.|  
|[CMFCTasksPane::GetGroupVertOffset](#cmfctaskspane__getgroupvertoffset)|Returns the vertical offset of a group.|  
|[CMFCTasksPane::GetHorzMargin](#cmfctaskspane__gethorzmargin)|Returns the horizontal spacing between a task pane and the edges of the client area.|  
|[CMFCTasksPane::GetNextPages](#cmfctaskspane__getnextpages)||  
|[CMFCTasksPane::GetPageByGroup](#cmfctaskspane__getpagebygroup)|Retrieves the page index for a specified group.|  
|[CMFCTasksPane::GetPagesCount](#cmfctaskspane__getpagescount)|Returns the number of pages.|  
|[CMFCTasksPane::GetPreviousPages](#cmfctaskspane__getpreviouspages)||  
|[CMFCTasksPane::GetScrollBarCtrl](#cmfctaskspane__getscrollbarctrl)|(Overrides [CWnd::GetScrollBarCtrl](../../mfc/reference/cwnd-class.md#cwnd__getscrollbarctrl).)|  
|[CMFCTasksPane::GetTask](#cmfctaskspane__gettask)|Retrieves a task.|  
|[CMFCTasksPane::GetTaskCount](#cmfctaskspane__gettaskcount)|Returns the number of task items in a specified group.|  
|[CMFCTasksPane::GetTaskGroup](#cmfctaskspane__gettaskgroup)|Returns a task group for a given group index.|  
|[CMFCTasksPane::GetTaskLocation](#cmfctaskspane__gettasklocation)|Returns the group and the index for a given task.|  
|[CMFCTasksPane::GetTasksHorzOffset](#cmfctaskspane__gettaskshorzoffset)|Returns the horizontal offset of tasks from the left and right edges of their parent groups.|  
|[CMFCTasksPane::GetTasksIconHorzOffset](#cmfctaskspane__gettasksiconhorzoffset)||  
|[CMFCTasksPane::GetTasksIconVertOffset](#cmfctaskspane__gettasksiconvertoffset)||  
|[CMFCTasksPane::GetVertMargin](#cmfctaskspane__getvertmargin)|Returns the vertical spacing between a task pane and the edges of the client area.|  
|[CMFCTasksPane::IsAccessibilityCompatible](#cmfctaskspane__isaccessibilitycompatible)|(Overrides `CDockablePane::IsAccessibilityCompatible`.)|  
|[CMFCTasksPane::IsAnimationEnabled](#cmfctaskspane__isanimationenabled)|Indicates whether animation is enabled.|  
|[CMFCTasksPane::IsBackButtonEnabled](#cmfctaskspane__isbackbuttonenabled)|Indicates whether the back button is enabled.|  
|[CMFCTasksPane::IsForwardButtonEnabled](#cmfctaskspane__isforwardbuttonenabled)|Indicates whether the forward button is enabled.|  
|[CMFCTasksPane::IsGroupCollapseEnabled](#cmfctaskspane__isgroupcollapseenabled)||  
|[CMFCTasksPane::IsHistoryMenuButtonsEnabled](#cmfctaskspane__ishistorymenubuttonsenabled)|Indicates whether the **Next** and **Previous** navigation buttons have drop-down menus.|  
|[CMFCTasksPane::IsNavigationToolbarEnabled](#cmfctaskspane__isnavigationtoolbarenabled)|Indicates whether the navigation toolbar is enabled.|  
|[CMFCTasksPane::IsToolBox](#cmfctaskspane__istoolbox)||  
|[CMFCTasksPane::IsWrapLabelsEnabled](#cmfctaskspane__iswraplabelsenabled)|Indicates whether the task pane wraps words in labels.|  
|[CMFCTasksPane::IsWrapTasksEnabled](#cmfctaskspane__iswraptasksenabled)|Indicates whether the task pane wraps words in tasks.|  
|[CMFCTasksPane::LoadState](#cmfctaskspane__loadstate)|(Overrides [CDockablePane::LoadState](http://msdn.microsoft.com/en-us/96110136-4f46-4764-8a76-3b4abaf77917).)|  
|[CMFCTasksPane::OnCancel](#cmfctaskspane__oncancel)||  
|[CMFCTasksPane::OnClickTask](#cmfctaskspane__onclicktask)|Called by the framework when the user clicks an item in the task pane.|  
|[CMFCTasksPane::OnOK](#cmfctaskspane__onok)||  
|[CMFCTasksPane::OnPressBackButton](#cmfctaskspane__onpressbackbutton)|Called by the framework when the user clicks the back button.|  
|[CMFCTasksPane::OnPressForwardButton](#cmfctaskspane__onpressforwardbutton)|Called by the framework when the user clicks the forward navigation button.|  
|[CMFCTasksPane::OnPressHomeButton](#cmfctaskspane__onpresshomebutton)|Called by the framework when the user clicks the home navigation button|  
|[CMFCTasksPane::OnPressOtherButton](#cmfctaskspane__onpressotherbutton)||  
|[CMFCTasksPane::OnSetAccData](#cmfctaskspane__onsetaccdata)|(Overrides [CBasePane::OnSetAccData](../../mfc/reference/cbasepane-class.md#cbasepane__onsetaccdata).)|  
|[CMFCTasksPane::OnUpdateCmdUI](#cmfctaskspane__onupdatecmdui)|(Overrides [CDockablePane::OnUpdateCmdUI](http://msdn.microsoft.com/en-us/5dd61606-1c12-40d4-b024-f3839aa5e2e0).)|  
|[CMFCTasksPane::PreTranslateMessage](#cmfctaskspane__pretranslatemessage)|(Overrides [CDockablePane::PreTranslateMessage](http://msdn.microsoft.com/en-us/49a242cc-b158-400e-9e01-0345ec9c3ffd).)|  
|[CMFCTasksPane::RecalcLayout](#cmfctaskspane__recalclayout)|(Overrides [CPane::RecalcLayout](../../mfc/reference/cpane-class.md#cpane__recalclayout).)|  
|[CMFCTasksPane::RemoveAllGroups](#cmfctaskspane__removeallgroups)|Removes all groups on the specified page.|  
|[CMFCTasksPane::RemoveAllPages](#cmfctaskspane__removeallpages)|Removes all pages from the task pane except the default (first) page.|  
|[CMFCTasksPane::RemoveAllTasks](#cmfctaskspane__removealltasks)|Removes all tasks from the group.|  
|[CMFCTasksPane::RemoveGroup](#cmfctaskspane__removegroup)|Removes a group.|  
|[CMFCTasksPane::RemovePage](#cmfctaskspane__removepage)|Removes a specified page from the task pane.|  
|[CMFCTasksPane::RemoveTask](#cmfctaskspane__removetask)|Removes a task from a task group.|  
|[CMFCTasksPane::SaveState](#cmfctaskspane__savestate)|(Overrides [CDockablePane::SaveState](http://msdn.microsoft.com/en-us/c5c24249-8d0d-46cb-96d9-9f5c6dc191db).)|  
|[CMFCTasksPane::Serialize](#cmfctaskspane__serialize)|(Overrides [CDockablePane::Serialize](http://msdn.microsoft.com/en-us/09787e59-e446-4e76-894b-206d303dcfd6).)|  
|[CMFCTasksPane::SetActivePage](#cmfctaskspane__setactivepage)|Activates a specified page in the task pane.|  
|[CMFCTasksPane::SetCaption](#cmfctaskspane__setcaption)|Sets the caption name of a task pane.|  
|[CMFCTasksPane::SetGroupCaptionHeight](#cmfctaskspane__setgroupcaptionheight)|Sets the height of a group caption.|  
|[CMFCTasksPane::SetGroupCaptionHorzOffset](#cmfctaskspane__setgroupcaptionhorzoffset)|Sets the horizontal offset of a group caption.|  
|[CMFCTasksPane::SetGroupCaptionVertOffset](#cmfctaskspane__setgroupcaptionvertoffset)|Sets the vertical offset of a group caption.|  
|[CMFCTasksPane::SetGroupName](#cmfctaskspane__setgroupname)|Sets a group name.|  
|[CMFCTasksPane::SetGroupTextColor](#cmfctaskspane__setgrouptextcolor)|Sets the text color for a group caption.|  
|[CMFCTasksPane::SetGroupVertOffset](#cmfctaskspane__setgroupvertoffset)|Sets the vertical offset for a group.|  
|[CMFCTasksPane::SetHorzMargin](#cmfctaskspane__sethorzmargin)|Sets the horizontal spacing between a task pane and the edges of the client area.|  
|[CMFCTasksPane::SetIconsList](#cmfctaskspane__seticonslist)|Sets the image list associated with tasks.|  
|[CMFCTasksPane::SetPageCaption](#cmfctaskspane__setpagecaption)|Sets the caption text for a task pane page.|  
|[CMFCTasksPane::SetTaskName](#cmfctaskspane__settaskname)|Sets the name for a task.|  
|[CMFCTasksPane::SetTasksIconHorzOffset](#cmfctaskspane__settasksiconhorzoffset)||  
|[CMFCTasksPane::SetTasksIconVertOffset](#cmfctaskspane__settasksiconvertoffset)||  
|[CMFCTasksPane::SetTaskTextColor](#cmfctaskspane__settasktextcolor)|Sets the text color for a task.|  
|[CMFCTasksPane::SetTasksHorzOffset](#cmfctaskspane__settaskshorzoffset)|Sets the horizontal offset of tasks from the left and right edges of their parent groups.|  
|[CMFCTasksPane::SetVertMargin](#cmfctaskspane__setvertmargin)|Sets the vertical spacing between a task pane and the edges of the client area.|  
|[CMFCTasksPane::SetWindowHeight](#cmfctaskspane__setwindowheight)|Sets the height for a window.|  
|[CMFCTasksPane::ShowCommandMessageString](#cmfctaskspane__showcommandmessagestring)||  
|[CMFCTasksPane::ShowTask](#cmfctaskspane__showtask)|Shows or hides a task.|  
|[CMFCTasksPane::ShowTaskByCmdId](#cmfctaskspane__showtaskbycmdid)|Shows or hides a task based on its command ID.|  
|[CMFCTasksPane::Update](#cmfctaskspane__update)|Updates the GUI elements that belong to a task pane.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCTasksPane::OnActivateTasksPanePage](#cmfctaskspane__onactivatetaskspanepage)|Called by the framework when a new task pane page is activated.|  
  
## Remarks  
 The `CMFCTasksPane` class implements the following functionality:  
  
-   Items can be grouped and each item grouping can have an associated caption.  
  
-   Item groupings can be collapsed or expanded.  
  
-   An icon can be assigned to each item in the task pane.  
  
-   Individual items can be associated with a command ID which executes when a user clicks the item. When the click occurs, the `WM_COMMAND` message is sent to the owner of the task pane control.  
  
 To use the `CMFCTasksPane` control in your application, follow these steps:  
  
1.  Embed a `CMFCTasksPane` object into the main frame window class.  
  
2.  When processing the `WM_CREATE` message, call the `Create` method. You can use the regular [CControlBar](../../mfc/reference/ccontrolbar-class.md) styles. For more information, see `CControlBar::Create`.  
  
3.  Call the [CMFCTasksPane::AddGroup](#cmfctaskspane__addgroup) method to add various groups.  
  
4.  Call the [CMFCTasksPane::AddTask](#cmfctaskspane__addtask), [CMFCTasksPane::AddLabel](#cmfctaskspane__addlabel) or [CMFCTasksPane::AddMRUFilesList](#cmfctaskspane__addmrufileslist) member functions to add new items (tasks) to each group.  
  
5.  Call [CMFCTasksPane::EnableGroupCollapse](#cmfctaskspane__enablegroupcollapse) to specify whether item groups can collapse.  
  
 The following illustration shows a typical task pane control. The first group is a *special* group and its caption is a darker color. The third group is collapsed. The last group is aligned to the bottom of the task pane and has no caption, and the last task in the group is a simple label:  
  
 ![Example of Task Pane](../../mfc/reference/media/nexttaskpane.png "nexttaskpane")  
  
 You can customize the appearance of the task pane by adjusting various margins and offsets. The following illustration clarifies the meaning of these variables:  
  
 ![Custom task group](../../mfc/reference/media/nexttaskgrpcustom.png "nexttaskgrpcustom")  
  
## Example  
 The following example demonstrates how to construct a `CMFCTasksPane` object and use various methods in the `CMFCTasksPane` class. The example shows how to enable the collapsing of task groups, enable the drop-down menus on the **Next** and **Previous** navigation buttons, enable the scroll buttons instead of a scroll bar, enable the word wrapping for the text in labels, set the caption name of the task pane, set the text color for a group caption, and set the horizontal and vertical margins.  
  
 [!code-cpp[NVC_MFC_RibbonApp#28](../../mfc/reference/codesnippet/cpp/cmfctaskspane-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CPane](../../mfc/reference/cpane-class.md) [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md)  
  
## Requirements  
 **Header:** afxTasksPane.h  
  
##  <a name="cmfctaskspane__addgroup"></a>  CMFCTasksPane::AddGroup  
 Adds a new group of tasks to the task pane control.  
  
```  
int AddGroup(
    int nPageIdx,  
    LPCTSTR lpszGroupName,  
    BOOL bBottomLocation = FALSE,  
    BOOL bSpecial = FALSE,  
    HICON hIcon = NULL);

 
int AddGroup(
    LPCTSTR lpszGroupName,  
    BOOL bBottomLocation = FALSE,  
    BOOL bSpecial = FALSE,  
    HICON hIcon = NULL);
```  
  
### Parameters  
 [in] `nPageIdx`  
 Specifies the zero-based page index.  
  
 [in] `lpszGroupName`  
 Specifies the group name.  
  
 [in] `bBottomLocation`  
 `TRUE` to create the group at the bottom of the task pane control; otherwise, `FALSE`.  
  
 [in] `bSpecial`  
 `TRUE` to mark this group as a *special* group; otherwise, `FALSE`. For more information about special groups, see the Remarks section of [CMFCTasksPane Class](../../mfc/reference/cmfctaskspane-class.md).  
  
 [in] `hIcon`  
 Specifies the icon to display in the group caption.  
  
### Return Value  
 The zero-based index of the group in the internal list of groups that the class maintains.  
  
### Remarks  
 Call this method to create a group of tasks and to add that group to the task pane control.  
  
 The framework displays task groups at the top of the task pane control or at the bottom. The framework can display only one group at the bottom; this group must be added last.  
  
##  <a name="cmfctaskspane__addlabel"></a>  CMFCTasksPane::AddLabel  
 Adds a label to the specified task group.  
  
```  
int AddLabel(
    int nGroup,  
    LPCTSTR lpszLabelName,  
    int nTaskIcon = -1,  
    BOOL bIsBold = FALSE);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the index of the group where the label is added.  
  
 [in] `lpszLabelName`  
 Specifies the name of the label.  
  
 [in] `nTaskIcon`  
 Specifies the icon to display next to the label. The framework stores icons in a list of images. This parameter is an index into that list.  
  
 [in] `bIsBold`  
 `TRUE` to display the label in bold text; otherwise, `FALSE`.  
  
### Return Value  
 The zero-based index of the group where the label was added, or -1 if the group specified by `nGroup` does not exist.  
  
### Remarks  
 The framework handles tasks and labels differently. When a user clicks on a task, the framework executes a command. When a user clicks on a label, no command is executed. For more information, see [CMFCTasksPane::AddTask](#cmfctaskspane__addtask).  
  
##  <a name="cmfctaskspane__addmrufileslist"></a>  CMFCTasksPane::AddMRUFilesList  
 Adds a task for each file stored in a Most Recently Used (MRU) files list into a group.  
  
```  
int AddMRUFilesList(
    int nGroup,  
    int nMaxFiles = 4);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the index of a group. This method adds the MRU files list to the group specified by this parameter.  
  
 [in] `nMaxFiles`  
 Specifies the number of files to display in the MRU files list.  
  
### Return Value  
 The zero-based index of the group where the MRU files list was added, or -1 if the group specified by `nGroup` does not exist.  
  
##  <a name="cmfctaskspane__addpage"></a>  CMFCTasksPane::AddPage  
 Adds a page to the task pane.  
  
```  
int AddPage(LPCTSTR lpszPageLabel);
```  
  
### Parameters  
 [in] `lpszPageLabel`  
 Specifies the label for the page.  
  
### Return Value  
 The zero-based index of the new page.  
  
##  <a name="cmfctaskspane__addseparator"></a>  CMFCTasksPane::AddSeparator  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int AddSeparator(int nGroup);
```  
  
### Parameters  
 [in] `nGroup`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__addtask"></a>  CMFCTasksPane::AddTask  
 Adds a task to the specified task group.  
  
```  
int AddTask(
    int nGroup,  
    LPCTSTR lpszTaskName,  
    int nTaskIcon = -1,  
    UINT uiCommandID = 0,  
    DWORD dwUserData = 0);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the group index where the task is added.  
  
 [in] `lpszTaskName`  
 Specifies the name of the task.  
  
 [in] `nTaskIcon`  
 Specifies the icon to display next to the task. The framework stores icons in a list of images. This parameter is an index into that list.  
  
 [in] `uiCommandID`  
 Specifies the command ID of the command to execute when the user clicks the task. The task is treated as a label if `uiCommandID` is 0.  
  
 [in] `dwUserData`  
 Specifies the user-defined data to be associated with the task.  
  
### Return Value  
 The zero-based index of the group where the task was added, or -1 if the group specified by `nGroup` does not exist.  
  
##  <a name="cmfctaskspane__addwindow"></a>  CMFCTasksPane::AddWindow  
 Adds a child window to the task pane.  
  
```  
int AddWindow(
    int nGroup,  
    HWND hwndTask,  
    int nWndHeight,  
    BOOL bAutoDestroyWindow = FALSE,  
    DWORD dwUserData = 0);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the group index where the window is added.  
  
 [in] `hwndTask`  
 Specifies the handle of the window to add.  
  
 [in] `nWndHeight`  
 Specifies the height of the window.  
  
 [in] `bAutoDestroyWindow`  
 `TRUE` to destroy the window when the task is removed; otherwise, `FALSE`.  
  
 [in] `dwUserData`  
 Specifies the user-defined data associated with the task.  
  
### Return Value  
 The zero-based index of the group where the window was added, or -1 if the group specified by `nGroup` does not exist.  
  
### Remarks  
 Call this method to add a control to a task pane. For example, you can add an edit control that functions like a search bar.  
  
##  <a name="cmfctaskspane__cmfctaskspane"></a>  CMFCTasksPane::CMFCTasksPane  
 Constructs a [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md) object.  
  
```  
CMFCTasksPane();
```  
  
##  <a name="cmfctaskspane__collapseallgroups"></a>  CMFCTasksPane::CollapseAllGroups  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CollapseAllGroups(
    BOOL bCollapse = TRUE);

 
void CollapseAllGroups(
    int nPageIdx,  
    BOOL bCollapse);
```  
  
### Parameters  
 [in] `bCollapse`  
 [in] `nPageIdx`  
  
### Remarks  
  
##  <a name="cmfctaskspane__collapsegroup"></a>  CMFCTasksPane::CollapseGroup  
 Collapses or expands a group.  
  
```  
BOOL CollapseGroup(
    CMFCTasksPaneTaskGroup* pGroup,  
    BOOL bCollapse = TRUE);

 
BOOL CollapseGroup(
    int nGroup,  
    BOOL bCollapse = TRUE);
```  
  
### Parameters  
 [in] `pGroup`  
 Specifies the group to collapse.  
  
 [in] `bCollapse`  
 `TRUE` to collapse the group; `FALSE` to expand the group.  
  
 [in] `nGroup`  
 Specifies the zero-based index of the group to collapse in the internal list of groups.  
  
### Return Value  
 `TRUE` if the group collapses or expands successfully; otherwise, `FALSE`.  
  
### Remarks  
 A collapsed group shows only the group caption; the list of tasks is hidden.  
  
##  <a name="cmfctaskspane__createdefaultminiframe"></a>  CMFCTasksPane::CreateDefaultMiniframe  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CPaneFrameWnd* CreateDefaultMiniframe(CRect rectInitial);
```  
  
### Parameters  
 [in] `rectInitial`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__createmenu"></a>  CMFCTasksPane::CreateMenu  
 Creates a menu that appears when a user clicks the **Other Tasks Panes** menu button.  
  
```  
HMENU CreateMenu() const;

 
```  
  
### Return Value  
 A handle to the new menu.  
  
### Remarks  
 Override this method in a derived class to customize the menu for a task pane.  
  
 The pop-up menu  that this method creates contains the list of pages in the task pane. The menu displays a check mark next to the active page.  
  
##  <a name="cmfctaskspane__enableanimation"></a>  CMFCTasksPane::EnableAnimation  
 Enables or disables the animation that occurs when a task group expands or collapses.  
  
```  
void EnableAnimation(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the animation that occurs when a task group expands or collapses; otherwise, `FALSE`.  
  
### Remarks  
 By default, the animation that occurs when a task group expands or collapses is enabled.  
  
##  <a name="cmfctaskspane__enablegroupcollapse"></a>  CMFCTasksPane::EnableGroupCollapse  
 Specifies whether a user can collapse task groups.  
  
```  
void EnableGroupCollapse(BOOL bEnable);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` if users can collapse task groups; otherwise, `FALSE`.  
  
### Remarks  
 A task group that is collapsed displays only the group caption; the list of tasks is hidden.  
  
##  <a name="cmfctaskspane__enablehistorymenubuttons"></a>  CMFCTasksPane::EnableHistoryMenuButtons  
 Enables drop-down menus on the **Next** and **Previous** navigation buttons.  
  
```  
void EnableHistoryMenuButtons(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable drop-down menus on the **Next** and **Previous** navigation buttons; otherwise, `FALSE`.  
  
### Remarks  
 By default, the drop-down menus on the **Next** and **Previous** buttons are disabled.  
  
 The menus contain the history of tasks pages that the user used.  
  
##  <a name="cmfctaskspane__enablenavigationtoolbar"></a>  CMFCTasksPane::EnableNavigationToolbar  
 Enables or disables the navigation toolbar.  
  
```  
void EnableNavigationToolbar(
    BOOL bEnable = TRUE,  
    UINT uiToolbarBmpRes = 0,  
    CSize sizeToolbarImage = CSize(0,
    0),  
    CSize sizeToolbarButton = CSize(0,
    0));
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the navigation toolbar; otherwise, `FALSE`.  
  
 [in] `uiToolbarBmpRes`  
 Specifies the resource ID of the bitmap that contains the images to display on the toolbar.  
  
 [in] `sizeToolbarImage`  
 Specifies the size of a toolbar image.  
  
 [in] `sizeToolbarButton`  
 Specifies the size of a toolbar button.  
  
### Remarks  
 The navigation toolbar is a toolbar that the framework displays at the top of the task pane. The navigation toolbar contains the **Back**, **Forward**, and **Home** navigation buttons and a menu button that contains the list of available pages.  
  
 By default, the framework does not display the navigation toolbar. If the navigation toolbar is not displayed, the navigation buttons are located on the caption of the docking bar.  
  
##  <a name="cmfctaskspane__enableoffsetcustomcontrols"></a>  CMFCTasksPane::EnableOffsetCustomControls  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnableOffsetCustomControls(BOOL bEnable);
```  
  
### Parameters  
 [in] `bEnable`  
  
### Remarks  
  
##  <a name="cmfctaskspane__enablescrollbuttons"></a>  CMFCTasksPane::EnableScrollButtons  
 Enables scroll buttons instead of a scroll bar.  
  
```  
void EnableScrollButtons(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to display scroll buttons in the task pane instead of a scroll bar; otherwise, `FALSE`.  
  
### Remarks  
 By default, the framework displays scroll buttons in the task pane.  
  
##  <a name="cmfctaskspane__enablewraplabels"></a>  CMFCTasksPane::EnableWrapLabels  
 Enables or disables word wrapping for the text in labels.  
  
```  
void EnableWrapLabels(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to wrap the text in labels that appear on the task pane; otherwise, `FALSE`.  
  
### Remarks  
 By default, the framework does not wrap the text in labels. When word wrapping is enabled, the text in labels can appear in multiple lines. The label can include line breaking markers such as `\n` and the underline marker `&`.  
  
##  <a name="cmfctaskspane__enablewraptasks"></a>  CMFCTasksPane::EnableWrapTasks  
 Enables or disables word wrapping for the text in tasks.  
  
```  
void EnableWrapTasks(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to wrap tasks in the task pane; otherwise, `FALSE`.  
  
### Remarks  
 By default, word wrapping for tasks is disabled.  
  
##  <a name="cmfctaskspane__getactivepage"></a>  CMFCTasksPane::GetActivePage  
 Returns the zero-based index for the active page.  
  
```  
int GetActivePage() const;

 
```  
  
### Return Value  
 The zero-based index of the active page.  
  
##  <a name="cmfctaskspane__getgroupcaptionheight"></a>  CMFCTasksPane::GetGroupCaptionHeight  
 Returns the height of the group caption.  
  
```  
int GetGroupCaptionHeight() const;

 
```  
  
### Return Value  
 The height of the group caption, in pixels.  
  
##  <a name="cmfctaskspane__getgroupcaptionhorzoffset"></a>  CMFCTasksPane::GetGroupCaptionHorzOffset  
 Returns the horizontal offset of a group caption.  
  
```  
int GetGroupCaptionHorzOffset() const;

 
```  
  
### Return Value  
 The horizontal offset of a group caption. The horizontal offset is the distance in pixels from the left or right edge of the task pane.  
  
##  <a name="cmfctaskspane__getgroupcaptionvertoffset"></a>  CMFCTasksPane::GetGroupCaptionVertOffset  
 Returns the vertical offset of a group caption.  
  
```  
int GetGroupCaptionVertOffset() const;

 
```  
  
### Return Value  
 The vertical offset of a group caption from the top and bottom edges of the task pane.  
  
### Remarks  
 The default value for the vertical offset is 7 pixels.  
  
##  <a name="cmfctaskspane__getgroupcount"></a>  CMFCTasksPane::GetGroupCount  
 Returns the total number of groups.  
  
```  
int GetGroupCount() const;

 
```  
  
### Return Value  
 The total number of groups in the task pane.  
  
##  <a name="cmfctaskspane__getgrouplocation"></a>  CMFCTasksPane::GetGroupLocation  
 Returns the internal group index for the specified group.  
  
```  
BOOL GetGroupLocation(
    CMFCTasksPaneTaskGroup* pGroup,  
    int& nGroup) const;

 
```  
  
### Parameters  
 [in] `pGroup`  
 Specifies the task group whose location is retrieved.  
  
 [out] `nGroup`  
 Contains the zero-based index of the task group.  
  
### Return Value  
 `TRUE` if the task group was found; otherwise, `FALSE`.  
  
##  <a name="cmfctaskspane__getgroupvertoffset"></a>  CMFCTasksPane::GetGroupVertOffset  
 Returns the vertical offset of a group.  
  
```  
int GetGroupVertOffset() const;

 
```  
  
### Return Value  
 The vertical offset of a group, in pixels.  
  
##  <a name="cmfctaskspane__gethorzmargin"></a>  CMFCTasksPane::GetHorzMargin  
 Returns the horizontal spacing between a task pane and the edge of the client area.  
  
```  
int GetHorzMargin() const;

 
```  
  
### Return Value  
 The horizontal spacing between a task pane and the edge of the client area.  
  
### Remarks  
 The default spacing between a task pane and the edge of the client area is 12 pixels.  
  
##  <a name="cmfctaskspane__getnextpages"></a>  CMFCTasksPane::GetNextPages  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void GetNextPages(CStringList& lstNextPages) const;

 
```  
  
### Parameters  
 [in] `lstNextPages`  
  
### Remarks  
  
##  <a name="cmfctaskspane__getpagebygroup"></a>  CMFCTasksPane::GetPageByGroup  
 Retrieves the page index for a specified group.  
  
```  
BOOL GetPageByGroup(
    int nGroup,  
    int& nPage) const;

 
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the task group.  
  
 [out] `nPage`  
 Contains the page index for the specified group. If the task group only contains a default page, the returned value is 0.  
  
### Return Value  
 `TRUE` if the group `nGroup` exists; otherwise, `FALSE`.  
  
##  <a name="cmfctaskspane__getpagescount"></a>  CMFCTasksPane::GetPagesCount  
 Returns the number of pages.  
  
```  
int GetPagesCount() const;

 
```  
  
### Return Value  
 The number of pages in the task pane.  
  
##  <a name="cmfctaskspane__getpreviouspages"></a>  CMFCTasksPane::GetPreviousPages  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void GetPreviousPages(CStringList& lstPrevPages) const;

 
```  
  
### Parameters  
 [in] `lstPrevPages`  
  
### Remarks  
  
##  <a name="cmfctaskspane__getscrollbarctrl"></a>  CMFCTasksPane::GetScrollBarCtrl  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CScrollBar* GetScrollBarCtrl(int nBar) const;

 
```  
  
### Parameters  
 [in] `nBar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__gettask"></a>  CMFCTasksPane::GetTask  
 Retrieves a task.  
  
```  
CMFCTasksPaneTask* GetTask(
    int nGroup,  
    int nTask) const;

 
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the group that contains the task.  
  
 [in] `nTask`  
 Specifies the zero-based index of the task in the list specified by `nGroup`.  
  
### Return Value  
 The task at the specified index.  
  
##  <a name="cmfctaskspane__gettaskcount"></a>  CMFCTasksPane::GetTaskCount  
 Returns the number of tasks in a specified group.  
  
```  
int GetTaskCount(int nGroup) const;

 
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the index of the task group.  
  
### Return Value  
 The number of tasks in the specified group, or 0 if `nGroup` is invalid.  
  
##  <a name="cmfctaskspane__gettaskgroup"></a>  CMFCTasksPane::GetTaskGroup  
 Returns a task group for a specified group index.  
  
```  
CMFCTasksPaneTaskGroup* GetTaskGroup(int nGroup) const;

 
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the group to retrieve.  
  
### Return Value  
 The task group at the specified index.  
  
##  <a name="cmfctaskspane__gettasklocation"></a>  CMFCTasksPane::GetTaskLocation  
 Returns the group and the index for a specified task.  
  
```  
BOOL GetTaskLocation(
    UINT uiCommandID,  
    int& nGroup,  
    int& nTask) const;

 
BOOL GetTaskLocation(
    HWND hwndTask,  
    int& nGroup,  
    int& nTask) const;

 
BOOL GetTaskLocation(
    CMFCTasksPaneTask* pTask,  
    int& nGroup,  
    int& nTask) const;

 
```  
  
### Parameters  
 [in] `uiCommandID`  
 Specifies the command ID of the task to find.  
  
 [out] `nGroup`  
 Contains the group index of the task.  
  
 [out] `nTask`  
 Contains the index of the task in the task group.  
  
 [in] `hwndTask`  
 Specifies the window associated with the task.  
  
 [in] `pTask`  
 Specifies the task to find.  
  
### Return Value  
 `TRUE` if the task location was found; `FALSE` if the specified task does not exist.  
  
### Remarks  
 This method retrieves the group index and task index for the specified task. If the method returns `FALSE`, `nGroup` and `nTask` are set to -1.  
  
##  <a name="cmfctaskspane__gettaskshorzoffset"></a>  CMFCTasksPane::GetTasksHorzOffset  
 Returns the horizontal offset of tasks.  
  
```  
int GetTasksHorzOffset() const;

 
```  
  
### Return Value  
 The horizontal offset of tasks from the left and right edges of their parent groups.  
  
### Remarks  
 The default horizontal offset of tasks is 12 pixels.  
  
##  <a name="cmfctaskspane__gettasksiconhorzoffset"></a>  CMFCTasksPane::GetTasksIconHorzOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksIconHorzOffset() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__gettasksiconvertoffset"></a>  CMFCTasksPane::GetTasksIconVertOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTasksIconVertOffset() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__getvertmargin"></a>  CMFCTasksPane::GetVertMargin  
 Returns the vertical margin between a task pane and the edges of the client area.  
  
```  
int GetVertMargin() const;

 
```  
  
### Return Value  
 The vertical margin between a task pane and the edges of the client area.  
  
### Remarks  
 The vertical margin is the space between a task pane and the edges of the client area. The default value of the vertical margin is 12 pixels.  
  
##  <a name="cmfctaskspane__isaccessibilitycompatible"></a>  CMFCTasksPane::IsAccessibilityCompatible  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsAccessibilityCompatible();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__isanimationenabled"></a>  CMFCTasksPane::IsAnimationEnabled  
 Indicates whether animation is enabled.  
  
```  
BOOL IsAnimationEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if the animation that occurs when a user expands or collapses a group is enabled; otherwise, `FALSE`.  
  
### Remarks  
 Call [CMFCTasksPane::EnableAnimation](#cmfctaskspane__enableanimation) to enable or disable animation.  
  
##  <a name="cmfctaskspane__isbackbuttonenabled"></a>  CMFCTasksPane::IsBackButtonEnabled  
 Indicates whether the back button is enabled.  
  
```  
BOOL IsBackButtonEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if the back button is enabled; otherwise, `FALSE`.  
  
### Remarks  
 When a user clicks the back button, the framework displays the previous task page.  
  
##  <a name="cmfctaskspane__isforwardbuttonenabled"></a>  CMFCTasksPane::IsForwardButtonEnabled  
 Indicates whether the forward button is enabled.  
  
```  
BOOL IsForwardButtonEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if the forward button is enabled; otherwise, `FALSE`.  
  
### Remarks  
 The forward button enables forward navigation in the history of task pages.  
  
##  <a name="cmfctaskspane__isgroupcollapseenabled"></a>  CMFCTasksPane::IsGroupCollapseEnabled  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsGroupCollapseEnabled() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__ishistorymenubuttonsenabled"></a>  CMFCTasksPane::IsHistoryMenuButtonsEnabled  
 Indicates whether the **Next** and **Previous** navigation buttons have drop-down menus.  
  
```  
BOOL IsHistoryMenuButtonsEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if the **Next** and **Previous** navigation buttons have drop-down menus; otherwise, `FALSE`.  
  
##  <a name="cmfctaskspane__isnavigationtoolbarenabled"></a>  CMFCTasksPane::IsNavigationToolbarEnabled  
 Indicates whether the navigation toolbar is enabled.  
  
```  
BOOL IsNavigationToolbarEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if the navigation toolbar is enabled; otherwise, `FALSE`.  
  
##  <a name="cmfctaskspane__istoolbox"></a>  CMFCTasksPane::IsToolBox  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsToolBox() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__iswraplabelsenabled"></a>  CMFCTasksPane::IsWrapLabelsEnabled  
 Indicates whether the task pane wraps words in labels.  
  
```  
BOOL IsWrapLabelsEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if words in labels are wrapped; otherwise, `FALSE`.  
  
##  <a name="cmfctaskspane__iswraptasksenabled"></a>  CMFCTasksPane::IsWrapTasksEnabled  
 Specifies whether the framework wraps the task string.  
  
```  
BOOL IsWrapTasksEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if the task string is wrapped; otherwise, `FALSE`.  
  
##  <a name="cmfctaskspane__loadstate"></a>  CMFCTasksPane::LoadState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 [in] `nIndex`  
 [in] `uiID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__onactivatetaskspanepage"></a>  CMFCTasksPane::OnActivateTasksPanePage  
 Called by the framework when it makes a task pane page active.  
  
```  
virtual void OnActivateTasksPanePage();
```  
  
### Remarks  
 Override this method in a derived class to customize the appearance of the task pane page.  
  
##  <a name="cmfctaskspane__oncancel"></a>  CMFCTasksPane::OnCancel  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnCancel();
```  
  
### Remarks  
  
##  <a name="cmfctaskspane__onclicktask"></a>  CMFCTasksPane::OnClickTask  
 Called by the framework when the user clicks an item in the task pane.  
  
```  
virtual void OnClickTask(
    int nGroupNumber,  
    int nTaskNumber,  
    UINT uiCommandID,  
    DWORD dwUserData);
```  
  
### Parameters  
 [in] `nGroupNumber`  
 Specifies the zero-based index of the group that contains the clicked task.  
  
 [in] `nTaskNumber`  
 Specifies the zero-based index of the clicked task.  
  
 [in] `uiCommandID`  
 Specifies the command ID associated with the task.  
  
 [in] `dwUserData`  
 Contains user-defined data associated with the clicked task.  
  
### Remarks  
 The framework calls this method when a user clicks a task. By default, the framework checks the command ID associated with the clicked task and, if it is not zero, sends the `WM_COMMAND` message to the owner of the task pane control.  
  
 Override this method in a derived class to execute custom code when a task is clicked.  
  
##  <a name="cmfctaskspane__onok"></a>  CMFCTasksPane::OnOK  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnOK();
```  
  
### Remarks  
  
##  <a name="cmfctaskspane__onpressbackbutton"></a>  CMFCTasksPane::OnPressBackButton  
 Called by the framework when the user clicks the back button.  
  
```  
virtual void OnPressBackButton();
```  
  
### Remarks  
 By default, the framework displays the previously viewed page.  
  
 Override this method in a derived class to execute custom code when the user clicks the back button.  
  
##  <a name="cmfctaskspane__onpressforwardbutton"></a>  CMFCTasksPane::OnPressForwardButton  
 Called by the framework when the user clicks the forward navigation button.  
  
```  
virtual void OnPressForwardButton();
```  
  
### Remarks  
 By default, the framework displays the page that the user viewed before clicking the **Back** button.  
  
 Override this method in a derived class to execute custom code when the user clicks the forward button.  
  
##  <a name="cmfctaskspane__onpresshomebutton"></a>  CMFCTasksPane::OnPressHomeButton  
 Called by the framework when the user clicks the home navigation button.  
  
```  
virtual void OnPressHomeButton();
```  
  
### Remarks  
 By default, the framework displays the default page for the task group.  
  
 Override this method in a derived class to execute custom code when the user clicks the home navigation button.  
  
##  <a name="cmfctaskspane__onpressotherbutton"></a>  CMFCTasksPane::OnPressOtherButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnPressOtherButton(
    CMFCCaptionMenuButton* pbtn,  
    CWnd* pWndOwner);
```  
  
### Parameters  
 [in] `pbtn`  
 [in] `pWndOwner`  
  
### Remarks  
  
##  <a name="cmfctaskspane__onsetaccdata"></a>  CMFCTasksPane::OnSetAccData  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnSetAccData(long lVal);
```  
  
### Parameters  
 [in] `lVal`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__onupdatecmdui"></a>  CMFCTasksPane::OnUpdateCmdUI  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,  
    BOOL bDisableIfNoHndler);
```  
  
### Parameters  
 [in] `pTarget`  
 [in] `bDisableIfNoHndler`  
  
### Remarks  
  
##  <a name="cmfctaskspane__pretranslatemessage"></a>  CMFCTasksPane::PreTranslateMessage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### Parameters  
 [in] `pMsg`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__recalclayout"></a>  CMFCTasksPane::RecalcLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void RecalcLayout(BOOL bRedraw = TRUE);
```  
  
### Parameters  
 [in] `bRedraw`  
  
### Remarks  
  
##  <a name="cmfctaskspane__removeallgroups"></a>  CMFCTasksPane::RemoveAllGroups  
 Removes all groups on the specified page.  
  
```  
void RemoveAllGroups(int nPageIdx = 0);
```  
  
### Parameters  
 [in] `nPageIdx`  
 Specifies the zero-based index of the page.  
  
### Remarks  
 Removes all groups on the page specified by `nPageIdx`, or all groups if there is only a default page.  
  
##  <a name="cmfctaskspane__removeallpages"></a>  CMFCTasksPane::RemoveAllPages  
 Removes all pages from the task pane except the default (first) page.  
  
```  
void RemoveAllPages();
```  
  
##  <a name="cmfctaskspane__removealltasks"></a>  CMFCTasksPane::RemoveAllTasks  
 Removes all tasks from the specified group.  
  
```  
void RemoveAllTasks(int nGroup);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the group.  
  
##  <a name="cmfctaskspane__removegroup"></a>  CMFCTasksPane::RemoveGroup  
 Removes a group.  
  
```  
void RemoveGroup(int nGroup);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the group to remove.  
  
### Remarks  
 This method removes a single group. To remove all groups, call [CMFCTasksPane::RemoveAllGroups](#cmfctaskspane__removeallgroups) instead.  
  
 When the framework removes a group, all tasks and user windows associated with it are destroyed.  
  
##  <a name="cmfctaskspane__removepage"></a>  CMFCTasksPane::RemovePage  
 Removes a specified page from the task pane.  
  
```  
void RemovePage(int nPageIdx);
```  
  
### Parameters  
 [in] `nPageIdx`  
 Specifies the zero-based index of the page to remove.  
  
##  <a name="cmfctaskspane__removetask"></a>  CMFCTasksPane::RemoveTask  
 Removes a task from a task group.  
  
```  
BOOL RemoveTask(
    int nGroup,  
    int nTask,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the task group that contains the task to remove.  
  
 [in] `nTask`  
 Specifies the zero-based index of the task to remove.  
  
 [in] `bRedraw`  
 `TRUE` to redraw the task pane; otherwise, `FALSE`.  
  
### Return Value  
 `TRUE` if the function succeeds; `FALSE` if `nGroup` or `nTask` is invalid.  
  
##  <a name="cmfctaskspane__savestate"></a>  CMFCTasksPane::SaveState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT) -1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 [in] `nIndex`  
 [in] `uiID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctaskspane__serialize"></a>  CMFCTasksPane::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
  
### Remarks  
  
##  <a name="cmfctaskspane__setactivepage"></a>  CMFCTasksPane::SetActivePage  
 Makes the specified page in the task pane active.  
  
```  
void SetActivePage(int nPageIdx);
```  
  
### Parameters  
 [in] `nPageIdx`  
 Specifies the zero-based index of the page to display.  
  
### Remarks  
 This method asserts if the `nPageIdx` is invalid.  
  
##  <a name="cmfctaskspane__setcaption"></a>  CMFCTasksPane::SetCaption  
 Sets the caption name of a task pane.  
  
```  
void SetCaption(LPCTSTR lpszName);
```  
  
### Parameters  
 [in] `lpszName`  
 Specifies the caption name.  
  
### Remarks  
 If a task pane has multiple pages, the default page has the caption that was set by using this function.  
  
##  <a name="cmfctaskspane__setgroupcaptionheight"></a>  CMFCTasksPane::SetGroupCaptionHeight  
 Sets the height of a group caption.  
  
```  
void SetGroupCaptionHeight(int n = -1);
```  
  
### Parameters  
 [in] `n`  
 Specifies the caption height.  
  
### Remarks  
 Call this method to customize the margins of the task pane elements.  
  
 If `n` is -1, the framework determines the margin value by using the visual manager ( `CMFCVisualManager::GetTasksPaneGroupCaptionHeight`). The default caption height is 25 pixels.  
  
##  <a name="cmfctaskspane__setgroupcaptionhorzoffset"></a>  CMFCTasksPane::SetGroupCaptionHorzOffset  
 Sets the horizontal offset of a group caption.  
  
```  
void SetGroupCaptionHorzOffset(int n = -1);
```  
  
### Parameters  
 [in] `n`  
 Specifies the horizontal offset of the group caption.  
  
##  <a name="cmfctaskspane__setgroupcaptionvertoffset"></a>  CMFCTasksPane::SetGroupCaptionVertOffset  
 Sets the vertical offset of a group caption.  
  
```  
void SetGroupCaptionVertOffset(int n = -1);
```  
  
### Parameters  
 [in] `n`  
 Specifies the vertical offset, in pixels, of the group caption.  
  
##  <a name="cmfctaskspane__setgroupname"></a>  CMFCTasksPane::SetGroupName  
 Sets a group name.  
  
```  
BOOL SetGroupName(
    int nGroup,  
    LPCTSTR lpszGroupName);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the group.  
  
 [in] `lpszGroupName`  
 Specifies the name of the group.  
  
### Return Value  
 `TRUE` if the group name was successfully set; otherwise, `FALSE`.  
  
##  <a name="cmfctaskspane__setgrouptextcolor"></a>  CMFCTasksPane::SetGroupTextColor  
 Sets the text color for a group caption.  
  
```  
BOOL SetGroupTextColor(
    int nGroup,  
    COLORREF color,  
    COLORREF colorHot = (COLORREF)-1);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the group.  
  
 [in] `color`  
 Specifies the text color.  
  
 [in] `colorHot`  
 Specifies the text color for the highlighted group. If -1, the default highlight color is used.  
  
### Return Value  
 `TRUE` if the group text color was successfully changed; otherwise, `FALSE`.  
  
##  <a name="cmfctaskspane__setgroupvertoffset"></a>  CMFCTasksPane::SetGroupVertOffset  
 Sets the vertical offset for a group.  
  
```  
void SetGroupVertOffset(int n = -1);
```  
  
### Parameters  
 [in] `n`  
 Specifies the vertical offset.  
  
### Remarks  
 The vertical offset is the distance between a task group and the border of the task pane.  
  
 Call this method to customize the margins of task pane elements. If `n` is -1, the framework determines the margin value by using the visual manager ( `CMFCVisualManager::GetTasksPaneGroupVertOffset`). The default offset is 15 pixels.  
  
##  <a name="cmfctaskspane__sethorzmargin"></a>  CMFCTasksPane::SetHorzMargin  
 Sets the horizontal margin.  
  
```  
void SetHorzMargin(int n = -1);
```  
  
### Parameters  
 [in] `n`  
 Specifies the margin, in pixels.  
  
### Remarks  
 The horizontal margin is the distance between a task pane and the top or bottom edge of the client area.  
  
 If n is -1, and the framework determines the margin value by using the visual manager ( `CMFCVisualManager::GetTasksPaneHorzMargin`). The default horizontal margin is 12 pixels.  
  
##  <a name="cmfctaskspane__seticonslist"></a>  CMFCTasksPane::SetIconsList  
 Sets the image list.  
  
```  
BOOL SetIconsList(
    UINT uiImageListResID,  
    int cx,  
    COLORREF clrTransparent = RGB(255,
    0,
    255));

 
void SetIconsList(
    HIMAGELIST hIcons);
```  
  
### Parameters  
 [in] `uiImageListResID`  
 Specifies the resource ID of the image list.  
  
 [in] `cx`  
 Specifies the size of icons in the image list.  
  
 [in] `clrTransparent`  
 Specifies the transparent color.  
  
 [in] `hIcons`  
 Specifies the image list that contains the icons for the task pane.  
  
### Remarks  
 The framework stores icons in an image list. Tasks are associated with icons that are stored in that list.  
  
 This method associates an image list with the task pane control. To set the icon for a task when you call [CMFCTasksPane::AddTask](#cmfctaskspane__addtask), set `nTaskIcon` to the appropriate zero-based index in this image list.  
  
##  <a name="cmfctaskspane__setpagecaption"></a>  CMFCTasksPane::SetPageCaption  
 Sets the caption text for a task pane page.  
  
```  
void SetPageCaption(
    int nPageIdx,  
    LPCTSTR lpszName);
```  
  
### Parameters  
 [in] `nPageIdx`  
 Specifies the zero-based index of the page.  
  
 [in] `lpszName`  
 Specifies the caption text to display on the page.  
  
### Remarks  
 If a task pane has multiple pages, the default page has the caption that was set by using this method.  
  
##  <a name="cmfctaskspane__settaskname"></a>  CMFCTasksPane::SetTaskName  
 Sets the name for a task.  
  
```  
BOOL SetTaskName(
    int nGroup,  
    int nTask,  
    LPCTSTR lpszTaskName);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the task group.  
  
 [in] `nTask`  
 Specifies the zero-based index of the task.  
  
 [in] `lpszTaskName`  
 Specifies the task name.  
  
### Return Value  
 `TRUE` if the task name was successfully set; otherwise, `FALSE`.  
  
##  <a name="cmfctaskspane__settaskshorzoffset"></a>  CMFCTasksPane::SetTasksHorzOffset  
 Sets the horizontal offset for tasks.  
  
```  
void SetTasksHorzOffset(int n = -1);
```  
  
### Parameters  
 [in] `n`  
 Specifies the horizontal offset.  
  
### Remarks  
 The horizontal offset is the distance in pixels from the left and right edges of a group.  
  
 If `n` is -1, this method sets the horizontal offset to the value returned by the `CMFCVisualManager::GetTasksPaneTaskHorzOffset` method.  
  
 The default horizontal offset is 12 pixels.  
  
##  <a name="cmfctaskspane__settasksiconhorzoffset"></a>  CMFCTasksPane::SetTasksIconHorzOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetTasksIconHorzOffset(it n = -1);
```  
  
### Parameters  
 [in] `n`  
  
### Remarks  
  
##  <a name="cmfctaskspane__settasksiconvertoffset"></a>  CMFCTasksPane::SetTasksIconVertOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetTasksIconVertOffset(it n = -1);
```  
  
### Parameters  
 [in] `n`  
  
### Remarks  
  
##  <a name="cmfctaskspane__settasktextcolor"></a>  CMFCTasksPane::SetTaskTextColor  
 Sets the text color for a task.  
  
```  
BOOL SetTaskTextColor(
    int nGroup,  
    int nTask,  
    COLORREF color,  
    COLORREF colorHot = (COLORREF)-1);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the task group that contains the task.  
  
 [in] `nTask`  
 Specifies the zero-based index of the task.  
  
 [in] `color`  
 Specifies the text color for the task.  
  
 [in] `colorHot`  
 Specifies the text color for the highlighted group. If -1, this method uses the default highlight color.  
  
### Return Value  
 `TRUE` if the text color for the task was successfully set; otherwise, `FALSE`.  
  
##  <a name="cmfctaskspane__setvertmargin"></a>  CMFCTasksPane::SetVertMargin  
 Sets the vertical margin.  
  
```  
void SetVertMargin(int n = -1);
```  
  
### Parameters  
 [in] `n`  
 Specifies the vertical margin to set.  
  
### Remarks  
 The vertical margin is the distance between a task pane and the vertical edges of the client area.  
  
 If `n` is -1, the framework determines the margin value by using  the visual manager ( `CMFCVisualManager::GetTasksPaneVertMargin`). The default margin is 12 pixels.  
  
##  <a name="cmfctaskspane__setwindowheight"></a>  CMFCTasksPane::SetWindowHeight  
 Sets the height for a window control.  
  
```  
BOOL SetWindowHeight(
    int nGroup,  
    HWND hwndTask,  
    int nWndHeight);

 
BOOL SetWindowHeight(
    HWND hwndTask,  
    int nWndHeight);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the group that contains the window control.  
  
 [in] `hwndTask`  
 Specifies the handle to the window control.  
  
 [in] `nWndHeight`  
 Specifies the height to set.  
  
### Return Value  
 `TRUE` if the height of the window control was successfully set; `FALSE` if `nGroup` is invalid or if `hwndTask` does not exist.  
  
### Remarks  
 Call [CMFCTasksPane::AddWindow](#cmfctaskspane__addwindow) to add tasks with window controls.  
  
##  <a name="cmfctaskspane__showcommandmessagestring"></a>  CMFCTasksPane::ShowCommandMessageString  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ShowCommandMessageString(UINT uiCmdId);
```  
  
### Parameters  
 [in] `uiCmdId`  
  
### Remarks  
  
##  <a name="cmfctaskspane__showtask"></a>  CMFCTasksPane::ShowTask  
 Shows or hides a task.  
  
```  
BOOL ShowTask(
    int nGroup,  
    int nTask,  
    BOOL bShow = TRUE,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 [in] `nGroup`  
 Specifies the zero-based index of the group.  
  
 [in] `nTask`  
 Specifies the zero-based index of the task to show or hide.  
  
 [in] `bShow`  
 `TRUE` to show the task; `FALSE` to hide the task.  
  
 [in] `bRedraw`  
 `TRUE` to redraw the task pane; otherwise, `FALSE`.  
  
### Return Value  
 `TRUE` if the task was successfully shown or hidden; `FALSE` if the specified group or task does not exist.  
  
### Remarks  
 Use [CMFCTasksPane::ShowTaskByCmdId](#cmfctaskspane__showtaskbycmdid) to show or hide a task based on its command ID.  
  
##  <a name="cmfctaskspane__showtaskbycmdid"></a>  CMFCTasksPane::ShowTaskByCmdId  
 Shows or hides a task based on its command ID.  
  
```  
BOOL ShowTaskByCmdId(
    UINT uiCommandID,  
    BOOL bShow = TRUE,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 [in] `uiCommandID`  
 Specifies the command ID of the task to show or hide.  
  
 [in] `bShow`  
 `TRUE` to show the task; `FALSE` to hide the task.  
  
 [in] `bRedraw`  
 `TRUE` to redraw the task pane; otherwise, `FALSE`.  
  
### Return Value  
 `TRUE` if the task was successfully shown or hidden; `FALSE` if a task with the specified command ID does not exist.  
  
### Remarks  
 Use [CMFCTasksPane::ShowTask](#cmfctaskspane__showtask) to show or hide a task based on its command ID.  
  
##  <a name="cmfctaskspane__update"></a>  CMFCTasksPane::Update  
 Refreshes all of the controls in a task pane.  
  
```  
virtual void Update();
```  
  
### Remarks  
 This method updates the task pane caption, adjusts the scroll bar, repositions all tasks, and redraws all of the task pane controls.  
  
 Override this method in a derived class to execute custom code when the framework refreshes the task pane.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCTasksPaneTaskGroup Class](../../mfc/reference/cmfctaskspanetaskgroup-class.md)   
 [CMFCTasksPaneTask Class](../../mfc/reference/cmfctaskspanetask-class.md)   
 [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)   
 [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)
