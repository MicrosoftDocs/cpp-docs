---
title: "CDateTimeCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDateTimeCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DateTimePicker control [MFC], CDateTimeCtrl class"
  - "date-picking functionality"
  - "CDateTimeCtrl class"
  - "DateTimePicker control [MFC]"
ms.assetid: 7113993b-5d37-4148-939f-500a190c5bdc
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
# CDateTimeCtrl Class
Encapsulates the functionality of a date and time picker control.  
  
## Syntax  
  
```  
class CDateTimeCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CDateTimeCtrl::CDateTimeCtrl](#cdatetimectrl__cdatetimectrl)|Constructs a `CDateTimeCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDateTimeCtrl::CloseMonthCal](#cdatetimectrl__closemonthcal)|Closes the current date and time picker control.|  
|[CDateTimeCtrl::Create](#cdatetimectrl__create)|Creates the date and time picker control and attaches it to the `CDateTimeCtrl` object.|  
|[CDateTimeCtrl::GetDateTimePickerInfo](#cdatetimectrl__getdatetimepickerinfo)|Retrieves information about the current date and time picker control.|  
|[CDateTimeCtrl::GetIdealSize](#cdatetimectrl__getidealsize)|Returns the ideal size of the date and time picker control that is required to display the current date or time.|  
|[CDateTimeCtrl::GetMonthCalColor](#cdatetimectrl__getmonthcalcolor)|Retrieves the color for a given portion of the month calendar within the date and time picker control.|  
|[CDateTimeCtrl::GetMonthCalCtrl](#cdatetimectrl__getmonthcalctrl)|Retrieves the `CMonthCalCtrl` object associated with the date and time picker control.|  
|[CDateTimeCtrl::GetMonthCalFont](#cdatetimectrl__getmonthcalfont)|Retrieves the font currently used by the date and time picker control's child month calendar control.|  
|[CDateTimeCtrl::GetMonthCalStyle](#cdatetimectrl__getmonthcalstyle)|Gets the style of the current date and time picker control.|  
|[CDateTimeCtrl::GetRange](#cdatetimectrl__getrange)|Retrieves the current minimum and maximum allowed system times for a date and time picker control.|  
|[CDateTimeCtrl::GetTime](#cdatetimectrl__gettime)|Retrieves the currently selected time from a date and time picker control and puts it in a specified `SYSTEMTIME` structure.|  
|[CDateTimeCtrl::SetFormat](#cdatetimectrl__setformat)|Sets the display of a date and time picker control in accordance with a given format string.|  
|[CDateTimeCtrl::SetMonthCalColor](#cdatetimectrl__setmonthcalcolor)|Sets the color for a given portion of the month calendar within a date and time picker control.|  
|[CDateTimeCtrl::SetMonthCalFont](#cdatetimectrl__setmonthcalfont)|Sets the font that the date and time picker control's child month calendar control will use.|  
|[CDateTimeCtrl::SetMonthCalStyle](#cdatetimectrl__setmonthcalstyle)|Sets the style of the current date and time picker control.|  
|[CDateTimeCtrl::SetRange](#cdatetimectrl__setrange)|Sets the minimum and maximum allowed system times for a date and time picker control.|  
|[CDateTimeCtrl::SetTime](#cdatetimectrl__settime)|Sets the time in a date and time picker control.|  
  
## Remarks  
 The date and time picker control (DTP control) provides a simple interface to exchange date and time information with a user. This interface contains fields, each of which displays a part of the date and time information stored in the control. The user can change the information stored in the control by changing the content of the string in a given field. The user can move from field to field using the mouse or the keyboard.  
  
 You can customize the date and time picker control by applying a variety of styles to the object when you create it. See [Date and Time Picker Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb761728) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information about styles specific to the date and time picker control. You can set the display format of the DTP control using format styles. These format styles are described under "Format Styles" in the [!INCLUDE[winsdkshort](../../atl-mfc-shared/reference/includes/winsdkshort_md.md)] topic [Date and Time Picker Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb761728).  
  
 The date and time picker control also uses notifications and callbacks, which are described in [Using CDateTimeCtrl](../../mfc/using-cdatetimectrl.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDateTimeCtrl`  
  
## Requirements  
 **Header:** afxdtctl.h  
  
##  <a name="cdatetimectrl__cdatetimectrl"></a>  CDateTimeCtrl::CDateTimeCtrl  
 Constructs a `CDateTimeCtrl` object.  
  
```  
CDateTimeCtrl();
```  
  
##  <a name="cdatetimectrl__closemonthcal"></a>  CDateTimeCtrl::CloseMonthCal  
 Closes the current date and time picker control.  
  
```  
void CloseMonthCal() const;

 
```  
  
### Remarks  
 This method sends the [DTM_CLOSEMONTHCAL](http://msdn.microsoft.com/library/windows/desktop/bb761753) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_dateTimeCtrl`, that is used to programmatically access the date and time picker control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]  
  
### Example  
 The following code example closes the drop-down calendar for the current date and time picker control.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#5](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_2.cpp)]  
  
##  <a name="cdatetimectrl__create"></a>  CDateTimeCtrl::Create  
 Creates the date and time picker control and attaches it to the `CDateTimeCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `dwStyle`  
 Specifies the combination of date time control styles. See [Date and Time Picker Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb761728) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information about date and time picker styles.  
  
 `rect`  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure, which is the position and size of the date and time picker control.  
  
 `pParentWnd`  
 A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the parent window of the date and time picker control. It must not be **NULL**.  
  
 `nID`  
 Specifies the date and time picker control's control ID.  
  
### Return Value  
 Nonzero if creation was successful; otherwise 0.  
  
### Remarks  
  
##### To create a date and time picker control  
  
1.  Call [CDateTimeCtrl](#cdatetimectrl__cdatetimectrl) to construct a `CDateTimeCtrl` object.  
  
2.  Call this member function, which creates the Windows date and time picker control and attaches it to the `CDateTimeCtrl` object.  
  
 When you call **Create**, the common controls are initialized.  
  
### Example  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_3.cpp)]  
  
##  <a name="cdatetimectrl__getdatetimepickerinfo"></a>  CDateTimeCtrl::GetDateTimePickerInfo  
 Retrieves information about the current date and time picker control.  
  
```  
 
BOOL GetDateTimePickerInfo(
LPDATETIMEPICKERINFO pDateTimePickerInfo) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[out] `pDateTimePickerInfo`|A pointer to a [DATETIMEPICKERINFO](http://msdn.microsoft.com/library/windows/desktop/bb761729) structure that receives a description of the current date and time picker control.<br /><br /> The caller is responsible for allocating this structure. However, this method initializes the `cbSize` member of the structure.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
### Remarks  
 This method sends the [DTM_GETDATETIMEPICKERINFO](http://msdn.microsoft.com/library/windows/desktop/bb761755) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_dateTimeCtrl`, that is used to programmatically access the date and time picker control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]  
  
### Example  
 The following code example indicates whether it successfully retrieves information about the current date and time picker control.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_4.cpp)]  
  
##  <a name="cdatetimectrl__getmonthcalcolor"></a>  CDateTimeCtrl::GetMonthCalColor  
 Retrieves the color for a given portion of the month calendar within the date and time picker control.  
  
```  
COLORREF GetMonthCalColor(int iColor) const;

 
```  
  
### Parameters  
 `iColor`  
 An `int` value specifying which color area of the month calendar to retrieve. For a list of values, see the `iColor` parameter for [SetMonthCalColor](#cdatetimectrl__setmonthcalcolor).  
  
### Return Value  
 A **COLORREF** value that represents the color setting for the specified portion of the month calendar control if successful. The function returns -1 if unsuccessful.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [DTM_GETMCCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb761759), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#2](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_5.cpp)]  
  
##  <a name="cdatetimectrl__getmonthcalctrl"></a>  CDateTimeCtrl::GetMonthCalCtrl  
 Retrieves the `CMonthCalCtrl` object associated with the date and time picker control.  
  
```  
CMonthCalCtrl* GetMonthCalCtrl() const;

 
```  
  
### Return Value  
 A pointer to a [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md) object, or **NULL** if unsuccessful or if the window is not visible.  
  
### Remarks  
 Date and time picker controls create a child month calendar control when the user clicks the drop-down arrow. When the `CMonthCalCtrl` object is no longer needed, it is destroyed, so your application must not rely on storing the object representing the date time picker control's child month calendar.  
  
### Example  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#3](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_6.cpp)]  
  
##  <a name="cdatetimectrl__getmonthcalfont"></a>  CDateTimeCtrl::GetMonthCalFont  
 Gets the font currently used by the date and time picker control's month calendar control.  
  
```  
CFont* GetMonthCalFont() const;

 
```  
  
### Return Value  
 A pointer to a [CFont](../../mfc/reference/cfont-class.md) object, or **NULL** if unsuccessful.  
  
### Remarks  
 The `CFont` object pointed to by the return value is a temporary object and is destroyed during the next idle processing time.  
  
##  <a name="cdatetimectrl__getmonthcalstyle"></a>  CDateTimeCtrl::GetMonthCalStyle  
 Gets the style of the drop-down month calendar control that is associated with the current date and time picker control.  
  
```  
DWORD GetMonthCalStyle() const;

 
```  
  
### Return Value  
 The style of the drop-down month calendar control, which is a bitwise combination (OR) of date and time picker control styles. For more information, see [Month Calendar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760919).  
  
### Remarks  
 This method sends the [DTM_GETMCSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb761763) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cdatetimectrl__getrange"></a>  CDateTimeCtrl::GetRange  
 Retrieves the current minimum and maximum allowed system times for a date and time picker control.  
  
```  
DWORD GetRange(
    COleDateTime* pMinRange,  
    COleDateTime* pMaxRange) const;

 
 
DWORD GetRange(
    CTime* pMinRange,  
    CTime* pMaxRange) const;

 
```  
  
### Parameters  
 `pMinRange`  
 A pointer to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object or a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object containing the earliest time allowed in the `CDateTimeCtrl` object.  
  
 `pMaxRange`  
 A pointer to a `COleDateTime` object or a `CTime` object containing the latest time allowed in the `CDateTimeCtrl` object.  
  
### Return Value  
 A `DWORD` value containing flags that indicate which ranges are set. If  
  
 `return value & GDTR_MAX` == 0  
  
 then the second parameter is valid. Similarly, if  
  
 `return value & GDTR_MIN` == 0  
  
 then the first parameter is valid.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [DTM_GETRANGE](http://msdn.microsoft.com/library/windows/desktop/bb761767), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. In MFC's implementation, you can specify either `COleDateTime` or `CTime` usages.  
  
### Example  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#4](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_7.cpp)]  
  
##  <a name="cdatetimectrl__gettime"></a>  CDateTimeCtrl::GetTime  
 Retrieves the currently selected time from a date and time picker control and puts it in a specified `SYSTEMTIME` structure.  
  
```  
BOOL GetTime(COleDateTime& timeDest) const;

 
 
DWORD GetTime(CTime& timeDest) const;

 
 
DWORD GetTime(LPSYSTEMTIME pTimeDest) const;

 
```  
  
### Parameters  
 *timeDest*  
 In the first version, a reference to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object that will receive the system time information. In the second version, a reference to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object that will receive the system time information.  
  
 *pTimeDest*  
 A pointer to the [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure to receive the system time information. Must not be **NULL**.  
  
### Return Value  
 In the first version, nonzero if the time is successfully written to the `COleDateTime` object; otherwise 0. In the second and third versions, a `DWORD` value equal to the **dwFlag** member set in the [NMDATETIMECHANGE](http://msdn.microsoft.com/library/windows/desktop/bb761730) structure. See the **Remarks** section below for more information.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [DTM_GETSYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/bb761769), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. In the MFC implementation of **GetTime**, you can use `COleDateTime` or `CTime` classes, or you can use a `SYSTEMTIME` structure, to store the time information.  
  
 The return value `DWORD` in the second and third versions, above, indicates whether or not the date and time picker control is set to the "no date" status, as indicated in the [NMDATETIMECHANGE](http://msdn.microsoft.com/library/windows/desktop/bb761730) structure member `dwFlags`. If the value returned equals **GDT_NONE**, the control is set to "no date" status, and uses the **DTS_SHOWNONE** style. If the value returned equals **GDT_VALID**, the system time is successfully stored in the destination location.  
  
### Example  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#5](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_8.cpp)]  
  
##  <a name="cdatetimectrl__getidealsize"></a>  CDateTimeCtrl::GetIdealSize  
 Returns the ideal size of the date and time picker control that is required to display the current date or time.  
  
```  
 
BOOL GetIdealSize(
LPSIZE psize) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[out] `psize`|Pointer to a [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) structure that contains the ideal size for the control.|  
  
### Return Value  
 The return value is always `true`.  
  
### Remarks  
 This method sends the [DTM_GETIDEALSIZE](http://msdn.microsoft.com/library/windows/desktop/bb761757) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_dateTimeCtrl`, that is used to programmatically access the date and time picker control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]  
  
### Example  
 The following code example retrieves the ideal size to display the date and time picker control.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_9.cpp)]  
  
##  <a name="cdatetimectrl__setformat"></a>  CDateTimeCtrl::SetFormat  
 Sets the display of a date and time picker control in accordance with a given format string.  
  
```  
BOOL SetFormat(LPCTSTR pstrFormat);
```  
  
### Parameters  
 *pstrFormat*  
 A pointer to a zero-terminated format string that defines the desired display. Setting this parameter to **NULL** will reset the control to the default format string for the current style.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
> [!NOTE]
>  User input does not determine success or failure for this call.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [DTM_SETFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb761771), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#6](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_10.cpp)]  
  
##  <a name="cdatetimectrl__setmonthcalcolor"></a>  CDateTimeCtrl::SetMonthCalColor  
 Sets the color for a given portion of the month calendar within a date and time picker control.  
  
```  
COLORREF SetMonthCalColor(
    int iColor,  
    COLORREF ref);
```  
  
### Parameters  
 `iColor`  
 `int` value specifying which area of the month calendar control to set. This value can be one of the following.  
  
|Value|Meaning|  
|-----------|-------------|  
|MCSC_BACKGROUND|Set the background color displayed between months.|  
|MCSC_MONTHBK|Set the background color displayed within a month.|  
|MCSC_TEXT|Set the color used to display text within a month.|  
|MCSC_TITLEBK|Set the background color displayed in the calendar's title.|  
|MCSC_TITLETEXT|Set the color used to display text within the calendar's title.|  
|MCSC_TRAILINGTEXT|Set the color used to display header and trailing-day text. Header and trailing days are the days from the previous and following months that appear on the current calendar.|  
  
 `ref`  
 A **COLORREF** value representing the color that will be set for the specified area of the month calendar.  
  
### Return Value  
 A **COLORREF** value that represents the previous color setting for the specified portion of the month calendar control if successful. Otherwise, the message returns -1.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [DTM_SETMCCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb761773), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
  See the example for [CDateTimeCtrl::GetMonthCalColor](#cdatetimectrl__getmonthcalcolor).  
  
##  <a name="cdatetimectrl__setmonthcalfont"></a>  CDateTimeCtrl::SetMonthCalFont  
 Sets the font that the date and time picker control's child month calendar control will use.  
  
```  
void SetMonthCalFont(
    HFONT hFont,  
    BOOL bRedraw = TRUE);
```  
  
### Parameters  
 `hFont`  
 Handle to the font that will be set.  
  
 `bRedraw`  
 Specifies whether the control should be redrawn immediately upon setting the font. Setting this parameter to **TRUE** causes the control to redraw itself.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [DTM_SETMCFONT](http://msdn.microsoft.com/library/windows/desktop/bb761775), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#7](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_11.cpp)]  
  
> [!NOTE]
>  If you use this code, you'll want to make a member of your `CDialog`-derived class called `m_MonthFont` of type **CFont**.  
  
##  <a name="cdatetimectrl__setmonthcalstyle"></a>  CDateTimeCtrl::SetMonthCalStyle  
 Sets the style of the drop-down month calendar control that is associated with the current date and time picker control.  
  
```  
 
DWORD SetMonthCalStyle(
DWORD dwStyle);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `dwStyle`|A new month calendar control style, which is a bitwise combination (OR) of month calendar control styles. For more information, see [Month Calendar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb760919).|  
  
### Return Value  
 The previous style of the drop-down month calendar control.  
  
### Remarks  
 This method sends the [DTM_SETMCSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb761778) message, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 The following code example defines the variable, `m_dateTimeCtrl`, that is used to programmatically access the date and time picker control. This variable is used in the next example.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_1.h)]  
  
### Example  
 The following code example sets the date and time picker control to display week numbers, abbreviated names of days of the week, and no today indicator.  
  
 [!code-cpp[NVC_MFC_CDateTimeCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_12.cpp)]  
  
##  <a name="cdatetimectrl__setrange"></a>  CDateTimeCtrl::SetRange  
 Sets the minimum and maximum allowed system times for a date and time picker control.  
  
```  
BOOL SetRange(
    const COleDateTime* pMinRange,  
    const COleDateTime* pMaxRange);

 
BOOL SetRange(
    const CTime* pMinRange,  
    const CTime* pMaxRange);
```  
  
### Parameters  
 `pMinRange`  
 A pointer to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object or a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object containing the earliest time allowed in the `CDateTimeCtrl` object.  
  
 `pMaxRange`  
 A pointer to a `COleDateTime` object or a `CTime` object containing the latest time allowed in the `CDateTimeCtrl` object.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [DTM_SETRANGE](http://msdn.microsoft.com/library/windows/desktop/bb761780), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. In MFC's implementation, you can specify either `COleDateTime` or `CTime` usages. If the `COleDateTime` object has a **NULL** status, the range will be removed. If the `CTime` pointer or the `COleDateTime` pointer is **NULL**, the range will be removed.  
  
### Example  
  See the example for [CDateTimeCtrl::GetRange](#cdatetimectrl__getrange).  
  
##  <a name="cdatetimectrl__settime"></a>  CDateTimeCtrl::SetTime  
 Sets the time in a date and time picker control.  
  
```  
BOOL SetTime(const COleDateTime& timeNew);

 
BOOL SetTime(const CTime* pTimeNew);

 
BOOL SetTime(LPSYSTEMTIME pTimeNew = NULL);
```  
  
### Parameters  
 *timeNew*  
 A reference to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object containing the to which the control will be set.  
  
 *pTimeNew*  
 In the second version above, a pointer to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object containing the time to which the control will be set. In the third version above, a pointer to a [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure containing the time to which the control will be set.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [DTM_SETSYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/bb761782), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. In the MFC implementation of **SetTime**, you can use the `COleDateTime` or `CTime` classes, or you can use a `SYSTEMTIME` structure, to set the time information.  
  
### Example  
 [!code-cpp[NVC_MFC_CDateTimeCtrl#8](../../mfc/reference/codesnippet/cpp/cdatetimectrl-class_13.cpp)]  
  
## See Also  
 [MFC Sample CMNCTRL1](../../visual-cpp-samples.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CMonthCalCtrl Class](../../mfc/reference/cmonthcalctrl-class.md)
