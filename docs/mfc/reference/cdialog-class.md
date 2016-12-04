---
title: "CDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modal dialog boxes, creating"
  - "MFC dialog boxes, base class"
  - "modeless dialog boxes, creating"
  - "modeless dialog boxes, displaying"
  - "CDialog class"
ms.assetid: ca64b77e-2cd2-47e3-8eff-c2645ad578f9
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
# CDialog Class
The base class used for displaying dialog boxes on the screen.  
  
## Syntax  
  
```  
class CDialog : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CDialog::CDialog](#cdialog__cdialog)|Constructs a `CDialog` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDialog::Create](#cdialog__create)|Initializes the `CDialog` object. Creates a modeless dialog box and attaches it to the `CDialog` object.|  
|[CDialog::CreateIndirect](#cdialog__createindirect)|Creates a modeless dialog box from a dialog-box template in memory (not resource-based).|  
|[CDialog::DoModal](#cdialog__domodal)|Calls a modal dialog box and returns when done.|  
|[CDialog::EndDialog](#cdialog__enddialog)|Closes a modal dialog box.|  
|[CDialog::GetDefID](#cdialog__getdefid)|Gets the ID of the default pushbutton control for a dialog box.|  
|[CDialog::GotoDlgCtrl](#cdialog__gotodlgctrl)|Moves the focus to a specified dialog-box control in the dialog box.|  
|[CDialog::InitModalIndirect](#cdialog__initmodalindirect)|Creates a modal dialog box from a dialog-box template in memory (not resource-based). The parameters are stored until the function `DoModal` is called.|  
|[CDialog::MapDialogRect](#cdialog__mapdialogrect)|Converts the dialog-box units of a rectangle to screen units.|  
|[CDialog::NextDlgCtrl](#cdialog__nextdlgctrl)|Moves the focus to the next dialog-box control in the dialog box.|  
|[CDialog::OnInitDialog](#cdialog__oninitdialog)|Override to augment dialog-box initialization.|  
|[CDialog::OnSetFont](#cdialog__onsetfont)|Override to specify the font that a dialog-box control is to use when it draws text.|  
|[CDialog::PrevDlgCtrl](#cdialog__prevdlgctrl)|Moves the focus to the previous dialog-box control in the dialog box.|  
|[CDialog::SetDefID](#cdialog__setdefid)|Changes the default pushbutton control for a dialog box to a specified pushbutton.|  
|[CDialog::SetHelpID](#cdialog__sethelpid)|Sets a context-sensitive help ID for the dialog box.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDialog::OnCancel](#cdialog__oncancel)|Override to perform the Cancel button or ESC key action. The default closes the dialog box and **DoModal** returns **IDCANCEL**.|  
|[CDialog::OnOK](#cdialog__onok)|Override to perform the OK button action in a modal dialog box. The default closes the dialog box and `DoModal` returns **IDOK**.|  
  
## Remarks  
 Dialog boxes are of two types: modal and modeless. A modal dialog box must be closed by the user before the application continues. A modeless dialog box allows the user to display the dialog box and return to another task without canceling or removing the dialog box.  
  
 A `CDialog` object is a combination of a dialog template and a `CDialog`-derived class. Use the dialog editor to create the dialog template and store it in a resource, then use the Add Class wizard to create a class derived from `CDialog`.  
  
 A dialog box, like any other window, receives messages from Windows. In a dialog box, you are particularly interested in handling notification messages from the dialog box's controls since that is how the user interacts with your dialog box. Use the Properties window to select which messages you wish to handle and it will add the appropriate message-map entries and message-handler member functions to the class for you. You only need to write application-specific code in the handler member functions.  
  
 If you prefer, you can always write message-map entries and member functions manually.  
  
 In all but the most trivial dialog box, you add member variables to your derived dialog class to store data entered in the dialog box's controls by the user or to display data for the user. You can use the Add Variable wizard to create member variables and associate them with controls. At the same time, you choose a variable type and permissible range of values for each variable. The code wizard adds the member variables to your derived dialog class.  
  
 A data map is generated to automatically handle the exchange of data between the member variables and the dialog box's controls. The data map provides functions that initialize the controls in the dialog box with the proper values, retrieve the data, and validate the data.  
  
 To create a modal dialog box, construct an object on the stack using the constructor for your derived dialog class and then call `DoModal` to create the dialog window and its controls. If you wish to create a modeless dialog, call **Create** in the constructor of your dialog class.  
  
 You can also create a template in memory by using a [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) data structure as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. After you construct a `CDialog` object, call [CreateIndirect](#cdialog__createindirect) to create a modeless dialog box, or call [InitModalIndirect](#cdialog__initmodalindirect) and [DoModal](#cdialog__domodal) to create a modal dialog box.  
  
 The exchange and validation data map is written in an override of `CWnd::DoDataExchange` that is added to your new dialog class. See the [DoDataExchange](../../mfc/reference/cwnd-class.md#cwnd__dodataexchange) member function in `CWnd` for more on the exchange and validation functionality.  
  
 Both the programmer and the framework call `DoDataExchange` indirectly through a call to [CWnd::UpdateData](../../mfc/reference/cwnd-class.md#cwnd__updatedata).  
  
 The framework calls `UpdateData` when the user clicks the OK button to close a modal dialog box. (The data is not retrieved if the Cancel button is clicked.) The default implementation of [OnInitDialog](#cdialog__oninitdialog) also calls `UpdateData` to set the initial values of the controls. You typically override `OnInitDialog` to further initialize controls. `OnInitDialog` is called after all the dialog controls are created and just before the dialog box is displayed.  
  
 You can call `CWnd::UpdateData` at any time during the execution of a modal or modeless dialog box.  
  
 If you develop a dialog box by hand, you add the necessary member variables to the derived dialog-box class yourself, and you add member functions to set or get these values.  
  
 A modal dialog box closes automatically when the user presses the OK or Cancel buttons or when your code calls the `EndDialog` member function.  
  
 When you implement a modeless dialog box, always override the `OnCancel` member function and call `DestroyWindow` from within it. Don't call the base class `CDialog::OnCancel`, because it calls `EndDialog`, which will make the dialog box invisible but will not destroy it. You should also override `PostNcDestroy` for modeless dialog boxes in order to delete **this**, since modeless dialog boxes are usually allocated with **new**. Modal dialog boxes are usually constructed on the frame and do not need `PostNcDestroy` cleanup.  
  
 For more information on `CDialog`, see:  
  
- [Dialog Boxes](../../mfc/dialog-boxes.md)  
  
-   Knowledge Base article Q262954 : HOWTO: Create a Resizeable Dialog Box with Scroll Bars  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDialog`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cdialog__cdialog"></a>  CDialog::CDialog  
 To construct a resource-based modal dialog box, call either public form of the constructor.  
  
