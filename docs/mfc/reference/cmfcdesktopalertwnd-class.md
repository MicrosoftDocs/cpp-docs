---
description: "Learn more about: CMFCDesktopAlertWnd Class"
title: "CMFCDesktopAlertWnd Class"
ms.date: "10/18/2018"
f1_keywords: ["CMFCDesktopAlertWnd", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::Create", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetAnimationSpeed", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetAnimationType", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetAutoCloseTime", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetCaptionHeight", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetDialogSize", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetLastPos", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetTransparency", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::HasSmallCaption", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnBeforeShow", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnClickLinkButton", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnCommand", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnDraw", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::ProcessCommand", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetAnimationSpeed", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetAnimationType", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetAutoCloseTime", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetSmallCaption", "AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetTransparency"]
helpviewer_keywords: ["CMFCDesktopAlertWnd [MFC], Create", "CMFCDesktopAlertWnd [MFC], GetAnimationSpeed", "CMFCDesktopAlertWnd [MFC], GetAnimationType", "CMFCDesktopAlertWnd [MFC], GetAutoCloseTime", "CMFCDesktopAlertWnd [MFC], GetCaptionHeight", "CMFCDesktopAlertWnd [MFC], GetDialogSize", "CMFCDesktopAlertWnd [MFC], GetLastPos", "CMFCDesktopAlertWnd [MFC], GetTransparency", "CMFCDesktopAlertWnd [MFC], HasSmallCaption", "CMFCDesktopAlertWnd [MFC], OnBeforeShow", "CMFCDesktopAlertWnd [MFC], OnClickLinkButton", "CMFCDesktopAlertWnd [MFC], OnCommand", "CMFCDesktopAlertWnd [MFC], OnDraw", "CMFCDesktopAlertWnd [MFC], ProcessCommand", "CMFCDesktopAlertWnd [MFC], SetAnimationSpeed", "CMFCDesktopAlertWnd [MFC], SetAnimationType", "CMFCDesktopAlertWnd [MFC], SetAutoCloseTime", "CMFCDesktopAlertWnd [MFC], SetSmallCaption", "CMFCDesktopAlertWnd [MFC], SetTransparency"]
ms.assetid: 73a2dd7b-ea84-4ae2-9830-7cf6e8dd2425
---
# CMFCDesktopAlertWnd Class

