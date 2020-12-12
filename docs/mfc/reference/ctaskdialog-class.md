---
description: "Learn more about: CTaskDialog Class"
title: "CTaskDialog Class"
ms.date: "11/19/2018"
f1_keywords: ["CTaskDialog", "AFXTASKDIALOG/CTaskDialog", "AFXTASKDIALOG/CTaskDialog::CTaskDialog", "AFXTASKDIALOG/CTaskDialog::AddCommandControl", "AFXTASKDIALOG/CTaskDialog::AddRadioButton", "AFXTASKDIALOG/CTaskDialog::ClickCommandControl", "AFXTASKDIALOG/CTaskDialog::ClickRadioButton", "AFXTASKDIALOG/CTaskDialog::DoModal", "AFXTASKDIALOG/CTaskDialog::GetCommonButtonCount", "AFXTASKDIALOG/CTaskDialog::GetCommonButtonFlag", "AFXTASKDIALOG/CTaskDialog::GetCommonButtonId", "AFXTASKDIALOG/CTaskDialog::GetOptions", "AFXTASKDIALOG/CTaskDialog::GetSelectedCommandControlID", "AFXTASKDIALOG/CTaskDialog::GetSelectedRadioButtonID", "AFXTASKDIALOG/CTaskDialog::GetVerificationCheckboxState", "AFXTASKDIALOG/CTaskDialog::IsCommandControlEnabled", "AFXTASKDIALOG/CTaskDialog::IsRadioButtonEnabled", "AFXTASKDIALOG/CTaskDialog::IsSupported", "AFXTASKDIALOG/CTaskDialog::LoadCommandControls", "AFXTASKDIALOG/CTaskDialog::LoadRadioButtons", "AFXTASKDIALOG/CTaskDialog::NavigateTo", "AFXTASKDIALOG/CTaskDialog::OnCommandControlClick", "AFXTASKDIALOG/CTaskDialog::OnCreate", "AFXTASKDIALOG/CTaskDialog::OnDestroy", "AFXTASKDIALOG/CTaskDialog::OnExpandButtonClick", "AFXTASKDIALOG/CTaskDialog::OnHelp", "AFXTASKDIALOG/CTaskDialog::OnHyperlinkClick", "AFXTASKDIALOG/CTaskDialog::OnInit", "AFXTASKDIALOG/CTaskDialog::OnNavigatePage", "AFXTASKDIALOG/CTaskDialog::OnRadioButtonClick", "AFXTASKDIALOG/CTaskDialog::OnTimer", "AFXTASKDIALOG/CTaskDialog::OnVerificationCheckboxClick", "AFXTASKDIALOG/CTaskDialog::RemoveAllCommandControls", "AFXTASKDIALOG/CTaskDialog::RemoveAllRadioButtons", "AFXTASKDIALOG/CTaskDialog::SetCommandControlOptions", "AFXTASKDIALOG/CTaskDialog::SetCommonButtonOptions", "AFXTASKDIALOG/CTaskDialog::SetCommonButtons", "AFXTASKDIALOG/CTaskDialog::SetContent", "AFXTASKDIALOG/CTaskDialog::SetDefaultCommandControl", "AFXTASKDIALOG/CTaskDialog::SetDefaultRadioButton", "AFXTASKDIALOG/CTaskDialog::SetDialogWidth", "AFXTASKDIALOG/CTaskDialog::SetExpansionArea", "AFXTASKDIALOG/CTaskDialog::SetFooterIcon", "AFXTASKDIALOG/CTaskDialog::SetFooterText", "AFXTASKDIALOG/CTaskDialog::SetMainIcon", "AFXTASKDIALOG/CTaskDialog::SetMainInstruction", "AFXTASKDIALOG/CTaskDialog::SetOptions", "AFXTASKDIALOG/CTaskDialog::SetProgressBarMarquee", "AFXTASKDIALOG/CTaskDialog::SetProgressBarPosition", "AFXTASKDIALOG/CTaskDialog::SetProgressBarRange", "AFXTASKDIALOG/CTaskDialog::SetProgressBarState", "AFXTASKDIALOG/CTaskDialog::SetRadioButtonOptions", "AFXTASKDIALOG/CTaskDialog::SetVerificationCheckbox", "AFXTASKDIALOG/CTaskDialog::SetVerificationCheckboxText", "AFXTASKDIALOG/CTaskDialog::SetWindowTitle", "AFXTASKDIALOG/CTaskDialog::ShowDialog", "AFXTASKDIALOG/CTaskDialog::TaskDialogCallback"]
helpviewer_keywords: ["CTaskDialog [MFC], CTaskDialog", "CTaskDialog [MFC], AddCommandControl", "CTaskDialog [MFC], AddRadioButton", "CTaskDialog [MFC], ClickCommandControl", "CTaskDialog [MFC], ClickRadioButton", "CTaskDialog [MFC], DoModal", "CTaskDialog [MFC], GetCommonButtonCount", "CTaskDialog [MFC], GetCommonButtonFlag", "CTaskDialog [MFC], GetCommonButtonId", "CTaskDialog [MFC], GetOptions", "CTaskDialog [MFC], GetSelectedCommandControlID", "CTaskDialog [MFC], GetSelectedRadioButtonID", "CTaskDialog [MFC], GetVerificationCheckboxState", "CTaskDialog [MFC], IsCommandControlEnabled", "CTaskDialog [MFC], IsRadioButtonEnabled", "CTaskDialog [MFC], IsSupported", "CTaskDialog [MFC], LoadCommandControls", "CTaskDialog [MFC], LoadRadioButtons", "CTaskDialog [MFC], NavigateTo", "CTaskDialog [MFC], OnCommandControlClick", "CTaskDialog [MFC], OnCreate", "CTaskDialog [MFC], OnDestroy", "CTaskDialog [MFC], OnExpandButtonClick", "CTaskDialog [MFC], OnHelp", "CTaskDialog [MFC], OnHyperlinkClick", "CTaskDialog [MFC], OnInit", "CTaskDialog [MFC], OnNavigatePage", "CTaskDialog [MFC], OnRadioButtonClick", "CTaskDialog [MFC], OnTimer", "CTaskDialog [MFC], OnVerificationCheckboxClick", "CTaskDialog [MFC], RemoveAllCommandControls", "CTaskDialog [MFC], RemoveAllRadioButtons", "CTaskDialog [MFC], SetCommandControlOptions", "CTaskDialog [MFC], SetCommonButtonOptions", "CTaskDialog [MFC], SetCommonButtons", "CTaskDialog [MFC], SetContent", "CTaskDialog [MFC], SetDefaultCommandControl", "CTaskDialog [MFC], SetDefaultRadioButton", "CTaskDialog [MFC], SetDialogWidth", "CTaskDialog [MFC], SetExpansionArea", "CTaskDialog [MFC], SetFooterIcon", "CTaskDialog [MFC], SetFooterText", "CTaskDialog [MFC], SetMainIcon", "CTaskDialog [MFC], SetMainInstruction", "CTaskDialog [MFC], SetOptions", "CTaskDialog [MFC], SetProgressBarMarquee", "CTaskDialog [MFC], SetProgressBarPosition", "CTaskDialog [MFC], SetProgressBarRange", "CTaskDialog [MFC], SetProgressBarState", "CTaskDialog [MFC], SetRadioButtonOptions", "CTaskDialog [MFC], SetVerificationCheckbox", "CTaskDialog [MFC], SetVerificationCheckboxText", "CTaskDialog [MFC], SetWindowTitle", "CTaskDialog [MFC], ShowDialog", "CTaskDialog [MFC], TaskDialogCallback"]
ms.assetid: 1991ec98-ae56-4483-958b-233809c8c559
---
# CTaskDialog Class

