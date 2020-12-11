---
description: "Learn more about: CMonthCalCtrl Class"
title: "CMonthCalCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMonthCalCtrl", "AFXDTCTL/CMonthCalCtrl", "AFXDTCTL/CMonthCalCtrl::CMonthCalCtrl", "AFXDTCTL/CMonthCalCtrl::Create", "AFXDTCTL/CMonthCalCtrl::GetCalendarBorder", "AFXDTCTL/CMonthCalCtrl::GetCalendarCount", "AFXDTCTL/CMonthCalCtrl::GetCalendarGridInfo", "AFXDTCTL/CMonthCalCtrl::GetCalID", "AFXDTCTL/CMonthCalCtrl::GetColor", "AFXDTCTL/CMonthCalCtrl::GetCurrentView", "AFXDTCTL/CMonthCalCtrl::GetCurSel", "AFXDTCTL/CMonthCalCtrl::GetFirstDayOfWeek", "AFXDTCTL/CMonthCalCtrl::GetMaxSelCount", "AFXDTCTL/CMonthCalCtrl::GetMaxTodayWidth", "AFXDTCTL/CMonthCalCtrl::GetMinReqRect", "AFXDTCTL/CMonthCalCtrl::GetMonthDelta", "AFXDTCTL/CMonthCalCtrl::GetMonthRange", "AFXDTCTL/CMonthCalCtrl::GetRange", "AFXDTCTL/CMonthCalCtrl::GetSelRange", "AFXDTCTL/CMonthCalCtrl::GetToday", "AFXDTCTL/CMonthCalCtrl::HitTest", "AFXDTCTL/CMonthCalCtrl::IsCenturyView", "AFXDTCTL/CMonthCalCtrl::IsDecadeView", "AFXDTCTL/CMonthCalCtrl::IsMonthView", "AFXDTCTL/CMonthCalCtrl::IsYearView", "AFXDTCTL/CMonthCalCtrl::SetCalendarBorder", "AFXDTCTL/CMonthCalCtrl::SetCalendarBorderDefault", "AFXDTCTL/CMonthCalCtrl::SetCalID", "AFXDTCTL/CMonthCalCtrl::SetCenturyView", "AFXDTCTL/CMonthCalCtrl::SetColor", "AFXDTCTL/CMonthCalCtrl::SetCurrentView", "AFXDTCTL/CMonthCalCtrl::SetCurSel", "AFXDTCTL/CMonthCalCtrl::SetDayState", "AFXDTCTL/CMonthCalCtrl::SetDecadeView", "AFXDTCTL/CMonthCalCtrl::SetFirstDayOfWeek", "AFXDTCTL/CMonthCalCtrl::SetMaxSelCount", "AFXDTCTL/CMonthCalCtrl::SetMonthDelta", "AFXDTCTL/CMonthCalCtrl::SetMonthView", "AFXDTCTL/CMonthCalCtrl::SetRange", "AFXDTCTL/CMonthCalCtrl::SetSelRange", "AFXDTCTL/CMonthCalCtrl::SetToday", "AFXDTCTL/CMonthCalCtrl::SetYearView", "AFXDTCTL/CMonthCalCtrl::SizeMinReq", "AFXDTCTL/CMonthCalCtrl::SizeRectToMin"]
helpviewer_keywords: ["CMonthCalCtrl [MFC], CMonthCalCtrl", "CMonthCalCtrl [MFC], Create", "CMonthCalCtrl [MFC], GetCalendarBorder", "CMonthCalCtrl [MFC], GetCalendarCount", "CMonthCalCtrl [MFC], GetCalendarGridInfo", "CMonthCalCtrl [MFC], GetCalID", "CMonthCalCtrl [MFC], GetColor", "CMonthCalCtrl [MFC], GetCurrentView", "CMonthCalCtrl [MFC], GetCurSel", "CMonthCalCtrl [MFC], GetFirstDayOfWeek", "CMonthCalCtrl [MFC], GetMaxSelCount", "CMonthCalCtrl [MFC], GetMaxTodayWidth", "CMonthCalCtrl [MFC], GetMinReqRect", "CMonthCalCtrl [MFC], GetMonthDelta", "CMonthCalCtrl [MFC], GetMonthRange", "CMonthCalCtrl [MFC], GetRange", "CMonthCalCtrl [MFC], GetSelRange", "CMonthCalCtrl [MFC], GetToday", "CMonthCalCtrl [MFC], HitTest", "CMonthCalCtrl [MFC], IsCenturyView", "CMonthCalCtrl [MFC], IsDecadeView", "CMonthCalCtrl [MFC], IsMonthView", "CMonthCalCtrl [MFC], IsYearView", "CMonthCalCtrl [MFC], SetCalendarBorder", "CMonthCalCtrl [MFC], SetCalendarBorderDefault", "CMonthCalCtrl [MFC], SetCalID", "CMonthCalCtrl [MFC], SetCenturyView", "CMonthCalCtrl [MFC], SetColor", "CMonthCalCtrl [MFC], SetCurrentView", "CMonthCalCtrl [MFC], SetCurSel", "CMonthCalCtrl [MFC], SetDayState", "CMonthCalCtrl [MFC], SetDecadeView", "CMonthCalCtrl [MFC], SetFirstDayOfWeek", "CMonthCalCtrl [MFC], SetMaxSelCount", "CMonthCalCtrl [MFC], SetMonthDelta", "CMonthCalCtrl [MFC], SetMonthView", "CMonthCalCtrl [MFC], SetRange", "CMonthCalCtrl [MFC], SetSelRange", "CMonthCalCtrl [MFC], SetToday", "CMonthCalCtrl [MFC], SetYearView", "CMonthCalCtrl [MFC], SizeMinReq", "CMonthCalCtrl [MFC], SizeRectToMin"]
ms.assetid: a42f6bd6-ab5c-4335-82f8-839982fc64a2
---
# CMonthCalCtrl Class

