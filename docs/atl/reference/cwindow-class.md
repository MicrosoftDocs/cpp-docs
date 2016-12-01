---
title: "CWindow Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CWindow"
  - "ATL::CWindow"
  - "CWindow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWindow class"
ms.assetid: fefa00c8-f053-4bcf-87bc-dc84f5386683
caps.latest.revision: 21
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
# CWindow Class
This class provides methods for manipulating a window.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CWindow
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CWindow::CWindow](#cwindow__cwindow)|Constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWindow::ArrangeIconicWindows](#cwindow__arrangeiconicwindows)|Arranges all minimized child windows.|  
|[CWindow::Attach](#cwindow__attach)|Attaches a window to the `CWindow` object.|  
|[CWindow::BeginPaint](#cwindow__beginpaint)|Prepares the window for painting.|  
|[CWindow::BringWindowToTop](#cwindow__bringwindowtotop)|Brings the window to the top of the Z order.|  
|[CWindow::CenterWindow](#cwindow__centerwindow)|Centers the window against a given window.|  
|[CWindow::ChangeClipboardChain](#cwindow__changeclipboardchain)|Removes the window from the chain of Clipboard viewers.|  
|[CWindow::CheckDlgButton](#cwindow__checkdlgbutton)|Changes the check state of the specified button.|  
|[CWindow::CheckRadioButton](#cwindow__checkradiobutton)|Checks the specified radio button.|  
|[CWindow::ChildWindowFromPoint](#cwindow__childwindowfrompoint)|Retrieves the child window containing the specified point.|  
|[CWindow::ChildWindowFromPointEx](#cwindow__childwindowfrompointex)|Retrieves a particular type of child window containing the specified point.|  
|[CWindow::ClientToScreen](#cwindow__clienttoscreen)|Converts client coordinates to screen coordinates.|  
|[CWindow::Create](#cwindow__create)|Creates a window.|  
|[CWindow::CreateCaret](#cwindow__createcaret)|Creates a new shape for the system caret.|  
|[CWindow::CreateGrayCaret](#cwindow__creategraycaret)|Creates a gray rectangle for the system caret.|  
|[CWindow::CreateSolidCaret](#cwindow__createsolidcaret)|Creates a solid rectangle for the system caret.|  
|[CWindow::DeferWindowPos](#cwindow__deferwindowpos)|Updates the specified multiple-window-position structure for the specified window.|  
|[CWindow::DestroyWindow](#cwindow__destroywindow)|Destroys the window associated with the `CWindow` object.|  
|[CWindow::Detach](#cwindow__detach)|Detaches the window from the `CWindow` object.|  
|[CWindow::DlgDirList](#cwindow__dlgdirlist)|Fills a list box with the names of all files matching a specified path or file name.|  
|[CWindow::DlgDirListComboBox](#cwindow__dlgdirlistcombobox)|Fills a combo box with the names of all files matching a specified path or file name.|  
|[CWindow::DlgDirSelect](#cwindow__dlgdirselect)|Retrieves the current selection from a list box.|  
|[CWindow::DlgDirSelectComboBox](#cwindow__dlgdirselectcombobox)|Retrieves the current selection from a combo box.|  
|[CWindow::DragAcceptFiles](#cwindow__dragacceptfiles)|Registers whether the window accepts dragged files.|  
|[CWindow::DrawMenuBar](#cwindow__drawmenubar)|Redraws the window's menu bar.|  
|[CWindow::EnableScrollBar](#cwindow__enablescrollbar)|Enables or disables the scroll bar arrows.|  
|[CWindow::EnableWindow](#cwindow__enablewindow)|Enables or disables input.|  
|[CWindow::EndPaint](#cwindow__endpaint)|Marks the end of painting.|  
|[CWindow::FlashWindow](#cwindow__flashwindow)|Flashes the window once.|  
|[CWindow::GetClientRect](#cwindow__getclientrect)|Retrieves the coordinates of the client area.|  
|[CWindow::GetDC](#cwindow__getdc)|Retrieves a device context for the client area.|  
|[CWindow::GetDCEx](#cwindow__getdcex)|Retrieves a device context for the client area and allows clipping options.|  
|[CWindow::GetDescendantWindow](#cwindow__getdescendantwindow)|Retrieves the specified descendant window.|  
|[CWindow::GetDlgControl](#cwindow__getdlgcontrol)|Retrieves an interface on the specified control.|  
|[CWindow::GetDlgCtrlID](#cwindow__getdlgctrlid)|Retrieves the window's identifier (for child windows only).|  
|[CWindow::GetDlgHost](#cwindow__getdlghost)|Retrieves a pointer to an interface to the ATL Control hosting container.|  
|[CWindow::GetDlgItem](#cwindow__getdlgitem)|Retrieves the specified child window.|  
|[CWindow::GetDlgItemInt](#cwindow__getdlgitemint)|Translates a control's text to an integer.|  
|[CWindow::GetDlgItemText](#cwindow__getdlgitemtext)|Retrieves a control's text.|  
|[CWindow::GetExStyle](#cwindow__getexstyle)|Retrieves the extended window styles.|  
|[CWindow::GetFont](#cwindow__getfont)|Retrieves the window's current font.|  
|[CWindow::GetHotKey](#cwindow__gethotkey)|Determines the hot key associated with the window.|  
|[CWindow::GetIcon](#cwindow__geticon)|Retrieves the window's large or small icon.|  
|[CWindow::GetLastActivePopup](#cwindow__getlastactivepopup)|Retrieves the most recently active pop-up window.|  
|[CWindow::GetMenu](#cwindow__getmenu)|Retrieves the window's menu.|  
|[CWindow::GetNextDlgGroupItem](#cwindow__getnextdlggroupitem)|Retrieves the previous or next control within a group of controls.|  
|[CWindow::GetNextDlgTabItem](#cwindow__getnextdlgtabitem)|Retrieves the previous or next control having the **WS_TABSTOP** style.|  
|[CWindow::GetParent](#cwindow__getparent)|Retrieves the immediate parent window.|  
|[CWindow::GetScrollInfo](#cwindow__getscrollinfo)|Retrieves the parameters of a scroll bar.|  
|[CWindow::GetScrollPos](#cwindow__getscrollpos)|Retrieves the position of the scroll box.|  
|[CWindow::GetScrollRange](#cwindow__getscrollrange)|Retrieves the scroll bar range.|  
|[CWindow::GetStyle](#cwindow__getstyle)|Retrieves the window styles.|  
|[CWindow::GetSystemMenu](#cwindow__getsystemmenu)|Creates a copy of the system menu for modification.|  
|[CWindow::GetTopLevelParent](#cwindow__gettoplevelparent)|Retrieves the top-level parent or owner window.|  
|[CWindow::GetTopLevelWindow](#cwindow__gettoplevelwindow)|Retrieves the top-level owner window.|  
|[CWindow::GetTopWindow](#cwindow__gettopwindow)|Retrieves the top-level child window.|  
|[CWindow::GetUpdateRect](#cwindow__getupdaterect)|Retrieves the coordinates of the smallest rectangle that completely encloses the update region.|  
|[CWindow::GetUpdateRgn](#cwindow__getupdatergn)|Retrieves the update region and copies it into a specified region.|  
|[CWindow::GetWindow](#cwindow__getwindow)|Retrieves the specified window.|  
|[CWindow::GetWindowContextHelpId](#cwindow__getwindowcontexthelpid)|Retrieves the window's help context identifier.|  
|[CWindow::GetWindowDC](#cwindow__getwindowdc)|Retrieves a device context for the entire window.|  
|[CWindow::GetWindowLong](#cwindow__getwindowlong)|Retrieves a 32-bit value at a specified offset into the extra window memory.|  
|[CWindow::GetWindowLongPtr](#cwindow__getwindowlongptr)|Retrieves information about the specified window, including a value at a specified offset into the extra window memory.|  
|[CWindow::GetWindowPlacement](#cwindow__getwindowplacement)|Retrieves the show state and positions.|  
|[CWindow::GetWindowProcessID](#cwindow__getwindowprocessid)|Retrieves the identifier of the process that created the window.|  
|[CWindow::GetWindowRect](#cwindow__getwindowrect)|Retrieves the window's bounding dimensions.|  
|[CWindow::GetWindowRgn](#cwindow__getwindowrgn)|Obtains a copy of the window region of a window.|  
|[CWindow::GetWindowText](#cwindow__getwindowtext)|Retrieves the window's text.|  
|[CWindow::GetWindowTextLength](#cwindow__getwindowtextlength)|Retrieves the length of the window's text.|  
|[CWindow::GetWindowThreadID](#cwindow__getwindowthreadid)|Retrieves the identifier of the thread that created the specified window.|  
|[CWindow::GetWindowWord](#cwindow__getwindowword)|Retrieves a 16-bit value at a specified offset into the extra window memory.|  
|[CWindow::GotoDlgCtrl](#cwindow__gotodlgctrl)|Sets the keyboard focus to a control in the dialog box.|  
|[CWindow::HideCaret](#cwindow__hidecaret)|Hides the system caret.|  
|[CWindow::HiliteMenuItem](#cwindow__hilitemenuitem)|Highlights or removes the highlight from a top-level menu item.|  
|[CWindow::Invalidate](#cwindow__invalidate)|Invalidates the entire client area.|  
|[CWindow::InvalidateRect](#cwindow__invalidaterect)|Invalidates the client area within the specified rectangle.|  
|[CWindow::InvalidateRgn](#cwindow__invalidatergn)|Invalidates the client area within the specified region.|  
|[CWindow::IsChild](#cwindow__ischild)|Determines whether the specified window is a child window.|  
|[CWindow::IsDialogMessage](#cwindow__isdialogmessage)|Determines whether a message is intended for the specified dialog box.|  
|[CWindow::IsDlgButtonChecked](#cwindow__isdlgbuttonchecked)|Determines the check state of the button.|  
|[CWindow::IsIconic](#cwindow__isiconic)|Determines whether the window is minimized.|  
|[CWindow::IsParentDialog](#cwindow__isparentdialog)|Determines if the parent window of a control is a dialog window.|  
|[CWindow::IsWindow](#cwindow__iswindow)|Determines whether the specified window handle identifies an existing window.|  
|[CWindow::IsWindowEnabled](#cwindow__iswindowenabled)|Determines whether the window is enabled for input.|  
|[CWindow::IsWindowUnicode](#cwindow__iswindowunicode)|Determines whether the specified window is a native Unicode window.|  
|[CWindow::IsWindowVisible](#cwindow__iswindowvisible)|Determines the window's visibility state.|  
|[CWindow::IsZoomed](#cwindow__iszoomed)|Determines whether the window is maximized.|  
|[CWindow::KillTimer](#cwindow__killtimer)|Destroys a timer event.|  
|[CWindow::LockWindowUpdate](#cwindow__lockwindowupdate)|Disables or enables drawing in the window.|  
|[CWindow::MapWindowPoints](#cwindow__mapwindowpoints)|Converts a set of points from the window's coordinate space to the coordinate space of another window.|  
|[CWindow::MessageBox](#cwindow__messagebox)|Displays a message box.|  
|[CWindow::ModifyStyle](#cwindow__modifystyle)|Modifies the window styles.|  
|[CWindow::ModifyStyleEx](#cwindow__modifystyleex)|Modifies the extended window styles.|  
|[CWindow::MoveWindow](#cwindow__movewindow)|Changes the window's size and position.|  
|[CWindow::NextDlgCtrl](#cwindow__nextdlgctrl)|Sets the keyboard focus to the next control in the dialog box.|  
|[CWindow::OpenClipboard](#cwindow__openclipboard)|Opens the Clipboard.|  
|[CWindow::PostMessage](#cwindow__postmessage)|Places a message in the message queue associated with the thread that created the window. Returns without waiting for the thread to process the message.|  
|[CWindow::PrevDlgCtrl](#cwindow__prevdlgctrl)|Sets the keyboard focus to the previous control in the dialog box.|  
|[CWindow::Print](#cwindow__print)|Requests that the window be drawn in a specified device context.|  
|[CWindow::PrintClient](#cwindow__printclient)|Requests that the window's client area be drawn in a specified device context.|  
|[CWindow::RedrawWindow](#cwindow__redrawwindow)|Updates a specified rectangle or region in the client area.|  
|[CWindow::ReleaseDC](#cwindow__releasedc)|Releases a device context.|  
|[CWindow::ResizeClient](#cwindow__resizeclient)|Resizes the window.|  
|[CWindow::ScreenToClient](#cwindow__screentoclient)|Converts screen coordinates to client coordinates.|  
|[CWindow::ScrollWindow](#cwindow__scrollwindow)|Scrolls the specified client area.|  
|[CWindow::ScrollWindowEx](#cwindow__scrollwindowex)|Scrolls the specified client area with additional features.|  
|[CWindow::SendDlgItemMessage](#cwindow__senddlgitemmessage)|Sends a message to a control.|  
|[CWindow::SendMessage](#cwindow__sendmessage)|Sends a message to the window and does not return until the window procedure has processed the message.|  
|[CWindow::SendMessageToDescendants](#cwindow__sendmessagetodescendants)|Sends a message to the specified descendant windows.|  
|[CWindow::SendNotifyMessage](#cwindow__sendnotifymessage)|Sends a message to the window. If the window was created by the calling thread, `SendNotifyMessage` does not return until the window procedure has processed the message. Otherwise, it returns immediately.|  
|[CWindow::SetActiveWindow](#cwindow__setactivewindow)|Activates the window.|  
|[CWindow::SetCapture](#cwindow__setcapture)|Sends all subsequent mouse input to the window.|  
|[CWindow::SetClipboardViewer](#cwindow__setclipboardviewer)|Adds the window to the Clipboard viewer chain.|  
|[CWindow::SetDlgCtrlID](#cwindow__setdlgctrlid)|Changes the window's identifier.|  
|[CWindow::SetDlgItemInt](#cwindow__setdlgitemint)|Changes a control's text to the string representation of an integer value.|  
|[CWindow::SetDlgItemText](#cwindow__setdlgitemtext)|Changes a control's text.|  
|[CWindow::SetFocus](#cwindow__setfocus)|Sets the input focus to the window.|  
|[CWindow::SetFont](#cwindow__setfont)|Changes the window's current font.|  
|[CWindow::SetHotKey](#cwindow__sethotkey)|Associates a hot key with the window.|  
|[CWindow::SetIcon](#cwindow__seticon)|Changes the window's large or small icon.|  
|[CWindow::SetMenu](#cwindow__setmenu)|Changes the window's current menu.|  
|[CWindow::SetParent](#cwindow__setparent)|Changes the parent window.|  
|[CWindow::SetRedraw](#cwindow__setredraw)|Sets or clears the redraw flag.|  
|[CWindow::SetScrollInfo](#cwindow__setscrollinfo)|Sets the parameters of a scroll bar.|  
|[CWindow::SetScrollPos](#cwindow__setscrollpos)|Changes the position of the scroll box.|  
|[CWindow::SetScrollRange](#cwindow__setscrollrange)|Changes the scroll bar range.|  
|[CWindow::SetTimer](#cwindow__settimer)|Creates a timer event.|  
|[CWindow::SetWindowContextHelpId](#cwindow__setwindowcontexthelpid)|Sets the window's help context identifier.|  
|[CWindow::SetWindowLong](#cwindow__setwindowlong)|Sets a 32-bit value at a specified offset into the extra window memory.|  
|[CWindow::SetWindowLongPtr](#cwindow__setwindowlongptr)|Changes an attribute of the specified window, and also sets a value at the specified offset in the extra window memory.|  
|[CWindow::SetWindowPlacement](#cwindow__setwindowplacement)|Sets the show state and positions.|  
|[CWindow::SetWindowPos](#cwindow__setwindowpos)|Sets the size, position, and Z order.|  
|[CWindow::SetWindowRgn](#cwindow__setwindowrgn)|Sets the window region of a window.|  
|[CWindow::SetWindowText](#cwindow__setwindowtext)|Changes the window's text.|  
|[CWindow::SetWindowWord](#cwindow__setwindowword)|Sets a 16-bit value at a specified offset into the extra window memory.|  
|[CWindow::ShowCaret](#cwindow__showcaret)|Displays the system caret.|  
|[CWindow::ShowOwnedPopups](#cwindow__showownedpopups)|Shows or hides the pop-up windows owned by the window.|  
|[CWindow::ShowScrollBar](#cwindow__showscrollbar)|Shows or hides a scroll bar.|  
|[CWindow::ShowWindow](#cwindow__showwindow)|Sets the window's show state.|  
|[CWindow::ShowWindowAsync](#cwindow__showwindowasync)|Sets the show state of a window created by a different thread.|  
|[CWindow::UpdateWindow](#cwindow__updatewindow)|Updates the client area.|  
|[CWindow::ValidateRect](#cwindow__validaterect)|Validates the client area within the specified rectangle.|  
|[CWindow::ValidateRgn](#cwindow__validatergn)|Validates the client area within the specified region.|  
|[CWindow::WinHelp](#cwindow__winhelp)|Starts Windows Help.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CWindow::operator HWND](#cwindow__operator_hwnd)|Converts the `CWindow` object to an `HWND`.|  
|[CWindow::operator =](#cwindow__operator_eq)|Assigns an `HWND` to the `CWindow` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CWindow::m_hWnd](#cwindow__m_hwnd)|The handle to the window associated with the `CWindow` object.|  
|[CWindow::rcDefault](#cwindow__rcdefault)|Contains default window dimensions.|  
  
## Remarks  
 `CWindow` provides the base functionality for manipulating a window in ATL. Many of the `CWindow` methods simply wrap one of the Win32 API functions. For example, compare the prototypes for `CWindow::ShowWindow` and `ShowWindow`:  
  
|CWindow method|Win32 function|  
|--------------------|--------------------|  
|**BOOL ShowWindow( int** `nCmdShow` **);**|**BOOL ShowWindow( HWND** `hWnd` **, int** `nCmdShow` **);**|  
  
 `CWindow::ShowWindow` calls the Win32 function `ShowWindow` by passing `CWindow::m_hWnd` as the first parameter. Every `CWindow` method that directly wraps a Win32 function passes the `m_hWnd` member; therefore, much of the `CWindow` documentation will refer you to the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
> [!NOTE]
>  Not every window-related Win32 function is wrapped by `CWindow`, and not every `CWindow` method wraps a Win32 function.  
  
 `CWindow::m_hWnd` stores the `HWND` that identifies a window. An `HWND` is attached to your object when you:  
  
-   Specify an `HWND` in `CWindow`'s constructor.  
  
-   Call `CWindow::Attach`.  
  
-   Use `CWindow`'s **operator =**.  
  
-   Create or subclass a window using one of the following classes derived from `CWindow`:  
  
 [CWindowImpl](../../atl/reference/cwindowimpl-class.md) Allows you to create a new window or subclass an existing window.  
  
 [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) Implements a window contained within another object. You can create a new window or subclass an existing window.  
  
 [CDialogImpl](../../atl/reference/cdialogimpl-class.md) Allows you to create a modal or modeless dialog box.  
  
 For more information about windows, see [Windows](http://msdn.microsoft.com/library/windows/desktop/ms632595) and subsequent topics in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. For more information about using windows in ATL, see the article [ATL Window Classes](../../atl/atl-window-classes.md).  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="cwindow__arrangeiconicwindows"></a>  CWindow::ArrangeIconicWindows  
 Arranges all minimized child windows.  
  
```
UINT ArrangeIconicWindows() throw();
```  
  
### Remarks  
 See [ArrangeIconicWindows](http://msdn.microsoft.com/library/windows/desktop/ms632671) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__attach"></a>  CWindow::Attach  
 Attaches the window identified by `hWndNew` to the `CWindow` object.  
  
```
void Attach(HWND hWndNew) throw();
```  
  
### Parameters  
 `hWndNew`  
 [in] The handle to a window.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#1](../../atl/codesnippet/cpp/cwindow-class_1.cpp)]  
  
##  <a name="cwindow__beginpaint"></a>  CWindow::BeginPaint  
 Prepares the window for painting.  
  
```
HDC BeginPaint(LPPAINTSTRUCT lpPaint) throw();
```  
  
### Remarks  
 See [BeginPaint](http://msdn.microsoft.com/library/windows/desktop/dd183362) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#2](../../atl/codesnippet/cpp/cwindow-class_2.cpp)]  
  
##  <a name="cwindow__bringwindowtotop"></a>  CWindow::BringWindowToTop  
 Brings the window to the top of the Z order.  
  
```
BOOL BringWindowToTop() throw();
```  
  
### Remarks  
 See [BringWindowToTop](http://msdn.microsoft.com/library/windows/desktop/ms632673) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#3](../../atl/codesnippet/cpp/cwindow-class_3.cpp)]  
  
##  <a name="cwindow__centerwindow"></a>  CWindow::CenterWindow  
 Centers the window against a given window.  
  
```
BOOL CenterWindow(HWND hWndCenter = NULL) throw();
```  
  
### Parameters  
 `hWndCenter`  
 [in] The handle to the window against which to center. If this parameter is **NULL** (the default value), the method will set `hWndCenter` to the window's parent window if it is a child window. Otherwise, it will set `hWndCenter` to the window's owner window.  
  
### Return Value  
 **TRUE** if the window is successfully centered; otherwise, **FALSE**.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#4](../../atl/codesnippet/cpp/cwindow-class_4.cpp)]  
  
##  <a name="cwindow__changeclipboardchain"></a>  CWindow::ChangeClipboardChain  
 Removes the window from the chain of Clipboard viewers.  
  
```
BOOL ChangeClipboardChain(HWND hWndNewNext) throw();
```  
  
### Remarks  
 See [ChangeClipboardChain](http://msdn.microsoft.com/library/windows/desktop/ms649034) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__checkdlgbutton"></a>  CWindow::CheckDlgButton  
 Changes the check state of the specified button.  
  
```
BOOL CheckDlgButton(int nIDButton,  UINT nCheck) throw();
```  
  
### Remarks  
 See [CheckDlgButton](http://msdn.microsoft.com/library/windows/desktop/bb761875) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__checkradiobutton"></a>  CWindow::CheckRadioButton  
 Checks the specified radio button.  
  
```
BOOL CheckRadioButton(int nIDFirstButton,
    int nIDLastButton,
    int nIDCheckButton) throw();
```  
  
### Remarks  
 See [CheckRadioButton](http://msdn.microsoft.com/library/windows/desktop/bb761877) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__childwindowfrompoint"></a>  CWindow::ChildWindowFromPoint  
 Retrieves the child window containing the specified point.  
  
```
HWND ChildWindowFromPoint(POINT point) const throw();
```  
  
### Remarks  
 See [ChildWindowFromPoint](http://msdn.microsoft.com/library/windows/desktop/ms632676) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__childwindowfrompointex"></a>  CWindow::ChildWindowFromPointEx  
 Retrieves a particular type of child window containing the specified point.  
  
```
HWND ChildWindowFromPoint(POINT point,  UINT uFlags) const throw();
```  
  
### Remarks  
 See [ChildWindowFromPointEx](http://msdn.microsoft.com/library/windows/desktop/ms632677) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__clienttoscreen"></a>  CWindow::ClientToScreen  
 Converts client coordinates to screen coordinates.  
  
```
BOOL ClientToScreen(LPPOINT lpPoint) const throw();

BOOL ClientToScreen(LPRECT lpRect) const throw();
```  
  
### Remarks  
 See [ClientToScreen](http://msdn.microsoft.com/library/windows/desktop/dd183434) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 The second version of this method allows you to convert the coordinates of a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure.  
  
##  <a name="cwindow__create"></a>  CWindow::Create  
 Creates a window.  
  
```
HWND Create(LPCTSTR lpstrWndClass,
    HWND hWndParent,
    _U_RECT rect = NULL,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL) throw();
```  
  
### Parameters  
 `lpstrWndClass`  
 [in] A pointer to the window's class.  
  
 `hWndParent`  
 [in] The handle to the parent or owner window.  
  
 `rect`  
 [in] A variable of type [_U_RECT](../../atl/reference/u-rect-class.md) specifying the position of the window. The default value is **NULL**. When this parameter is **NULL**, the value of `CWindow::rcDefault` is used.  
  
 `szWindowName`  
 [in] Specifies the name of the window. The default value is **NULL**.  
  
 `dwStyle`  
 [in] The style of the window. The default value is 0, meaning no style is specified. For a list of possible values, see [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwExStyle`  
 [in] The extended window style. The default value is 0, meaning no extended style is specified. For a list of possible values, see [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `MenuOrID`  
 [in] A variable of type [_U_MENUorID](../../atl/reference/u-menuorid-class.md) specifying a handle to a menu or a window identifier. The default value is 0U.  
  
 `lpCreateParam`  
 A pointer to the window-creation data contained in a [CREATESTRUCT](http://msdn.microsoft.com/library/windows/desktop/ms632603) structure.  
  
### Return Value  
 If successful, the handle to the newly created window, specified by [m_hWnd](#cwindow__m_hwnd). Otherwise, **NULL**.  
  
### Remarks  
 `CWindow::rcDefault` is defined as `__declspec(selectany) RECT CWindow::rcDefault = {CW_USEDEFAULT, CW_USEDEFAULT, 0, 0};`.  
  
 See [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information.  
  
 **Note** If 0 is used as the value for the `MenuOrID` parameter, it must be specified as 0U (the default value) to avoid a compiler error.  
  
##  <a name="cwindow__createcaret"></a>  CWindow::CreateCaret  
 Creates a new shape for the system caret.  
  
```
BOOL CreateCaret(HBITMAP pBitmap) throw();
```  
  
### Remarks  
 See [CreateCaret](http://msdn.microsoft.com/library/windows/desktop/ms648399) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__creategraycaret"></a>  CWindow::CreateGrayCaret  
 Creates a gray rectangle for the system caret.  
  
```
BOOL CreateGrayCaret(int nWidth,  int nHeight) throw();
```  
  
### Remarks  
 See [CreateCaret](http://msdn.microsoft.com/library/windows/desktop/ms648399) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Passes (HBITMAP) 1 for the bitmap handle parameter to the Win32 function.  
  
##  <a name="cwindow__createsolidcaret"></a>  CWindow::CreateSolidCaret  
 Creates a solid rectangle for the system caret.  
  
```
BOOL CreateSolidCaret(int nWidth,  int nHeight) throw();
```  
  
### Remarks  
 See [CreateCaret](http://msdn.microsoft.com/library/windows/desktop/ms648399) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Passes (HBITMAP) 0 for the bitmap handle parameter to the Win32 function.  
  
##  <a name="cwindow__cwindow"></a>  CWindow::CWindow  
 The constructor.  
  
```
CWindow(HWND hWnd = NULL) throw();
```  
  
### Parameters  
 `hWnd`  
 [in] The handle to a window.  
  
### Remarks  
 Initializes the [m_hWnd](#cwindow__m_hwnd) member to `hWnd`, which by default is **NULL**.  
  
> [!NOTE]
> `CWindow::CWindow` does not create a window. Classes [CWindowImpl](../../atl/reference/cwindowimpl-class.md), [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md), and [CDialogImpl](../../atl/reference/cdialogimpl-class.md) (all of which derive from `CWindow`) provide a method to create a window or dialog box, which is then assigned to `CWindow::m_hWnd`. You can also use the [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) Win32 function.  
  
##  <a name="cwindow__deferwindowpos"></a>  CWindow::DeferWindowPos  
 Updates the specified multiple-window-position structure for the specified window.  
  
```
HDWP DeferWindowPos(HDWP hWinPosInfo,
    HWND hWndInsertAfter,
    int x,
    int y,
    int cx,
    int cy,
    UINT uFlags) throw();
```  
  
### Remarks  
 See [DeferWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms632681) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__destroywindow"></a>  CWindow::DestroyWindow  
 Destroys the window associated with the `CWindow` object and sets [m_hWnd](#cwindow__m_hwnd) to **NULL**.  
  
```
BOOL DestroyWindow() throw();
```  
  
### Remarks  
 See [DestroyWindow](http://msdn.microsoft.com/library/windows/desktop/ms632682) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 It does not destroy the `CWindow` object itself.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#5](../../atl/codesnippet/cpp/cwindow-class_5.cpp)]  
  
##  <a name="cwindow__detach"></a>  CWindow::Detach  
 Detaches [m_hWnd](#cwindow__m_hwnd) from the `CWindow` object and sets `m_hWnd` to **NULL**.  
  
```
HWND Detach() throw();
```  
  
### Return Value  
 The `HWND` associated with the `CWindow` object.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#6](../../atl/codesnippet/cpp/cwindow-class_6.cpp)]  
  
##  <a name="cwindow__dlgdirlist"></a>  CWindow::DlgDirList  
 Fills a list box with the names of all files matching a specified path or file name.  
  
```
int DlgDirList(LPTSTR lpPathSpec,
    int nIDListBox,
    int nIDStaticPath,
    UINT nFileType) throw();
```  
  
### Remarks  
 See [DlgDirList](http://msdn.microsoft.com/library/windows/desktop/bb761366) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__dlgdirlistcombobox"></a>  CWindow::DlgDirListComboBox  
 Fills a combo box with the names of all files matching a specified path or file name.  
  
```
int DlgDirListComboBox(LPTSTR lpPathSpec,
    int nIDComboBox,
    int nIDStaticPath,
    UINT nFileType) throw();
```  
  
### Remarks  
 See [DlgDirListComboBox](http://msdn.microsoft.com/library/windows/desktop/bb775935) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__dlgdirselect"></a>  CWindow::DlgDirSelect  
 Retrieves the current selection from a list box.  
  
```
BOOL DlgDirSelect(LPTSTR lpString,
    int nCount,
    int nIDListBox) throw();
```  
  
### Remarks  
 See [DlgDirSelectEx](http://msdn.microsoft.com/library/windows/desktop/bb761368) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__dlgdirselectcombobox"></a>  CWindow::DlgDirSelectComboBox  
 Retrieves the current selection from a combo box.  
  
```
BOOL DlgDirSelectComboBox(LPTSTR lpString,
    int nCount,
    int nIDComboBox) throw();
```  
  
### Remarks  
 See [DlgDirSelectComboBoxEx](http://msdn.microsoft.com/library/windows/desktop/bb775937) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__dragacceptfiles"></a>  CWindow::DragAcceptFiles  
 Registers whether the window accepts dragged files.  
  
```
void DragAcceptFiles(BOOL bAccept = TRUE);
```  
  
### Remarks  
 See [DragAcceptFiles](http://msdn.microsoft.com/library/windows/desktop/bb776406) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__drawmenubar"></a>  CWindow::DrawMenuBar  
 Redraws the window's menu bar.  
  
```
BOOL DrawMenuBar() throw();
```  
  
### Remarks  
 See [DrawMenuBar](http://msdn.microsoft.com/library/windows/desktop/ms647633) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__enablescrollbar"></a>  CWindow::EnableScrollBar  
 Enables or disables the scroll bar arrows.  
  
```
BOOL EnableScrollBar(UINT uSBFlags,  UINT uArrowFlags = ESB_ENABLE_BOTH) throw();
```  
  
### Remarks  
 See [EnableScrollBar](http://msdn.microsoft.com/library/windows/desktop/bb787579) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__enablewindow"></a>  CWindow::EnableWindow  
 Enables or disables input.  
  
```
BOOL EnableWindow(BOOL bEnable = TRUE) throw();
```  
  
### Remarks  
 See [EnableWindow](http://msdn.microsoft.com/library/windows/desktop/ms646291) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#7](../../atl/codesnippet/cpp/cwindow-class_7.cpp)]  
  
##  <a name="cwindow__endpaint"></a>  CWindow::EndPaint  
 Marks the end of painting.  
  
```
void EndPaint(LPPAINTSTRUCT lpPaint) throw();
```  
  
### Remarks  
 See [EndPaint](http://msdn.microsoft.com/library/windows/desktop/dd162598) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#2](../../atl/codesnippet/cpp/cwindow-class_2.cpp)]  
  
##  <a name="cwindow__flashwindow"></a>  CWindow::FlashWindow  
 Flashes the window once.  
  
```
BOOL FlashWindow(BOOL bInvert) throw();
```  
  
### Remarks  
 See [FlashWindow](http://msdn.microsoft.com/library/windows/desktop/ms679346) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getclientrect"></a>  CWindow::GetClientRect  
 Retrieves the coordinates of the client area.  
  
```
BOOL GetClientRect(LPRECT lpRect) const throw();
```  
  
### Remarks  
 See [GetClientRect](http://msdn.microsoft.com/library/windows/desktop/ms633503) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#8](../../atl/codesnippet/cpp/cwindow-class_8.cpp)]  
  
##  <a name="cwindow__getdc"></a>  CWindow::GetDC  
 Retrieves a device context for the client area.  
  
```
HDC GetDC() throw();
```  
  
### Remarks  
 See [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#9](../../atl/codesnippet/cpp/cwindow-class_9.cpp)]  
  
##  <a name="cwindow__getdcex"></a>  CWindow::GetDCEx  
 Retrieves a device context for the client area and allows clipping options.  
  
```
HDC GetDCEx(HRGN hRgnClip,  DWORD flags) throw();
```  
  
### Remarks  
 See [GetDCEx](http://msdn.microsoft.com/library/windows/desktop/dd144873) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getdescendantwindow"></a>  CWindow::GetDescendantWindow  
 Finds the descendant window specified by the given identifier.  
  
```
HWND GetDescendantWindow(int nID) const throw();
```  
  
### Parameters  
 `nID`  
 [in] The identifier of the descendant window to be retrieved.  
  
### Return Value  
 The handle to a descendant window.  
  
### Remarks  
 `GetDescendantWindow` searches the entire tree of child windows, not only the windows that are immediate children.  
  
##  <a name="cwindow__getdlgcontrol"></a>  CWindow::GetDlgControl  
 Call this function to get a pointer to an interface of an ActiveX control that is hosted by a composite control or a control-hosting dialog.  
  
```
HRESULT GetDlgControl(int nID,
    REFIID iid,
    void** ppCtrl) throw();
```  
  
### Parameters  
 `nID`  
 [in] The resource ID of the control being retrieved.  
  
 `iid`  
 [in] The ID of the interface you would like to get from the control.  
  
 *ppCtrl*  
 [out] The pointer to the interface.  
  
### Return Value  
 Returns `S_OK` on success or any valid error `HRESULT`. For example, the function returns **E_FAIL** if the control specified by `nID` cannot be found and it returns **E_NOINTERFACE** if the control can be found, but it doesn't support the interface specified by `iid`.  
  
### Remarks  
 Using this pointer, you can call methods on the interface.  
  
##  <a name="cwindow__getdlgctrlid"></a>  CWindow::GetDlgCtrlID  
 Retrieves the window's identifier (for child windows only).  
  
```
int GetDlgCtrlID() const throw();
```  
  
### Remarks  
 See [GetDlgCtrlID](http://msdn.microsoft.com/library/windows/desktop/ms645478) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getdlghost"></a>  CWindow::GetDlgHost  
 Retrieves a pointer to an interface to the ATL Control hosting container.  
  
```
HRESULT GetDlgHost(int nID,
    REFIID iid,
    void** ppHost) throw();
```  
  
### Parameters  
 `nID`  
 [in] The resource ID of the control being retrieved.  
  
 `iid`  
 [in] The ID of the interface you would like to get from the control.  
  
 *ppHost*  
 [out] The pointer to the interface.  
  
### Return Value  
 Returns `S_OK` if the window specified by `iid` is a Control Container, and the requested interface could be retrieved. Returns **E_FAIL** if the window is not a Control Container, or if the interface requested could not be retrieved. If a window with the specified ID could not be found, then the return value is equal to HRESULT_FROM_WIN32(ERROR_CONTROL_ID_NOT_FOUND).  
  
### Remarks  
 Using this pointer, you can call methods on the interface.  
  
##  <a name="cwindow__getdlgitem"></a>  CWindow::GetDlgItem  
 Retrieves the specified child window.  
  
```
HWND GetDlgItem(int nID) const throw();
```  
  
### Remarks  
 See [GetDlgItem](http://msdn.microsoft.com/library/windows/desktop/ms645481) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getdlgitemint"></a>  CWindow::GetDlgItemInt  
 Translates a control's text to an integer.  
  
```
UINT GetDlgItemInt(int nID,
    BOOL* lpTrans = NULL,
    BOOL bSigned = TRUE) const throw();
```  
  
### Remarks  
 See [GetDlgItemInt](http://msdn.microsoft.com/library/windows/desktop/ms645485) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getdlgitemtext"></a>  CWindow::GetDlgItemText  
 Retrieves a control's text.  
  
```
UINT GetDlgItemText(int nID,
    LPTSTR lpStr,
    int nMaxCount) const throw();
BOOL GetDlgItemText(int nID,
    BSTR& bstrText) const throw();
```  
  
### Remarks  
 See [GetDlgItemText](http://msdn.microsoft.com/library/windows/desktop/ms645489) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Remarks  
 The second version of this method allows you to copy the control's text to a `BSTR`. This version returns **TRUE** if the text is successfully copied; otherwise, **FALSE**.  
  
##  <a name="cwindow__getexstyle"></a>  CWindow::GetExStyle  
 Retrieves the extended window styles of the window.  
  
```
DWORD GetExStyle() const throw();
```  
  
### Return Value  
 The window's extended styles.  
  
### Remarks  
 To retrieve the regular window styles, call [GetStyle](#cwindow__getstyle).  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#10](../../atl/codesnippet/cpp/cwindow-class_10.cpp)]  
  
##  <a name="cwindow__getfont"></a>  CWindow::GetFont  
 Retrieves the window's current font by sending a [WM_GETFONT](http://msdn.microsoft.com/library/windows/desktop/ms632624) message to the window.  
  
```
HFONT GetFont() const throw();
```  
  
### Return Value  
 A font handle.  
  
##  <a name="cwindow__gethotkey"></a>  CWindow::GetHotKey  
 Determines the hot key associated with the window by sending a **WM_GETHOTKEY** message.  
  
```
DWORD GetHotKey() const throw();
```  
  
### Return Value  
 The virtual key code and modifiers for the hot key associated with the window. For a list of possible modifiers, see [WM_GETHOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646278) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. For a list of of standard virtual key codes, see Winuser.h.  
  
##  <a name="cwindow__geticon"></a>  CWindow::GetIcon  
 Retrieves the handle to the window's large or small icon.  
  
```
HICON GetIcon(BOOL bBigIcon = TRUE) const;
```  
  
### Parameters  
 `bBigIcon`  
 [in] If **TRUE** (the default value) the method returns the large icon. Otherwise, it returns the small icon.  
  
### Return Value  
 An icon handle.  
  
### Remarks  
 `GetIcon` sends a [WM_GETICON](http://msdn.microsoft.com/library/windows/desktop/ms632625) message to the window.  
  
##  <a name="cwindow__getlastactivepopup"></a>  CWindow::GetLastActivePopup  
 Retrieves the most recently active pop-up window.  
  
```
HWND GetLastActivePopup() const throw();
```  
  
### Remarks  
 See [GetLastActivePopup](http://msdn.microsoft.com/library/windows/desktop/ms633507) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getmenu"></a>  CWindow::GetMenu  
 Retrieves the window's menu.  
  
```
HMENU GetMenu() const throw();
```  
  
### Remarks  
 See [GetMenu](http://msdn.microsoft.com/library/windows/desktop/ms647640) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getnextdlggroupitem"></a>  CWindow::GetNextDlgGroupItem  
 Retrieves the previous or next control within a group of controls.  
  
```
HWND GetNextDlgGroupItem(HWND hWndCtl,  BOOL bPrevious = FALSE) const throw();
```  
  
### Remarks  
 See [GetNextDlgGroupItem](http://msdn.microsoft.com/library/windows/desktop/ms645492) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getnextdlgtabitem"></a>  CWindow::GetNextDlgTabItem  
 Retrieves the previous or next control having the **WS_TABSTOP** style.  
  
```
HWND GetNextDlgTabItem(HWND hWndCtl,  BOOL bPrevious = FALSE) const throw();
```  
  
### Remarks  
 See [GetNextDlgTabItem](http://msdn.microsoft.com/library/windows/desktop/ms645495) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getparent"></a>  CWindow::GetParent  
 Retrieves the immediate parent window.  
  
```
HWND GetParent() const throw();
```  
  
### Remarks  
 See [GetParent](http://msdn.microsoft.com/library/windows/desktop/ms633510) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#11](../../atl/codesnippet/cpp/cwindow-class_11.cpp)]  
  
##  <a name="cwindow__getscrollinfo"></a>  CWindow::GetScrollInfo  
 Retrieves the parameters of a scroll bar.  
  
```
BOOL GetScrollInfo(int nBar,  LPSCROLLINFO lpScrollInfo) throw();
```  
  
### Remarks  
 See [GetScrollInfo](http://msdn.microsoft.com/library/windows/desktop/bb787583) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getscrollpos"></a>  CWindow::GetScrollPos  
 Retrieves the position of the scroll box.  
  
```
int GetScrollPos(int nBar) const throw();
```  
  
### Remarks  
 See [GetScrollPos](http://msdn.microsoft.com/library/windows/desktop/bb787585) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getscrollrange"></a>  CWindow::GetScrollRange  
 Retrieves the scroll bar range.  
  
```
BOOL GetScrollRange(int nBar,
    LPINT lpMinPos,
    LPINT lpMaxPos) const throw();
```  
  
### Remarks  
 See [GetScrollRange](http://msdn.microsoft.com/library/windows/desktop/bb787587) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getstyle"></a>  CWindow::GetStyle  
 Retrieves the window styles of the window.  
  
```
DWORD GetStyle() const throw();
```  
  
### Return Value  
 The window's styles.  
  
### Remarks  
 To retrieve the extended window styles, call [GetExStyle](#cwindow__getexstyle).  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#12](../../atl/codesnippet/cpp/cwindow-class_12.cpp)]  
  
##  <a name="cwindow__getsystemmenu"></a>  CWindow::GetSystemMenu  
 Creates a copy of the system menu for modification.  
  
```
HMENU GetSystemMenu(BOOL bRevert) const throw();
```  
  
### Remarks  
 See [GetSystemMenu](http://msdn.microsoft.com/library/windows/desktop/ms647985) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__gettoplevelparent"></a>  CWindow::GetTopLevelParent  
 Retrieves the window's top-level parent window.  
  
```
HWND GetTopLevelParent() const throw();
```  
  
### Return Value  
 The handle to the top-level parent window.  
  
##  <a name="cwindow__gettoplevelwindow"></a>  CWindow::GetTopLevelWindow  
 Retrieves the window's top-level parent or owner window.  
  
```
HWND GetTopLevelWindow() const throw();
```  
  
### Return Value  
 The handle to the top-level owner window.  
  
##  <a name="cwindow__gettopwindow"></a>  CWindow::GetTopWindow  
 Retrieves the top-level child window.  
  
```
HWND GetTopWindow() const throw();
```  
  
### Remarks  
 See [GetTopWindow](http://msdn.microsoft.com/library/windows/desktop/ms633514) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#13](../../atl/codesnippet/cpp/cwindow-class_13.cpp)]  
  
##  <a name="cwindow__getupdaterect"></a>  CWindow::GetUpdateRect  
 Retrieves the coordinates of the smallest rectangle that completely encloses the update region.  
  
```
BOOL GetUpdateRect(LPRECT lpRect,  BOOL bErase = FALSE) throw();
```  
  
### Remarks  
 See [GetUpdateRect](http://msdn.microsoft.com/library/windows/desktop/dd144943) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getupdatergn"></a>  CWindow::GetUpdateRgn  
 Retrieves the update region and copies it into a specified region.  
  
```
int GetUpdateRgn(HRGN hRgn,  BOOL bErase = FALSE) throw();
```  
  
### Remarks  
 See [GetUpdateRgn](http://msdn.microsoft.com/library/windows/desktop/dd144944) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getwindow"></a>  CWindow::GetWindow  
 Retrieves the specified window.  
  
```
HWND GetWindow(UINT nCmd) const throw();
```  
  
### Remarks  
 See `GetWindow` in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getwindowcontexthelpid"></a>  CWindow::GetWindowContextHelpId  
 Retrieves the window's help context identifier.  
  
```
DWORD GetWindowContextHelpId() const throw();
```  
  
### Remarks  
 See [GetWindowContextHelpId](http://msdn.microsoft.com/library/windows/desktop/bb776429) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getwindowdc"></a>  CWindow::GetWindowDC  
 Retrieves a device context for the entire window.  
  
```
HDC GetWindowDC() throw();
```  
  
### Remarks  
 See [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#14](../../atl/codesnippet/cpp/cwindow-class_14.cpp)]  
  
##  <a name="cwindow__getwindowlong"></a>  CWindow::GetWindowLong  
 Retrieves a 32-bit value at a specified offset into the extra window memory.  
  
```
LONG GetWindowLong(int nIndex) const throw();
```  
  
### Remarks  
 See [GetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633584) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
> [!NOTE]
>  To write code that is compatible with both 32-bit and 64-bit versions of Windows, use [CWindow::GetWindowLongPtr](#cwindow__getwindowlongptr).  
  
##  <a name="cwindow__getwindowlongptr"></a>  CWindow::GetWindowLongPtr  
 Retrieves information about the specified window, including a value at a specified offset into the extra window memory.  
  
```
LONG_PTR GetWindowLongPtr(int nIndex) const throw();
```  
  
### Remarks  
 See [GetWindowLongPtr](http://msdn.microsoft.com/library/windows/desktop/ms633585) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Remarks  
 If you are retrieving a pointer or a handle, this function supersedes the `CWindow::GetWindowLong` method.  
  
> [!NOTE]
>  Pointers and handles are 32 bits on 32-bit Windows and 64 bits on 64-bit Windows.  
  
 To write code that is compatible with both 32-bit and 64-bit versions of Windows, use `CWindow::GetWindowLongPtr`.  
  
##  <a name="cwindow__getwindowplacement"></a>  CWindow::GetWindowPlacement  
 Retrieves the show state and positions.  
  
```
BOOL GetWindowPlacement(WINDOWPLACEMENT FAR* lpwndpl) const throw();
```  
  
### Remarks  
 See [GetWindowPlacement](http://msdn.microsoft.com/library/windows/desktop/ms633518) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getwindowprocessid"></a>  CWindow::GetWindowProcessID  
 Retrieves the identifier of the process that created the window.  
  
```
DWORD GetWindowProcessID() throw();
```  
  
### Remarks  
 See [GetWindowThreadProcessID](http://msdn.microsoft.com/library/windows/desktop/ms633522) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#15](../../atl/codesnippet/cpp/cwindow-class_15.cpp)]  
  
##  <a name="cwindow__getwindowrect"></a>  CWindow::GetWindowRect  
 Retrieves the window's bounding dimensions.  
  
```
BOOL GetWindowRect(LPRECT lpRect) const throw();
```  
  
### Remarks  
 See [GetWindowRect](http://msdn.microsoft.com/library/windows/desktop/ms633519) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getwindowrgn"></a>  CWindow::GetWindowRgn  
 Obtains a copy of the window region of a window.  
  
```
int GetWindowRgn(HRGN hRgn) throw();
```  
  
### Remarks  
 See [GetWindowRgn](http://msdn.microsoft.com/library/windows/desktop/dd144950) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getwindowtext"></a>  CWindow::GetWindowText  
 Retrieves the window's text.  
  
```
int GetWindowText(LPTSTR lpszStringBuf,  int nMaxCount) const throw();

BOOL GetWindowText(
    BSTR& bstrText) throw();

int GetWindowText(CSimpleString& strText) const;
```  
  
### Parameters  
 `lpszStringBuf`  
 A buffer to which to write the window text.  
  
 `nMaxCount`  
 The size of the buffer in characters; also the maximum number of characters to write.  
  
 `bstrText`  
 A `BSTR` in which to store the window text.  
  
 `strText`  
 A `CString` in which to store the window text.  
  
### Return Value  
 If the text is successfully copied, the return value is **TRUE**; otherwise, the return value is **FALSE**.  
  
### Remarks  
 See [GetWindowText](http://msdn.microsoft.com/library/windows/desktop/ms633520) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 The second version of this method allows you to store the text in a `BSTR`; the third version allows you to store the result in a [CString](../../atl-mfc-shared/reference/cstringt-class.md), since `CSimpleString` is the base class of `CString`.  
  
##  <a name="cwindow__getwindowtextlength"></a>  CWindow::GetWindowTextLength  
 Retrieves the length of the window's text.  
  
```
int GetWindowTextLength() const throw();
```  
  
### Remarks  
 See [GetWindowTextLength](http://msdn.microsoft.com/library/windows/desktop/ms633521) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__getwindowthreadid"></a>  CWindow::GetWindowThreadID  
 Retrieves the identifier of the thread that created the specified window.  
  
```
DWORD GetWindowThreadID() throw();
```  
  
### Remarks  
 See [GetWindowThreadProcessID](http://msdn.microsoft.com/library/windows/desktop/ms633522) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#16](../../atl/codesnippet/cpp/cwindow-class_16.cpp)]  
  
##  <a name="cwindow__getwindowword"></a>  CWindow::GetWindowWord  
 Retrieves a 16-bit value at a specified offset into the extra window memory.  
  
```
WORD GetWindowWord(int nIndex) const throw();
```  
  
### Remarks  
 See [GetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633584) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__gotodlgctrl"></a>  CWindow::GotoDlgCtrl  
 Sets the keyboard focus to a control in the dialog box.  
  
```
void GotoDlgCtrl(HWND hWndCtrl) const throw();
```  
  
### Remarks  
 See [WM_NEXTDLGCTL](http://msdn.microsoft.com/library/windows/desktop/ms645432) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__hidecaret"></a>  CWindow::HideCaret  
 Hides the system caret.  
  
```
BOOL HideCaret() throw();
```  
  
### Remarks  
 See [HideCaret](http://msdn.microsoft.com/library/windows/desktop/ms648403) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#17](../../atl/codesnippet/cpp/cwindow-class_17.cpp)]  
  
##  <a name="cwindow__hilitemenuitem"></a>  CWindow::HiliteMenuItem  
 Highlights or removes the highlight from a top-level menu item.  
  
```
BOOL HiliteMenuItem(HMENU hMenu,
    UINT uHiliteItem,
    UINT uHilite) throw();
```  
  
### Remarks  
 See [HiliteMenuItem](http://msdn.microsoft.com/library/windows/desktop/ms647986) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__invalidate"></a>  CWindow::Invalidate  
 Invalidates the entire client area.  
  
```
BOOL Invalidate(BOOL bErase = TRUE) throw();
```  
  
### Remarks  
 See [InvalidateRect](http://msdn.microsoft.com/library/windows/desktop/dd145002) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Passes **NULL** for the `RECT` parameter to the `InvalidateRect` Win32 function.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#18](../../atl/codesnippet/cpp/cwindow-class_18.cpp)]  
  
##  <a name="cwindow__invalidaterect"></a>  CWindow::InvalidateRect  
 Invalidates the client area within the specified rectangle.  
  
```
BOOL InvalidateRect(LPCRECT lpRect,  BOOL bErase = TRUE) throw();
```  
  
### Remarks  
 See [InvalidateRect](http://msdn.microsoft.com/library/windows/desktop/dd145002) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__invalidatergn"></a>  CWindow::InvalidateRgn  
 Invalidates the client area within the specified region.  
  
```
void InvalidateRgn(HRGN hRgn,  BOOL bErase = TRUE) throw();
```  
  
### Remarks  
 See [InvalidateRgn](http://msdn.microsoft.com/library/windows/desktop/dd145003) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Remarks  
 Specifies a `void` return type, while the `InvalidateRgn` Win32 function always returns **TRUE**.  
  
##  <a name="cwindow__ischild"></a>  CWindow::IsChild  
 Determines whether the specified window is a child window.  
  
```
BOOL IsChild(
const HWND hWnd) const throw();
```  
  
### Remarks  
 See [IsChild](http://msdn.microsoft.com/library/windows/desktop/ms633524) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__isdialogmessage"></a>  CWindow::IsDialogMessage  
 Determines whether a message is intended for the specified dialog box.  
  
```
BOOL IsDialogMessage(LPMSG lpMsg) throw();
```  
  
### Remarks  
 See [IsDialogMessage](http://msdn.microsoft.com/library/windows/desktop/ms645498) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__isdlgbuttonchecked"></a>  CWindow::IsDlgButtonChecked  
 Determines the check state of the button.  
  
```
UINT IsDlgButtonChecked(int nIDButton) const throw();
```  
  
### Remarks  
 See [IsDlgButtonChecked](http://msdn.microsoft.com/library/windows/desktop/bb761879) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__isiconic"></a>  CWindow::IsIconic  
 Determines whether the window is minimized.  
  
```
BOOL IsIconic() const throw();
```  
  
### Remarks  
 See [IsIconic](http://msdn.microsoft.com/library/windows/desktop/ms633527) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#19](../../atl/codesnippet/cpp/cwindow-class_19.cpp)]  
  
##  <a name="cwindow__isparentdialog"></a>  CWindow::IsParentDialog  
 Determines if the parent window of the control is a dialog window.  
  
```
BOOL IsParentDialog() throw();
```  
  
### Return Value  
 Returns TRUE if the parent window is a dialog, FALSE otherwise.  
  
##  <a name="cwindow__iswindow"></a>  CWindow::IsWindow  
 Determines whether the specified window handle identifies an existing window.  
  
```
BOOL IsWindow() throw();
```  
  
### Remarks  
 See [IsWindow](http://msdn.microsoft.com/library/windows/desktop/ms633528) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#20](../../atl/codesnippet/cpp/cwindow-class_20.cpp)]  
  
##  <a name="cwindow__iswindowenabled"></a>  CWindow::IsWindowEnabled  
 Determines whether the window is enabled for input.  
  
```
BOOL IsWindowEnabled() const throw();
```  
  
### Remarks  
 See [IsWindowEnabled](http://msdn.microsoft.com/library/windows/desktop/ms646303) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#21](../../atl/codesnippet/cpp/cwindow-class_21.cpp)]  
  
##  <a name="cwindow__iswindowvisible"></a>  CWindow::IsWindowVisible  
 Determines the window's visibility state.  
  
```
BOOL IsWindowVisible() const throw();
```  
  
### Remarks  
 See [IsWindowVisible](http://msdn.microsoft.com/library/windows/desktop/ms633530) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#22](../../atl/codesnippet/cpp/cwindow-class_22.cpp)]  
  
##  <a name="cwindow__iswindowunicode"></a>  CWindow::IsWindowUnicode  
 Determines whether the specified window is a native Unicode window.  
  
```
BOOL IsWindowUnicode() throw();
```  
  
### Remarks  
 See [IsWindowUnicode](http://msdn.microsoft.com/library/windows/desktop/ms633529) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#23](../../atl/codesnippet/cpp/cwindow-class_23.cpp)]  
  
##  <a name="cwindow__iszoomed"></a>  CWindow::IsZoomed  
 Determines whether the window is maximized.  
  
```
BOOL IsZoomed() const throw();
```  
  
### Remarks  
 See [IsZoomed](http://msdn.microsoft.com/library/windows/desktop/ms633531) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__killtimer"></a>  CWindow::KillTimer  
 Destroys a timer event created by `CWindow::SetTimer`.  
  
```
BOOL KillTimer(UINT nIDEvent) throw();
```  
  
### Remarks  
 See [KillTimer](http://msdn.microsoft.com/library/windows/desktop/ms644903) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__lockwindowupdate"></a>  CWindow::LockWindowUpdate  
 Disables or enables drawing in the window by calling the [LockWindowUpdate](http://msdn.microsoft.com/library/windows/desktop/dd145034) Win32 function.  
  
```
BOOL LockWindowUpdate(BOOL bLock = TRUE) throw();
```  
  
### Parameters  
 `bLock`  
 [in] If **TRUE** (the default value), the window will be locked. Otherwise, it will be unlocked.  
  
### Return Value  
 **TRUE** if the window is successfully locked; otherwise, **FALSE**.  
  
### Remarks  
 If `bLock` is **TRUE**, this method passes [m_hWnd](#cwindow__m_hwnd) to the Win32 function; otherwise, it passes **NULL**.  
  
##  <a name="cwindow__m_hwnd"></a>  CWindow::m_hWnd  
 Contains a handle to the window associated with the `CWindow` object.  
  
```
HWND m_hWnd throw() throw();
```  
  
##  <a name="cwindow__mapwindowpoints"></a>  CWindow::MapWindowPoints  
 Converts a set of points from the window's coordinate space to the coordinate space of another window.  
  
```
int MapWindowPoints(HWND hWndTo,
    LPPOINT lpPoint,
    UINT nCount) const throw();

int MapWindowPoints(HWND hWndTo,
    LPRECT lpRect) const throw();
```  
  
### Remarks  
 See [MapWindowPoints](http://msdn.microsoft.com/library/windows/desktop/dd145046) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 The second version of this method allows you to convert the coordinates of a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure.  
  
##  <a name="cwindow__messagebox"></a>  CWindow::MessageBox  
 Displays a message box.  
  
```
int MessageBox(LPCTSTR lpszText,
    LPCTSTR lpszCaption = NULL,
    UINT nType = MB_OK) throw();
```  
  
### Remarks  
 See [MessageBox](http://msdn.microsoft.com/library/windows/desktop/ms645505) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#24](../../atl/codesnippet/cpp/cwindow-class_24.cpp)]  
  
##  <a name="cwindow__modifystyle"></a>  CWindow::ModifyStyle  
 Modifies the window styles of the `CWindow` object.  
  
```
BOOL ModifyStyle(DWORD dwRemove,
    DWORD dwAdd,
    UINT nFlags = 0) throw();
```  
  
### Parameters  
 `dwRemove`  
 [in] Specifies the window styles to be removed during style modification.  
  
 `dwAdd`  
 [in] Specifies the window styles to be added during style modification.  
  
 `nFlags`  
 [in] Window-positioning flags. For a list of possible values, see the [SetWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms633545) function in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 **TRUE** if the window styles are modified; otherwise, **FALSE**.  
  
### Remarks  
 Styles to be added or removed can be combined by using the bitwise OR ( &#124; ) operator. See the [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) function in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]for information about the available window styles.  
  
 If `nFlags` is nonzero, `ModifyStyle` calls the Win32 function `SetWindowPos`, and redraws the window by combining `nFlags` with the following four flags:  
  
- `SWP_NOSIZE` Retains the current size.  
  
- `SWP_NOMOVE` Retains the current position.  
  
- `SWP_NOZORDER` Retains the current Z order.  
  
- `SWP_NOACTIVATE` Does not activate the window.  
  
 To modify a window's extended styles, call [ModifyStyleEx](#cwindow__modifystyleex).  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#25](../../atl/codesnippet/cpp/cwindow-class_25.cpp)]  
  
##  <a name="cwindow__modifystyleex"></a>  CWindow::ModifyStyleEx  
 Modifies the extended window styles of the `CWindow` object.  
  
```
BOOL ModifyStyleEx(DWORD dwRemove,
    DWORD dwAdd,
    UINT nFlags = 0) throw();
```  
  
### Parameters  
 `dwRemove`  
 [in] Specifies the extended styles to be removed during style modification.  
  
 `dwAdd`  
 [in] Specifies the extended styles to be added during style modification.  
  
 `nFlags`  
 [in] Window-positioning flags. For a list of possible values, see the [SetWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms633545) function in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 **TRUE** if the extended window styles are modified; otherwise, **FALSE**.  
  
### Remarks  
 Styles to be added or removed can be combined by using the bitwise OR ( &#124; ) operator. See the [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) function in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]for information about the available extended styles.  
  
 If `nFlags` is nonzero, `ModifyStyleEx` calls the Win32 function `SetWindowPos`, and redraws the window by combining `nFlags` with the following four flags:  
  
- `SWP_NOSIZE` Retains the current size.  
  
- `SWP_NOMOVE` Retains the current position.  
  
- `SWP_NOZORDER` Retains the current Z order.  
  
- `SWP_NOACTIVATE` Does not activate the window.  
  
 To modify windows using regular window styles, call [ModifyStyle](#cwindow__modifystyle).  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#26](../../atl/codesnippet/cpp/cwindow-class_26.cpp)]  
  
##  <a name="cwindow__movewindow"></a>  CWindow::MoveWindow  
 Changes the window's size and position.  
  
```
BOOL MoveWindow(int x,
    int y,
    int nWidth,
    int nHeight,
    BOOL bRepaint = TRUE) throw();

BOOL MoveWindow(LPCRECT lpRect,
    BOOL bRepaint = TRUE) throw();
```  
  
### Remarks  
 For a top-level window object, the x and y parameters are relative to the upper-left corner of the screen. For a child window object, they are relative to the upper-left corner of the parent window's client area.  
  
 The second version of this method uses a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure to determine the window's new position, width, and height.  
  
##  <a name="cwindow__nextdlgctrl"></a>  CWindow::NextDlgCtrl  
 Sets the keyboard focus to the next control in the dialog box.  
  
```
void NextDlgCtrl() const throw();
```  
  
### Remarks  
 See [WM_NEXTDLGCTL](http://msdn.microsoft.com/library/windows/desktop/ms645432) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__openclipboard"></a>  CWindow::OpenClipboard  
 Opens the Clipboard.  
  
```
BOOL OpenClipboard() throw();
```  
  
### Remarks  
 See [OpenClipboard](http://msdn.microsoft.com/library/windows/desktop/ms649048) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__operator_hwnd"></a>  CWindow::operator HWND  
 Converts a `CWindow` object to an `HWND`.  
  
```operator HWND() const throw();
```  
  
##  <a name="cwindow__operator_eq"></a>  CWindow::operator =  
 Assigns an `HWND` to the `CWindow` object by setting the [m_hWnd](#cwindow__m_hwnd) member to `hWnd`.  
  
```
CWindow& operator= (HWND hWnd) throw();
```  
  
##  <a name="cwindow__postmessage"></a>  CWindow::PostMessage  
 Places a message in the message queue associated with the thread that created the window.  
  
```
BOOL PostMessage(UINT message,
    WPARAM wParam = 0,
    LPARAM lParam = 0) throw();
```  
  
### Remarks  
 See [PostMessage](http://msdn.microsoft.com/library/windows/desktop/ms644944) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Returns without waiting for the thread to process the message.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#27](../../atl/codesnippet/cpp/cwindow-class_27.cpp)]  
  
##  <a name="cwindow__prevdlgctrl"></a>  CWindow::PrevDlgCtrl  
 Sets the keyboard focus to the previous control in the dialog box.  
  
```
void PrevDlgCtrl() const throw();
```  
  
### Remarks  
 See [WM_NEXTDLGCTL](http://msdn.microsoft.com/library/windows/desktop/ms645432) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__print"></a>  CWindow::Print  
 Sends a [WM_PRINT](http://msdn.microsoft.com/library/windows/desktop/dd145216) message to the window to request that it draw itself in the specified device context.  
  
```
void Print(HDC hDC,  DWORD dwFlags) const throw();
```  
  
### Parameters  
 `hDC`  
 [in] The handle to a device context.  
  
 `dwFlags`  
 [in] Specifies the drawing options. You can combine one or more of the following flags:  
  
- `PRF_CHECKVISIBLE` Draw the window only if it is visible.  
  
- `PRF_CHILDREN` Draw all visible child windows.  
  
- `PRF_CLIENT` Draw the client area of the window.  
  
- `PRF_ERASEBKGND` Erase the background before drawing the window.  
  
- `PRF_NONCLIENT` Draw the non-client area of the window.  
  
- `PRF_OWNED` Draw all owned windows.  
  
##  <a name="cwindow__printclient"></a>  CWindow::PrintClient  
 Sends a [WM_PRINTCLIENT](http://msdn.microsoft.com/library/windows/desktop/dd145217) message to the window to request that it draw its client area in the specified device context.  
  
```
void PrintClient(HDC hDC,  DWORD dwFlags) const throw();
```  
  
### Parameters  
 `hDC`  
 [in] The handle to a device context.  
  
 `dwFlags`  
 [in] Specifies drawing options. You can combine one or more of the following flags:  
  
- `PRF_CHECKVISIBLE` Draw the window only if it is visible.  
  
- `PRF_CHILDREN` Draw all visible child windows.  
  
- `PRF_CLIENT` Draw the client area of the window.  
  
- `PRF_ERASEBKGND` Erase the background before drawing the window.  
  
- `PRF_NONCLIENT` Draw the non-client area of the window.  
  
- `PRF_OWNED` Draw all owned windows.  
  
##  <a name="cwindow__rcdefault"></a>  CWindow::rcDefault  
 Contains default window dimensions.  
  
```
static RECT rcDefault;
```  
  
##  <a name="cwindow__redrawwindow"></a>  CWindow::RedrawWindow  
 Updates a specified rectangle or region in the client area.  
  
```
BOOL RedrawWindow(LPCRECT lpRectUpdate = NULL,
    HRGN hRgnUpdate = NULL,
    UINT flags = RDW_INVALIDATE | RDW_UPDATENOW | RDW_ERASE);

throw()
```  
  
### Remarks  
 See [RedrawWindow](http://msdn.microsoft.com/library/windows/desktop/dd162911) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#28](../../atl/codesnippet/cpp/cwindow-class_28.cpp)]  
  
##  <a name="cwindow__releasedc"></a>  CWindow::ReleaseDC  
 Releases a device context.  
  
```
int ReleaseDC(HDC hDC);
```  
  
### Remarks  
 See [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#9](../../atl/codesnippet/cpp/cwindow-class_9.cpp)]  
  
##  <a name="cwindow__resizeclient"></a>  CWindow::ResizeClient  
 Resizes the window to the specified client area size.  
  
```
BOOL ResizeClient(int nWidth,
    int nHeight,
    BOOL bRedraw = FALSE) throw();
```  
  
### Parameters  
 `nWidth`  
 New width of the window in pixels.  
  
 `nHeight`  
 New height of the window in pixels.  
  
 `bRedraw`  
 A flag indicating whether to redraw changes. Default is **FALSE**, indicating the window does not redraw changes.  
  
##  <a name="cwindow__screentoclient"></a>  CWindow::ScreenToClient  
 Converts screen coordinates to client coordinates.  
  
```
BOOL ScreenToClient(LPPOINT lpPoint) const throw();

BOOL ScreenToClient(LPRECT lpRect) const throw();
```  
  
### Remarks  
 See [ScreenToClient](http://msdn.microsoft.com/library/windows/desktop/dd162952) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 The second version of this method allows you to convert the coordinates of a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure.  
  
##  <a name="cwindow__scrollwindow"></a>  CWindow::ScrollWindow  
 Scrolls the specified client area.  
  
```
BOOL ScrollWindow(int xAmount,
    int yAmount,
    LPCRECT lpRect = NULL,
    LPCRECT lpClipRect = NULL) throw();
```  
  
### Remarks  
 See [ScrollWindow](http://msdn.microsoft.com/library/windows/desktop/bb787591) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__scrollwindowex"></a>  CWindow::ScrollWindowEx  
 Scrolls the specified client area with additional features.  
  
```
int ScrollWindowEx(int dx,
    int dy,
    LPCRECT lpRectScroll,
    LPCRECT lpRectClip,
    HRGN hRgnUpdate,
    LPRECT lpRectUpdate,
    UINT flags) throw();
```  
  
### Remarks  
 See [ScrollWindowEx](http://msdn.microsoft.com/library/windows/desktop/bb787593) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__senddlgitemmessage"></a>  CWindow::SendDlgItemMessage  
 Sends a message to a control.  
  
```
LRESULT SendDlgItemMessage(int nID,
    UINT message,
    WPARAM wParam = 0,
    LPARAM lParam = 0) throw();
```  
  
### Remarks  
 See [SendDlgItemMessage](http://msdn.microsoft.com/library/windows/desktop/ms645515) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__sendmessage"></a>  CWindow::SendMessage  
 Sends a message to the window and does not return until the window procedure has processed the message.  
  
```
LRESULT SendMessage(UINT message,
    WPARAM wParam = 0,
    LPARAM lParam = 0) throw();
static LRESULT SendMessage(HWND hWnd,
    UINT message,
    WPARAM wParam,
    LPARAM lParam) throw();
```  
  
### Remarks  
 See [SendMessage](http://msdn.microsoft.com/library/windows/desktop/ms644950) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#29](../../atl/codesnippet/cpp/cwindow-class_29.cpp)]  
  
##  <a name="cwindow__sendmessagetodescendants"></a>  CWindow::SendMessageToDescendants  
 Sends the specified message to all immediate children of the `CWindow` object.  
  
```
void SendMessageToDescendants(UINT message,
    WPARAM wParam = 0,
    LPARAM lParam = 0,
    BOOL bDeep = TRUE) throw();
```  
  
### Parameters  
 `message`  
 [in] The message to be sent.  
  
 `wParam`  
 [in] Additional message-specific information.  
  
 `lParam`  
 [in] Additional message-specific information.  
  
 `bDeep`  
 [in] If **TRUE** (the default value), the message will be sent to all descendant windows; otherwise, it will be sent only to the immediate child windows.  
  
### Remarks  
 If `bDeep` is **TRUE**, the message is additionally sent to all other descendant windows.  
  
##  <a name="cwindow__sendnotifymessage"></a>  CWindow::SendNotifyMessage  
 Sends a message to the window.  
  
```
BOOL SendNotifyMessage(UINT message,
    WPARAM wParam = 0,
    LPARAM lParam = 0) throw();
```  
  
### Remarks  
 See [SendNotifyMessage](http://msdn.microsoft.com/library/windows/desktop/ms644953) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 If the window was created by the calling thread, `SendNotifyMessage` does not return until the window procedure has processed the message. Otherwise, it returns immediately.  
  
##  <a name="cwindow__setactivewindow"></a>  CWindow::SetActiveWindow  
 Activates the window.  
  
```
HWND SetActiveWindow() throw();
```  
  
### Remarks  
 See [SetActiveWindow](http://msdn.microsoft.com/library/windows/desktop/ms646311) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#30](../../atl/codesnippet/cpp/cwindow-class_30.cpp)]  
  
##  <a name="cwindow__setcapture"></a>  CWindow::SetCapture  
 Sends all subsequent mouse input to the window.  
  
```
HWND SetCapture() throw();
```  
  
### Remarks  
 See [SetCapture](http://msdn.microsoft.com/library/windows/desktop/ms646262) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setclipboardviewer"></a>  CWindow::SetClipboardViewer  
 Adds the window to the Clipboard viewer chain.  
  
```
HWND SetClipboardViewer() throw();
```  
  
### Remarks  
 See [SetClipboardViewer](http://msdn.microsoft.com/library/windows/desktop/ms649052) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setdlgctrlid"></a>  CWindow::SetDlgCtrlID  
 Sets the identifier of the window to the specified value.  
  
```
int SetDlgCtrlID(int nID) throw();
```  
  
### Parameters  
 `nID`  
 [in] The new value to set for the window's identifier.  
  
### Return Value  
 If successful, the previous identifier of the window; otherwise 0.  
  
##  <a name="cwindow__setdlgitemint"></a>  CWindow::SetDlgItemInt  
 Changes a control's text to the string representation of an integer value.  
  
```
BOOL SetDlgItemInt(int nID,
    UINT nValue,
    BOOL bSigned = TRUE) throw();
```  
  
### Remarks  
 See [SetDlgItemInt](http://msdn.microsoft.com/library/windows/desktop/ms645518) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setdlgitemtext"></a>  CWindow::SetDlgItemText  
 Changes a control's text.  
  
```
BOOL SetDlgItemText(int nID,  LPCTSTR lpszString) throw();
```  
  
### Remarks  
 See [SetDlgItemText](http://msdn.microsoft.com/library/windows/desktop/ms645521) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setfocus"></a>  CWindow::SetFocus  
 Sets the input focus to the window.  
  
```
HWND SetFocus() throw();
```  
  
### Remarks  
 See [SetFocus](http://msdn.microsoft.com/library/windows/desktop/ms646312) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#31](../../atl/codesnippet/cpp/cwindow-class_31.cpp)]  
  
##  <a name="cwindow__setfont"></a>  CWindow::SetFont  
 Changes the window's current font by sending a [WM_SETFONT](http://msdn.microsoft.com/library/windows/desktop/ms632642) message to the window.  
  
```
void SetFont(HFONT hFont,  BOOL bRedraw = TRUE) throw();
```  
  
### Parameters  
 `hFont`  
 [in] The handle to the new font.  
  
 `bRedraw`  
 [in] If **TRUE** (the default value), the window is redrawn. Otherwise, it is not.  
  
##  <a name="cwindow__sethotkey"></a>  CWindow::SetHotKey  
 Associates a hot key with the window by sending a **WM_SETHOTKEY** message.  
  
```
int SetHotKey(WORD wVirtualKeyCode,  WORD wModifiers) throw();
```  
  
### Parameters  
 `wVirtualKeyCode`  
 [in] The virtual key code of the hot key. For a list of of standard virtual key codes, see Winuser.h.  
  
 `wModifiers`  
 [in] The modifiers of the hot key. For a list of possible values, see **WM_SETHOTKEY** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 For a list of possible return values, see [WM_SETHOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646284) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__seticon"></a>  CWindow::SetIcon  
 Sets the window's large or small icon to the icon identified by `hIcon`.  
  
```
HICON SetIcon(HICON hIcon,  BOOL bBigIcon = TRUE) throw();
```  
  
### Parameters  
 `hIcon`  
 [in] The handle to a new icon.  
  
 `bBigIcon`  
 [in] If **TRUE** (the default value), the method sets a large icon. Otherwise, it sets a small icon.  
  
### Return Value  
 The handle to the previous icon.  
  
### Remarks  
 `SetIcon` sends a [WM_SETICON](http://msdn.microsoft.com/library/windows/desktop/ms632643) message to the window.  
  
##  <a name="cwindow__setmenu"></a>  CWindow::SetMenu  
 Changes the window's current menu.  
  
```
BOOL SetMenu(HMENU hMenu) throw();
```  
  
### Remarks  
 See [SetMenu](http://msdn.microsoft.com/library/windows/desktop/ms647995) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setparent"></a>  CWindow::SetParent  
 Changes the parent window.  
  
```
HWND SetParent(HWND hWndNewParent) throw();
```  
  
### Remarks  
 See [SetParent](http://msdn.microsoft.com/library/windows/desktop/ms633541) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#32](../../atl/codesnippet/cpp/cwindow-class_32.cpp)]  
  
##  <a name="cwindow__setredraw"></a>  CWindow::SetRedraw  
 Sets or clears the redraw flag by sending a [WM_SETREDRAW](http://msdn.microsoft.com/library/windows/desktop/dd145219) message to the window.  
  
```
void SetRedraw(BOOL bRedraw = TRUE) throw();
```  
  
### Parameters  
 `bRedraw`  
 [in] Specifies the state of the redraw flag. If **TRUE** (the default value), the redraw flag is set; if **FALSE**, the flag is cleared.  
  
### Remarks  
 Call `SetRedraw` to allow changes to be redrawn or to prevent changes from being redrawn.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#33](../../atl/codesnippet/cpp/cwindow-class_33.cpp)]  
  
##  <a name="cwindow__setscrollinfo"></a>  CWindow::SetScrollInfo  
 Sets the parameters of a scroll bar.  
  
```
int SetScrollInfo(int nBar,
    LPSCROLLINFO lpScrollInfo,
    BOOL bRedraw = TRUE) throw();
```  
  
### Remarks  
 See [SetScrollInfo](http://msdn.microsoft.com/library/windows/desktop/bb787595) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setscrollpos"></a>  CWindow::SetScrollPos  
 Changes the position of the scroll box.  
  
```
int SetScrollPos(int nBar,
    int nPos,
    BOOL bRedraw = TRUE) throw();
```  
  
### Remarks  
 See [SetScrollPos](http://msdn.microsoft.com/library/windows/desktop/bb787597) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setscrollrange"></a>  CWindow::SetScrollRange  
 Changes the scroll bar range.  
  
```
BOOL SetScrollRange(int nBar,
    int nMinPos,
    int nMaxPos,
    BOOL bRedraw = TRUE) throw();
```  
  
### Remarks  
 See [SetScrollRange](http://msdn.microsoft.com/library/windows/desktop/bb787599) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__settimer"></a>  CWindow::SetTimer  
 Creates a timer event.  
  
```
UINT SetTimer(UINT nIDEvent,
    UINT nElapse,
    void (CALLBACK* lpfnTimer)(HWND,
    UINT,
 UINT,
    DWORD) = NULL) throw();
```  
  
### Remarks  
 See [SetTimer](http://msdn.microsoft.com/library/windows/desktop/ms644906) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setwindowcontexthelpid"></a>  CWindow::SetWindowContextHelpId  
 Sets the window's help context identifier.  
  
```
BOOL SetWindowContextHelpId(DWORD dwContextHelpId) throw();
```  
  
### Remarks  
 See [SetWindowContextHelpId](http://msdn.microsoft.com/library/windows/desktop/bb762101) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setwindowlong"></a>  CWindow::SetWindowLong  
 Sets a 32-bit value at a specified offset into the extra window memory.  
  
```
LONG SetWindowLong(int nIndex,  LONG dwNewLong) throw();
```  
  
### Remarks  
 See [SetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633591) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
> [!NOTE]
>  To write code that is compatible with both 32-bit and 64-bit versions of Windows, use [CWindow::SetWindowLongPtr](#cwindow__setwindowlongptr).  
  
##  <a name="cwindow__setwindowlongptr"></a>  CWindow::SetWindowLongPtr  
 Changes an attribute of the specified window, and also sets a value at the specified offset in the extra window memory.  
  
```
LONG_PTR SetWindowLongPtr(int nIndex,  LONG_PTR dwNewLong) throw();
```  
  
### Remarks  
 See [SetWindowLongPtr](http://msdn.microsoft.com/library/windows/desktop/ms644898) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 This function supersedes the `CWindow::SetWindowLong` method. To write code that is compatible with both 32-bit and 64-bit versions of Windows, use `CWindow::SetWindowLongPtr`.  
  
##  <a name="cwindow__setwindowplacement"></a>  CWindow::SetWindowPlacement  
 Sets the show state and positions.  
  
```
BOOL SetWindowPlacement(const WINDOWPLACEMENT FAR* lpwndpl);
```  
  
### Remarks  
 See [SetWindowPlacement](http://msdn.microsoft.com/library/windows/desktop/ms633544) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setwindowpos"></a>  CWindow::SetWindowPos  
 Sets the size, position, and Z order.  
  
```
BOOL SetWindowPos(HWND hWndInsertAfter,
    int x,
    int y,
    int cx,
    int cy,
    UINT nFlags) throw();
BOOL SetWindowPos(HWND hWndInsertAfter,
    LPCRECT lpRect,
    UINT nFlags) throw();
```  
  
### Remarks  
 See [SetWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms633545) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 The second version of this method uses a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure to set the window's new position, width, and height.  
  
##  <a name="cwindow__setwindowrgn"></a>  CWindow::SetWindowRgn  
 Sets the window region of a window.  
  
```
int SetWindowRgn(HRGN hRgn,  BOOL bRedraw = FALSE) throw();
```  
  
### Remarks  
 See [SetWindowRgn](http://msdn.microsoft.com/library/windows/desktop/dd145102) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__setwindowtext"></a>  CWindow::SetWindowText  
 Changes the window's text.  
  
```
BOOL SetWindowText(LPCTSTR lpszString) throw();
```  
  
### Remarks  
 See [SetWindowText](http://msdn.microsoft.com/library/windows/desktop/ms633546) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#34](../../atl/codesnippet/cpp/cwindow-class_34.cpp)]  
  
##  <a name="cwindow__setwindowword"></a>  CWindow::SetWindowWord  
 Sets a 16-bit value at a specified offset into the extra window memory.  
  
```
WORD SetWindowWord(int nIndex,  WORD wNewWord) throw();
```  
  
### Remarks  
 See [SetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633591) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__showcaret"></a>  CWindow::ShowCaret  
 Displays the system caret.  
  
```
BOOL ShowCaret() throw();
```  
  
### Remarks  
 See [ShowCaret](http://msdn.microsoft.com/library/windows/desktop/ms648406) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#35](../../atl/codesnippet/cpp/cwindow-class_35.cpp)]  
  
##  <a name="cwindow__showownedpopups"></a>  CWindow::ShowOwnedPopups  
 Shows or hides the pop-up windows owned by the window.  
  
```
BOOL ShowOwnedPopups(BOOL bShow = TRUE) throw();
```  
  
### Remarks  
 See [ShowOwnedPopups](http://msdn.microsoft.com/library/windows/desktop/ms633547) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__showscrollbar"></a>  CWindow::ShowScrollBar  
 Shows or hides a scroll bar.  
  
```
BOOL ShowScrollBar(UINT nBar,  BOOL bShow = TRUE) throw();
```  
  
### Remarks  
 See [ShowScrollBar](http://msdn.microsoft.com/library/windows/desktop/bb787601) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__showwindow"></a>  CWindow::ShowWindow  
 Sets the window's show state.  
  
```
BOOL ShowWindow(int nCmdShow) throw();
```  
  
### Remarks  
 See [ShowWindow](http://msdn.microsoft.com/library/windows/desktop/ms633548) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#36](../../atl/codesnippet/cpp/cwindow-class_36.cpp)]  
  
##  <a name="cwindow__showwindowasync"></a>  CWindow::ShowWindowAsync  
 Sets the show state of a window created by a different thread.  
  
```
BOOL ShowWindowAsync(int nCmdShow) throw();
```  
  
### Remarks  
 See [ShowWindowAsync](http://msdn.microsoft.com/library/windows/desktop/ms633549) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__updatewindow"></a>  CWindow::UpdateWindow  
 Updates the client area.  
  
```
BOOL UpdateWindow() throw();
```  
  
### Remarks  
 See [UpdateWindow](http://msdn.microsoft.com/library/windows/desktop/dd145167) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#37](../../atl/codesnippet/cpp/cwindow-class_37.cpp)]  
  
##  <a name="cwindow__validaterect"></a>  CWindow::ValidateRect  
 Validates the client area within the specified rectangle.  
  
```
BOOL ValidateRect(LPCRECT lpRect) throw();
```  
  
### Remarks  
 See [ValidateRect](http://msdn.microsoft.com/library/windows/desktop/dd145194) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__validatergn"></a>  CWindow::ValidateRgn  
 Validates the client area within the specified region.  
  
```
BOOL ValidateRgn(HRGN hRgn) throw();
```  
  
### Remarks  
 See [ValidateRgn](http://msdn.microsoft.com/library/windows/desktop/dd145195) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cwindow__winhelp"></a>  CWindow::WinHelp  
 Starts Windows Help.  
  
```
BOOL WinHelp(LPCTSTR lpszHelp,
    UINT nCmd = HELP_CONTEXT,
    DWORD dwData = 0) throw();
```  
  
### Remarks  
 See [WinHelp](http://msdn.microsoft.com/library/windows/desktop/bb762267) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
