---
title: "CDialogImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDialogImpl"
  - "ATL.CDialogImpl"
  - "ATL::CDialogImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dialog boxes, ATL"
  - "CDialogImpl class"
ms.assetid: d430bc7b-8a28-4ad3-9507-277bdd2c2c2e
caps.latest.revision: 25
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
# CDialogImpl Class
This class provides methods for creating a modal or modeless dialog box.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
 
template <class T,  
    class TBase = CWindow>  
    class ATL_NO_VTABLE CDialogImpl :  
    public CDialogImplBaseT<TBase>  
 
```  
  
#### Parameters  
 `T`  
 Your class, derived from `CDialogImpl`.  
  
 *TBase*  
 The base class of your new class. The default base class is [CWindow](../../atl/reference/cwindow-class.md).  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Create](#cdialogimpl__create)|Creates a modeless dialog box.|  
|[DestroyWindow](#cdialogimpl__destroywindow)|Destroys a modeless dialog box.|  
|[DoModal](#cdialogimpl__domodal)|Creates a modal dialog box.|  
|[EndDialog](#cdialogimpl__enddialog)|Destroys a modal dialog box.|  
  
### CDialogImplBaseT Methods  
  
|||  
|-|-|  
|[GetDialogProc](#cdialogimpl__getdialogproc)|Returns the current dialog box procedure.|  
|[MapDialogRect](#cdialogimpl__mapdialogrect)|Maps the dialog-box units of the specified rectangle to screen units (pixels).|  
|[OnFinalMessage](#cdialogimpl__onfinalmessage)|Called after receiving the last message, typically `WM_NCDESTROY`.|  
  
### Static Functions  
  
|||  
|-|-|  
|[DialogProc](#cdialogimpl__dialogproc)|Processes messages sent to the dialog box.|  
|[StartDialogProc](#cdialogimpl__startdialogproc)|Called when the first message is received to process messages sent to the dialog box.|  
  
## Remarks  
 With `CDialogImpl` you can create a modal or modeless dialog box. `CDialogImpl` provides the dialog box procedure, which uses the default message map to direct messages to the appropriate handlers.  
  
 The base class destructor **~CWindowImplRoot** ensures that the window is gone before destroying the object.  
  
 `CDialogImpl` derives from **CDialogImplBaseT**, which in turn derives from **CWindowImplRoot**.  
  
> [!NOTE]
>  Your class must define an **IDD** member that specifies the dialog template resource ID. For example, the ATL Project Wizard automatically adds the following line to your class:  
  
 [!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/cdialogimpl-class_1.h)]  
  
 where `MyDlg` is the **Short name** entered in the wizard's **Names** page.  
  
|For more information about|See|  
|--------------------------------|---------|  
|Creating controls|[ATL Tutorial](../../atl/active-template-library-atl-tutorial.md)|  
|Using dialog boxes in ATL|[ATL Window Classes](../../atl/atl-window-classes.md)|  
|ATL Project Wizard|[Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)|  
|Dialog boxes|[Dialog Boxes](http://msdn.microsoft.com/library/windows/desktop/ms632588) and subsequent topics in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]|  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="cdialogimpl__create"></a>  CDialogImpl::Create  
 Creates a modeless dialog box.  
  
```  
 
HWND Create(
    HWND hWndParent,  
    LPARAM dwInitParam = NULL);

    HWND Create(
    HWND hWndParent,  
    RECT&, 
    LPARAM dwInitParam = NULL);

 
```  
  
### Parameters  
 `hWndParent`  
 [in] The handle to the owner window.  
  
 **RECT&** `rect`  
 [in] A [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure specifying the dialog's size and position.  
  
 `dwInitParam`  
 [in] Specifies the value to pass to the dialog box in the **lParam** parameter of the **WM_INITDIALOG** message.  
  
### Return Value  
 The handle to the newly created dialog box.  
  
### Remarks  
 This dialog box is automatically attached to the `CDialogImpl` object. To create a modal dialog box, call [DoModal](#cdialogimpl__domodal). The second override above is used only with [CComControl](../../atl/reference/ccomcontrol-class.md).  
  
##  <a name="cdialogimpl__destroywindow"></a>  CDialogImpl::DestroyWindow  
 Destroys a modeless dialog box.  
  
```  
 
BOOL DestroyWindow();

 
```  
  
### Return Value  
 **TRUE** if the dialog box was successfully destroyed; otherwise **FALSE**.  
  
### Remarks  
 Returns **TRUE** if the dialog box was successfully destroyed; otherwise **FALSE**.  
  
##  <a name="cdialogimpl__dialogproc"></a>  CDialogImpl::DialogProc  
 This static function implements the dialog box procedure.  
  
```  
 
static LRESULT CALLBACK DialogProc(
    HWND hWnd,  
    UINT uMsg,  
    WPARAM wParam,  
    LPARAM lParam);

 