A pop-up dialog box that functions like a message box but can display additional information to the user. The `CTaskDialog` also includes functionality for gathering information from the user.

## Syntax

```
class CTaskDialog : public CObject
```

## Members

### Constructors

|Name|Description|
|-|-|
|[CTaskDialog::CTaskDialog](#ctaskdialog)|Constructs a `CTaskDialog` object.|

### Methods

|Name|Description|
|-|-|
|[CTaskDialog::AddCommandControl](#addcommandcontrol)|Adds a command button control to the `CTaskDialog`.|
|[CTaskDialog::AddRadioButton](#addradiobutton)|Adds a radio button to the `CTaskDialog`.|
|[CTaskDialog::ClickCommandControl](#clickcommandcontrol)|Clicks a command button control or common button programmatically.|
|[CTaskDialog::ClickRadioButton](#clickradiobutton)|Clicks a radio button programmatically.|
|[CTaskDialog::DoModal](#domodal)|Displays the `CTaskDialog`.|
|[CTaskDialog::GetCommonButtonCount](#getcommonbuttoncount)|Retrieves the number of common buttons available.|
|[CTaskDialog::GetCommonButtonFlag](#getcommonbuttonflag)|Converts a standard Windows button to the common button type associated with the `CTaskDialog` class.|
|[CTaskDialog::GetCommonButtonId](#getcommonbuttonid)|Converts one of the common button types associated with the `CTaskDialog` class to a standard Windows button.|
|[CTaskDialog::GetOptions](#getoptions)|Returns the option flags for this `CTaskDialog`.|
|[CTaskDialog::GetSelectedCommandControlID](#getselectedcommandcontrolid)|Returns the selected command button control.|
|[CTaskDialog::GetSelectedRadioButtonID](#getselectedradiobuttonid)|Returns the selected radio button.|
|[CTaskDialog::GetVerificationCheckboxState](#getverificationcheckboxstate)|Retrieves the state of the verification check box.|
|[CTaskDialog::IsCommandControlEnabled](#iscommandcontrolenabled)|Determines whether a command button control or common button is enabled.|
|[CTaskDialog::IsRadioButtonEnabled](#isradiobuttonenabled)|Determines whether a radio button is enabled.|
|[CTaskDialog::IsSupported](#issupported)|Determines whether the computer that is running the application supports the `CTaskDialog`.|
|[CTaskDialog::LoadCommandControls](#loadcommandcontrols)|Adds command button controls by using data from the string table.|
|[CTaskDialog::LoadRadioButtons](#loadradiobuttons)|Adds radio buttons by using data from the string table.|
|[CTaskDialog::NavigateTo](#navigateto)|Transfers the focus to another `CTaskDialog`.|
|[CTaskDialog::OnCommandControlClick](#oncommandcontrolclick)|The framework calls this method when the user clicks a command button control.|
|[CTaskDialog::OnCreate](#oncreate)|The framework calls this method after it creates the `CTaskDialog`.|
|[CTaskDialog::OnDestroy](#ondestroy)|The framework calls this method immediately before it destroys the `CTaskDialog`.|
|[CTaskDialog::OnExpandButtonClick](#onexpandbuttonclick)|The framework calls this method when the user clicks on the expansion button.|
|[CTaskDialog::OnHelp](#onhelp)|The framework calls this method when the user requests help.|
|[CTaskDialog::OnHyperlinkClick](#onhyperlinkclick)|The framework calls this method when the user clicks on a hyperlink.|
|[CTaskDialog::OnInit](#oninit)|The framework calls this method when the `CTaskDialog` is initialized.|
|[CTaskDialog::OnNavigatePage](#onnavigatepage)|The framework calls this method when the user moves the focus with regard to controls on the `CTaskDialog`.|
|[CTaskDialog::OnRadioButtonClick](#onradiobuttonclick)|The framework calls this method when the user selects a radio button control.|
|[CTaskDialog::OnTimer](#ontimer)|The framework calls this method when the timer expires.|
|[CTaskDialog::OnVerificationCheckboxClick](#onverificationcheckboxclick)|The framework calls this method when the user clicks the verification check box.|
|[CTaskDialog::RemoveAllCommandControls](#removeallcommandcontrols)|Removes all the command controls from the `CTaskDialog`.|
|[CTaskDialog::RemoveAllRadioButtons](#removeallradiobuttons)|Removes all the radio buttons from the `CTaskDialog`.|
|[CTaskDialog::SetCommandControlOptions](#setcommandcontroloptions)|Updates a command button control on the `CTaskDialog`.|
|[CTaskDialog::SetCommonButtonOptions](#setcommonbuttonoptions)|Updates a subset of common buttons to be enabled and require UAC elevation.|
|[CTaskDialog::SetCommonButtons](#setcommonbuttons)|Adds common buttons to the `CTaskDialog`.|
|[CTaskDialog::SetContent](#setcontent)|Updates the content of the `CTaskDialog`.|
|[CTaskDialog::SetDefaultCommandControl](#setdefaultcommandcontrol)|Specifies the default command button control.|
|[CTaskDialog::SetDefaultRadioButton](#setdefaultradiobutton)|Specifies the default radio button.|
|[CTaskDialog::SetDialogWidth](#setdialogwidth)|Adjusts the width of the `CTaskDialog`.|
|[CTaskDialog::SetExpansionArea](#setexpansionarea)|Updates the expansion area of the `CTaskDialog`.|
|[CTaskDialog::SetFooterIcon](#setfootericon)|Updates the footer icon for the `CTaskDialog`.|
|[CTaskDialog::SetFooterText](#setfootertext)|Updates the text on the footer of the `CTaskDialog`.|
|[CTaskDialog::SetMainIcon](#setmainicon)|Updates the main icon of the `CTaskDialog`.|
|[CTaskDialog::SetMainInstruction](#setmaininstruction)|Updates the main instruction of the `CTaskDialog`.|
|[CTaskDialog::SetOptions](#setoptions)|Configures the options for the `CTaskDialog`.|
|[CTaskDialog::SetProgressBarMarquee](#setprogressbarmarquee)|Configures a marquee bar for the `CTaskDialog` and adds it to the dialog box.|
|[CTaskDialog::SetProgressBarPosition](#setprogressbarposition)|Adjusts the position of the progress bar.|
|[CTaskDialog::SetProgressBarRange](#setprogressbarrange)|Adjusts the range of the progress bar.|
|[CTaskDialog::SetProgressBarState](#setprogressbarstate)|Sets the state of the progress bar and displays it on the `CTaskDialog`.|
|[CTaskDialog::SetRadioButtonOptions](#setradiobuttonoptions)|Enables or disables a radio button.|
|[CTaskDialog::SetVerificationCheckbox](#setverificationcheckbox)|Sets the checked state of the verification check box.|
|[CTaskDialog::SetVerificationCheckboxText](#setverificationcheckboxtext)|Sets the text on the right side of the verification check box.|
|[CTaskDialog::SetWindowTitle](#setwindowtitle)|Sets the title of the `CTaskDialog`.|
|[CTaskDialog::ShowDialog](#showdialog)|Creates and displays a `CTaskDialog`.|
|[CTaskDialog::TaskDialogCallback](#taskdialogcallback)|The framework calls this in response to various Windows messages.|

### Data Members

|Name|Description|
|-|-|
|`m_aButtons`|The array of command button controls for the `CTaskDialog`.|
|`m_aRadioButtons`|The array of radio button controls for the `CTaskDialog`.|
|`m_bVerified`|`TRUE` indicates the verification check box is checked; `FALSE` indicates it is not.|
|`m_footerIcon`|The icon in the footer of the `CTaskDialog`.|
|`m_hWnd`|A handle to the window for the `CTaskDialog`.|
|`m_mainIcon`|The main icon of the `CTaskDialog`.|
|`m_nButtonDisabled`|A mask that indicates which of the common buttons are disabled.|
|`m_nButtonElevation`|A mask that indicates which of the common buttons require UAC elevation.|
|`m_nButtonId`|The ID of the selected command button control.|
|`m_nCommonButton`|A mask that indicates which common buttons are displayed on the `CTaskDialog`.|
|`m_nDefaultCommandControl`|The ID of the command button control that is selected when the `CTaskDialog` is displayed.|
|`m_nDefaultRadioButton`|The ID of the radio button control that is selected when the `CTaskDialog` is displayed.|
|`m_nFlags`|A mask that indicates the options for the `CTaskDialog`.|
|`m_nProgressPos`|The current position for the progress bar.  This value must be between `m_nProgressRangeMin` and `m_nProgressRangeMax`.|
|`m_nProgressRangeMax`|The maximum value for the progress bar.|
|`m_nProgressRangeMin`|The minimum value for the progress bar.|
|`m_nProgressState`|The state of the progress bar. For more information, see [CTaskDialog::SetProgressBarState](#setprogressbarstate).|
|`m_nRadioId`|The ID of the selected radio button control.|
|`m_nWidth`|The width of the `CTaskDialog` in pixels.|
|`m_strCollapse`|The string the `CTaskDialog` displays to the right of the expansion box when the expanded information is hidden.|
|`m_strContent`|The content string of the `CTaskDialog`.|
|`m_strExpand`|The string the `CTaskDialog` displays to the right of the expansion box when the expanded information is displayed.|
|`m_strFooter`|The footer of the `CTaskDialog`.|
|`m_strInformation`|The expanded information for the `CTaskDialog`.|
|`m_strMainInstruction`|The main instruction of the `CTaskDialog`.|
|`m_strTitle`|The title of the `CTaskDialog`.|
|`m_strVerification`|The string that the `CTaskDialog` displays to the right of the verification check box.|

## Remarks

The `CTaskDialog` class replaces the standard Windows message box and has additional functionality such as new controls to gather information from the user. This class is in the MFC library in Visual Studio 2010 and later. The `CTaskDialog` is available starting with Windows Vista. Earlier versions of Windows cannot display the `CTaskDialog` object. Use `CTaskDialog::IsSupported` to determine at runtime whether the current user can display the task dialog box. The standard Windows message box is still supported.

The `CTaskDialog` is available only when you build your application by using the Unicode library.

The `CTaskDialog` has two different constructors. One constructor enables you to specify two command buttons and a maximum of six regular button controls. You can add more command buttons after you create the `CTaskDialog`. The second constructor does not support any command buttons, but you can add an unlimited number of regular button controls. For more information about the constructors, see [CTaskDialog::CTaskDialog](#ctaskdialog).

The following image shows a sample `CTaskDialog` to illustrate the location of some of the controls.

![Example of CTaskDialog](../../mfc/reference/media/ctaskdialogsample.png "Example of CTaskDialog") <br/>
CTaskDialog Sample

## Requirements

**Minimum required operating system:** Windows Vista

**Header:** afxtaskdialog.h

## <a name="addcommandcontrol"></a> CTaskDialog::AddCommandControl

Adds a new command button control to the `CTaskDialog`.

```cpp
void AddCommandControl(
    int nCommandControlID,
    const CString& strCaption,
    BOOL bEnabled = TRUE,
    BOOL bRequiresElevation = FALSE);
```

### Parameters

*nCommandControlID*<br/>
[in] The command control identification number.

*strCaption*<br/>
[in] The string that the `CTaskDialog` displays to the user. Use this string to explain the purpose of the command.

*bEnabled*<br/>
[in] A Boolean parameter that indicates if the new button is enabled or disabled.

*bRequiresElevation*<br/>
[in] A Boolean parameter that indicates whether a command requires elevation.

### Remarks

The `CTaskDialog Class` can display an unlimited number of command button controls. However, if a `CTaskDialog` displays any command button controls, it can display a maximum of six buttons. If a `CTaskDialog` has no command button controls, it can display an unlimited number of buttons.

When the user selects a command button control, the `CTaskDialog` closes. If your application displays the dialog box by using [CTaskDialog::DoModal](#domodal), `DoModal` returns the *nCommandControlID* of the selected command button control.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="addradiobutton"></a> CTaskDialog::AddRadioButton

Adds a radio button to the `CTaskDialog`.

```cpp
void CTaskDialog::AddRadioButton(
    int nRadioButtonID,
    const CString& strCaption,
    BOOL bEnabled = TRUE);
```

### Parameters

*nRadioButtonID*<br/>
[in] The identification number of the radio button.

*strCaption*<br/>
[in] The string that the `CTaskDialog` displays next to the radio button.

*bEnabled*<br/>
[in] A Boolean parameter that indicates whether the radio button is enabled.

### Remarks

The radio buttons for the [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md) enable you to gather information from the user. Use the function [CTaskDialog::GetSelectedRadioButtonID](#getselectedradiobuttonid) to determine which radio button is selected.

The `CTaskDialog` does not require that the *nRadioButtonID* parameters are unique for each radio button. However, you may experience unexpected behavior if you do not use a distinct identifier for each radio button.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="clickcommandcontrol"></a> CTaskDialog::ClickCommandControl

Clicks a command button control or common button programmatically.

```
protected:
void ClickCommandControl(int nCommandControlID) const;
```

### Parameters

*nCommandControlID*<br/>
[in] The command ID of the control to click.

### Remarks

This method generates the windows message TDM_CLICK_BUTTON.

## <a name="clickradiobutton"></a> CTaskDialog::ClickRadioButton

Clicks a radio button programmatically.

```
protected:
void ClickRadioButton(int nRadioButtonID) const;
```

### Parameters

*nRadioButtonID*<br/>
[in] The ID of the radio button to click.

### Remarks

This method generates the windows message TDM_CLICK_RADIO_BUTTON.

## <a name="ctaskdialog"></a> CTaskDialog::CTaskDialog

Creates an instance of the [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md).

```
CTaskDialog(
    const CString& strContent,
    const CString& strMainInstruction,
    const CString& strTitle,
    int nCommonButtons = TDCBF_OK_BUTTON | TDCBF_CANCEL_BUTTON,
    int nTaskDialogOptions = TDF_ENABLE_HYPERLINKS | TDF_USE_COMMAND_LINKS,
    const CString& strFooter = _T(""));

CTaskDialog(
    const CString& strContent,
    const CString& strMainInstruction,
    const CString& strTitle,
    int nIDCommandControlsFirst,
    int nIDCommandControlsLast,
    int nCommonButtons,
    int nTaskDialogOptions = TDF_ENABLE_HYPERLINKS | TDF_USE_COMMAND_LINKS,
    const CString& strFooter = _T(""));
```

### Parameters

*strContent*<br/>
[in] The string to use for the content of the `CTaskDialog`.

*strMainInstruction*<br/>
[in] The main instruction of the `CTaskDialog`.

*strTitle*<br/>
[in] The title of the `CTaskDialog`.

*nCommonButtons*<br/>
[in] A mask of the common buttons to add to the `CTaskDialog`.

*nTaskDialogOptions*<br/>
[in] The set of options to use for the `CTaskDialog`.

*strFooter*<br/>
[in] The string to use as the footer.

*nIDCommandControlsFirst*<br/>
[in] The string ID of the first command.

*nIDCommandControlsLast*<br/>
[in] The string ID of the last command.

### Remarks

There are two ways that you can add a `CTaskDialog` to your application. The first way is to use one of the constructors to create a `CTaskDialog` and display it using [CTaskDialog::DoModal](#domodal). The second way is to use the static function [CTaskDialog::ShowDialog](#showdialog), which enables you to display a `CTaskDialog` without explicitly creating a `CTaskDialog` object.

The second constructor creates command button controls by using data from the resource file of your application. The string table in the resource file has several strings with associated string IDs. This method adds a command button control for each valid entry in the string table between *nIDCommandControlsFirst* and *nCommandControlsLast*, inclusive. For these command button controls, the string in the string table is the control's caption and the string ID is the control's ID.

See [CTaskDialog::SetOptions](#setoptions) for a list of valid options.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="domodal"></a> CTaskDialog::DoModal

Shows the `CTaskDialog` and makes it modal.

```
INT_PTR DoModal (HWND hParent = ::GetActiveWindow());
```

### Parameters

*hParent*<br/>
[in] The parent window for the `CTaskDialog`.

### Return Value

An integer that corresponds to the selection made by the user.

### Remarks

Displays this instance of the [CTaskDialog](../../mfc/reference/ctaskdialog-class.md). The application then waits for the user to close the dialog box.

The `CTaskDialog` closes when the user selects a common button, a command link control, or closes the `CTaskDialog`. The return value is the identifier that indicates how the user closed the dialog box.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="getcommonbuttoncount"></a> CTaskDialog::GetCommonButtonCount

Retrieves the number of common buttons.

```
int GetCommonButtonCount() const;
```

### Return Value

The number of common buttons available.

### Remarks

The common buttons are the default buttons that you provide to [CTaskDialog::CTaskDialog](#ctaskdialog). The [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md) displays the buttons along the bottom of the dialog box.

The enumerated list of buttons is provided in CommCtrl.h.

## <a name="getcommonbuttonflag"></a> CTaskDialog::GetCommonButtonFlag

Converts a standard Windows button to the common button type associated with the [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md).

```
int GetCommonButtonFlag(int nButtonId) const;
```

### Parameters

*nButtonId*<br/>
[in] The standard Windows button value.

### Return Value

The value of the corresponding `CTaskDialog` common button. If there is no corresponding common button, this method returns 0.

## <a name="getcommonbuttonid"></a> CTaskDialog::GetCommonButtonId

Converts one of the common button types associated with the [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md) to a standard Windows button.

```
int GetCommonButtonId(int nFlag);
```

### Parameters

*nFlag*<br/>
[in] The common button type associated with the `CTaskDialog` class.

### Return Value

The value of the corresponding standard Windows button. If there is no corresponding Windows button, the method returns 0.

## <a name="getoptions"></a> CTaskDialog::GetOptions

Returns the option flags for this `CTaskDialog`.

```
int GetOptions() const;
```

### Return Value

The flags for the `CTaskDialog`.

### Remarks

For more information about the options available to the [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md), see [CTaskDialog::SetOptions](#setoptions).

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="getselectedcommandcontrolid"></a> CTaskDialog::GetSelectedCommandControlID

Returns the selected command button control.

```
int GetSelectedCommandControlID() const;
```

### Return Value

The ID of the currently selected command button control.

### Remarks

You do not have to use this method to retrieve the ID of the command button that the user selected. That ID is returned by either [CTaskDialog::DoModal](#domodal) or [CTaskDialog::ShowDialog](#showdialog).

### Example

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="getselectedradiobuttonid"></a> CTaskDialog::GetSelectedRadioButtonID

Returns the selected radio button.

```
int GetSelectedRadioButtonID() const;
```

### Return Value

The ID of the selected radio button.

### Remarks

You can use this method after the user closes the dialog box to retrieve the selected radio button.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="getverificationcheckboxstate"></a> CTaskDialog::GetVerificationCheckboxState

Retrieves the state of the verification check box.

```
BOOL GetVerificationCheckboxState() const;
```

### Return Value

TRUE if the check box is checked, FALSE if it is not.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

## <a name="iscommandcontrolenabled"></a> CTaskDialog::IsCommandControlEnabled

Determines whether a command button control or button is enabled.

```
BOOL IsCommandControlEnabled(int nCommandControlID) const;
```

### Parameters

*nCommandControlID*<br/>
[in] The ID of the command button control or button to test.

### Return Value

TRUE if the control is enabled, FALSE if it is not.

### Remarks

You can use this method to determine the availability of both command button controls and the common buttons of the `CTaskDialog` Class*.

If *nCommandControlID* is not a valid identifier for either a common `CTaskDialog` button or a command button control, this method throws an exception.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="isradiobuttonenabled"></a> CTaskDialog::IsRadioButtonEnabled

Determines whether a radio button is enabled.

```
BOOL IsRadioButtonEnabled(int nRadioButtonID) const;
```

### Parameters

*nRadioButtonID*<br/>
[in] The ID of the radio button to test.

### Return Value

TRUE if the radio button is enabled, FALSE if it is not.

### Remarks

If *nRadioButtonID* is not a valid identifier for a radio button, this method throws an exception.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="issupported"></a> CTaskDialog::IsSupported

Determines whether the computer that is running the application supports the `CTaskDialog`.

```
static BOOL IsSupported();
```

### Return Value

TRUE if the computer supports the `CTaskDialog`; FALSE otherwise.

### Remarks

Use this function to determine at runtime if the computer that is running your application supports the `CTaskDialog` class. If the computer does not support the `CTaskDialog`, you should provide another method of communicating information to the user. Your application will crash if it tries to use a `CTaskDialog` on a computer that does not support the `CTaskDialog` class.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#1](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_5.cpp)]

## <a name="loadcommandcontrols"></a> CTaskDialog::LoadCommandControls

Adds command button controls by using data from the string table.

```cpp
void LoadCommandControls(
    int nIDCommandControlsFirst,
    int nIDCommandControlsLast);
```

### Parameters

*nIDCommandControlsFirst*<br/>
[in] The string ID of the first command.

*nIDCommandControlsLast*<br/>
[in] The string ID of the last command.

### Remarks

This method creates command button controls by using data from the resource file of your application. The string table in the resource file has several strings with associated string IDs. New command button controls added by using this method use the string for the control's caption and the string ID for the control's ID. The range of strings selected is provided by *nIDCommandControlsFirst* and *nCommandControlsLast*, inclusive. If there is an empty entry in the range, the method does not add a command button control for that entry.

By default, new command button controls are enabled and do not require elevation.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="loadradiobuttons"></a> CTaskDialog::LoadRadioButtons

Adds radio button controls by using data from the string table.

```cpp
void LoadRadioButtons(
    int nIDRadioButtonsFirst,
    int nIDRadioButtonsLast);
```

### Parameters

*nIDRadioButtonsFirst*<br/>
[in] The string ID of the first radio button.

*nIDRadioButtonsLast*<br/>
[in] The string ID of the last radio button.

### Remarks

This method creates radio buttons by using data from the resource file of your application. The string table in the resource file has several strings with associated string IDs. New radio buttons added by using this method use the string for the radio button's caption and the string ID for the radio button's ID. The range of strings selected is provided by *nIDRadioButtonsFirst* and *nRadioButtonsLast*, inclusive. If there is an empty entry in the range, the method does not add a radio button for that entry.

By default, new radio buttons are enabled.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="navigateto"></a> CTaskDialog::NavigateTo

Transfers the focus to another `CTaskDialog`.

```
protected:
void NavigateTo(CTaskDialog& oTaskDialog) const;
```

### Parameters

*oTaskDialog*<br/>
[in] The `CTaskDialog` that receives the focus.

### Remarks

This method hides the current `CTaskDialog` when it displays the *oTaskDialog*. The *oTaskDialog* is displayed in the same location as the current `CTaskDialog`.

## <a name="oncommandcontrolclick"></a> CTaskDialog::OnCommandControlClick

The framework calls this method when the user clicks a command button control.

```
virtual HRESULT OnCommandControlClick(int nCommandControlID);
```

### Parameters

*nCommandControlID*<br/>
[in] The ID of the command button control that the user selected.

### Return Value

The default implementation returns S_OK.

### Remarks

Override this method in a derived class to implement custom behavior.

## <a name="oncreate"></a> CTaskDialog::OnCreate

The framework calls this method after it creates the `CTaskDialog`.

```
virtual HRESULT OnCreate();
```

### Return Value

The default implementation returns S_OK.

### Remarks

Override this method in a derived class to implement custom behavior.

## <a name="ondestroy"></a> CTaskDialog::OnDestroy

The framework calls this method immediately before it destroys the `CTaskDialog`.

```
virtual HRESULT OnDestroy();
```

### Return Value

The default implementation returns S_OK.

### Remarks

Override this method in a derived class to implement custom behavior.

## <a name="onexpandbuttonclick"></a> CTaskDialog::OnExpandButtonClick

The framework calls this method when the user clicks on the expansion button.

```
virtual HRESULT OnExpandButtonClicked(BOOL bExpanded);
```

### Parameters

*bExpanded*<br/>
[in] A nonzero value indicates the extra information is displayed; 0 indicates the extra information is hidden.

### Return Value

The default implementation returns S_OK.

### Remarks

Override this method in a derived class to implement custom behavior.

## <a name="onhelp"></a> CTaskDialog::OnHelp

The framework calls this method when the user requests help.

```
virtual HRESULT OnHelp();
```

### Return Value

The default implementation returns S_OK.

### Remarks

Override this method in a derived class to implement custom behavior.

## <a name="onhyperlinkclick"></a> CTaskDialog::OnHyperlinkClick

The framework calls this method when the user clicks on a hyperlink.

```
virtual HRESULT OnHyperlinkClick(const CString& strHref);
```

### Parameters

*strHref*<br/>
[in] The string that represents the hyperlink.

### Return Value

The default implementation returns S_OK.

### Remarks

This method calls [ShellExecute](/windows/win32/api/shellapi/nf-shellapi-shellexecutew) before it returns S_OK.

Override this method in a derived class to implement custom behavior.

## <a name="oninit"></a> CTaskDialog::OnInit

The framework calls this method when the `CTaskDialog` is initialized.

```
virtual HRESULT OnInit();
```

### Return Value

The default implementation returns S_OK.

### Remarks

Override this method in a derived class to implement custom behavior.

## <a name="onnavigatepage"></a> CTaskDialog::OnNavigatePage

The framework calls this method in response to the [CTaskDialog::NavigateTo](#navigateto) method.

```
virtual HRESULT OnNavigatePage();
```

### Return Value

The default implementation returns S_OK.

### Remarks

Override this method in a derived class to implement custom behavior.

## <a name="onradiobuttonclick"></a> CTaskDialog::OnRadioButtonClick

The framework calls this method when the user selects a radio button control.

```
virtual HRESULT OnRadioButtonClick(int nRadioButtonID);
```

### Parameters

*nRadioButtonID*<br/>
[in] The ID of the radio button control that the user clicked.

### Return Value

The default implementation returns S_OK.

### Remarks

Override this method in a derived class to implement custom behavior.

## <a name="ontimer"></a> CTaskDialog::OnTimer

The framework calls this method when the timer expires.

```
virtual HRESULT OnTimer(long lTime);
```

### Parameters

*lTime*<br/>
[in] Time in milliseconds since the `CTaskDialog` was created or the timer was reset.

### Return Value

The default implementation returns S_OK.

### Remarks

Override this method in a derived class to implement custom behavior.

## <a name="onverificationcheckboxclick"></a> CTaskDialog::OnVerificationCheckboxClick

The framework calls this method when the user clicks the verification check box.

```
virtual HRESULT OnVerificationCheckboxClick(BOOL bChecked);
```

### Parameters

*bChecked*<br/>
[in] TRUE indicates the verification check box is selected; FALSE indicates it is not.

### Return Value

The default implementation returns S_OK.

### Remarks

Override this method in a derived class to implement custom behavior.

## <a name="removeallcommandcontrols"></a> CTaskDialog::RemoveAllCommandControls

Removes all the command button controls from the `CTaskDialog`.

```cpp
void RemoveAllCommandControls();
```

### Example

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="removeallradiobuttons"></a> CTaskDialog::RemoveAllRadioButtons

Removes all the radio buttons from the `CTaskDialog`.

```cpp
void RemoveAllRadioButtons();
```

### Example

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="setcommandcontroloptions"></a> CTaskDialog::SetCommandControlOptions

Updates a command button control on the `CTaskDialog`.

```cpp
void SetCommandControlOptions(
    int nCommandControlID,
    BOOL bEnabled,
    BOOL bRequiresElevation = FALSE);
```

### Parameters

*nCommandControlID*<br/>
[in] The ID of the command control to update.

*bEnabled*<br/>
[in] A Boolean parameter that indicates if the specified command button control is enabled or disabled.

*bRequiresElevation*<br/>
[in] A Boolean parameter that indicates if the specified command button control requires elevation.

### Remarks

Use this method to change whether a command button control is enabled or requires elevation after it has been added to the `CTaskDialog` class.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="setcommonbuttonoptions"></a> CTaskDialog::SetCommonButtonOptions

Updates a subset of common buttons to be enabled and to require UAC elevation.

```cpp
void SetCommonButtonOptions(
    int nDisabledButtonMask,
    int nElevationButtonMask = 0);
```

### Parameters

*nDisabledButtonMask*<br/>
[in] A mask for the common buttons to disable.

*nElevationButtonMask*<br/>
[in] A mask for the common buttons that require elevation.

### Remarks

You can set the common buttons available to an instance of the [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md) by using the constructor [CTaskDialog::CTaskDialog](#ctaskdialog) and the method [CTaskDialog::SetCommonButtons](#setcommonbuttons). `CTaskDialog::SetCommonButtonOptions` does not support adding new common buttons.

If you use this method to disable or elevate a common button that is not available for this `CTaskDialog`, this method throws an exception by using the [ENSURE](diagnostic-services.md#ensure) macro.

This method enables any button that is available to the `CTaskDialog` but is not in the *nDisabledButtonMask*, even if it was previously disabled. This method treats elevation in a similar manner: it records common buttons as not requiring elevation if the common button is available but not included in *nElevationButtonMask*.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#6](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_6.cpp)]

## <a name="setcommonbuttons"></a> CTaskDialog::SetCommonButtons

Adds common buttons to the `CTaskDialog`.

```cpp
void SetCommonButtons(
    int nButtonMask,
    int nDisabledButtonMask = 0,
    int nElevationButtonMask = 0);
```

### Parameters

*nButtonMask*<br/>
[in] A mask of the buttons to add to the `CTaskDialog`.

*nDisabledButtonMask*<br/>
[in] A mask of the buttons to disable.

*nElevationButtonMask*<br/>
[in] A mask of the buttons that require elevation.

### Remarks

You cannot call this method after the display window for this instance of the `CTaskDialog` class is created. If you do, this method throws an exception.

The buttons indicated by *nButtonMask* override any common buttons previously added to the `CTaskDialog`. Only the buttons indicated in *nButtonMask* are available.

If either *nDisabledButtonMask* or *nElevationButtonMask* contain a button that is not in *nButtonMask*, this method throws an exception by using the [ENSURE](diagnostic-services.md#ensure) macro.

By default, all common buttons are enabled and do not require elevation.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#6](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_6.cpp)]

## <a name="setcontent"></a> CTaskDialog::SetContent

Updates the content of the `CTaskDialog`.

```cpp
void SetContent(const CString& strContent);
```

### Parameters

*strContent*<br/>
[in] The string to display to the user.

### Remarks

The content of the `CTaskDialog` class is the text that is displayed to the user in the main section of the dialog box.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="setdefaultcommandcontrol"></a> CTaskDialog::SetDefaultCommandControl

Specifies the default command button control.

```cpp
void SetDefaultCommandControl(int nCommandControlID);
```

### Parameters

*nCommandControlID*<br/>
[in] The ID of the command button control to be the default.

### Remarks

The default command button control is the control that is selected when the `CTaskDialog` is first displayed to the user.

This method throws an exception if it cannot find the command button control specified by *nCommandControlID*.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="setdefaultradiobutton"></a> CTaskDialog::SetDefaultRadioButton

Specifies the default radio button.

```cpp
void SetDefaultRadioButton(int nRadioButtonID);
```

### Parameters

*nRadioButtonID*<br/>
[in] The ID of the radio button to be the default.

### Remarks

The default radio button is the button that is selected when the `CTaskDialog` is first displayed to the user.

This method throws an exception if it cannot find the radio button specified by *nRadioButtonID*.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="setdialogwidth"></a> CTaskDialog::SetDialogWidth

Adjusts the width of the `CTaskDialog`.

```cpp
void SetDialogWidth(int nWidth = 0);
```

### Parameters

*nWidth*<br/>
[in] The width of the dialog box, in pixels.

### Remarks

The parameter *nWidth* must be greater than or equal to 0. Otherwise, this method throws an exception.

If *nWidth* is set to 0, this method sets the dialog box to the default size.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="setexpansionarea"></a> CTaskDialog::SetExpansionArea

Updates the expansion area of the `CTaskDialog`.

```cpp
void SetExpansionArea(
    const CString& strExpandedInformation,
    const CString& strCollapsedLabel = _T(""),
    const CString& strExpandedLabel = _T(""));
```

### Parameters

*strExpandedInformation*<br/>
[in] The string that the `CTaskDialog` displays in the main body of the dialog box when the user clicks the expansion button.

*strCollapsedLabel*<br/>
[in] The string that the `CTaskDialog` displays next to the expansion button when the expanded area is collapsed.

*strExpandedLabel*<br/>
[in] The string that the `CTaskDialog` displays next to the expansion button when the expanded area is displayed.

### Remarks

The expansion area of the `CTaskDialog` class enables you to provide additional information to the user. The expansion area is in the main part of the `CTaskDialog`, located immediately underneath the title and content string.

When the `CTaskDialog` is first displayed, it does not show the expanded information and puts `strCollapsedLabel` next to the expansion button. When the user clicks the expansion button, the `CTaskDialog` displays *strExpandedInformation* and changes the label to *strExpandedLabel*.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="setfootericon"></a> CTaskDialog::SetFooterIcon

Updates the footer icon of the `CTaskDialog`.

```cpp
void SetFooterIcon(HICON hFooterIcon);
void SetFooterIcon(LPCWSTR lpszFooterIcon);
```

### Parameters

*hFooterIcon*<br/>
[in] The new icon for the `CTaskDialog`.

*lpszFooterIcon*<br/>
[in] The new icon for the `CTaskDialog`.

### Remarks

The footer icon is displayed on the bottom of the [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md). It can have associated footer text. You can change the footer text with [CTaskDialog::SetFooterText](#setfootertext).

This method throws an exception with the [ENSURE](diagnostic-services.md#ensure) macro if the `CTaskDialog` is displayed or the input parameter is NULL.

A `CTaskDialog` can only accept an `HICON` or `LPCWSTR` as a footer icon. This is configured by setting the option TDF_USE_HICON_FOOTER in the constructor or [CTaskDialog::SetOptions](#setoptions). By default, the `CTaskDialog` is configured to use `LPCWSTR` as the input type for the footer icon. This method generates an exception if you try to set the icon using the inappropriate type.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="setfootertext"></a> CTaskDialog::SetFooterText

Updates the text on the footer of the `CTaskDialog`.

```cpp
void SetFooterText(const CString& strFooterText);
```

### Parameters

*strFooterText*<br/>
[in] The new text for the footer.

### Remarks

The footer icon appears next to the footer text on the bottom of the `CTaskDialog`. You can change the footer icon with [CTaskDialog::SetFooterIcon](#setfootericon).

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="setmainicon"></a> CTaskDialog::SetMainIcon

Updates the main icon of the `CTaskDialog`.

```cpp
void SetMainIcon(HICON hMainIcon);
void SetMainIcon(LPCWSTR lpszMainIcon);
```

### Parameters

*hMainIcon*<br/>
[in] The new icon.

*lpszMainIcon*<br/>
[in] The new icon.

### Remarks

This method throws an exception with the [ENSURE](diagnostic-services.md#ensure) macro if the `CTaskDialog` is displayed or the input parameter is NULL.

A `CTaskDialog` can only accept an `HICON` or `LPCWSTR` as a main icon. You can configure this by setting the TDF_USE_HICON_MAIN option in the constructor or in the [CTaskDialog::SetOptions](#setoptions) method. By default, the `CTaskDialog` is configured to use `LPCWSTR` as the input type for the main icon. This method generates an exception if you try to set the icon using the inappropriate type.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="setmaininstruction"></a> CTaskDialog::SetMainInstruction

Updates the main instruction of the `CTaskDialog`.

```cpp
void SetMainInstruction(const CString& strInstructions);
```

### Parameters

*strInstructions*<br/>
[in] The new main instruction.

### Remarks

The main instruction of the `CTaskDialog` class is text displayed to the user in a large bold font. It is located in the dialog box underneath the title bar.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="setoptions"></a> CTaskDialog::SetOptions

Configures the options for the `CTaskDialog`.

```cpp
void SetOptions(int nOptionFlag);
```

### Parameters

*nOptionFlag*<br/>
[in] The set of flags to use for the `CTaskDialog`.

### Remarks

This method clears all the current options for the `CTaskDialog`. To preserve the current options, you must retrieve them first with [CTaskDialog::GetOptions](#getoptions) and combine them with the options that you want to set.

The following table lists all the valid options.

|Name|Description|
|-|-|
|TDF_ENABLE_HYPERLINKS|Enables hyperlinks in the `CTaskDialog`.|
|TDF_USE_HICON_MAIN|Configures the `CTaskDialog` to use a `HICON` for the main icon. The alternative is to use a `LPCWSTR`.|
|TDF_USE_HICON_FOOTER|Configures the `CTaskDialog` to use a `HICON` for the footer icon. The alternative is to use a `LPCWSTR`.|
|TDF_ALLOW_DIALOG_CANCELLATION|Enables the user to close the `CTaskDialog` by using the keyboard or by using the icon in the upper-right corner of the dialog box, even if the **Cancel** button is not enabled. If this flag is not set and the **Cancel** button is not enabled, the user cannot close the dialog box by using Alt+F4, the Escape key, or the title bar's close button.|
|TDF_USE_COMMAND_LINKS|Configures the `CTaskDialog` to use command button controls.|
|TDF_USE_COMMAND_LINKS_NO_ICON|Configures the `CTaskDialog` to use command button controls without displaying an icon next to the control. TDF_USE_COMMAND_LINKS overrides TDF_USE_COMMAND_LINKS_NO_ICON.|
|TDF_EXPAND_FOOTER_AREA|Indicates the expansion area is currently expanded.|
|TDF_EXPANDED_BY_DEFAULT|Determines whether the expansion area is expanded by default.|
|TDF_VERIFICATION_FLAG_CHECKED|Indicates the verification check box is currently selected.|
|TDF_SHOW_PROGRESS_BAR|Configures the `CTaskDialog` to display a progress bar.|
|TDF_SHOW_MARQUEE_PROGRESS_BAR|Configures the progress bar to be a marquee progress bar. If you enable this option, you must set TDF_SHOW_PROGRESS_BAR to have the expected behavior.|
|TDF_CALLBACK_TIMER|Indicates that the `CTaskDialog` callback interval is set to approximately 200 milliseconds.|
|TDF_POSITION_RELATIVE_TO_WINDOW|Configures the `CTaskDialog` to be centered relative to the parent window. If this flag is not enabled, the `CTaskDialog` is centered relative to the monitor.|
|TDF_RTL_LAYOUT|Configures the `CTaskDialog` for a right-to-left reading layout.|
|TDF_NO_DEFAULT_RADIO_BUTTON|Indicates that no radio button is selected when the `CTaskDialog` appears.|
|TDF_CAN_BE_MINIMIZED|Enables the user to minimize the `CTaskDialog`. To support this option, the `CTaskDialog` cannot be modal. MFC does not support this option because MFC does not support a modeless `CTaskDialog`.|

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="setprogressbarmarquee"></a> CTaskDialog::SetProgressBarMarquee

Configures a marquee bar for the `CTaskDialog` and adds it to the dialog box.

```cpp
void SetProgressBarMarquee(
    BOOL bEnabled = TRUE,
    int nMarqueeSpeed = 0);
```

### Parameters

*bEnabled*<br/>
[in] TRUE to enable the marquee bar; FALSE to disable the marquee bar and remove it from the `CTaskDialog`.

*nMarqueeSpeed*<br/>
[in] An integer that indicates the speed of the marquee bar.

### Remarks

The marquee bar appears underneath the main text of the `CTaskDialog` class.

Use *nMarqueeSpeed* to set the speed of the marquee bar; larger values indicate a slower speed. A value of 0 for *nMarqueeSpeed* makes the marquee bar move at the default speed for Windows.

This method throws an exception with the [ENSURE](diagnostic-services.md#ensure) macro if *nMarqueeSpeed* is less than 0.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="setprogressbarposition"></a> CTaskDialog::SetProgressBarPosition

Adjusts the position of the progress bar.

```cpp
void SetProgressBarPosition(int nProgressPos);
```

### Parameters

*nProgressPos*<br/>
[in] The position for the progress bar.

### Remarks

This method throws an exception with the [ENSURE](diagnostic-services.md#ensure) macro if *nProgressPos* is not in the progress bar range. You can change the progress bar range with [CTaskDialog::SetProgressBarRange](#setprogressbarrange).

### Example

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="setprogressbarrange"></a> CTaskDialog::SetProgressBarRange

Adjusts the range of the progress bar.

```cpp
void SetProgressBarRange(
    int nRangeMin,
    int nRangeMax);
```

### Parameters

*nRangeMin*<br/>
[in] The lower bound of the progress bar.

*nRangeMax*<br/>
[in] The upper bound of the progress bar.

### Remarks

The position of the progress bar is relative to *nRangeMin* and *nRangeMax*. For example, if *nRangeMin* is 50 and *nRangeMax* is 100, a position of 75 is halfway across the progress bar. Use [CTaskDialog::SetProgressBarPosition](#setprogressbarposition) to set the position of the progress bar.

To display the progress bar, the option TDF_SHOW_PROGRESS_BAR must be enabled and TDF_SHOW_MARQUEE_PROGRESS_BAR must not be enabled. This method automatically sets TDF_SHOW_PROGRESS_BAR and clears TDF_SHOW_MARQUEE_PROGRESS_BAR. Use [CTaskDialog::SetOptions](#setoptions) to manually change the options for this instance of the [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md).

This method throws an exception with the [ENSURE](diagnostic-services.md#ensure) macro if *nRangeMin* is not less than *nRangeMax*. This method also throws an exception if the `CTaskDialog` is already displayed and has a marquee progress bar.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="setprogressbarstate"></a> CTaskDialog::SetProgressBarState

Sets the state of the progress bar and displays it on the `CTaskDialog`.

```cpp
void SetProgressBarState(int nState = PBST_NORMAL);
```

### Parameters

*nState*<br/>
[in] The state of the progress bar. See the Remarks section for the possible values.

### Remarks

This method throws an exception with the [ENSURE](diagnostic-services.md#ensure) macro if the `CTaskDialog` is already displayed and has a marquee progress bar.

The following table lists the possible values for *nState*. In all these cases, the progress bar will fill with the regular color until it reaches the designated stop position. At that point it will change color based on the state.

|Name|Description|
|-|-|
|PBST_NORMAL|After the progress bar fills, the `CTaskDialog` does not change the color of the bar. By default, the regular color is green.|
|PBST_ERROR|After the progress bar fills, the `CTaskDialog` changes the color of the bar to the error color. By default, this is red.|
|PBST_PAUSED|After the progress bar fills, the `CTaskDialog` changes the color of the bar to the paused color. By default, this is yellow.|

You can set where the progress bar stops with [CTaskDialog::SetProgressBarPosition](#setprogressbarposition).

### Example

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="setradiobuttonoptions"></a> CTaskDialog::SetRadioButtonOptions

Enables or disables a radio button.

```cpp
void SetRadioButtonOptions(
    int nRadioButtonID,
    BOOL bEnabled);
```

### Parameters

*nRadioButtonID*<br/>
[in] The ID of the radio button control.

*bEnabled*<br/>
[in] TRUE to enable the radio button; FALSE to disable the radio button.

### Remarks

This method throws an exception with the [ENSURE](diagnostic-services.md#ensure) macro if *nRadioButtonID* is not a valid ID for a radio button.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="setverificationcheckbox"></a> CTaskDialog::SetVerificationCheckbox

Sets the checked state of the verification check box.

```cpp
void SetVerificationCheckbox(BOOL bChecked);
```

### Parameters

*bChecked*<br/>
[in] TRUE to have the verification check box selected when the `CTaskDialog` is displayed; FALSE to have the verification check box unselected when the `CTaskDialog` is displayed.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

## <a name="setverificationcheckboxtext"></a> CTaskDialog::SetVerificationCheckboxText

Sets the text that is displayed to the right of the verification check box.

```cpp
void SetVerificationCheckboxText(CString& strVerificationText);
```

### Parameters

*strVerificationText*<br/>
[in] The text that this method displays next to the verification check box.

### Remarks

This method throws an exception with the [ENSURE](diagnostic-services.md#ensure) macro if this instance of the `CTaskDialog` class is already displayed.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

## <a name="setwindowtitle"></a> CTaskDialog::SetWindowTitle

Sets the title of the `CTaskDialog`.

```cpp
void SetWindowTitle(CString& strWindowTitle);
```

### Parameters

*strWindowTitle*<br/>
[in] The new title for the `CTaskDialog`.

### Remarks

### Example

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="showdialog"></a> CTaskDialog::ShowDialog

Creates and displays a `CTaskDialog`.

```
static INT_PTR ShowDialog(
    const CString& strContent,
    const CString& strMainInstruction,
    const CString& strTitle,
    int nIDCommandControlsFirst,
    int nIDCommandControlsLast,
    int nCommonButtons = TDCBF_YES_BUTTON | TDCBF_NO_BUTTON,
    int nTaskDialogOptions = TDF_ENABLE_HYPERLINKS | TDF_USE_COMMAND_LINKS,
    const CString& strFooter = _T(""));
```

### Parameters

*strContent*<br/>
[in] The string to use for the content of the `CTaskDialog`.

*strMainInstruction*<br/>
[in] The main instruction of the `CTaskDialog`.

*strTitle*<br/>
[in] The title of the `CTaskDialog`.

*nIDCommandControlsFirst*<br/>
[in] The string ID of the first command.

*nIDCommandControlsLast*<br/>
[in] The string ID of the last command.

*nCommonButtons*<br/>
[in] A mask of the buttons to add to the `CTaskDialog`.

*nTaskDialogOptions*<br/>
[in] The set of options to use for the `CTaskDialog`.

*strFooter*<br/>
[in] The string to use as the footer.

### Return Value

An integer that corresponds to the selection made by the user.

### Remarks

This static method enables you to create an instance of the `CTaskDialog` class without explicitly creating a `CTaskDialog` object in your code. Because there is no `CTaskDialog` object, you cannot call any other methods of the `CTaskDialog` if you use this method to show a `CTaskDialog` to the user.

This method creates command button controls by using data from the resource file of your application. The string table in the resource file has several strings with associated string IDs. This method adds a command button control for each valid entry in the string table between *nIDCommandControlsFirst* and *nCommandControlsLast*, inclusive. For these command button controls, the string in the string table is the control's caption and the string ID is the control's ID.

See [CTaskDialog::SetOptions](#setoptions) for a list of valid options.

The `CTaskDialog` closes when the user selects a common button, a command link control, or closes the `CTaskDialog`. The return value is the identifier that indicates how the user closed the dialog box.

### Example

[!code-cpp[NVC_MFC_CTaskDialog#1](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_5.cpp)]

## <a name="taskdialogcallback"></a> CTaskDialog::TaskDialogCallback

The framework calls this method in response to various Windows messages.

```
friend:
HRESULT TaskDialogCallback(
    HWND hWnd,
    UINT uNotification,
    WPARAM wParam,
    LPARAM lParam,
    LONG_PTR dwRefData);
```

### Parameters

*hwnd*<br/>
[in] A handle to the `m_hWnd` structure for the `CTaskDialog`.

*uNotification*<br/>
[in] The notification code that specifies the generated message.

*wParam*<br/>
[in] More information about the message.

*lParam*<br/>
[in] More information about the message.

*dwRefData*<br/>
[in] A pointer to the `CTaskDialog` object that the callback message applies to.

### Return Value

Depends on the specific notification code. See the Remarks section for more information.

### Remarks

The default implementation of `TaskDialogCallback` handles the specific message and then calls the appropriate On method of the [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md). For example, in response to the TDN_BUTTON_CLICKED message, `TaskDialogCallback` calls [CTaskDialog::OnCommandControlClick](#oncommandcontrolclick).

The values for *wParam* and *lParam* depend on the specific generated message. It is possible for either or both of these values to be empty. The following table lists the default notifications that are supported and what the values of *wParam* and *lParam* represent. If you override this method in a derived class, you should implement the callback code for each message in the following table.

|Notification Message|*wParam* Value|*lParam* Value|
|--------------------------|--------------------|--------------------|
|TDN_CREATED|Not used.|Not used.|
|TDN_NAVIGATED|Not used.|Not used.|
|TDN_BUTTON_CLICKED|The command button control ID.|Not used.|
|TDN_HYPERLINK_CLICKED|Not used.|A [LPCWSTR](/windows/win32/WinProg/windows-data-types) structure that contains the link.|
|TDN_TIMER|Time in milliseconds since the `CTaskDialog` was created or the timer was reset.|Not used.|
|TDN_DESTROYED|Not used.|Not used.|
|TDN_RADIO_BUTTON_CLICKED|The radio button ID.|Not used.|
|TDN_DIALOG_CONSTRUCTED|Not used.|Not used.|
|TDN_VERIFICATION_CLICKED|1 if the check box is checked, 0 if it is not.|Not used.|
|TDN_HELP|Not used.|Not used.|
|TDN_EXPANDO_BUTTON_CLICKED|0 if the expansion area is collapsed; nonzero if the expansion text is displayed.|Not used.|

## See also

[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Walkthrough: Adding a CTaskDialog to an Application](../../mfc/walkthrough-adding-a-ctaskdialog-to-an-application.md)