Encapsulates the functionality of a month calendar control.

## Syntax

```
class CMonthCalCtrl : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMonthCalCtrl::CMonthCalCtrl](#cmonthcalctrl)|Constructs a `CMonthCalCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMonthCalCtrl::Create](#create)|Creates a month calendar control and attaches it to the `CMonthCalCtrl` object.|
|[CMonthCalCtrl::GetCalendarBorder](#getcalendarborder)|Retrieves the width of the border of the current month calendar control.|
|[CMonthCalCtrl::GetCalendarCount](#getcalendarcount)|Retrieves the number of calendars displayed in the current month calendar control.|
|[CMonthCalCtrl::GetCalendarGridInfo](#getcalendargridinfo)|Retrieves information about the current month calendar control.|
|[CMonthCalCtrl::GetCalID](#getcalid)|Retrieves the calendar identifier for the current month calendar control.|
|[CMonthCalCtrl::GetColor](#getcolor)|Gets the color of a specified area of a month calendar control.|
|[CMonthCalCtrl::GetCurrentView](#getcurrentview)|Retrieves the view that is currently displayed by the current month calendar control.|
|[CMonthCalCtrl::GetCurSel](#getcursel)|Retrieves the system time as indicated by the currently-selected date.|
|[CMonthCalCtrl::GetFirstDayOfWeek](#getfirstdayofweek)|Gets the first day of the week to be displayed in the leftmost column of the calendar.|
|[CMonthCalCtrl::GetMaxSelCount](#getmaxselcount)|Retrieves the current maximum number of days that can be selected in a month calendar control.|
|[CMonthCalCtrl::GetMaxTodayWidth](#getmaxtodaywidth)|Retrieves the maximum width of the "Today" string for the current month calendar control.|
|[CMonthCalCtrl::GetMinReqRect](#getminreqrect)|Retrieves the minimum size required to show a full month in a month calendar control.|
|[CMonthCalCtrl::GetMonthDelta](#getmonthdelta)|Retrieves the scroll rate for a month calendar control.|
|[CMonthCalCtrl::GetMonthRange](#getmonthrange)|Retrieves date information representing the high and low limits of a month calendar control's display.|
|[CMonthCalCtrl::GetRange](#getrange)|Retrieves the current minimum and maximum dates set in a month calendar control.|
|[CMonthCalCtrl::GetSelRange](#getselrange)|Retrieves date information representing the upper and lower limits of the date range currently selected by the user.|
|[CMonthCalCtrl::GetToday](#gettoday)|Retrieves the date information for the date specified as "today" for a month calendar control.|
|[CMonthCalCtrl::HitTest](#hittest)|Determines which section of a month calendar control is at a given point on the screen.|
|[CMonthCalCtrl::IsCenturyView](#iscenturyview)|Indicates whether the current view of the current month calendar control is the century view.|
|[CMonthCalCtrl::IsDecadeView](#isdecadeview)|Indicates whether the current view of the current month calendar control is the decade view.|
|[CMonthCalCtrl::IsMonthView](#ismonthview)|Indicates whether the current view of the current month calendar control is the month view.|
|[CMonthCalCtrl::IsYearView](#isyearview)|Indicates whether the current view of the current month calendar control is the year view.|
|[CMonthCalCtrl::SetCalendarBorder](#setcalendarborder)|Sets the width of the border of the current month calendar control.|
|[CMonthCalCtrl::SetCalendarBorderDefault](#setcalendarborderdefault)|Sets the default width of the border of the current month calendar control.|
|[CMonthCalCtrl::SetCalID](#setcalid)|Sets the calendar identifier for the current month calendar control.|
|[CMonthCalCtrl::SetCenturyView](#setcenturyview)|Sets the current month calendar control to display the century view.|
|[CMonthCalCtrl::SetColor](#setcolor)|Sets the color of a specified area of a month calendar control.|
|[CMonthCalCtrl::SetCurrentView](#setcurrentview)|Sets the current month calendar control to display the specified view.|
|[CMonthCalCtrl::SetCurSel](#setcursel)|Sets the currently selected date for a month calendar control.|
|[CMonthCalCtrl::SetDayState](#setdaystate)|Sets the display for days in a month calendar control.|
|[CMonthCalCtrl::SetDecadeView](#setdecadeview)|Sets the current month calendar control to the decade view.|
|[CMonthCalCtrl::SetFirstDayOfWeek](#setfirstdayofweek)|Sets the day of week to be displayed in the leftmost column of the calendar.|
|[CMonthCalCtrl::SetMaxSelCount](#setmaxselcount)|Sets the maximum number of days that can be selected in a month calendar control.|
|[CMonthCalCtrl::SetMonthDelta](#setmonthdelta)|Sets the scroll rate for a month calendar control.|
|[CMonthCalCtrl::SetMonthView](#setmonthview)|Sets the current month calendar control to display the month view.|
|[CMonthCalCtrl::SetRange](#setrange)|Sets the minimum and maximum allowed dates for a month calendar control.|
|[CMonthCalCtrl::SetSelRange](#setselrange)|Sets the selection for a month calendar control to a given date range.|
|[CMonthCalCtrl::SetToday](#settoday)|Sets the calendar control for the current day.|
|[CMonthCalCtrl::SetYearView](#setyearview)|Sets the current month calendar control to year view.|
|[CMonthCalCtrl::SizeMinReq](#sizeminreq)|Repaints the month calendar control to its minimum, one-month size.|
|[CMonthCalCtrl::SizeRectToMin](#sizerecttomin)|For the current month calendar control, calculates the smallest rectangle that can contain all the calendars that fit in a specified rectangle.|

## Remarks

The month calendar control provides the user with a simple calendar interface, from which the user can select a date. The user can change the display by:

- Scrolling backward and forward, from month to month.

- Clicking the Today text to display the current day (if the MCS_NOTODAY style is not used).

- Picking a month or a year from a pop-up menu.

You can customize the month calendar control by applying a variety of styles to the object when you create it. These styles are described in [Month Calendar Control Styles](/windows/win32/Controls/month-calendar-control-styles) in the Windows SDK.

The month calendar control can display more than one month, and it can indicate special days (such as holidays) by bolding the date.

For more information on using the month calendar control, see [Using CMonthCalCtrl](../../mfc/using-cmonthcalctrl.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CMonthCalCtrl`

## Requirements

**Header:** afxdtctl.h

## <a name="cmonthcalctrl"></a> CMonthCalCtrl::CMonthCalCtrl

Constructs a `CMonthCalCtrl` object.

```
CMonthCalCtrl();
```

### Remarks

You must call `Create` after you construct the object.

## <a name="create"></a> CMonthCalCtrl::Create

Creates a month calendar control and attaches it to the `CMonthCalCtrl` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);

virtual BOOL Create(
    DWORD dwStyle,
    const POINT& pt,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwStyle*<br/>
Specifies the combination of Windows styles applied to the month calendar control. See [Month Calendar Control Styles](/windows/win32/Controls/month-calendar-control-styles) in the Windows SDK for more information about the styles.

*rect*<br/>
A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure. Contains the position and size of the month calendar control.

*pt*<br/>
A reference to a [POINT](/windows/win32/api/windef/ns-windef-point) structure that identifies the location of the month calendar control.

*pParentWnd*<br/>
A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the parent window of the month calendar control. It must not be NULL.

*nID*<br/>
Specifies the month calendar control's control ID.

### Return Value

Nonzero if initialization was successful; otherwise 0.

### Remarks

Create a month calendar control in two steps:

1. Call [CMonthCalCtrl](../../mfc/reference/cmonthcalctrl-class.md) to construct a `CMonthCalCtrl` object.

1. Call this member function, which creates a month calendar control and attaches it to the `CMonthCalCtrl` object.

When you call `Create`, the common controls are initialized. The version of `Create` you call determines how it is sized:

- To have MFC automatically size the control to one month, call the override that uses the *pt* parameter.

- To size the control yourself, call the override of this function that uses the *rect* parameter.

### Example

[!code-cpp[NVC_MFC_CMonthCalCtrl#1](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_1.cpp)]

## <a name="getcalendarborder"></a> CMonthCalCtrl::GetCalendarBorder

Retrieves the width of the border of the current month calendar control.

```
int GetCalendarBorder() const;
```

### Return Value

The width of the control border, in pixels.

### Remarks

This method sends the [MCM_GETCALENDARBORDER](/windows/win32/Controls/mcm-getcalendarborder) message, which is described in the Windows SDK.

## <a name="getcalendarcount"></a> CMonthCalCtrl::GetCalendarCount

Retrieves the number of calendars displayed in the current month calendar control.

```
int GetCalendarCount() const;
```

### Return Value

The number of calendars currently displayed in the month calendar control. The maximum allowed number of calendars is 12.

### Remarks

This method sends the [MCM_GETCALENDARCOUNT](/windows/win32/Controls/mcm-getcalendarcount) message, which is described in the Windows SDK.

## <a name="getcalendargridinfo"></a> CMonthCalCtrl::GetCalendarGridInfo

Retrieves information about the current month calendar control.

```
BOOL GetCalendarGridInfo(PMCGRIDINFO pmcGridInfo) const;
```

### Parameters

*pmcGridInfo*\
[out] Pointer to a [MCGRIDINFO](/windows/win32/api/commctrl/ns-commctrl-mcgridinfo) structure that receives information about the current month calendar control. The caller is responsible for allocating and initializing this structure.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

This method sends the [MCM_GETCALENDARGRIDINFO](/windows/win32/Controls/mcm-getcalendargridinfo) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, `m_monthCalCtrl`, that is used to programmatically access the month calendar control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### Example

The following code example uses the `GetCalendarGridInfo` method to retrieve the calendar date that the current month calendar control displays.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#3](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_3.cpp)]

## <a name="getcalid"></a> CMonthCalCtrl::GetCalID

Retrieves the calendar identifier for the current month calendar control.

```
CALID GetCalID() const;
```

### Return Value

One of the [calendar identifier](/windows/win32/Intl/calendar-identifiers) constants.

### Remarks

A calendar identifier denotes a region-specific calendar, such as the Gregorian (localized), Japanese, or Hijri calendars. Your application can use a calendar identifier that has various language support functions.

This method sends the [MCM_GETCALID](/windows/win32/Controls/mcm-getcalid) message, which is described in the Windows SDK.

## <a name="getcolor"></a> CMonthCalCtrl::GetColor

Retrieves the color of an area of the month calendar control specified by *nRegion*.

```
COLORREF GetColor(int nRegion) const;
```

### Parameters

*nRegion*<br/>
The region of the month calendar control from which the color is retrieved. For a list of values, see the *nRegion* parameter of [SetColor](#setcolor).

### Return Value

A [COLORREF](/windows/win32/gdi/colorref) value specifying the color associated with the portion of the month calendar control, if successful. Otherwise, this member function returns -1.

## <a name="getcurrentview"></a> CMonthCalCtrl::GetCurrentView

Retrieves the view that is currently displayed by the current month calendar control.

```
DWORD GetCurrentView() const;
```

### Return Value

The current view, which is indicated by one of the following values:

|Value|Meaning|
|-----------|-------------|
|MCMV_MONTH|Monthly view|
|MCMV_YEAR|Annual view|
|MCMV_DECADE|Decade view|
|MCMV_CENTURY|Century view|

### Remarks

This method sends the [MCM_GETCURRENTVIEW](/windows/win32/Controls/mcm-getcurrentview) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, `m_monthCalCtrl`, that is used to programmatically access the month calendar control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### Example

The following code example reports which view the month calendar control currently displays.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#7](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_4.cpp)]

## <a name="getcursel"></a> CMonthCalCtrl::GetCurSel

Retrieves the system time as indicated by the currently-selected date.

```
BOOL GetCurSel(COleDateTime& refDateTime) const;  BOOL GetCurSel(CTime& refDateTime) const;

BOOL GetCurSel(LPSYSTEMTIME pDateTime) const;
```

### Parameters

*refDateTime*<br/>
A reference to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object or a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object. Receives the current time.

*pDateTime*<br/>
A pointer to a [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure that will receive the currently-selected date information. This parameter must be a valid address and cannot be NULL.

### Return Value

Nonzero if successful; otherwize 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_GETCURSEL](/windows/win32/Controls/mcm-getcursel), as described in the Windows SDK.

> [!NOTE]
> This member function fails if the style MCS_MULTISELECT is set.

In MFC's implementation of `GetCurSel`, you can specify a `COleDateTime` usage, a `CTime` usage, or a `SYSTEMTIME` structure usage.

## <a name="getfirstdayofweek"></a> CMonthCalCtrl::GetFirstDayOfWeek

Gets the first day of the week to be displayed in the leftmost column of the calendar.

```
int GetFirstDayOfWeek(BOOL* pbLocal = NULL) const;
```

### Parameters

*pbLocal*<br/>
A pointer to a BOOL value. If the value is non-zero, the control's setting does not match the setting in the control panel.

### Return Value

An integer value that represents the first day of the week. See **Remarks** for more information on what these integers represent.

### Remarks

This member function implements the behavior of the Win32 message [MCM_GETFIRSTDAYOFWEEK](/windows/win32/Controls/mcm-getfirstdayofweek), as described in the Windows SDK. The days of the week are represented as integers, as follows.

|Value|Day of the week|
|-----------|---------------------|
|0|Monday|
|1|Tuesday|
|2|Wednesday|
|3|Thursday|
|4|Friday|
|5|Saturday|
|6|Sunday|

### Example

  See the example for [CMonthCalCtrl::SetFirstDayOfWeek](#setfirstdayofweek).

## <a name="getmaxselcount"></a> CMonthCalCtrl::GetMaxSelCount

Retrieves the current maximum number of days that can be selected in a month calendar control.

```
int GetMaxSelCount() const;
```

### Return Value

An integer value that represents the total number of days that can be selected for the control.

### Remarks

This member function implements the behavior of the Win32 message [MCM_GETMAXSELCOUNT](/windows/win32/Controls/mcm-getmaxselcount), as described in the Windows SDK. Use this member function for controls with the MCS_MULTISELECT style set.

### Example

  See the example for [CMonthCalCtrl::SetMaxSelCount](#setmaxselcount).

## <a name="getmaxtodaywidth"></a> CMonthCalCtrl::GetMaxTodayWidth

Retrieves the maximum width of the "Today" string for the current month calendar control.

```
DWORD GetMaxTodayWidth() const;
```

### Return Value

The width of the "Today" string, in pixels.

### Example

The following code example defines the variable, `m_monthCalCtrl`, that is used to programmatically access the month calendar control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### Example

The following code example demonstrates the `GetMaxTodayWidth` method.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_5.cpp)]

### Remarks

The user can return to the current date by clicking the "Today" string, which is displayed at the bottom of the month calendar control. The "Today" string includes label text and date text.

This method sends the [MCM_GETMAXTODAYWIDTH](/windows/win32/Controls/mcm-getmaxtodaywidth) message, which is described in the Windows SDK.

## <a name="getminreqrect"></a> CMonthCalCtrl::GetMinReqRect

Retrieves the minimum size required to show a full month in a month calendar control.

```
BOOL GetMinReqRect(RECT* pRect) const;
```

### Parameters

*pRect*<br/>
A pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure that will receive bounding rectangle information. This parameter must be a valid address and cannot be NULL.

### Return Value

If successful, this member function returns nonzero and `lpRect` receives the applicable bounding information. If unsuccessful, the member function returns 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_GETMINREQRECT](/windows/win32/Controls/mcm-getminreqrect), as described in the Windows SDK.

## <a name="getmonthdelta"></a> CMonthCalCtrl::GetMonthDelta

Retrieves the scroll rate for a month calendar control.

```
int GetMonthDelta() const;
```

### Return Value

The scroll rate for the month calendar control. The scroll rate is the number of months that the control moves its display when the user clicks a scroll button once.

### Remarks

This member function implements the behavior of the Win32 message [MCM_GETMONTHDELTA](/windows/win32/Controls/mcm-getmonthdelta), as described in the Windows SDK.

## <a name="getmonthrange"></a> CMonthCalCtrl::GetMonthRange

Retrieves date information representing the high and low limits of a month calendar control's display.

```
int GetMonthRange(
    COleDateTime& refMinRange,
    COleDateTime& refMaxRange,
    DWORD dwFlags) const;

int GetMonthRange(
    CTime& refMinRange,
    CTime& refMaxRange,
    DWORD dwFlags) const;

int GetMonthRange(
    LPSYSTEMTIME pMinRange,
    LPSYSTEMTIME pMaxRange,
    DWORD dwFlags) const;
```

### Parameters

*refMinRange*<br/>
A reference to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) or [CTime](../../atl-mfc-shared/reference/ctime-class.md) object containing the minimum date allowed.

*refMaxRange*<br/>
A reference to a `COleDateTime` or `CTime` object containing the maximum date allowed.

*pMinRange*<br/>
A pointer to a [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure containing the date at the lowest end of the range.

*pMaxRange*<br/>
A pointer to a `SYSTEMTIME` structure containing the date at the highest end of the range.

*dwFlags*<br/>
Value specifying the scope of the range limits to be retrieved. This value must be one of the following.

|Value|Meaning|
|-----------|-------------|
|GMR_DAYSTATE|Include preceding and trailing months of visible range that are only partially displayed.|
|GMR_VISIBLE|Include only those months that are entirely displayed.|

### Return Value

An integer that represents the range, in months, spanned by the two limits indicated by *refMinRange* and *refMaxRange* in the first and second versions, or *pMinRange* and *pMaxRange* in the third version.

### Remarks

This member function implements the behavior of the Win32 message [MCM_GETMONTHRANGE](/windows/win32/Controls/mcm-getmonthrange), as described in the Windows SDK. In MFC's implementation of `GetMonthRange`, you can specify `COleDateTime` usage, a `CTime` usage, or a `SYSTEMTIME` structure usage.

### Example

  See the example for [CMonthCalCtrl::SetDayState](#setdaystate).

## <a name="getrange"></a> CMonthCalCtrl::GetRange

Retrieves the current minimum and maximum dates set in a month calendar control.

```
DWORD GetRange(
    COleDateTime* pMinRange,
    COleDateTime* pMaxRange) const;

DWORD GetRange(
    CTime* pMinRange,
    CTime* pMaxRange) const;

DWORD GetRange(
    LPSYSTEMTIME pMinRange,
    LPSYSTEMTIME pMaxRange) const;
```

### Parameters

*pMinRange*<br/>
A pointer to a `COleDateTime` object, a `CTime` object, or [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure containing the date at the lowest end of the range.

*pMaxRange*<br/>
A pointer to a `COleDateTime` object, a `CTime` object, or [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure containing the date at the highest end of the range.

### Return Value

A DWORD that can be zero (no limits are set) or a combination of the following values that specify limit information.

|Value|Meaning|
|-----------|-------------|
|GDTR_MAX|A maximum limit is set for the control; *pMaxRange* is valid and contains the applicable date information.|
|GDTR_MIN|A minimum limit is set for the control; *pMinRange* is valid and contains the applicable date information.|

### Remarks

This member function implements the behavior of the Win32 message [MCM_GETRANGE](/windows/win32/Controls/mcm-getrange), as described in the Windows SDK. In MFC's implementation of `GetRange`, you can specify a `COleDateTime` usage, a `CTime` usage, or a `SYSTEMTIME` structure usage.

### Example

[!code-cpp[NVC_MFC_CMonthCalCtrl#2](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_6.cpp)]

## <a name="getselrange"></a> CMonthCalCtrl::GetSelRange

Retrieves date information representing the upper and lower limits of the date range currently selected by the user.

```
BOOL GetSelRange(
    COleDateTime& refMinRange,
    COleDateTime& refMaxRange) const;

BOOL GetSelRange(
    CTime& refMinRange,
    CTime& refMaxRange) const;

BOOL GetSelRange(
    LPSYSTEMTIME pMinRange,
    LPSYSTEMTIME pMaxRange) const;
```

### Parameters

*refMinRange*<br/>
A reference to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) or [CTime](../../atl-mfc-shared/reference/ctime-class.md) object containing the minimum date allowed.

*refMaxRange*<br/>
A reference to a `COleDateTime` or `CTime` object containing the maximum date allowed.

*pMinRange*<br/>
A pointer to a [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure containing the date at the lowest end of the range.

*pMaxRange*<br/>
A pointer to a `SYSTEMTIME` structure containing the date at the highest end of the range.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_GETSELRANGE](/windows/win32/Controls/mcm-getselrange), as described in the Windows SDK. `GetSelRange` will fail if applied to a month calendar control that does not use the MCS_MULTISELECT style.

In MFC's implementation of `GetSelRange`, you can specify `COleDateTime` usage, a `CTime` usage, or a `SYSTEMTIME` structure usage.

## <a name="gettoday"></a> CMonthCalCtrl::GetToday

Retrieves the date information for the date specified as "today" for a month calendar control.

```
BOOL GetToday(COleDateTime& refDateTime) const;  BOOL GetToday(COleDateTime& refDateTime) const;

BOOL GetToday(LPSYSTEMTIME pDateTime) const;
```

### Parameters

*refDateTime*<br/>
A reference to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) or [CTime](../../atl-mfc-shared/reference/ctime-class.md) object indicating the current day.

*pDateTime*<br/>
A pointer to a [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure that will receive the date information. This parameter must be a valid address and cannot be NULL.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_GETTODAY](/windows/win32/Controls/mcm-gettoday), as described in the Windows SDK. In MFC's implementation of `GetToday`, you can specify a `COleDateTime` usage, a `CTime` usage, or a `SYSTEMTIME` structure usage.

### Example

[!code-cpp[NVC_MFC_CMonthCalCtrl#3](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_7.cpp)]

## <a name="hittest"></a> CMonthCalCtrl::HitTest

Determines which month calendar control, if any, is at a specified position.

```
DWORD HitTest(PMCHITTESTINFO pMCHitTest);
```

### Parameters

*pMCHitTest*<br/>
A pointer to a [MCHITTESTINFO](/windows/win32/api/commctrl/ns-commctrl-mchittestinfo) structure containing hit testing points for the month calendar control.

### Return Value

A DWORD value. Equal to the **uHit** member of the `MCHITTESTINFO` structure.

### Remarks

`HitTest` uses the `MCHITTESTINFO` structure, which contains information about the hit test.

## <a name="iscenturyview"></a> CMonthCalCtrl::IsCenturyView

Indicates whether the current view of the current month calendar control is the century view.

```
BOOL IsCenturyView() const;
```

### Return Value

TRUE if the current view is the century view; otherwise, FALSE.

### Remarks

This method sends the [MCM_GETCURRENTVIEW](/windows/win32/Controls/mcm-getcurrentview) message, which is described in the Windows SDK. If that message returns MCMV_CENTURY, this method returns TRUE.

## <a name="isdecadeview"></a> CMonthCalCtrl::IsDecadeView

Indicates whether the current view of the current month calendar control is the decade view.

```
BOOL IsDecadeView() const;
```

### Return Value

TRUE if the current view is the decade view; otherwise, FALSE.

### Remarks

This method sends the [MCM_GETCURRENTVIEW](/windows/win32/Controls/mcm-getcurrentview) message, which is described in the Windows SDK. If that message returns MCMV_DECADE, this method returns TRUE.

## <a name="ismonthview"></a> CMonthCalCtrl::IsMonthView

Indicates whether the current view of the current month calendar control is the month view.

```
BOOL IsMonthView() const;
```

### Return Value

TRUE if the current view is the month view; otherwise, FALSE.

### Remarks

This method sends the [MCM_GETCURRENTVIEW](/windows/win32/Controls/mcm-getcurrentview) message, which is described in the Windows SDK. If that message returns MCMV_MONTH, this method returns TRUE.

## <a name="isyearview"></a> CMonthCalCtrl::IsYearView

Indicates whether the current view of the current month calendar control is the year view.

```
BOOL IsYearView() const;
```

### Return Value

TRUE if the current view is the year view; otherwise, FALSE.

### Remarks

This method sends the [MCM_GETCURRENTVIEW](/windows/win32/Controls/mcm-getcurrentview) message, which is described in the Windows SDK. If that message returns MCMV_YEAR, this method returns TRUE.

## <a name="setcalendarborder"></a> CMonthCalCtrl::SetCalendarBorder

Sets the width of the border of the current month calendar control.

```cpp
void SetCalendarBorder(int cxyBorder);
```

### Parameters

*cxyBorder*\
[in] The width of the border, in pixels.

### Remarks

If this method succeeds, the border width is set to the *cxyBorder* parameter. Otherwise, the border width is reset to the default value that is specified by the current [theme](/windows/win32/Controls/visual-styles-overview), or zero if themes are not used.

This method sends the [MCM_SETCALENDARBORDER](/windows/win32/Controls/mcm-setcalendarborder) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, `m_monthCalCtrl`, that is used to programmatically access the month calendar control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### Example

The following code example sets the border width of the month calendar control to eight pixels. Use the [CMonthCalCtrl::GetCalendarBorder](#getcalendarborder) method to determine whether this method succeeded.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#6](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_8.cpp)]

## <a name="setcalendarborderdefault"></a> CMonthCalCtrl::SetCalendarBorderDefault

Sets the default width of the border of the current month calendar control.

```cpp
void SetCalendarBorderDefault();
```

### Remarks

The border width is set to the default value specified by the current [theme](/windows/win32/Controls/visual-styles-overview), or zero if themes are not used.

This method sends the [MCM_SETCALENDARBORDER](/windows/win32/Controls/mcm-setcalendarborder) message, which is described in the Windows SDK.

## <a name="setcalid"></a> CMonthCalCtrl::SetCalID

Sets the calendar identifier for the current month calendar control.

```
BOOL SetCalID(CALID calid);
```

### Parameters

*calid*\
[in] One of the [calendar identifier](/windows/win32/Intl/calendar-identifiers) constants.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

A calendar identifier specifies a region-specific calendar, such as the Gregorian (localized), Japanese, or Hijri calendars. Use the `SetCalID` method to display a calendar that is specified by the *calid* parameter if the locale that contains the calendar is installed on your computer.

This method sends the [MCM_SETCALID](/windows/win32/Controls/mcm-setcalid) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, `m_monthCalCtrl`, that is used to programmatically access the month calendar control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### Example

The following code example sets the month calendar control to display the Japanese Emperor Era calendar. The `SetCalID` method succeeds only if that calendar is installed on your computer.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#4](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_9.cpp)]

## <a name="setcenturyview"></a> CMonthCalCtrl::SetCenturyView

Sets the current month calendar control to display the century view.

```
BOOL SetCenturyView();
```

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

This method uses the [CMonthCalCtrl::SetCurrentView](#setcurrentview) method to set the view to `MCMV_CENTURY`, which represents the century view.

## <a name="setcolor"></a> CMonthCalCtrl::SetColor

Sets the color of a specified area of a month calendar control.

```
COLORREF SetColor(
    int nRegion,
    COLORREF ref);
```

### Parameters

*nRegion*<br/>
An integer value specifying which month calendar color to set. This value can be one of the following.

|Value|Meaning|
|-----------|-------------|
|MCSC_BACKGROUND|The background color displayed between months.|
|MCSC_MONTHBK|The background color displayed within the month.|
|MCSC_TEXT|The color used to display text within a month.|
|MCSC_TITLEBK|The background color displayed in the calendar's title.|
|MCSC_TITLETEXT|The color used to display text within the calendar's title.|
|MCSC_TRAILINGTEXT|The color used to display header and trailing-day text. Header and trailing days are the days from the previous and following months that appear on the current calendar.|

*ref*<br/>
A COLORREF value for the new color setting for the specified portion of the month calendar control.

### Return Value

A COLORREF value that represents the previous color setting for the specified portion of the month calendar control, if successful. Otherwise this message returns -1.

### Remarks

This member function implements the behavior of the Win32 message [MCM_SETCOLOR](/windows/win32/Controls/mcm-setcolor), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CMonthCalCtrl#4](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_10.cpp)]

## <a name="setcurrentview"></a> CMonthCalCtrl::SetCurrentView

Sets the current month calendar control to display the specified view.

```
BOOL SetCurrentView(DWORD dwNewView);
```

### Parameters

*dwNewView*\
[in] One of the following values that specifies a monthly, annual, decade, or century view.

- `MCMV_MONTH`: Monthly view
- `MCMV_YEAR`: Annual view
- `MCMV_DECADE`: Decade view
- `MCMV_CENTURY`: Century view

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

This method sends the [MCM_SETCURRENTVIEW](/windows/win32/Controls/mcm-setcurrentview) message, which is described in the Windows SDK.

## <a name="setcursel"></a> CMonthCalCtrl::SetCurSel

Sets the currently selected date for a month calendar control.

```
BOOL SetCurSel(const COleDateTime& refDateTime);
BOOL SetCurSel(const CTime& refDateTime);
BOOL SetCurSel(const LPSYSTEMTIME pDateTime);
```

### Parameters

*refDateTime*<br/>
A reference to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) or [CTime](../../atl-mfc-shared/reference/ctime-class.md) object indicating the currently-selected month calendar control.

*pDateTime*<br/>
Pointer to a [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure that contains the date to be set as the current selection.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_SETCURSEL](/windows/win32/Controls/mcm-setcursel), as described in the Windows SDK. In MFC's implementation of `SetCurSel`, you can specify a `COleDateTime` usage, a `CTime` usage, or a `SYSTEMTIME` structure usage.

### Example

[!code-cpp[NVC_MFC_CMonthCalCtrl#5](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_11.cpp)]

## <a name="setdaystate"></a> CMonthCalCtrl::SetDayState

Sets the display for days in a month calendar control.

```
BOOL SetDayState(
    int nMonths,
    LPMONTHDAYSTATE pStates);
```

### Parameters

*nMonths*<br/>
Value indicating how many elements are in the array that *pStates* points to.

*pStates*<br/>
A pointer to a [MONTHDAYSTATE](/windows/win32/Controls/monthdaystate) array of values that define how the month calendar control will draw each day in its display. The MONTHDAYSTATE data type is a bit field, where each bit (1 through 31) represents the state of a day in a month. If a bit is on, the corresponding day will be displayed in bold; otherwise it will be displayed with no emphasis.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_SETDAYSTATE](/windows/win32/Controls/mcm-setdaystate), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CMonthCalCtrl#6](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_12.cpp)]

## <a name="setdecadeview"></a> CMonthCalCtrl::SetDecadeView

Sets the current month calendar control to the decade view.

```
BOOL SetDecadeView();
```

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

This method uses the [CMonthCalCtrl::SetCurrentView](#setcurrentview) method to set the view to `MCMV_DECADE`, which represents the decade view.

## <a name="setfirstdayofweek"></a> CMonthCalCtrl::SetFirstDayOfWeek

Sets the day of week to be displayed in the leftmost column of the calendar.

```
BOOL SetFirstDayOfWeek(
    int iDay,
    int* lpnOld = NULL);
```

### Parameters

*iDay*<br/>
An integer value representing which day is to be set as the first day of the week. This value must be one of the day numbers. See [GetFirstDayOfWeek](#getfirstdayofweek) for a description of the day numbers.

*lpnOld*<br/>
A pointer to an integer indicating the first day of the week previously set.

### Return Value

Nonzero if the previous first day of the week is set to a value other than that of LOCALE_IFIRSTDAYOFWEEK, which is the day indicated in the control panel setting. Otherwise, this function returns 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_SETFIRSTDAYOFWEEK](/windows/win32/Controls/mcm-setfirstdayofweek), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CMonthCalCtrl#7](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_13.cpp)]

## <a name="setmaxselcount"></a> CMonthCalCtrl::SetMaxSelCount

Sets the maximum number of days that can be selected in a month calendar control.

```
BOOL SetMaxSelCount(int nMax);
```

### Parameters

*nMax*<br/>
The value that will be set to represent the maximum number of selectable days.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_SETMAXSELCOUNT](/windows/win32/Controls/mcm-setmaxselcount), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CMonthCalCtrl#8](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_14.cpp)]

## <a name="setmonthdelta"></a> CMonthCalCtrl::SetMonthDelta

Sets the scroll rate for a month calendar control.

```
int SetMonthDelta(int iDelta);
```

### Parameters

*iDelta*<br/>
The number of months to be set as the control's scroll rate. If this value is zero, the month delta is reset to the default, which is the number of months displayed in the control.

### Return Value

The previous scroll rate. If the scroll rate has not been previously set, the return value is 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_SETMONTHDELTA](/windows/win32/Controls/mcm-setmonthdelta), as described in the Windows SDK.

## <a name="setmonthview"></a> CMonthCalCtrl::SetMonthView

Sets the current month calendar control to display the month view.

```
BOOL SetMonthView();
```

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

This method uses the [CMonthCalCtrl::SetCurrentView](#setcurrentview) method to set the view to MCMV_MONTH, which represents the month view.

### Example

The following code example defines the variable, `m_monthCalCtrl`, that is used to programmatically access the month calendar control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#9](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_2.h)]

### Example

The following code example sets the month calendar control to display the month, year, decade, and century views.

[!code-cpp[NVC_MFC_CMonthCalCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cmonthcalctrl-class_15.cpp)]

## <a name="setrange"></a> CMonthCalCtrl::SetRange

Sets the minimum and maximum allowable dates for a month calendar control.

```
BOOL SetRange(
    const COleDateTime* pMinRange,
    const COleDateTime* pMaxRange);

BOOL SetRange(
    const CTime* pMinRange,
    const CTime* pMaxRange);

BOOL SetRange(
    const LPSYSTEMTIME pMinRange,
    const LPSYSTEMTIME pMaxRange);
```

### Parameters

*pMinRange*<br/>
A pointer to a `COleDateTime` object, a `CTime` object, or [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure containing the date at the lowest end of the range.

*pMaxRange*<br/>
A pointer to a `COleDateTime` object, a `CTime` object, or `SYSTEMTIME` structure containing the date at the highest end of the range.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_SETRANGE](/windows/win32/Controls/mcm-setrange), as described in the Windows SDK. In MFC's implementation of `SetRange`, you can specify `COleDateTime` usage, a `CTime` usage, or a `SYSTEMTIME` structure usage.

### Example

  See the example for [CMonthCalCtrl::GetRange](#getrange).

## <a name="setselrange"></a> CMonthCalCtrl::SetSelRange

Sets the selection for a month calendar control to a given date range.

```
BOOL SetSelRange(
    const COleDateTime& pMinRange,
    const COleDateTime& pMaxRange);

BOOL SetSelRange(
    const CTime& pMinRange,
    const CTime& pMaxRange);

BOOL SetSelRange(
    const LPSYSTEMTIME pMinRange,
    const LPSYSTEMTIME pMaxRange);
```

### Parameters

*pMinRange*<br/>
A pointer to a `COleDateTime` object, a `CTime` object, or [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure containing the date at the lowest end of the range.

*pMaxRange*<br/>
A pointer to a `COleDateTime` object, a `CTime` object, or `SYSTEMTIME` structure containing the date at the highest end of the range.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 message [MCM_SETSELRANGE](/windows/win32/Controls/mcm-setselrange), as described in the Windows SDK. In MFC's implementation of `SetSelRange`, you can specify `COleDateTime` usage, a `CTime` usage, or a `SYSTEMTIME` structure usage.

## <a name="settoday"></a> CMonthCalCtrl::SetToday

Sets the calendar control for the current day.

```cpp
void SetToday(const COleDateTime& refDateTime);
void SetToday(const CTime* pDateTime);
void SetToday(const LPSYSTEMTIME pDateTime);
```

### Parameters

*refDateTime*<br/>
A reference to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object that contains the current date.

*pDateTime*<br/>
In the second version, a pointer to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object containing the current date information. In the third version, a pointer to a [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure that contains the current date information.

### Remarks

This member function implements the behavior of the Win32 message [MCM_SETTODAY](/windows/win32/Controls/mcm-settoday), as described in the Windows SDK.

### Example

  See the example for [CMonthCalCtrl::GetToday](#gettoday).

## <a name="setyearview"></a> CMonthCalCtrl::SetYearView

Sets the current month calendar control to year view.

```
BOOL SetYearView();
```

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

This method uses the [CMonthCalCtrl::SetCurrentView](#setcurrentview) method to set the view to MCMV_YEAR, which represents the annual view.

## <a name="sizeminreq"></a> CMonthCalCtrl::SizeMinReq

Displays the month calendar control to the minimum size that displays one month.

```
BOOL SizeMinReq(BOOL bRepaint = TRUE);
```

### Parameters

*bRepaint*<br/>
Specifies whether the control is to be repainted. By default, TRUE. If FALSE, no repainting occurs.

### Return Value

Nonzero if the month calendar control is sized to its minimum; otherwise 0.

### Remarks

Calling `SizeMinReq` successfully displays the entire month calendar control for one month's calendar.

## <a name="sizerecttomin"></a> CMonthCalCtrl::SizeRectToMin

For the current month calendar control, calculates the smallest rectangle that can contain all the calendars that fit in a specified rectangle.

```
LPRECT SizeRectToMin(LPRECT lpRect);
```

### Parameters

*lpRect*\
[in] Pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure that defines a rectangle that contains the desired number of calendars.

### Return Value

Pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure that defines a rectangle whose size is less than or equal to the rectangle defined by the *lpRect* parameter.

### Remarks

This method calculates how many calendars can fit in the rectangle specified by the *lpRect* parameter, and then returns the smallest rectangle that can contain that number of calendars. In effect, this method shrinks the specified rectangle to exactly fit the desired number of calendars.

This method sends the [MCM_SIZERECTTOMIN](/windows/win32/Controls/mcm-sizerecttomin) message, which is described in the Windows SDK.

## See also

[MFC Sample CMNCTRL1](../../overview/visual-cpp-samples.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDateTimeCtrl Class](../../mfc/reference/cdatetimectrl-class.md)