```  
explicit CDialog(
    LPCTSTR lpszTemplateName,  
    CWnd* pParentWnd = NULL);

 
explicit CDialog(
    UINT nIDTemplate,  
    CWnd* pParentWnd = NULL);

 
CDialog();
```  
  
### Parameters  
 `lpszTemplateName`  
 Contains a null-terminated string that is the name of a dialog-box template resource.  
  
 `nIDTemplate`  
 Contains the ID number of a dialog-box template resource.  
  
 `pParentWnd`  
 Points to the parent or owner window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is **NULL**, the dialog object's parent window is set to the main application window.  
  
### Remarks  
 One form of the constructor provides access to the dialog resource by template name. The other constructor provides access by template ID number, usually with an **IDD_** prefix (for example, IDD_DIALOG1).  
  
 To construct a modal dialog box from a template in memory, first invoke the parameterless, protected constructor and then call `InitModalIndirect`.  
  
 After you construct a modal dialog box with one of the above methods, call `DoModal`.  
  
 To construct a modeless dialog box, use the protected form of the `CDialog` constructor. The constructor is protected because you must derive your own dialog-box class to implement a modeless dialog box. Construction of a modeless dialog box is a two-step process. First call the constructor; then call the **Create** member function to create a resource-based dialog box, or call `CreateIndirect` to create the dialog box from a template in memory.  
  
