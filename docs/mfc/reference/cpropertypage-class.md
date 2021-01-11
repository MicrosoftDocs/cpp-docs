---
description: "Learn more about: CPropertyPage Class"
title: "CPropertyPage Class"
ms.date: "11/04/2016"
f1_keywords: ["CPropertyPage", "AFXDLGS/CPropertyPage", "AFXDLGS/CPropertyPage::CPropertyPage", "AFXDLGS/CPropertyPage::CancelToClose", "AFXDLGS/CPropertyPage::Construct", "AFXDLGS/CPropertyPage::GetPSP", "AFXDLGS/CPropertyPage::OnApply", "AFXDLGS/CPropertyPage::OnCancel", "AFXDLGS/CPropertyPage::OnKillActive", "AFXDLGS/CPropertyPage::OnOK", "AFXDLGS/CPropertyPage::OnQueryCancel", "AFXDLGS/CPropertyPage::OnReset", "AFXDLGS/CPropertyPage::OnSetActive", "AFXDLGS/CPropertyPage::OnWizardBack", "AFXDLGS/CPropertyPage::OnWizardFinish", "AFXDLGS/CPropertyPage::OnWizardNext", "AFXDLGS/CPropertyPage::QuerySiblings", "AFXDLGS/CPropertyPage::SetModified", "AFXDLGS/CPropertyPage::m_psp"]
helpviewer_keywords: ["CPropertyPage [MFC], CPropertyPage", "CPropertyPage [MFC], CancelToClose", "CPropertyPage [MFC], Construct", "CPropertyPage [MFC], GetPSP", "CPropertyPage [MFC], OnApply", "CPropertyPage [MFC], OnCancel", "CPropertyPage [MFC], OnKillActive", "CPropertyPage [MFC], OnOK", "CPropertyPage [MFC], OnQueryCancel", "CPropertyPage [MFC], OnReset", "CPropertyPage [MFC], OnSetActive", "CPropertyPage [MFC], OnWizardBack", "CPropertyPage [MFC], OnWizardFinish", "CPropertyPage [MFC], OnWizardNext", "CPropertyPage [MFC], QuerySiblings", "CPropertyPage [MFC], SetModified", "CPropertyPage [MFC], m_psp"]
ms.assetid: d9000a21-aa81-4530-85d9-f43432afb4dc
---
# CPropertyPage Class

Represents individual pages of a property sheet, otherwise known as a tab dialog box.

## Syntax