The `CMFCDesktopAlertWnd` class implements the functionality of a modeless dialog box which appears on the screen to inform the user about an event.

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCDesktopAlertWnd : public CWnd
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCDesktopAlertWnd::Create](#create)|Creates and initializes the desktop alert window.|
|[CMFCDesktopAlertWnd::GetAnimationSpeed](#getanimationspeed)|Returns the animation speed.|
|[CMFCDesktopAlertWnd::GetAnimationType](#getanimationtype)|Returns the animation type.|
|[CMFCDesktopAlertWnd::GetAutoCloseTime](#getautoclosetime)|Returns the auto-close time out.|
|[CMFCDesktopAlertWnd::GetCaptionHeight](#getcaptionheight)|Returns the height of the caption.|
|[CMFCDesktopAlertWnd::GetDialogSize](#getdialogsize)||
|[CMFCDesktopAlertWnd::GetLastPos](#getlastpos)|Returns the last valid position of the desktop alert window on the screen.|
|[CMFCDesktopAlertWnd::GetTransparency](#gettransparency)|Returns the transparency level.|
|[CMFCDesktopAlertWnd::HasSmallCaption](#hassmallcaption)|Determines whether the desktop alert window is displayed with the small caption.|
|[CMFCDesktopAlertWnd::OnBeforeShow](#onbeforeshow)||
|[CMFCDesktopAlertWnd::OnClickLinkButton](#onclicklinkbutton)|Called by the framework when the user clicks a link button located on the desktop alert menu.|
|[CMFCDesktopAlertWnd::OnCommand](#oncommand)|The framework calls this member function when the user selects an item from a menu, when a child control sends a notification message, or when an accelerator keystroke is translated. (Overrides [CWnd::OnCommand](../../mfc/reference/cwnd-class.md#oncommand).)|
|[CMFCDesktopAlertWnd::OnDraw](#ondraw)||
|[CMFCDesktopAlertWnd::ProcessCommand](#processcommand)||
|[CMFCDesktopAlertWnd::SetAnimationSpeed](#setanimationspeed)|Sets the new animation speed.|
|[CMFCDesktopAlertWnd::SetAnimationType](#setanimationtype)|Sets the animation type.|
|[CMFCDesktopAlertWnd::SetAutoCloseTime](#setautoclosetime)|Sets the auto-close time out.|
|[CMFCDesktopAlertWnd::SetSmallCaption](#setsmallcaption)|Switches between small and normal captions.|
|[CMFCDesktopAlertWnd::SetTransparency](#settransparency)|Sets the transparency level.|

## Remarks

A desktop alert window can be transparent, it can appear with animation effects, and it can disappear (after a specified delay or when the user dismisses it by clicking the close button).

A desktop alert window can also contain a default dialog that in turn contains an icon, message text (a label), and a link. Alternatively, a desktop alert window can contain a custom dialog from the application's resources.

You create a desktop alert window in two steps. First, call the constructor to construct the `CMFCDesktopAlertWnd` object. Second, call the [CMFCDesktopAlertWnd::Create](#create) member function to create the window and attach it to the `CMFCDesktopAlertWnd` object.

The `CMFCDesktopAlertWnd` object creates a special child dialog box that fills the client area of the desktop alert window. The dialog owns all the controls that are positioned on it.

To display a custom dialog box on the popup window, follow these steps:

1. Derive a class from `CMFCDesktopAlertDialog`.

1. Create a child dialog box template in the resources.

1. Call [CMFCDesktopAlertWnd::Create](#create) using the resource ID of the dialog box template and a pointer to the runtime class information of the derived class.

1. Program the custom dialog box to handle all notifications coming from the hosted controls, or program the hosted controls to handle these notifications directly.

Use the following functions to control the behavior of the desktop alert window:

- Set the animation type by calling [CMFCDesktopAlertWnd::SetAnimationType](#setanimationtype). Valid options include unfold, slide, and fade.

- Set the animation frame speed by calling [CMFCDesktopAlertWnd::SetAnimationSpeed](#setanimationspeed).

- Set the transparency level by calling [CMFCDesktopAlertWnd::SetTransparency](#settransparency).

- Change the size of the caption to small by calling [CMFCDesktopAlertWnd::SetSmallCaption](#setsmallcaption). The small caption is 7 pixels high.

## Example

The following example illustrates how to use various methods in the `CMFCDesktopAlertWnd` class to configure a `CMFCDesktopAlertWnd` object. The example shows how to set an animation type, set the transparency of the pop-up window, specify that the alert window displays a small caption, and set the time that elapses before the alert window automatically closes. The example also demonstrates how to create and initialize the desktop alert window. This code snippet is part of the [Desktop Alert Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DesktopAlertDemo#1](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwnd-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md)

## Requirements

**Header:** afxDesktopAlertWnd.h

## <a name="create"></a> CMFCDesktopAlertWnd::Create

Creates and initializes the desktop alert window.

```
virtual BOOL Create(
    CWnd* pWndOwner,
    UINT uiDlgResID,
    HMENU hMenu = NULL,
    CPoint ptPos = CPoint(-1,-1),
    CRuntimeClass* pRTIDlgBar = RUNTIME_CLASS(CMFCDesktopAlertDialog));

virtual BOOL Create(
    CWnd* pWndOwner,
    CMFCDesktopAlertWndInfo& params,
    HMENU hMenu = NULL,
    CPoint ptPos = CPoint(-1,-1));
```

### Parameters

*pWndOwner*<br/>
[in, out] Specifies the owner of the alert window. That owner will then receive all notifications for the desktop alert window. This value cannot be NULL.

*uiDlgResID*<br/>
[in] Specifies the resource ID of the alert window.

*hMenu*<br/>
[in] Specifies the menu that displays when the user clicks the menu button. If NULL, the menu button is not displayed.

*ptPos*<br/>
[in] Specifies the initial position where the alert window is displayed, using screen coordinates. If this parameter is (-1, -1), the alert window is displayed in the lower-right corner of the screen.

*pRTIDlgBar*<br/>
[in] Runtime class information for a custom dialog box class that covers the alert window's client area.

*params*<br/>
[in] Specifies parameters that are used to create an alert window.

### Return Value

TRUE if the alert window was created successfully; otherwise, FALSE.

### Remarks

Call this method to create an alert window. The client area of the alert window contains a child dialog box that hosts all controls that are displayed to the user.

The first method overload creates an alert window that contains a child dialog box that is loaded from the application's resources. The first method overload can also specify runtime class information for a custom dialog box class.

The second method overload creates an alert window that contains default controls. You can specify which controls to display by modifying the [CMFCDesktopAlertWndInfo Class](../../mfc/reference/cmfcdesktopalertwndinfo-class.md).

## <a name="getanimationspeed"></a> CMFCDesktopAlertWnd::GetAnimationSpeed

Returns the animation speed.

```
UINT GetAnimationSpeed() const;
```

### Return Value

The animation speed of the alert window, in milliseconds.

### Remarks

The animation speed describes how fast the alert window opens and closes.

## <a name="getanimationtype"></a> CMFCDesktopAlertWnd::GetAnimationType

Returns the animation type.

```
CMFCPopupMenu::ANIMATION_TYPE GetAnimationType();
```

### Return Value

One of the following animation types:

- NO_ANIMATION

- UNFOLD

- SLIDE

- FADE

- SYSTEM_DEFAULT_ANIMATION

## <a name="getautoclosetime"></a> CMFCDesktopAlertWnd::GetAutoCloseTime

Returns the auto-close time out.

```
int GetAutoCloseTime() const;
```

### Return Value

The time, in milliseconds, after which the alert window will automatically close.

### Remarks

Use this method to determine how much time should elapse before the alert window will automatically close.

## <a name="getcaptionheight"></a> CMFCDesktopAlertWnd::GetCaptionHeight

Returns the height of the caption.

```
virtual int GetCaptionHeight();
```

### Return Value

The height, in pixels, of the caption.

### Remarks

This method can be overridden in a derived class. The default implementation either: returns the small caption height value (7 pixels) if the popup window should display the small caption, or the value obtained from the Windows API function `GetSystemMetrics(SM_CYSMCAPTION)`.

## <a name="getlastpos"></a> CMFCDesktopAlertWnd::GetLastPos

Returns the last position of the desktop alert window on the screen.

```
CPoint GetLastPos() const;
```

### Return Value

A point, in screen coordinates.

### Remarks

This method returns the last valid position of the alert window on the screen.

## <a name="gettransparency"></a> CMFCDesktopAlertWnd::GetTransparency

Returns the transparency level.

```
BYTE GetTransparency() const;
```

### Return Value

A transparency level between 0 and 255, inclusive. The greater the value, the more opaque the window.

### Remarks

Use this method to retrieve the current transparency level of the alert window.

## <a name="hassmallcaption"></a> CMFCDesktopAlertWnd::HasSmallCaption

Determines whether the desktop alert window has a small caption or a regular-size caption.

```
BOOL HasSmallCaption() const;
```

### Return Value

TRUE if the popup window is displayed with a small caption; FALSE if the popup window is displayed with a regular-sized caption.

### Remarks

Use this method to determine whether the popup window has a small caption or a regular-size caption. By default, the small caption is 7 pixels high. You can obtain the height of the regular-size caption by calling the Windows API function `GetSystemMetrics(SM_CYCAPTION)`.

## <a name="onbeforeshow"></a> CMFCDesktopAlertWnd::OnBeforeShow

```
virtual BOOL OnBeforeShow(CPoint&);
```

### Parameters

[in] *CPoint&*<br/>

### Return Value

### Remarks

## <a name="onclicklinkbutton"></a> CMFCDesktopAlertWnd::OnClickLinkButton

Called by the framework when the user clicks a link button located on the desktop alert menu.

```
virtual BOOL OnClickLinkButton(UINT uiCmdID);
```

### Parameters

*uiCmdID*<br/>
[in] This parameter is not used.

### Return Value

Always FALSE.

### Remarks

Override this method in a derived class if you want to be notified when a user clicks the link on the alert window.

## <a name="oncommand"></a> CMFCDesktopAlertWnd::OnCommand

```
virtual BOOL OnCommand(
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

[in] *wParam*<br/>

[in] *lParam*<br/>

### Return Value

### Remarks

## <a name="ondraw"></a> CMFCDesktopAlertWnd::OnDraw

```
virtual void OnDraw(CDC* pDC);
```

### Parameters

[in] *pDC*<br/>

### Remarks

## <a name="processcommand"></a> CMFCDesktopAlertWnd::ProcessCommand

```
BOOL ProcessCommand(HWND hwnd);
```

### Parameters

[in] *hwnd*<br/>

### Return Value

### Remarks

## <a name="setanimationspeed"></a> CMFCDesktopAlertWnd::SetAnimationSpeed

Sets the new animation speed.

```cpp
void SetAnimationSpeed(UINT nSpeed);
```

### Parameters

*nSpeed*<br/>
[in] Specifies the new animation speed, in milliseconds.

### Remarks

Call this method to set the animation speed for the alert window. The default animation speed is 30 milliseconds.

## <a name="setanimationtype"></a> CMFCDesktopAlertWnd::SetAnimationType

Sets the animation type.

```cpp
void SetAnimationType(CMFCPopupMenu::ANIMATION_TYPE type);
```

### Parameters

*type*<br/>
[in] Specifies the animation type.

### Remarks

Call this method to set animation type. You can specify one of the following values:

- NO_ANIMATION

- UNFOLD

- SLIDE

- FADE

- SYSTEM_DEFAULT_ANIMATION

## <a name="setautoclosetime"></a> CMFCDesktopAlertWnd::SetAutoCloseTime

Sets the auto-close time out.

```cpp
void SetAutoCloseTime(int nTime);
```

### Parameters

*nTime*<br/>
[in] The time, in milliseconds, that elapses before the alert window automatically closes.

### Remarks

The alert window is automatically closed after the specified time if the user does not interact with the window.

## <a name="setsmallcaption"></a> CMFCDesktopAlertWnd::SetSmallCaption

Switches between small and regular-size captions.

```cpp
void SetSmallCaption(BOOL bSmallCaption = TRUE);
```

### Parameters

*bSmallCaption*<br/>
[in] TRUE to specify that the alert window displays a small caption; otherwise, FALSE to specify that the alert window displays a regular-size caption.

### Remarks

Call this method to display the small or regular-size caption. By default, the small caption is 7 pixels high. You can obtain the size of the regular caption by calling the Windows API function `GetSystemMetrics(SM_CYCAPTION)`.

## <a name="settransparency"></a> CMFCDesktopAlertWnd::SetTransparency

Sets the transparency level of the popup window.

```cpp
void SetTransparency(BYTE nTransparency);
```

### Parameters

*nTransparency*<br/>
[in] Specifies the transparency level. This value must be between 0 and 255, inclusive. The greater the value, the more opaque the window.

### Remarks

Call this function to set the transparency level of the popup window.

## <a name="getdialogsize"></a> CMFCDesktopAlertWnd::GetDialogSize

```
virtual CSize GetDialogSize();
```

### Return Value

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCDesktopAlertWndInfo Class](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)<br/>
[CMFCDesktopAlertDialog Class](../../mfc/reference/cmfcdesktopalertdialog-class.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)