##  <a name="cdialog__create"></a>  CDialog::Create  
 Call **Create** to create a modeless dialog box using a dialog-box template from a resource.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszTemplateName,  
    CWnd* pParentWnd = NULL);

 
virtual BOOL Create(
    UINT nIDTemplate,  
    CWnd* pParentWnd = NULL);
```  
  
### Parameters  
 `lpszTemplateName`  
 Contains a null-terminated string that is the name of a dialog-box template resource.  
  
 `pParentWnd`  
 Points to the parent window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is **NULL**, the dialog object's parent window is set to the main application window.  
  
 `nIDTemplate`  
 Contains the ID number of a dialog-box template resource.  
  
### Return Value  
 Both forms return nonzero if dialog-box creation and initialization were successful; otherwise 0.  
  
### Remarks  
 You can put the call to **Create** inside the constructor or call it after the constructor is invoked.  
  
 Two forms of the **Create** member function are provided for access to the dialog-box template resource by either template name or template ID number (for example, IDD_DIALOG1).  
  
 For either form, pass a pointer to the parent window object. If `pParentWnd` is **NULL**, the dialog box will be created with its parent or owner window set to the main application window.  
  
 The **Create** member function returns immediately after it creates the dialog box.  
  
 Use the **WS_VISIBLE** style in the dialog-box template if the dialog box should appear when the parent window is created. Otherwise, you must call `ShowWindow`. For further dialog-box styles and their application, see the [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] and [Window Styles](../../mfc/reference/window-styles.md) in the *MFC Reference*.  
  
 Use the `CWnd::DestroyWindow` function to destroy a dialog box created by the **Create** function.  
  
### Example  
 [!code-cpp[NVC_MFCControlLadenDialog#62](../../mfc/codesnippet/cpp/cdialog-class_1.cpp)]  
  
##  <a name="cdialog__createindirect"></a>  CDialog::CreateIndirect  
 Call this member function to create a modeless dialog box from a dialog-box template in memory.  
  
```  
virtual BOOL CreateIndirect(
    LPCDLGTEMPLATE lpDialogTemplate,  
    CWnd* pParentWnd = NULL,  
    void* lpDialogInit = NULL);

 
virtual BOOL CreateIndirect(
    HGLOBAL hDialogTemplate,  
    CWnd* pParentWnd = NULL);
```  
  
### Parameters  
 `lpDialogTemplate`  
 Points to memory that contains a dialog-box template used to create the dialog box. This template is in the form of a [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) structure and control information, as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pParentWnd`  
 Points to the dialog object's parent window object (of type [CWnd](../../mfc/reference/cwnd-class.md)). If it is **NULL**, the dialog object's parent window is set to the main application window.  
  
 `lpDialogInit`  
 Points to a **DLGINIT** resource.  
  
 `hDialogTemplate`  
 Contains a handle to global memory containing a dialog-box template. This template is in the form of a **DLGTEMPLATE** structure and data for each control in the dialog box.  
  
### Return Value  
 Nonzero if the dialog box was created and initialized successfully; otherwise 0.  
  