```
class CPropertyPage : public CDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPropertyPage::CPropertyPage](#cpropertypage)|Constructs a `CPropertyPage` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPropertyPage::CancelToClose](#canceltoclose)|Changes the OK button to read Close, and disables the Cancel button, after an unrecoverable change in the page of a modal property sheet.|
|[CPropertyPage::Construct](#construct)|Constructs a `CPropertyPage` object. Use `Construct` if you want to specify your parameters at run time, or if you are using arrays.|
|[CPropertyPage::GetPSP](#getpsp)|Retrieves the Windows [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2) structure associated with the `CPropertyPage` object.|
|[CPropertyPage::OnApply](#onapply)|Called by the framework when the Apply Now button is clicked.|
|[CPropertyPage::OnCancel](#oncancel)|Called by the framework when the Cancel button is clicked.|
|[CPropertyPage::OnKillActive](#onkillactive)|Called by the framework when the current page is no longer the active page. Perform data validation here.|
|[CPropertyPage::OnOK](#onok)|Called by the framework when the OK, Apply Now, or Close button is clicked.|
|[CPropertyPage::OnQueryCancel](#onquerycancel)|Called by the framework when the Cancel button is clicked, and before the cancel has taken place.|
|[CPropertyPage::OnReset](#onreset)|Called by the framework when the Cancel button is clicked.|
|[CPropertyPage::OnSetActive](#onsetactive)|Called by the framework when the page is made the active page.|
|[CPropertyPage::OnWizardBack](#onwizardback)|Called by the framework when the Back button is clicked while using a wizard-type property sheet.|
|[CPropertyPage::OnWizardFinish](#onwizardfinish)|Called by the framework when the Finish button is clicked while using a wizard-type property sheet.|
|[CPropertyPage::OnWizardNext](#onwizardnext)|Called by the framework when the Next button is clicked while using a wizard-type property sheet.|
|[CPropertyPage::QuerySiblings](#querysiblings)|Forwards the message to each page of the property sheet.|
|[CPropertyPage::SetModified](#setmodified)|Call to activate or deactivate the Apply Now button.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CPropertyPage::m_psp](#m_psp)|The Windows [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2) structure. Provides access to basic property page parameters.|

## Remarks

As with standard dialog boxes, you derive a class from `CPropertyPage` for each page in your property sheet. To use `CPropertyPage`-derived objects, first create a [CPropertySheet](../../mfc/reference/cpropertysheet-class.md) object, and then create an object for each page that goes in the property sheet. Call [CPropertySheet::AddPage](../../mfc/reference/cpropertysheet-class.md#addpage) for each page in the sheet, and then display the property sheet by calling [CPropertySheet::DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) for a modal property sheet, or [CPropertySheet::Create](../../mfc/reference/cpropertysheet-class.md#create) for a modeless property sheet.

You can create a type of tab dialog box called a wizard, which consists of a property sheet with a sequence of property pages that guide the user through the steps of an operation, such as setting up a device or creating a newsletter. In a wizard-type tab dialog box, the property pages do not have tabs, and only one property page is visible at a time. Also, instead of having OK and Apply Now buttons, a wizard-type tab dialog box has a Back button, a Next or Finish button, and a Cancel button.

For more information on establishing a property sheet as a wizard, see [CPropertySheet::SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode). For more information on using `CPropertyPage` objects, see the article [Property Sheets and Property Pages](../../mfc/property-sheets-and-property-pages-in-mfc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

`CPropertyPage`

## Requirements

**Header:** afxdlgs.h

## <a name="canceltoclose"></a> CPropertyPage::CancelToClose

Call this function after an unrecoverable change has been made to the data in a page of a modal property sheet.

```cpp
void CancelToClose();
```

### Remarks

This function will change the OK button to Close and disable the Cancel button. This change alerts the user that a change is permanent and the modifications cannot be cancelled.

The `CancelToClose` member function does nothing in a modeless property sheet, because a modeless property sheet does not have a Cancel button by default.

### Example

  See the example for [CPropertyPage::QuerySiblings](#querysiblings).

## <a name="construct"></a> CPropertyPage::Construct

Call this member function to construct a `CPropertyPage` object.

```cpp
void Construct(
    UINT nIDTemplate,
    UINT nIDCaption = 0);

void Construct(
    LPCTSTR lpszTemplateName,
    UINT nIDCaption = 0);

void Construct(
    UINT nIDTemplate,
    UINT nIDCaption,
    UINT nIDHeaderTitle,
    UINT nIDHeaderSubTitle = 0);

void Construct(
    LPCTSTR lpszTemplateName,
    UINT nIDCaption,
    UINT nIDHeaderTitle,
    UINT nIDHeaderSubTitle = 0);
```

### Parameters

*nIDTemplate*<br/>
ID of the template used for this page.

*nIDCaption*<br/>
ID of the name to be placed in the tab for this page. If 0, the name will be taken from the dialog template for this page.

*lpszTemplateName*<br/>
Contains a null-terminated string that is the name of a template resource.

*nIDHeaderTitle*<br/>
ID of the name to be placed in the title location of the property page header. By default, 0.

*nIDHeaderSubTitle*<br/>
ID of the name to be placed in the subtitle location of the property page header. By default, 0.

### Remarks

The object is displayed after all of the following conditions are met:

- The page has been added to a property sheet using [CPropertySheet::AddPage](../../mfc/reference/cpropertysheet-class.md#addpage).

- The property sheet's [DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) or [Create](../../mfc/reference/cpropertysheet-class.md#create) function has been called.

- The user has selected (tabbed to) this page.

Call `Construct` if one of the other class constructors has not been called. The `Construct` member function is flexible because you can leave the parameter statement blank and then specify multiple parameters and construction at any point in your code.

You must use `Construct` when you work with arrays, and you must call `Construct` for each member of the array so that the data members are assigned proper values.

### Example

[!code-cpp[NVC_MFCDocView#112](../../mfc/codesnippet/cpp/cpropertypage-class_1.cpp)]

## <a name="cpropertypage"></a> CPropertyPage::CPropertyPage

Constructs a `CPropertyPage` object.

```
CPropertyPage();