```  
  
### Parameters  
 `hWnd`  
 [in] The handle to the dialog box.  
  
 `uMsg`  
 [in] The message sent to the dialog box.  
  
 `wParam`  
 [in] Additional message-specific information.  
  
 `lParam`  
 [in] Additional message-specific information.  
  
### Return Value  
 **TRUE** if the message is processed; otherwise, **FALSE**.  
  
### Remarks  
 `DialogProc` uses the default message map to direct messages to the appropriate handlers.  
  
 You can override `DialogProc` to provide a different mechanism for handling messages.  
  
##  <a name="cdialogimpl__domodal"></a>  CDialogImpl::DoModal  
 Creates a modal dialog box.  
  
```  
 
INT_PTR DoModal(
    HWND hWndParent = ::GetActiveWindow(),   
    LPARAM dwInitParam = NULL);

 
```  
  
### Parameters  
 `hWndParent`  
 [in] The handle to the owner window. The default value is the return value of the [GetActiveWindow](http://msdn.microsoft.com/library/windows/desktop/ms646292) Win32 function.  
  
 `dwInitParam`  
 [in] Specifies the value to pass to the dialog box in the **lParam** parameter of the **WM_INITDIALOG** message.  
  
### Return Value  
 If successful, the value of the `nRetCode` parameter specified in the call to [EndDialog](#cdialogimpl__enddialog). Otherwise, -1.  
  
### Remarks  
 This dialog box is automatically attached to the `CDialogImpl` object.  
  
 To create a modeless dialog box, call [Create](#cdialogimpl__create).  
  
##  <a name="cdialogimpl__enddialog"></a>  CDialogImpl::EndDialog  
 Destroys a modal dialog box.  
  
```  
 
BOOL EndDialog(int nRetCode);

 
```  
  
### Parameters  
 `nRetCode`  
 [in] The value to be returned by [CDialogImpl::DoModal](#cdialogimpl__domodal).  
  
### Return Value  
 **TRUE** if the dialog box is destroyed; otherwise, **FALSE**.  
  
### Remarks  
 `EndDialog` must be called through the dialog procedure. After the dialog box is destroyed, Windows uses the value of `nRetCode` as the return value for `DoModal`, which created the dialog box.  
  
> [!NOTE]
>  Do not call `EndDialog` to destroy a modeless dialog box. Call [CWindow::DestroyWindow](../../atl/reference/cwindow-class.md#cwindow__destroywindow) instead.  
  
##  <a name="cdialogimpl__getdialogproc"></a>  CDialogImpl::GetDialogProc  
 Returns `DialogProc`, the current dialog box procedure.  
  
```  
 
virtual WNDPROC GetDialogProc();

 
```  
  
### Return Value  
 The current dialog box procedure.  
  
### Remarks  
 Override this method to replace the dialog procedure with your own.  
  
##  <a name="cdialogimpl__mapdialogrect"></a>  CDialogImpl::MapDialogRect  
 Converts (maps) the dialog-box units of the specified rectangle to screen units (pixels).  
  
```  
 
BOOL MapDialogRect(LPRECT lpRect);

 
```  
  
### Parameters  
 `lpRect`  
 Points to a `CRect` object or [RECT](../../mfc/reference/rect-structure1.md) structure that is to receive the client coordinates of the update that encloses the update region.  
  
### Return Value  
 Nonzero if the update succeeds; 0 if the update fails. To get extended error information, call `GetLastError`.  
  
### Remarks  
 The function replaces the coordinates in the specified `RECT` structure with the converted coordinates, which allows the structure to be used to create a dialog box or position a control within a dialog box.  
  
##  <a name="cdialogimpl__onfinalmessage"></a>  CDialogImpl::OnFinalMessage  
 Called after receiving the last message (typically `WM_NCDESTROY`).  
  
```  
 
virtual void OnFinalMessage(HWND hWnd);

 
```  
  
### Parameters  
 `hWnd`  
 [in] A handle to the window being destroyed.  
  
### Remarks  
 Note that if you want to automatically delete your object upon the window destruction, you can call `delete this;` here.  
  
##  <a name="cdialogimpl__startdialogproc"></a>  CDialogImpl::StartDialogProc  
 Called only once, when the first message is received, to process messages sent to the dialog box.  
  
```  
 
static LRESULT CALLBACK StartDialogProc(
    HWND hWnd,  
    UINT uMsg,  
    WPARAM wParam,  
    LPARAM lParam);

 
```  
  
### Parameters  
 `hWnd`  
 [in] The handle to the dialog box.  
  
 `uMsg`  
 [in] The message sent to the dialog box.  
  
 `wParam`  
 [in] Additional message-specific information.  
  
 `lParam`  
 [in] Additional message-specific information.  
  
### Return Value  
 The window procedure.  
  
### Remarks  
 After the initial call to `StartDialogProc`, `DialogProc` is set as a dialog procedure, and further calls go there.  
  
## See Also  
 [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554)   
 [Class Overview](../../atl/atl-class-overview.md)