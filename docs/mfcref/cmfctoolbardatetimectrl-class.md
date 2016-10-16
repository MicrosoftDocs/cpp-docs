---
title: "CMFCToolBarDateTimeCtrl Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "OnDrawOnCustomizeList"
  - "CMFCToolBarDateTimeCtrl::OnDraw"
  - "OnDraw"
  - "CMFCToolBarDateTimeCtrl.Serialize"
  - "CMFCToolBarDateTimeCtrl.OnSize"
  - "CMFCToolBarDateTimeCtrl.OnDrawOnCustomizeList"
  - "OnSize"
  - "OnCalculateSize"
  - "CMFCToolBarDateTimeCtrl"
  - "CMFCToolBarDateTimeCtrl::OnCalculateSize"
  - "SetStyle"
  - "CMFCToolBarDateTimeCtrl::OnDrawOnCustomizeList"
  - "CMFCToolBarDateTimeCtrl.OnDraw"
  - "CMFCToolBarDateTimeCtrl.SetStyle"
  - "CMFCToolBarDateTimeCtrl::SetStyle"
  - "CMFCToolBarDateTimeCtrl.OnCalculateSize"
  - "CMFCToolBarDateTimeCtrl::Serialize"
  - "CMFCToolBarDateTimeCtrl::OnSize"
  - "Serialize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetStyle method"
  - "OnCalculateSize method"
  - "OnDraw method"
  - "OnDrawOnCustomizeList method"
  - "CMFCToolBarDateTimeCtrl class"
  - "Serialize method"
  - "OnSize method"
ms.assetid: a3853cb9-8ebc-444f-a1e4-9cf905e24c18
caps.latest.revision: 26
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
# CMFCToolBarDateTimeCtrl Class
A toolbar button that contains a date and time picker control.  
  
## Syntax  
  