explicit CPropertyPage(
    UINT nIDTemplate,
    UINT nIDCaption = 0,
    DWORD dwSize = sizeof(PROPSHEETPAGE));

explicit CPropertyPage(
    LPCTSTR lpszTemplateName,
    UINT nIDCaption = 0,
    DWORD dwSize = sizeof(PROPSHEETPAGE));

CPropertyPage(
    UINT nIDTemplate,
    UINT nIDCaption,
    UINT nIDHeaderTitle,
    UINT nIDHeaderSubTitle = 0,
    DWORD dwSize = sizeof(PROPSHEETPAGE));

CPropertyPage(
    LPCTSTR lpszTemplateName,
    UINT nIDCaption,
    UINT nIDHeaderTitle,
    UINT nIDHeaderSubTitle = 0,
    DWORD dwSize = sizeof(PROPSHEETPAGE));
```

### Parameters

*nIDTemplate*<br/>
ID of the template used for this page.

*nIDCaption*<br/>
ID of the name to be placed in the tab for this page. If 0, the name will be taken from the dialog template for this page.

*dwSize*<br/>
*lpszTemplateName*
Points to a string containing the name of the template for this page. Cannot be NULL.

*nIDHeaderTitle*<br/>
ID of the name to be placed in the title location of the property page header.

*nIDHeaderSubTitle*<br/>
ID of the name to be placed in the subtitle location of the property page header.

### Remarks

The object is displayed after all of the following conditions are met:

- The page has been added to a property sheet using [CPropertySheet::AddPage](../../mfc/reference/cpropertysheet-class.md#addpage).

- The property sheet's [DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) or [Create](../../mfc/reference/cpropertysheet-class.md#create) function has been called.

- The user has selected (tabbed to) this page.

If you have multiple parameters (for example, if you are using an array), use [CPropertySheet::Construct](../../mfc/reference/cpropertysheet-class.md#construct) instead of `CPropertyPage`.

### Example

[!code-cpp[NVC_MFCDocView#113](../../mfc/codesnippet/cpp/cpropertypage-class_2.cpp)]

## <a name="getpsp"></a> CPropertyPage::GetPSP

Retrieves the Windows [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2) structure associated with the `CPropertyPage` object.

```
const PROPSHEETPAGE& GetPSP() const;

