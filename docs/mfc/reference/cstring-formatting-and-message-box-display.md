---
description: "Learn more about: CString Formatting and Message-Box Display"
title: "CString Formatting and Message-Box Display"
ms.date: "11/04/2016"
helpviewer_keywords: ["CString objects [MFC], formatting and message boxes"]
ms.assetid: d1068cf4-9cc5-4952-b9e7-d612c53cbc28
---
# CString Formatting and Message-Box Display

A number of functions are provided to format and parse `CString` objects. You can use these functions whenever you have to manipulate `CString` objects, but they are particularly useful for formatting strings that will appear in message-box text.

This group of functions also includes a global routine for displaying a message box.

### CString Functions

|Name|Description|
|-|-|
|[AfxExtractSubString](#afxextractsubstring)|Extracts substrings separated by a single character from a given source string.|
|[AfxFormatString1](#afxformatstring1)|Substitutes a given string for the format characters "%1" in a string contained in the string table.|
|[AfxFormatString2](#afxformatstring2)|Substitutes two strings for the format characters "%1" and "%2" in a string contained in the string table.|
|[AfxMessageBox](#afxmessagebox)|Displays a message box.|

### Requirements

  **Header** afxwin.h

## <a name="afxextractsubstring"></a> AfxExtractSubString

This global function can be used to extract a substring from a given source string.

```
BOOL AFXAPI AfxExtractSubString (
    CString& rString,
    LPCTSTR lpszFullString,
    int iSubString,
    TCHAR chSep  = '\n');
```

### Parameters

*rString*<br/>
Reference to a [CString](../../atl-mfc-shared/using-cstring.md) object that will receive an individual substring.

*lpszFullString*<br/>
String containing the full text of the string to extract from.

*iSubString*<br/>
Zero-based index of the substring to extract from *lpszFullString*.

*chSep*<br/>
Separator character used to delimit substrings.

### Return Value

TRUE if the function successfully extracted the substring at the provided index; otherwise, FALSE.

### Remarks

This function is useful for extracting multiple substrings from a source string when a known single character separates each substring. This function searches from the beginning of the *lpszFullString* parameter each time it is called.

This function will return FALSE if either *lpszFullString* is set to NULL or the function reaches the end of *lpszFullString* without finding *iSubString*+1 occurrences of the specified separator character. The *rString* parameter will not be modified from its original value if *lpszFullString* was set to NULL; otherwise, the *rString* parameter is set to the empty string if the substring could not be extracted for the specified index.

### Example

[!code-cpp[NVC_MFC_Utilities#48](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_1.cpp)]

### Requirements

  **Header** afxwin.h

## <a name="afxformatstring1"></a> AfxFormatString1

Substitutes the string pointed to by *lpsz1* for any instances of the characters "%1" in the template string resource identified by *nIDS*.

```cpp
void  AfxFormatString1(
    CString& rString,
    UINT nIDS,
    LPCTSTR lpsz1);
```

### Parameters

*rString*<br/>
A reference to a `CString` object that will contain the resultant string after the substitution is performed.

*nIDS*<br/>
The resource ID of the template string on which the substitution will be performed.

*lpsz1*<br/>
A string that will replace the format characters "%1" in the template string.

### Remarks

The newly formed string is stored in *rString*. For example, if the string in the string table is "File %1 not found", and *lpsz1* is equal to "C:\MYFILE.TXT", then *rString* will contain the string "File C:\MYFILE.TXT not found". This function is useful for formatting strings sent to message boxes and other windows.

If the format characters "%1" appear in the string more than once, multiple substitutions will be made.

### Example

[!code-cpp[NVC_MFC_Utilities#25](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_2.cpp)]

### Requirements

  **Header** afxwin.h

## <a name="afxformatstring2"></a> AfxFormatString2

Substitutes the string pointed to by *lpsz1* for any instances of the characters "%1", and the string pointed to by *lpsz2* for any instances of the characters "%2", in the template string resource identified by *nIDS*.

```cpp
void AfxFormatString2(
    CString& rString,
    UINT nIDS,
    LPCTSTR lpsz1,
    LPCTSTR lpsz2);
```

### Parameters

*rString*<br/>
A reference to the `CString` that will contain the resultant string after the substitution is performed.

*nIDS*<br/>
The string table ID of the template string on which the substitution will be performed.

*lpsz1*<br/>
A string that will replace the format characters "%1" in the template string.

*lpsz2*<br/>
A string that will replace the format characters "%2" in the template string.

### Remarks

The newly formed string is stored in *rString*. For example, if the string in the string table is "File %1 not found in directory %2", *lpsz1* points to "MYFILE.TXT", and *lpsz2* points to "C:\MYDIR", then *rString* will contain the string "File MYFILE.TXT not found in directory C:\MYDIR"

If the format characters "%1" or "%2" appear in the string more than once, multiple substitutions will be made. They do not have to be in numerical order.

### Example

[!code-cpp[NVC_MFC_Utilities#26](../../mfc/codesnippet/cpp/cstring-formatting-and-message-box-display_3.cpp)]

### Requirements

  **Header** afxwin.h

## <a name="afxmessagebox"></a> AfxMessageBox

Displays a message box on the screen.

```
int AfxMessageBox(
    LPCTSTR lpszText,
    UINT nType = MB_OK,
    UINT nIDHelp = 0);

int AFXAPI AfxMessageBox(
    UINT nIDPrompt,
    UINT nType = MB_OK,
    UINT nIDHelp = (UINT) -1);
```

### Parameters

*lpszText*<br/>
Points to a `CString` object or null-terminated string containing the message to be displayed in the message box.

*nType*<br/>
The style of the message box. Apply any of the [message-box styles](../../mfc/reference/styles-used-by-mfc.md#message-box-styles) to the box.

*nIDHelp*<br/>
The Help context ID for the message; 0 indicates the application's default Help context will be used.

*nIDPrompt*<br/>
A unique ID used to reference a string in the string table.

### Return Value

Zero if there is not enough memory to display the message box; otherwise, one of the following values is returned:

- IDABORT The Abort button was selected.

- IDCANCEL The Cancel button was selected.

- IDIGNORE The Ignore button was selected.

- IDNO The No button was selected.

- IDOK The OK button was selected.

- IDRETRY The Retry button was selected.

- IDYES The Yes button was selected.

If a message box has a Cancel button, the IDCANCEL value will be returned if either the ESC key is pressed or the Cancel button is selected. If the message box has no Cancel button, pressing the ESC key has no effect.

The functions [AfxFormatString1](#afxformatstring1) and [AfxFormatString2](#afxformatstring2) can be useful in formatting text that appears in a message box.

### Remarks

The first form of this overloaded function displays a text string pointed to by *lpszText* in the message box and uses *nIDHelp* to describe a Help context. The Help context is used to jump to an associated Help topic when the user presses the Help key (typically F1).

The second form of the function uses the string resource with the ID *nIDPrompt* to display a message in the message box. The associated Help page is found through the value of *nIDHelp*. If the default value of *nIDHelp* is used (-1), the string resource ID, *nIDPrompt*, is used for the Help context. For more information about defining Help contexts, see [Technical Note 28](../../mfc/tn028-context-sensitive-help-support.md).

### Example

[!code-cpp[NVC_MFCWindowing#133](../../mfc/reference/codesnippet/cpp/cstring-formatting-and-message-box-display_4.cpp)]

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)<br/>
[CStringT Class](../../atl-mfc-shared/reference/cstringt-class.md)
