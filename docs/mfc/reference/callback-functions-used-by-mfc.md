---
description: "Learn more about: Callback Functions Used by MFC"
title: "Callback Functions Used by MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["callback functions [MFC], MFC", "MFC, callback functions", "functions [MFC], callback", "callback functions [MFC]"]
ms.assetid: b2a6857c-fdd3-45ec-8fd8-2e71fac77582
---
# Callback Functions Used by MFC

Three callback functions appear in the Microsoft Foundation Class Library. These callback functions are passed to [CDC::EnumObjects](../../mfc/reference/cdc-class.md#enumobjects), [CDC::GrayString](../../mfc/reference/cdc-class.md#graystring), and [CDC::SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc). Note that all callback functions must trap MFC exceptions before returning to Windows, since exceptions cannot be thrown across callback boundaries. For more information about exceptions, see the article [Exceptions](../../mfc/exception-handling-in-mfc.md).

[Callback Function for CDC::EnumObjects](#enum_objects)\
[Callback Function for CDC::GrayString](#graystring)\
[Callback Function for CDC::SetAbortProc](#setabortproc)

## Requirements

**Header:** afxwin.h

## <a name="enum_objects"></a> Callback Function for CDC::EnumObjects

The *ObjectFunc* name is a placeholder for the application-supplied function name.

### Syntax

```
int CALLBACK EXPORT ObjectFunc(
    LPSTR lpszLogObject,
    LPSTR* lpData);
```

### Parameters

*lpszLogObject*<br/>
Points to a [LOGPEN](/windows/win32/api/Wingdi/ns-wingdi-logpen) or [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) data structure that contains information about the logical attributes of the object.

*lpData*<br/>
Points to the application-supplied data passed to the `EnumObjects` function.

### Return Value

The callback function returns an **`int`**. The value of this return is user-defined. If the callback function returns 0, `EnumObjects` stops enumeration early.

### Remarks

The actual name must be exported.

## <a name="graystring"></a> Callback Function for CDC::GrayString

*OutputFunc* is a placeholder for the application-supplied callback function name.

### Syntax

```
BOOL CALLBACK EXPORT OutputFunc(
    HDC hDC,
    LPARAM lpData,
    int nCount);
```

### Parameters

*hDC*<br/>
Identifies a memory device context with a bitmap of at least the width and height specified by `nWidth` and `nHeight` to `GrayString`.

*lpData*<br/>
Points to the character string to be drawn.

*nCount*<br/>
Specifies the number of characters to output.

### Return Value

The callback function's return value must be TRUE to indicate success; otherwise it is FALSE.

### Remarks

The callback function (*OutputFunc*) must draw an image relative to the coordinates (0,0) rather than (*x*, *y*).

## <a name="setabortproc"></a> Callback Function for CDC::SetAbortProc

The name *AbortFunc* is a placeholder for the application-supplied function name.

### Syntax

```
BOOL CALLBACK EXPORT AbortFunc(
    HDC hPr,
    int code);
```

### Parameters

*hPr*<br/>
Identifies the device context.

*code*<br/>
Specifies whether an error has occurred. It is 0 if no error has occurred. It is SP_OUTOFDISK if the Print Manager is currently out of disk space and more disk space will become available if the application waits. If *code* is SP_OUTOFDISK, the application does not have to abort the print job. If it does not, it must yield to the Print Manager by calling the `PeekMessage` or `GetMessage` Windows function.

### Return Value

The return value of the abort-handler function is nonzero if the print job is to continue, and 0 if it is canceled.

### Remarks

The actual name must be exported as described in the Remarks section of [CDC::SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc).

## See also

[Structures, Styles, Callbacks, and Message Maps](structures-styles-callbacks-and-message-maps.md)<br/>
[CDC::EnumObjects](../../mfc/reference/cdc-class.md#enumobjects)<br/>
[CDC::SetAbortProc](../../mfc/reference/cdc-class.md#setabortproc)<br/>
[CDC::GrayString](../../mfc/reference/cdc-class.md#graystring)