PROPSHEETPAGE& GetPSP();
```

### Return Value

A reference to the `PROPSHEETPAGE` structure.

## <a name="m_psp"></a> CPropertyPage::m_psp

`m_psp` is a structure whose members store the characteristics of [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v2).

```
PROPSHEETPAGE m_psp;
```

### Remarks

Use this structure to initialize the appearance of a property page after it is constructed.

For more information on this structure, including a listing of its members, see `PROPSHEETPAGE` in the Windows SDK.

### Example

[!code-cpp[NVC_MFCDocView#128](../../mfc/codesnippet/cpp/cpropertypage-class_3.cpp)]

## <a name="onapply"></a> CPropertyPage::OnApply

This member function is called by the framework when the user chooses the OK or the Apply Now button.

```
virtual BOOL OnApply();
```

### Return Value

Nonzero if the changes are accepted; otherwise 0.

### Remarks

When the framework calls this function, changes made on all property pages in the property sheet are accepted, the property sheet retains focus, and `OnApply` returns TRUE (the value 1). Before `OnApply` can be called by the framework, you must have called [SetModified](#setmodified) and set its parameter to TRUE. This will activate the Apply Now button as soon as the user makes a change on the property page.

Override this member function to specify what action your program takes when the user clicks the Apply Now button. When overriding, the function should return TRUE to accept changes and FALSE to prevent changes from taking effect.

The default implementation of `OnApply` calls `OnOK`.

For more information about notification messages sent when the user presses the Apply Now or OK button in a property sheet, see [PSN_APPLY](/windows/win32/Controls/psn-apply) in the Windows SDK.

### Example

  See the example for [CPropertyPage::OnOK](#onok).

## <a name="oncancel"></a> CPropertyPage::OnCancel

This member function is called by the framework when the Cancel button is selected.

```
virtual void OnCancel();
```

### Remarks

Override this member function to perform Cancel button actions. The default negates any changes that have been made.

### Example

[!code-cpp[NVC_MFCDocView#114](../../mfc/codesnippet/cpp/cpropertypage-class_4.cpp)]

## <a name="onkillactive"></a> CPropertyPage::OnKillActive

This member function is called by the framework when the page is no longer the active page.

```
virtual BOOL OnKillActive();
```

### Return Value

Nonzero if data was updated successfully, otherwise 0.

### Remarks

Override this member function to perform special data validation tasks.

The default implementation of this member function copies settings from the controls in the property page to the member variables of the property page. If the data was not updated successfully due to a dialog data validation (DDV) error, the page retains focus.

After this member function returns successfully, the framework will call the page's [OnOK](#onok) function.

### Example

[!code-cpp[NVC_MFCDocView#115](../../mfc/codesnippet/cpp/cpropertypage-class_5.cpp)]

## <a name="onok"></a> CPropertyPage::OnOK

This member function is called by the framework when the user chooses either the OK or the Apply Now button, immediately after the framework calls [OnKillActive](#onkillactive).

```
virtual void OnOK();
```

### Remarks

When the user chooses either the OK or the Apply Now button, the framework receives the [PSN_APPLY](/windows/win32/Controls/psn-apply) notification from the property page. The call to `OnOK` won't be made if you call [CPropertySheet::PressButton](../../mfc/reference/cpropertysheet-class.md#pressbutton) because the property page does not send the notification in that case.

Override this member function to implement additional behavior specific to the currently active page when user dismisses the entire property sheet.

The default implementation of this member function marks the page as "clean" to reflect that the data was updated in the `OnKillActive` function.

### Example

[!code-cpp[NVC_MFCDocView#116](../../mfc/codesnippet/cpp/cpropertypage-class_6.cpp)]

## <a name="onquerycancel"></a> CPropertyPage::OnQueryCancel

This member function is called by the framework when the user clicks the Cancel button and before the cancel action has taken place.

```
virtual BOOL OnQueryCancel();
```

### Return Value

Returns FALSE to prevent the cancel operation or TRUE to allow it.

### Remarks

Override this member function to specify an action the program takes when the user clicks the Cancel button.

The default implementation of `OnQueryCancel` returns TRUE.

### Example

[!code-cpp[NVC_MFCDocView#117](../../mfc/codesnippet/cpp/cpropertypage-class_7.cpp)]

## <a name="onreset"></a> CPropertyPage::OnReset

This member function is called by the framework when the user chooses the Cancel button.

```
virtual void OnReset();
```

### Remarks

When the framework calls this function, changes to all property pages that were made by the user previously choosing the Apply Now button are discarded, and the property sheet retains focus.

Override this member function to specify what action the program takes when the user clicks the Cancel button.

The default implementation of `OnReset` does nothing.

### Example

  See the example for [CPropertyPage::OnCancel](#oncancel).

## <a name="onsetactive"></a> CPropertyPage::OnSetActive

This member function is called by the framework when the page is chosen by the user and becomes the active page.

```
virtual BOOL OnSetActive();
```

### Return Value

Nonzero if the page was successfully set active; otherwise 0.

### Remarks

Override this member function to perform tasks when a page is activated. Your override of this member function would typically call the default version after updating data members, to allow it to update the page controls with the new data.

The default implementation creates the window for the page, if not previously created, and makes it the active page.

### Example

  See the example for [CPropertySheet::SetFinishText](../../mfc/reference/cpropertysheet-class.md#setfinishtext).

## <a name="onwizardback"></a> CPropertyPage::OnWizardBack

This member function is called by the framework when the user clicks on the Back button in a wizard.

```
virtual LRESULT OnWizardBack();
```

### Return Value

0 to automatically advance to the next page; -1 to prevent the page from changing. To jump to a page other than the next one, return the identifier of the dialog to be displayed.

### Remarks

Override this member function to specify some action the user must take when the Back button is pressed.

For more information on how to make a wizard-type property sheet, see [CPropertySheet::SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).

### Example

[!code-cpp[NVC_MFCDocView#118](../../mfc/codesnippet/cpp/cpropertypage-class_8.cpp)]

## <a name="onwizardfinish"></a> CPropertyPage::OnWizardFinish

This member function is called by the framework when the user clicks on the Finish button in a wizard.

```
virtual BOOL OnWizardFinish();
```

### Return Value

Nonzero if the property sheet is destroyed when the wizard finishes; otherwise zero.

### Remarks

When a user clicks the **Finish** button in a wizard, the framework calls this function; when `OnWizardFinish` returns TRUE (a nonzero value), the property sheet is able to be destroyed (but is not actually destroyed). Call `DestroyWindow` to destroy the property sheet. Do not call `DestroyWindow` from `OnWizardFinish`; doing so will cause heap corruption or other errors.

You can override this member function to specify some action the user must take when the Finish button is pressed. When overriding this function, return FALSE to prevent the property sheet from being destroyed.

For more information about notification messages sent when the user presses the Finish button in a wizard property sheet, see [PSN_WIZFINISH](/windows/win32/Controls/psn-wizfinish) in the Windows SDK.

For more information on how to make a wizard-type property sheet, see [CPropertySheet::SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).

### Example

[!code-cpp[NVC_MFCDocView#119](../../mfc/codesnippet/cpp/cpropertypage-class_9.cpp)]

[!code-cpp[NVC_MFCDocView#120](../../mfc/codesnippet/cpp/cpropertypage-class_10.cpp)]

[!code-cpp[NVC_MFCDocView#121](../../mfc/codesnippet/cpp/cpropertypage-class_11.cpp)]

[!code-cpp[NVC_MFCDocView#122](../../mfc/codesnippet/cpp/cpropertypage-class_12.cpp)]

## <a name="onwizardnext"></a> CPropertyPage::OnWizardNext

This member function is called by the framework when the user clicks on the Next button in a wizard.

```
virtual LRESULT OnWizardNext();
```

### Return Value

0 to automatically advance to the next page; -1 to prevent the page from changing. To jump to a page other than the next one, return the identifier of the dialog to be displayed.

### Remarks

Override this member function to specify some action the user must take when the Next button is pressed.

For more information on how to make a wizard-type property sheet, see [CPropertySheet::SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).

### Example

[!code-cpp[NVC_MFCDocView#123](../../mfc/codesnippet/cpp/cpropertypage-class_13.cpp)]

## <a name="querysiblings"></a> CPropertyPage::QuerySiblings

Call this member function to forward a message to each page in the property sheet.

```
LRESULT QuerySiblings(
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*wParam*<br/>
Specifies additional message-dependent information.

*lParam*<br/>
Specifies additional message-dependent information

### Return Value

The nonzero value from a page in the property sheet, or 0 if all pages return a value of 0.

### Remarks

If a page returns a nonzero value, the property sheet does not send the message to subsequent pages.

### Example

[!code-cpp[NVC_MFCDocView#124](../../mfc/codesnippet/cpp/cpropertypage-class_14.cpp)]

[!code-cpp[NVC_MFCDocView#125](../../mfc/codesnippet/cpp/cpropertypage-class_15.cpp)]

[!code-cpp[NVC_MFCDocView#126](../../mfc/codesnippet/cpp/cpropertypage-class_16.cpp)]

## <a name="setmodified"></a> CPropertyPage::SetModified

Call this member function to enable or disable the Apply Now button, based on whether the settings in the property page should be applied to the appropriate external object.

```cpp
void SetModified(BOOL bChanged = TRUE);
```

### Parameters

*bChanged*<br/>
TRUE to indicate that the property page settings have been modified since the last time they were applied; FALSE to indicate that the property page settings have been applied, or should be ignored.

### Remarks

The framework keeps track of which pages are "dirty," that is, property pages for which you have called `SetModified( TRUE )`. The Apply Now button will always be enabled if you call `SetModified( TRUE )` for one of the pages. The Apply Now button will be disabled when you call `SetModified( FALSE )` for one of the pages, but only if none of the other pages is "dirty."

### Example

[!code-cpp[NVC_MFCDocView#127](../../mfc/codesnippet/cpp/cpropertypage-class_17.cpp)]

## See also

[MFC Sample CMNCTRL1](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample CMNCTRL2](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample PROPDLG](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[CDialog Class](../../mfc/reference/cdialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CPropertySheet Class](../../mfc/reference/cpropertysheet-class.md)<br/>
[CDialog Class](../../mfc/reference/cdialog-class.md)
