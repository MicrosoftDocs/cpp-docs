---
description: "Learn more about: CMFCMaskedEdit Class"
title: "CMFCMaskedEdit Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCMaskedEdit", "AFXMASKEDEDIT/CMFCMaskedEdit", "AFXMASKEDEDIT/CMFCMaskedEdit::DisableMask", "AFXMASKEDEDIT/CMFCMaskedEdit::EnableGetMaskedCharsOnly", "AFXMASKEDEDIT/CMFCMaskedEdit::EnableMask", "AFXMASKEDEDIT/CMFCMaskedEdit::EnableSelectByGroup", "AFXMASKEDEDIT/CMFCMaskedEdit::EnableSetMaskedCharsOnly", "AFXMASKEDEDIT/CMFCMaskedEdit::GetWindowText", "AFXMASKEDEDIT/CMFCMaskedEdit::SetValidChars", "AFXMASKEDEDIT/CMFCMaskedEdit::SetWindowText", "AFXMASKEDEDIT/CMFCMaskedEdit::IsMaskedChar"]
helpviewer_keywords: ["CMFCMaskedEdit [MFC], DisableMask", "CMFCMaskedEdit [MFC], EnableGetMaskedCharsOnly", "CMFCMaskedEdit [MFC], EnableMask", "CMFCMaskedEdit [MFC], EnableSelectByGroup", "CMFCMaskedEdit [MFC], EnableSetMaskedCharsOnly", "CMFCMaskedEdit [MFC], GetWindowText", "CMFCMaskedEdit [MFC], SetValidChars", "CMFCMaskedEdit [MFC], SetWindowText", "CMFCMaskedEdit [MFC], IsMaskedChar"]
ms.assetid: 13b1a645-2d5d-4c37-8599-16d5003f23a5
---
# CMFCMaskedEdit Class

The `CMFCMaskedEdit` class supports a masked edit control, which validates user input against a mask and displays the validated results according to a template.

## Syntax