### Remarks  
 The `CreateIndirect` member function returns immediately after it creates the dialog box.  
  
 Use the **WS_VISIBLE** style in the dialog-box template if the dialog box should appear when the parent window is created. Otherwise, you must call `ShowWindow` to cause it to appear. For more information on how you can specify other dialog-box styles in the template, see the [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Use the `CWnd::DestroyWindow` function to destroy a dialog box created by the `CreateIndirect` function.  
  
 Dialog boxes that contain ActiveX controls require additional information provided in a **DLGINIT** resource. For more information, see Knowledge Base article Q231591, " HOWTO: Use a Dialog Template to Create a MFC Dialog with an ActiveX Control." Knowledge Base articles are available in the MSDN Library Visual Studio documentation or at [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="cdialog__domodal"></a>  CDialog::DoModal  
 Call this member function to invoke the modal dialog box and return the dialog-box result when done.  
  
```  
virtual INT_PTR DoModal();
```  
  
### Return Value  
 An `int` value that specifies the value of the `nResult` parameter that was passed to the [CDialog::EndDialog](#cdialog__enddialog) member function, which is used to close the dialog box. The return value is –1 if the function could not create the dialog box, or **IDABORT** if some other error occurred, in which case the output window will contain error information from [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### Remarks  
 This member function handles all interaction with the user while the dialog box is active. This is what makes the dialog box modal; that is, the user cannot interact with other windows until the dialog box is closed.  
  
 If the user clicks one of the pushbuttons in the dialog box, such as OK or Cancel, a message-handler member function, such as [OnOK](#cdialog__onok) or [OnCancel](#cdialog__oncancel), is called to attempt to close the dialog box. The default `OnOK` member function will validate and update the dialog-box data and close the dialog box with result **IDOK**, and the default `OnCancel` member function will close the dialog box with result **IDCANCEL** without validating or updating the dialog-box data. You can override these message-handler functions to alter their behavior.  
  
> [!NOTE]
> `PreTranslateMessage` is now called for modal dialog box message processing.  
  
### Example  
 [!code-cpp[NVC_MFCControlLadenDialog#63](../../mfc/codesnippet/cpp/cdialog-class_2.cpp)]  
  
##  <a name="cdialog__enddialog"></a>  CDialog::EndDialog  
 Call this member function to terminate a modal dialog box.  
  
```  
void EndDialog(int nResult);
```  
  
### Parameters  
 `nResult`  
 Contains the value to be returned from the dialog box to the caller of `DoModal`.  
  
### Remarks  
 This member function returns `nResult` as the return value of `DoModal`. You must use the `EndDialog` function to complete processing whenever a modal dialog box is created.  
  
 You can call `EndDialog` at any time, even in [OnInitDialog](#cdialog__oninitdialog), in which case you should close the dialog box before it is shown or before the input focus is set.  
  
 `EndDialog` does not close the dialog box immediately. Instead, it sets a flag that directs the dialog box to close as soon as the current message handler returns.  
  
### Example  
 [!code-cpp[NVC_MFCControlLadenDialog#64](../../mfc/codesnippet/cpp/cdialog-class_3.cpp)]  
  
 [!code-cpp[NVC_MFCControlLadenDialog#65](../../mfc/codesnippet/cpp/cdialog-class_4.cpp)]  
  
##  <a name="cdialog__getdefid"></a>  CDialog::GetDefID  
 Call the `GetDefID` member function to get the ID of the default pushbutton control for a dialog box.  
  
```  
DWORD GetDefID() const;

 
```  
  
### Return Value  
 A 32-bit value ( `DWORD`). If the default pushbutton has an ID value, the high-order word contains **DC_HASDEFID** and the low-order word contains the ID value. If the default pushbutton does not have an ID value, the return value is 0.  
  
### Remarks  
 This is usually an OK button.  
  
##  <a name="cdialog__gotodlgctrl"></a>  CDialog::GotoDlgCtrl  
 Moves the focus to the specified control in the dialog box.  
  
```  
void GotoDlgCtrl(CWnd* pWndCtrl);
```  
  
### Parameters  
 `pWndCtrl`  
 Identifies the window (control) that is to receive the focus.  
  
### Remarks  
 To get a pointer to the control (child window) to pass as `pWndCtrl`, call the `CWnd::GetDlgItem` member function, which returns a pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object.  
  
### Example  
  See the example for [CWnd::GetDlgItem](../../mfc/reference/cwnd-class.md#cwnd__getdlgitem).  
  
##  <a name="cdialog__initmodalindirect"></a>  CDialog::InitModalIndirect  
 Call this member function to initialize a modal dialog object using a dialog-box template that you construct in memory.  
  
```  
BOOL InitModalIndirect(
    LPCDLGTEMPLATE lpDialogTemplate,  
    CWnd* pParentWnd = NULL,  
    void* lpDialogInit = NULL);

 
    BOOL InitModalIndirect(
    HGLOBAL hDialogTemplate,  
    CWnd* pParentWnd = NULL);
```  
  
### Parameters  
 `lpDialogTemplate`  
 Points to memory that contains a dialog-box template used to create the dialog box. This template is in the form of a [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) structure and control information, as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `hDialogTemplate`  
 Contains a handle to global memory containing a dialog-box template. This template is in the form of a **DLGTEMPLATE** structure and data for each control in the dialog box.  
  
 `pParentWnd`  
 Points to the parent or owner window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is **NULL**, the dialog object's parent window is set to the main application window.  
  
 `lpDialogInit`  
 Points to a **DLGINIT** resource.  
  
### Return Value  
 Nonzero if the dialog object was created and initialized successfully; otherwise 0.  
  
### Remarks  
 To create a modal dialog box indirectly, first allocate a global block of memory and fill it with the dialog box template. Then call the empty `CDialog` constructor to construct the dialog-box object. Next, call `InitModalIndirect` to store your handle to the in-memory dialog-box template. The Windows dialog box is created and displayed later, when the [DoModal](#cdialog__domodal) member function is called.  
  
 Dialog boxes that contain ActiveX controls require additional information provided in a **DLGINIT** resource. For more information, see Knowledge Base article Q231591, " HOWTO: Use a Dialog Template to Create a MFC Dialog with an ActiveX Control." Knowledge Base articles are available in the MSDN Library Visual Studio documentation or at [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="cdialog__mapdialogrect"></a>  CDialog::MapDialogRect  
 Call to convert the dialog-box units of a rectangle to screen units.  
  
```  
void MapDialogRect(LPRECT lpRect) const;

 
```  
  
### Parameters  
 `lpRect`  
 Points to a [RECT](../../mfc/reference/rect-structure1.md) structure or [CRect](../../atl-mfc-shared/reference/crect-class.md) object that contains the dialog-box coordinates to be converted.  
  
### Remarks  
 Dialog-box units are stated in terms of the current dialog-box base unit derived from the average width and height of characters in the font used for dialog-box text. One horizontal unit is one-fourth of the dialog-box base-width unit, and one vertical unit is one-eighth of the dialog-box base height unit.  
  
 The **GetDialogBaseUnits** Windows function returns size information for the system font, but you can specify a different font for each dialog box if you use the **DS_SETFONT** style in the resource-definition file. The `MapDialogRect` Windows function uses the appropriate font for this dialog box.  
  
 The `MapDialogRect` member function replaces the dialog-box units in `lpRect` with screen units (pixels) so that the rectangle can be used to create a dialog box or position a control within a box.  
  
##  <a name="cdialog__nextdlgctrl"></a>  CDialog::NextDlgCtrl  
 Moves the focus to the next control in the dialog box.  
  
```  
void NextDlgCtrl() const;

 
```  
  
### Remarks  
 If the focus is at the last control in the dialog box, it moves to the first control.  
  
##  <a name="cdialog__oncancel"></a>  CDialog::OnCancel  
 The framework calls this method when the user clicks **Cancel** or presses the ESC key in a modal or modeless dialog box.  
  
```  
virtual void OnCancel();
```  
  
### Remarks  
 Override this method to perform actions (such as restoring old data) when a user closes the dialog box by clicking **Cancel** or hitting the ESC key. The default closes a modal dialog box by calling [EndDialog](#cdialog__enddialog) and causing [DoModal](#cdialog__domodal) to return IDCANCEL.  
  
 If you implement the **Cancel** button in a modeless dialog box, you must override the `OnCancel` method and call [DestroyWindow](../../mfc/reference/cwnd-class.md#cwnd__destroywindow) inside it. Do not call the base-class method, because it calls `EndDialog`, which will make the dialog box invisible but not destroy it.  
  
> [!NOTE]
>  You cannot override this method when you use a `CFileDialog` object in a program that is compiled under Windows XP. For more information about `CFileDialog`, see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCControlLadenDialog#66](../../mfc/codesnippet/cpp/cdialog-class_5.cpp)]  
  
##  <a name="cdialog__oninitdialog"></a>  CDialog::OnInitDialog  
 This method is called in response to the `WM_INITDIALOG` message.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### Return Value  
 Specifies whether the application has set the input focus to one of the controls in the dialog box. If `OnInitDialog` returns nonzero, Windows sets the input focus to the default location, the first control in the dialog box. The application can return 0 only if it has explicitly set the input focus to one of the controls in the dialog box.  
  
### Remarks  
 Windows sends the `WM_INITDIALOG` message to the dialog box during the [Create](#cdialog__create), [CreateIndirect](#cdialog__createindirect), or [DoModal](#cdialog__domodal) calls, which occur immediately before the dialog box is displayed.  
  
 Override this method if you want to perform special processing when the dialog box is initialized. In the overridden version, first call the base class `OnInitDialog` but ignore its return value. You will typically return `TRUE` from your overridden method.  
  
 Windows calls the `OnInitDialog` function by using the standard global dialog-box procedure common to all Microsoft Foundation Class Library dialog boxes. It does not call this function through your message map, and therefore you do not need a message map entry for this method.  
  
> [!NOTE]
>  You cannot override this method when you use a `CFileDialog` object in a program that is compiled under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. For more information about changes to `CFileDialog` under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCControlLadenDialog#67](../../mfc/codesnippet/cpp/cdialog-class_6.cpp)]  
  
##  <a name="cdialog__onok"></a>  CDialog::OnOK  
 Called when the user clicks the **OK** button (the button with an ID of IDOK).  
  
```  
virtual void OnOK();
```  
  
### Remarks  
 Override this method to perform actions when the **OK** button is activated. If the dialog box includes automatic data validation and exchange, the default implementation of this method validates the dialog box data and updates the appropriate variables in your application.  
  
 If you implement the **OK** button in a modeless dialog box, you must override the `OnOK` method and call [DestroyWindow](../../mfc/reference/cwnd-class.md#cwnd__destroywindow) inside it. Do not call the base-class method, because it calls [EndDialog](#cdialog__enddialog) which makes the dialog box invisible but does not destroy it.  
  
> [!NOTE]
>  You cannot override this method when you use a `CFileDialog` object in a program that is compiled under Windows XP. For more information about `CFileDialog`, see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).  
  
### Example  
 [!code-cpp[NVC_MFCControlLadenDialog#68](../../mfc/codesnippet/cpp/cdialog-class_7.cpp)]  
  
##  <a name="cdialog__onsetfont"></a>  CDialog::OnSetFont  
 Specifies the font a dialog-box control will use when drawing text.  
  
```  
Virtual void OnSetFont(CFont* pFont);
```  
  
### Parameters  
 [in] `pFont`  
 Specifies a pointer to the font that will be used as the default font for all controls in this dialog box.  
  
### Remarks  
 The dialog box will use the specified font as the default for all its controls.  
  
 The dialog editor typically sets the dialog-box font as part of the dialog-box template resource.  
  
> [!NOTE]
>  You cannot override this method when you use a `CFileDialog` object in a program that is compiled under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. For more information about changes to `CFileDialog` under [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).  
  
##  <a name="cdialog__prevdlgctrl"></a>  CDialog::PrevDlgCtrl  
 Sets the focus to the previous control in the dialog box.  
  
```  
void PrevDlgCtrl() const;

 
```  
  
### Remarks  
 If the focus is at the first control in the dialog box, it moves to the last control in the box.  
  
##  <a name="cdialog__setdefid"></a>  CDialog::SetDefID  
 Changes the default pushbutton control for a dialog box.  
  
```  
void SetDefID(UINT nID);
```  
  
### Parameters  
 `nID`  
 Specifies the ID of the pushbutton control that will become the default.  
  
##  <a name="cdialog__sethelpid"></a>  CDialog::SetHelpID  
 Sets a context-sensitive help ID for the dialog box.  
  
```  
void SetHelpID(UINT nIDR);
```  
  
### Parameters  
 *nIDR*  
 Specifies the context-sensitive help ID.  
  
## See Also  
 [MFC Sample DLGCBR32](../../visual-cpp-samples.md)   
 [MFC Sample DLGTEMPL](../../visual-cpp-samples.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)