```  
class CMFCToolBarDateTimeCtrl : public CMFCToolBarButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl](#cmfctoolbardatetimectrl__cmfctoolbardatetimectrl)|Constructs a `CMFCToolBarDateTimeCtrl` object.|  
|`CMFCToolBarDateTimeCtrl::~CMFCToolBarDateTimeCtrl`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarDateTimeCtrl::CanBeStretched](#cmfctoolbardatetimectrl__canbestretched)|Specifies whether a user can stretch the button during customization. (Overrides [CMFCToolBarButton::CanBeStretched](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__canbestretched).)|  
|[CMFCToolBarDateTimeCtrl::CopyFrom](#cmfctoolbardatetimectrl__copyfrom)|Copies the properties of another toolbar button to the current button. (Overrides [CMFCToolBarButton::CopyFrom](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__copyfrom).)|  
|`CMFCToolBarDateTimeCtrl::DuplicateData`|Reserved for future use.|  
|[CMFCToolBarButton::ExportToMenuButton](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__exporttomenubutton)|Copies text from the toolbar button to a menu.|  
|`CMFCToolBarDateTimeCtrl::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMFCToolBarDateTimeCtrl::GetByCmd](#cmfctoolbardatetimectrl__getbycmd)|Retrieves the first `CMFCToolBarDateTimeCtrl` object in the application that has the specified command ID.|  
|[CMFCToolBarDateTimeCtrl::GetDateTimeCtrl](#cmfctoolbardatetimectrl__getdatetimectrl)|Returns a pointer to the date and time picker control.|  
|[CMFCToolBarDateTimeCtrl::GetHwnd](#cmfctoolbardatetimectrl__gethwnd)|Retrieves the window handle that is associated with the toolbar button. (Overrides [CMFCToolBarButton::GetHwnd](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__gethwnd).)|  
|`CMFCToolBarDateTimeCtrl::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../mfcref/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCToolBarDateTimeCtrl::GetTime](#cmfctoolbardatetimectrl__gettime)|Gets the selected time from a date and time picker control and puts it in a specified                                         [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure.|  
|[CMFCToolBarDateTimeCtrl::GetTimeAll](#cmfctoolbardatetimectrl__gettimeall)|Returns the selected time from the time picker control button that has a specified command ID.|  
|[CMFCToolBarDateTimeCtrl::HaveHotBorder](#cmfctoolbardatetimectrl__havehotborder)|Determines whether a border of the button is displayed when a user selects the button. (Overrides [CMFCToolBarButton::HaveHotBorder](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__havehotborder).)|  
|[CMFCToolBarDateTimeCtrl::NotifyCommand](#cmfctoolbardatetimectrl__notifycommand)|Specifies whether the button processes the                                         [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) message. (Overrides [CMFCToolBarButton::NotifyCommand](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__notifycommand).)|  
|[CMFCToolBarDateTimeCtrl::OnAddToCustomizePage](#cmfctoolbardatetimectrl__onaddtocustomizepage)|Called by the framework when the button is added to a **Customize** dialog box. (Overrides [CMFCToolBarButton::OnAddToCustomizePage](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onaddtocustomizepage).)|  
|`CMFCToolBarDateTimeCtrl::OnCalculateSize`|Called by the framework to calculate the size of the button for the specified device context and docking state. (Overrides [CMFCToolBarButton::OnCalculateSize](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncalculatesize).)|  
|[CMFCToolBarDateTimeCtrl::OnChangeParentWnd](#cmfctoolbardatetimectrl__onchangeparentwnd)|Called by the framework when the button is inserted into a new toolbar. (Overrides [CMFCToolBarButton::OnChangeParentWnd](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onchangeparentwnd).)|  
|[CMFCToolBarDateTimeCtrl::OnClick](#cmfctoolbardatetimectrl__onclick)|Called by the framework when the user clicks the control. (Overrides [CMFCToolBarButton::OnClick](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onclick).)|  
|[CMFCToolBarDateTimeCtrl::OnCtlColor](#cmfctoolbardatetimectrl__onctlcolor)|Called by the framework when the parent toolbar handles a `WM_CTLCOLOR` message. (Overrides [CMFCToolBarButton::OnCtlColor](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onctlcolor).)|  
|`CMFCToolBarDateTimeCtrl::OnDraw`|Called by the framework to draw the button by using the specified styles and options. (Overrides [CMFCToolBarButton::OnDraw](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__ondraw).)|  
|`CMFCToolBarDateTimeCtrl::OnDrawOnCustomizeList`|Called by the framework to draw the button in the **Commands** pane of the **Customize** dialog box. (Overrides [CMFCToolBarButton::OnDrawOnCustomizeList](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__ondrawoncustomizelist).)|  
|[CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged](#cmfctoolbardatetimectrl__onglobalfontschanged)|Called by the framework when the global font has changed. (Overrides [CMFCToolBarButton::OnGlobalFontsChanged](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onglobalfontschanged).)|  
|[CMFCToolBarDateTimeCtrl::OnMove](#cmfctoolbardatetimectrl__onmove)|Called by the framework when the parent toolbar moves. (Overrides [CMFCToolBarButton::OnMove](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onmove).)|  
|[CMFCToolBarDateTimeCtrl::OnShow](#cmfctoolbardatetimectrl__onshow)|Called by the framework when the button becomes visible or invisible. (Overrides [CMFCToolBarButton::OnShow](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onshow).)|  
|`CMFCToolBarDateTimeCtrl::OnSize`|Called by the framework when the parent toolbar changes its size or position and this change causes the button to change size. (Overrides [CMFCToolBarButton::OnSize](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onsize).)|  
|[CMFCToolBarDateTimeCtrl::OnUpdateToolTip](#cmfctoolbardatetimectrl__onupdatetooltip)|Called by the framework when the parent toolbar updates its tooltip text. (Overrides [CMFCToolBarButton::OnUpdateToolTip](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onupdatetooltip).)|  
|`CMFCToolBarDateTimeCtrl::Serialize`|Reads this object from an archive or writes it to an archive, (Overrides [CMFCToolBarButton::Serialize](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__serialize).)|  
|`CMFCToolBarDateTimeCtrl::SetStyle`|Sets the style of the toolbar button. (Overrides [CMFCToolBarButton::SetStyle](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__setstyle).)|  
|[CMFCToolBarDateTimeCtrl::SetTime](#cmfctoolbardatetimectrl__settime)|Sets the time and date in the time picker control.|  
|[CMFCToolBarDateTimeCtrl::SetTimeAll](#cmfctoolbardatetimectrl__settimeall)|Sets the time and date in all instances of the time picker control that have a specified command ID.|  
  
## Remarks  
 For an example of how to use a date and time picker control, see the ToolbarDateTimePicker sample project. For information about how to add control buttons to toolbars, see [Walkthrough: Putting Controls On Toolbars](../mfc/walkthrough--putting-controls-on-toolbars.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CMFCToolBarButton](../mfcref/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarDateTimeCtrl](../mfcref/cmfctoolbardatetimectrl-class.md)  
  
## Requirements  
 **Header:** afxtoolbardatetimectrl.h  
  
##  <a name="cmfctoolbardatetimectrl__canbestretched"></a>  CMFCToolBarDateTimeCtrl::CanBeStretched  
 Specifies whether a user can stretch the button during customization.  
  
```  
virtual BOOL CanBeStretched() const;  
```  
  
### Return Value  
 This method returns `TRUE`.  
  
### Remarks  
 By default, the framework does not allow the user to stretch a toolbar button during customization. This method extends the base class implementation ( [CMFCToolBarButton::CanBeStretched](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__canbestretched)) by allowing the user to stretch a date and time toolbar button during customization.  
  
##  <a name="cmfctoolbardatetimectrl__cmfctoolbardatetimectrl"></a>  CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl  
 Creates and initializes a [CMFCToolBarDateTimeCtrl](../mfcref/cmfctoolbardatetimectrl-class.md) object.  
  
```  
CMFCToolBarDateTimeCtrl(  
   UINT uiID,  
   int iImage,  
   DWORD dwStyle=0,  
   int iWidth=0  
);  
```  
  
### Parameters  
 [in]  `uiID`  
 The control ID.  
  
 [in]  `iImage`  
 The index of the image in the toolbar's `CMFCToolBarImages` object.  
  
 [in] `dwStyle`  
 The style of the `CMFCToolBarDateTimeCtrlImpl` window that is created when a user clicks the button.  
  
 [in] `iWidth`  
 The width of the control, in pixels.  
  
### Remarks  
 This object is initialized to the system date and time. The window style of the internal `CMFCToolBarDateTimeCtrlImpl` object includes the `dwStyle` parameter and the `WS_CHILD` and `WS_VISIBLE` styles. You cannot change these styles by using `CMFCToolBarDateTimeCtrl::SetStyle`. Use `SetStyle` to change the style of the `CMFCToolBarDateTimeCtrl` control.  
  
### Example  
 The following example demonstrates how to construct an object of the `CMFCToolBarDateTimeCtrl` class. This code snippet is part of the [Toolbar Date Time Picker sample](../top/visual-c---samples.md).  
  
 [!code[NVC_MFC_ToolbarDateTimePicker#1](../mfcref/codesnippet/CPP/cmfctoolbardatetimectrl-class_1.cpp)]  
  
##  <a name="cmfctoolbardatetimectrl__copyfrom"></a>  CMFCToolBarDateTimeCtrl::CopyFrom  
 Copies the properties of another toolbar button to the current button.  
  
```  
virtual void CopyFrom(  
   const CMFCToolBarButton& src  
);  
```  
  
### Parameters  
 [in] `src`  
 A reference to the source button from which to copy.  
  
### Remarks  
 Call this method to copy another toolbar button to this toolbar button. `src` must be of type `CMFCToolBarDateTimeCtrl`.  
  
##  <a name="cmfctoolbardatetimectrl__exporttomenubutton"></a>  CMFCToolBarDateTimeCtrl::ExportToMenuButton  
 Copies text from the toolbar button to a menu.  
  
```  
virtual BOOL ExportToMenuButton(  
   CMFCToolBarMenuButton& menuButton   
) const;  
```  
  
### Parameters  
 [in] `menuButton`  
 A reference to the target menu button.  
  
### Return Value  
 This method returns `TRUE`.  
  
### Remarks  
 This method overrides the base class implementation ( [CMFCToolBarButton::ExportToMenuButton](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__exporttomenubutton)) by loading the string resource that is associated with the command ID of the control. For more information about string resources, see [CStringT::LoadString](../Topic/CStringT::LoadString.md).  
  
##  <a name="cmfctoolbardatetimectrl__getbycmd"></a>  CMFCToolBarDateTimeCtrl::GetByCmd  
 Retrieves the first `CMFCToolBarDateTimeCtrl` object in the application that has the specified command ID.  
  
```  
static CMFCToolBarDateTimeCtrl* __stdcall GetByCmd(  
   UINT uiCmd  
);  
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of the button to retrieve.  
  
### Return Value  
 The first `CMFCToolBarDateTimeCtrl` object in the application that has the specified command ID, or `NULL` if no `CMFCToolBarDateTimeCtrl` objects have the specified command ID.  
  
### Remarks  
 This shared utility method is used by methods such as [CMFCToolBarDateTimeCtrl::SetTimeAll](#cmfctoolbardatetimectrl__settimeall) and [CMFCToolBarDateTimeCtrl::GetTimeAll](#cmfctoolbardatetimectrl__gettimeall) to set or get the time and date of all instances of the time picker control that have a specified command ID.  
  
##  <a name="cmfctoolbardatetimectrl__getdatetimectrl"></a>  CMFCToolBarDateTimeCtrl::GetDateTimeCtrl  
 Returns a pointer to the date and time picker control.  
  
```  
CDateTimeCtrl* GetDateTimeCtrl() const;  
```  
  
### Return Value  
 A pointer to date and time picker control; or `NULL` if the control does not exist.  
  
### Remarks  
 The `CMFCToolBarDateTimeCtrl` class initializes the `m_pWndDateTime` data member when you insert a `CMFCToolBarDateTimeCtrl` object into a toolbar.  
  
##  <a name="cmfctoolbardatetimectrl__gethwnd"></a>  CMFCToolBarDateTimeCtrl::GetHwnd  
 Retrieves the window handle that is associated with the toolbar button.  
  
```  
virtual HWND GetHwnd();  
```  
  
### Return Value  
 The window handle that is associated with the date and time toolbar button.  
  
### Remarks  
 This method overrides the [CMFCToolBarButton::GetHwnd](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__gethwnd) method.  
  
##  <a name="cmfctoolbardatetimectrl__gettime"></a>  CMFCToolBarDateTimeCtrl::GetTime  
 Gets the selected time from the associated date and time picker control and puts it in a specified                 [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure  
  
```  
BOOL GetTime(  
   COleDateTime& timeDest   
) const;  
DWORD GetTime(  
   CTime& timeDest   
) const;  
DWORD GetTime(  
   LPSYSTEMTIME pTimeDest   
) const;  
  
```  
  
### Parameters  
 `[out] timeDest`  
 In the first overload, a [COleDateTime Class](../atl/coledatetime-class.md) object that will receive the system time information. In the second overload, a [CTime](../atl/ctime-class.md) object that will receive the system time information.  
  
 `[out] pTimeDest`  
 A pointer to the                                 [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure to receive the system time information. Must not be `NULL`.  
  
### Return Value  
 In the first overload, nonzero if the time is successfully written to the [COleDateTime Class](../atl/coledatetime-class.md) object; otherwise 0. In the second and third overloads, the return value is a `DWORD` that is equal to the dwFlag member that was set in the                         [NMDATETIMECHANGE](http://msdn.microsoft.com/library/windows/desktop/bb761730) structure.  
  
### Remarks  
 The method sets the                         [NMDATETIMECHANGE](http://msdn.microsoft.com/library/windows/desktop/bb761730) structure member dwFlags to indicate whether the date and time picker is set to a date and time. If the value equals GDT_NONE, the control is set to `no date` status, and uses the DTS_SHOWNONE style. If the value returned equals GDT_VALID, the system time is successfully stored in the destination location.  
  
##  <a name="cmfctoolbardatetimectrl__gettimeall"></a>  CMFCToolBarDateTimeCtrl::GetTimeAll  
 Returns the time selected by the user from the time picker control button that has a specified command ID.  
  
```  
static BOOL GetTimeAll(  
   UINT uiCmd,  
   COleDateTime& timeDest   
);  
static DWORD GetTimeAll(  
   UINT uiCmd,  
   CTime& timeDest   
);  
static DWORD GetTimeAll(  
   UINT uiCmd,  
   LPSYSTEMTIME pTimeDest   
);  
```  
  
### Parameters  
 `[in] uiCmd`  
 Specifies a toolbar button's command ID.  
  
 `[out] timeDest`  
 In the first overload, a [COleDateTime Class](../atl/coledatetime-class.md) object that will receive the system time information. In the second overload, a [CTime](../atl/ctime-class.md) object that will receive the system time information.  
  
 `[out] pTimeDest`  
 A pointer to the                                 [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure to receive the system time information. Must not be `NULL`.  
  
### Return Value  
 If the framework cannot find a toolbar button that matches the command ID `uiCmd`, the return value is zero in the first overload, and GDT_NONE in the other overloads. If the toolbar button is found, the return value is the same as the return value from a call to [CMFCToolBarDateTimeCtrl::GetTime](#cmfctoolbardatetimectrl__gettime) on that button. A return value of zero or GDT_NONE can occur when the button is found, which indicates that the call to `GetTime` did not return a valid date for some other reason.  
  
### Remarks  
 This method looks for a toolbar button that has the specified command ID and calls [CMFCToolBarDateTimeCtrl::GetTime](#cmfctoolbardatetimectrl__gettime) method on that button.  
  
##  <a name="cmfctoolbardatetimectrl__havehotborder"></a>  CMFCToolBarDateTimeCtrl::HaveHotBorder  
 Determines whether a border of the button is displayed when a user selects the button.  
  
```  
virtual BOOL HaveHotBorder() const;  
```  
  
### Return Value  
 Nonzero if a button displays its border when selected; otherwise 0.  
  
### Remarks  
 This method returns a nonzero value if the control is visible.  
  
##  <a name="cmfctoolbardatetimectrl__notifycommand"></a>  CMFCToolBarDateTimeCtrl::NotifyCommand  
 Specifies whether the button processes the                 [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) message.  
  
```  
virtual BOOL NotifyCommand(  
   int iNotifyCode  
);  
```  
  
### Parameters  
 [in] `iNotifyCode`  
 The notification message that is associated with the command.  
  
### Return Value  
 `TRUE` if the button processes the `WM_COMMAND` message, or `FALSE` to indicate that the message should be handled by the parent toolbar.  
  
### Remarks  
 The framework calls this method when it is about to send a                         [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) message to the parent window.  
  
 This method extends the base class implementation ( [CMFCToolBarButton::NotifyCommand](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__notifycommand)) by processing the                         [DTN_DATETIMECHANGE](http://msdn.microsoft.com/library/windows/desktop/bb761737) notification. It updates the internal time status and updates the time property of all `CMFCToolBarDateTimeCtrl` objects with the same command ID.  
  
##  <a name="cmfctoolbardatetimectrl__onaddtocustomizepage"></a>  CMFCToolBarDateTimeCtrl::OnAddToCustomizePage  
 Called by the framework when the button is added to a **Customize** dialog box.  
  
```  
virtual void OnAddToCustomizePage();  
```  
  
### Remarks  
 This method extends the base class implementation, [CMFCToolBarButton::OnAddToCustomizePage](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onaddtocustomizepage), by copying the properties from the first date and time control in any toolbar that has the same command ID as this object. This method does nothing if no toolbar has a date and time control that has the same command ID as this object.  
  
 For more information about the **Customize** dialog box, see [CMFCToolBarsCustomizeDialog Class](../mfcref/cmfctoolbarscustomizedialog-class.md).  
  
##  <a name="cmfctoolbardatetimectrl__onchangeparentwnd"></a>  CMFCToolBarDateTimeCtrl::OnChangeParentWnd  
 Called by the framework when the button is inserted into a new toolbar.  
  
```  
virtual void OnChangeParentWnd(  
   CWnd* pWndParent  
);  
```  
  
### Parameters  
 [in] `pWndParent`  
 The new parent window.  
  
### Remarks  
 This method overrides the base class implementation ( [CMFCToolBarButton::OnChangeParentWnd](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onchangeparentwnd)) by recreating the internal `CMFCToolBarDateTimeCtrlImpl` object.  
  
##  <a name="cmfctoolbardatetimectrl__onclick"></a>  CMFCToolBarDateTimeCtrl::OnClick  
 Called by the framework when the user clicks the control.  
  
```  
virtual BOOL OnClick(  
   CWnd* pWnd,  
   BOOL bDelay = TRUE  
);  
```  
  
### Parameters  
 [in] `pWnd`  
 Unused.  
  
 [in] `bDelay`  
 Unused.  
  
### Return Value  
 Nonzero if the button processes the click message; otherwise 0.  
  
### Remarks  
 This method overrides the base class implementation, [CMFCToolBarButton::OnClick](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onclick), by returning a nonzero value if the internal `CMFCToolBarDateTimeCtrlImpl` object is visible.  
  
##  <a name="cmfctoolbardatetimectrl__onctlcolor"></a>  CMFCToolBarDateTimeCtrl::OnCtlColor  
 Called by the framework when the parent toolbar handles a `WM_CTLCOLOR` message.  
  
```  
virtual HBRUSH OnCtlColor(  
   CDC* pDC,  
   UINT nCtlColor  
);  
```  
  
### Parameters  
 [in] `pDC`  
 The device context that displays the button.  
  
 [in] `nCtlColor`  
 Unused.  
  
### Return Value  
 A handle to the global brush that the framework uses to paint the background of the button.  
  
### Remarks  
 This method overrides the base class implementation, [CMFCToolBarButton::OnCtlColor](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onctlcolor), by setting the text and background colors of the provided device context to the global text and background colors, respectively.  
  
 For more information about global options that are available to your application, see [AFX_GLOBAL_DATA Structure](../mfcref/afx_global_data-structure.md).  
  
##  <a name="cmfctoolbardatetimectrl__onglobalfontschanged"></a>  CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged  
 Called by the framework when the global font has changed.  
  
```  
virtual void OnGlobalFontsChanged();  
```  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::OnGlobalFontsChanged](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onglobalfontschanged)) by changing the font of the control to that of the global font.  
  
 For more information about global options that are available to your application, see [AFX_GLOBAL_DATA Structure](../mfcref/afx_global_data-structure.md).  
  
##  <a name="cmfctoolbardatetimectrl__onmove"></a>  CMFCToolBarDateTimeCtrl::OnMove  
 Called by the framework when the parent toolbar moves.  
  
```  
virtual void OnMove();  
```  
  
### Remarks  
 This method overrides the default class implementation ( [CMFCToolBarButton::OnMove](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onmove)) by updating the position of the internal `CMFCToolBarDateTimeCtrlImpl` object.  
  
##  <a name="cmfctoolbardatetimectrl__onshow"></a>  CMFCToolBarDateTimeCtrl::OnShow  
 Called by the framework when the button becomes visible or invisible.  
  
```  
virtual void OnShow(  
   BOOL bShow  
);  
```  
  
### Parameters  
 [in] `bShow`  
 Specifies whether the button is visible. If this parameter is `TRUE`, the button is visible. Otherwise, the button is not visible.  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::OnShow](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onshow)) by displaying the button if `bShow` is `TRUE`. Otherwise, this method hides the button.  
  
##  <a name="cmfctoolbardatetimectrl__onsize"></a>  CMFCToolBarDateTimeCtrl::OnSize  
 Called by the framework when the parent toolbar changes its size or position and this change causes the button to change size.  
  
```  
virtual void OnSize(  
   int iSize  
);  
```  
  
### Parameters  
 [in] `iSize`  
 The new width of the button, in pixels.  
  
### Remarks  
 This method overrides the default class implementation ( [CMFCToolBarButton::OnSize](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onsize)) by updating the size and position of the internal `CMFCToolBarDateTimeCtrlImpl` object.  
  
##  <a name="cmfctoolbardatetimectrl__onupdatetooltip"></a>  CMFCToolBarDateTimeCtrl::OnUpdateToolTip  
 Called by the framework when the parent toolbar updates its tooltip text.  
  
```  
virtual BOOL OnUpdateToolTip(  
   CWnd* pWndParent,  
   int iButtonIndex,  
   CToolTipCtrl& wndToolTip,  
   CString& str  
);  
```  
  
### Parameters  
 [in] `pWndParent`  
 The parent window.  
  
 [in] `iButtonIndex`  
 The zero-based index of the button in the parent button collection.  
  
 [in] `wndToolTip`  
 The control that displays the tooltip text.  
  
 [out] `str`  
 A `CString` object that receives the updated tooltip text.  
  
### Return Value  
 Nonzero if the method updates the tooltip text; otherwise 0.  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::OnUpdateToolTip](../mfcref/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onupdatetooltip)) by displaying the tooltip text that is associated with the button. If the button is not docked horizontally, this method does nothing and returns `FALSE`.  
  
##  <a name="cmfctoolbardatetimectrl__settime"></a>  CMFCToolBarDateTimeCtrl::SetTime  
 Sets the time and date in the time picker control.  
  
```  
BOOL SetTime(  
   const COleDateTime& timeNew   
);  
BOOL SetTime(  
   const CTime* timeNew   
);  
BOOL SetTime(  
   LPSYSTEMTIME pTimeNew=NULL   
);  
```  
  
### Parameters  
 `[in] timeNew`  
 In the first version, a reference to a [COleDateTime Class](../atl/coledatetime-class.md) object that contains the time to which the control will be set. In the second version, a pointer to a [CTime](../atl/ctime-class.md) object that contains the time to which the control will be set.  
  
 `[in] pTimeNew`  
 A pointer to the                                 [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure that contains the time to which the control will be set.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Sets the time in a date and time picker control by calling [CDateTimeCtrl::SetTime](../mfcref/cdatetimectrl-class.md#cdatetimectrl__settime).  
  
##  <a name="cmfctoolbardatetimectrl__settimeall"></a>  CMFCToolBarDateTimeCtrl::SetTimeAll  
 Sets the time and date in all instances of the time picker control that have a specified command ID.  
  
```  
static BOOL SetTimeAll(  
   UINT uiCmd,  
   const COleDateTime& timeNew   
);  
static BOOL SetTimeAll(  
   UINT uiCmd,  
   const CTime* pTimeNew   
);  
static BOOL SetTimeAll(  
   UINT uiCmd,  
   LPSYSTEMTIME pTimeNew=NULL   
);  
```  
  
### Parameters  
 `[in] uiCmd`  
 Specifies a toolbar button's command ID.  
  
 `[in] timeNew`  
 In the first version, a [COleDateTime Class](../atl/coledatetime-class.md) object that contains the time to which the control will be set. In the second version, a pointer to a [CTime](../atl/ctime-class.md) object that contains the time to which the control will be set.  
  
 `[in] pTimeNew`  
 A pointer to the                                 [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure that contains the time to which the control will be set.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Looks for a toolbar button with the specified command ID and sets the time in a date and time picker control by calling [CMFCToolBarDateTimeCtrl::SetTime](#cmfctoolbardatetimectrl__settime).  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCToolBarButton Class](../mfcref/cmfctoolbarbutton-class.md)   
 [Walkthrough: Putting Controls On Toolbars](../mfc/walkthrough--putting-controls-on-toolbars.md)