```
class CMFCMaskedEdit : public CEdit
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCMaskedEdit::CMFCMaskedEdit`|Default constructor.|
|`CMFCMaskedEdit::~CMFCMaskedEdit`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCMaskedEdit::DisableMask](#disablemask)|Disables validating user input.|
|[CMFCMaskedEdit::EnableGetMaskedCharsOnly](#enablegetmaskedcharsonly)|Specifies whether the `GetWindowText` method retrieves only masked characters.|
|[CMFCMaskedEdit::EnableMask](#enablemask)|Initializes the masked edit control.|
|[CMFCMaskedEdit::EnableSelectByGroup](#enableselectbygroup)|Specifies whether the masked edit control selects particular groups of user input, or all user input.|
|[CMFCMaskedEdit::EnableSetMaskedCharsOnly](#enablesetmaskedcharsonly)|Specifies whether the text is validated against only masked characters, or against the whole mask.|
|`CMFCMaskedEdit::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCMaskedEdit::GetWindowText](#getwindowtext)|Retrieves validated text from the masked edit control.|
|[CMFCMaskedEdit::SetValidChars](#setvalidchars)|Specifies a string of valid characters that the user can enter.|
|[CMFCMaskedEdit::SetWindowText](#setwindowtext)|Displays a prompt in the masked edit control.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCMaskedEdit::IsMaskedChar](#ismaskedchar)|Called by the framework to validate the specified character against the corresponding mask character.|

## Remarks

Perform the following steps to use the `CMFCMaskedEdit` control in your application:

1. Embed a `CMFCMaskedEdit` object into your window class.

2. Call the [CMFCMaskedEdit::EnableMask](#enablemask) method to specify the mask.

3. Call the [CMFCMaskedEdit::SetValidChars](#setvalidchars) method to specify the list of valid characters.

4. Call the [CMFCMaskedEdit::SetWindowText](#setwindowtext) method to specify the default text for the masked edit control.

5. Call the [CMFCMaskedEdit::GetWindowText](#getwindowtext) method to retrieve the validated text.

If you do not call one or more methods to initialize the mask, valid characters, and default text, the masked edit control behaves just as the standard edit control behaves.

## Example

The following example demonstrates how to set up a mask (for example a phone number) by using the `EnableMask` method to create the mask for the masked edit control, the `SetValidChars` method to specify a string of valid characters that the user can enter, and `SetWindowText` method to display a prompt in the masked edit control. This example is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#11](../../mfc/reference/codesnippet/cpp/cmfcmaskededit-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#12](../../mfc/reference/codesnippet/cpp/cmfcmaskededit-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

[CMFCMaskedEdit](../../mfc/reference/cmfcmaskededit-class.md)

## Requirements

**Header:** afxmaskededit.h

## <a name="disablemask"></a> CMFCMaskedEdit::DisableMask

Disables validating user input.

```cpp
void DisableMask();
```

### Remarks

If user input validation is disabled, the masked edit control behaves like the standard edit control.

## <a name="enablegetmaskedcharsonly"></a> CMFCMaskedEdit::EnableGetMaskedCharsOnly

Specifies whether the `GetWindowText` method retrieves only masked characters.

```cpp
void EnableGetMaskedCharsOnly(BOOL bEnable=TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to specify that the [CMFCMaskedEdit::GetWindowText](#getwindowtext) method retrieve only masked characters; FALSE to specify that the method retrieve the whole text. The default value is TRUE.

### Remarks

Use this method to enable retrieving masked characters. Then create a masked edit control that corresponds to the telephone number, such as (425) 555-0187. If you call the `GetWindowText` method, it returns "4255550187". If you disable retrieving masked characters, the `GetWindowText` method returns the text that is displayed in the edit control, for example "(425) 555-0187".

## <a name="enablemask"></a> CMFCMaskedEdit::EnableMask

Initializes the masked edit control.

```cpp
void EnableMask(
    LPCTSTR lpszMask,
    LPCTSTR lpszInputTemplate,
    TCHAR chMaskInputTemplate=_T('_'),
    LPCTSTR lpszValid=NULL);
```

### Parameters

*lpszMask*<br/>
[in] A mask string that specifies the type of character that can appear at each position in the user input. The length of the *lpszInputTemplate* and *lpszMask* parameter strings must be the same. See the Remarks section for more detail about mask characters.

*lpszInputTemplate*<br/>
[in] A mask template string that specifies the literal characters that can appear at each position in the user input. Use the underscore character ('_') as a character placeholder. The length of the *lpszInputTemplate* and *lpszMask* parameter strings must be the same.

*chMaskInputTemplate*<br/>
[in] A default character that the framework substitutes for each invalid character in the user input. The default value of this parameter is underscore ('_').

*lpszValid*<br/>
[in] A string that contains a set of valid characters. NULL indicates that all characters are valid. The default value of this parameter is NULL.

### Remarks

Use this method to create the mask for the masked edit control. Derive a class from the `CMFCMaskedEdit` class and override the [CMFCMaskedEdit::IsMaskedChar](#ismaskedchar) method to use your own code for custom mask processing.

The following table list the default mask characters:

|Mask Character|Definition|
|--------------------|----------------|
|D|Digit.|
|d|Digit or space.|
|+|Plus ('+'), minus ('-'), or space.|
|C|Alphabetic character.|
|c|Alphabetic character or space.|
|A|Alphanumeric character.|
|a|Alphanumeric character or space.|
|*|A printable character.|

## <a name="enableselectbygroup"></a> CMFCMaskedEdit::EnableSelectByGroup

Specifies whether the masked edit control allows the user to select particular groups input, or all input.

```cpp
void EnableSelectByGroup(BOOL bEnable=TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to select only groups; FALSE to select the whole text. The default value is TRUE.

### Remarks

Use this function to specify whether the masked edit control allows a user to select by group or the whole text.

By default, selection by group is enabled. In this case the user can select only continuous groups of valid characters.

For example, you might use the following masked edit control to validate a telephone number:

```cpp
m_wndMaskEdit.EnableMask(
    _T(" ddd  ddd dddd"),  // Mask string
    _T("(___) ___-____"),  // Template string
    _T(' '));              // Default char

m_wndMaskEdit.SetValidChars(NULL); // All characters are valid.

m_wndMaskEdit.SetWindowText(_T("(425) 555-0187")); // Prompt
```

If selection by group is enabled, the user can retrieve only the "425", "555", or "0187" string groups. If group selection is disabled the user can retrieve the whole text of the telephone number: "(425) 555-0187".

## <a name="enablesetmaskedcharsonly"></a> CMFCMaskedEdit::EnableSetMaskedCharsOnly

Specifies whether the text is validated against only the masked characters, or against the whole mask.

```cpp
void EnableSetMaskedCharsOnly(BOOL bEnable=TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to validate the user input against only masked characters; FALSE to validate against the whole mask. The default value is TRUE.

## <a name="getwindowtext"></a> CMFCMaskedEdit::GetWindowText

Retrieves validated text from the masked edit control.

```
int GetWindowText(
    LPTSTR lpszStringBuf,
    int nMaxCount) const;

void GetWindowText(CString& rstrString) const;
```

### Parameters

*lpszStringBuf*<br/>
[out] A pointer to a buffer that receives the text from the edit control.

*nMaxCount*<br/>
[in] The maximum number of characters to receive.

*rstrString*<br/>
[out] A reference to the string object that receives the text from the edit control.

### Return Value

The first method overload returns the number of bytes of the string that is copied to the *lpszStringBuf* parameter buffer; 0 if the masked edit control has no text.

### Remarks

This method copies the text from the masked edit control to the *lpszStringBuf* buffer or the *rstrString* string.

This method redefines [CWnd::GetWindowText](../../mfc/reference/cwnd-class.md#getwindowtext).

## <a name="ismaskedchar"></a> CMFCMaskedEdit::IsMaskedChar

Called by the framework to validate the specified character against the corresponding mask character.

```
virtual BOOL IsMaskedChar(
    TCHAR chChar,
    TCHAR chMaskChar) const;
```

### Parameters

*chChar*<br/>
[in] The character to be validated.

*chMaskChar*<br/>
[in] The corresponding character from the mask string.

### Return Value

TRUE if the *chChar* parameter is the type of character permitted by the *chMaskChar* parameter; otherwise, FALSE.

### Remarks

Override this method to validate input characters on your own. For more information about mask characters, see the [CMFCMaskedEdit::EnableMask](#enablemask) method.

## <a name="setvalidchars"></a> CMFCMaskedEdit::SetValidChars

Specifies a string of valid characters that the user can enter.

```cpp
void SetValidChars(LPCTSTR lpszValid=NULL);
```

### Parameters

*lpszValid*<br/>
[in] A string that contains the set of valid input characters. NULL means that all characters are valid. The default value of this parameter is NULL.

### Remarks

Use this method to define a list of valid characters. If an input character is not in this list, masked edit control will not accept it.

The following code example accepts only hexadecimal numbers.

```cpp
//Mask: 0xFFFF
m_wndMaskEdit.EnableMask(
    _T(" AAAA"),                // The mask string.
    _T("0x____"),               // The literal template string.
    _T('_'));                   // The default character that
                                // replaces the backspace character.
// Valid string characters
m_wndMaskEdit.SetValidChars(_T("1234567890ABCDEFabcdef"));m_wndMaskEdit.SetWindowText(_T("0x01AF"));
```

## <a name="setwindowtext"></a> CMFCMaskedEdit::SetWindowText

Displays a prompt in the masked edit control.

```cpp
void SetWindowText(LPCTSTR lpszString);
```

### Parameters

*lpszString*<br/>
[in] Points to a null-terminated string that will be used as a prompt.

### Remarks

This method sets the control text.

This method redefines [CWnd::SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)
