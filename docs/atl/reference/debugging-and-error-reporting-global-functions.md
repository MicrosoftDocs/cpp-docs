---
description: "Learn more about: Debugging and Error Reporting Global Functions"
title: "Debugging and Error Reporting Global Functions"
ms.date: "11/04/2016"
f1_keywords: ["atlcomcli/ATL::AtlHresultFromLastError", "atlcom/ATL::AtlReportError", "atldef/ATL::AtlThrow"]
helpviewer_keywords: ["functions [ATL], error reporting"]
ms.assetid: 11339c02-98cd-428d-b3b9-7deeb155a6a3
---
# Debugging and Error Reporting Global Functions

These functions provide useful debugging and trace facilities.

|Name|Description|
|-|-|
|[AtlHresultFromLastError](debugging-and-error-reporting-global-functions.md#atlhresultfromlasterror)|Returns a `GetLastError` error code in the form of an HRESULT.|
|[AtlHresultFromWin32](debugging-and-error-reporting-global-functions.md#atlhresultfromwin32)|Converts a Win32 error code into an HRESULT.|
|[AtlReportError](debugging-and-error-reporting-global-functions.md#atlreporterror)|Sets up `IErrorInfo` to provide error details to a client.|
|[AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow)|Throws a `CAtlException`.|
|[AtlThrowLastWin32](debugging-and-error-reporting-global-functions.md#atlthrowlastwin32)|Call this function to signal an error based on the result of the Windows function `GetLastError`.|

## <a name="atlhresultfromlasterror"></a> AtlHresultFromLastError

Returns the calling thread's last-error code value in the form of an HRESULT.

```
HRESULT AtlHresultFromLastError();
```

### Remarks

`AtlHresultFromLastError` calls `GetLastError` to obtain the last error and returns the error after converting it to an HRESULT using the HRESULT_FROM_WIN32 macro.

### Requirements

**Header:** atlcomcli.h

## <a name="atlhresultfromwin32"></a> AtlHresultFromWin32

Converts a Win32 error code into an HRESULT.

```
AtlHresultFromWin32(DWORD error);
```

### Parameters

*error*<br/>
The error value to convert.

### Remarks

Converts a Win32 error code into an HRESULT, using the macro HRESULT_FROM_WIN32.

> [!NOTE]
> Instead of using `HRESULT_FROM_WIN32(GetLastError())`, use the function [AtlHresultFromLastError](debugging-and-error-reporting-global-functions.md#atlhresultfromlasterror).

### Requirements

**Header:** atlcomcli.h

## <a name="atlreporterror"></a> AtlReportError

Sets up the `IErrorInfo` interface to provide error information to clients of the object.

```
HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    LPCOLESTR lpszDesc,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    LPCOLESTR lpszDesc,
    DWORD dwHelpID,
    LPCOLESTR lpszHelpFile,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    LPCSTR lpszDesc,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    LPCSTR lpszDesc,
    DWORD dwHelpID,
    LPCSTR lpszHelpFile,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0);

HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    UINT nID,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0,
    HINSTANCE hInst = _AtlBaseModule.GetResourceInstance());

HRESULT WINAPI AtlReportError(
    const CLSID& clsid,
    UINT nID,
    DWORD dwHelpID,
    LPCOLESTR lpszHelpFile,
    const IID& iid = GUID_NULL,
    HRESULT hRes = 0,
    HINSTANCE hInst = _AtlBaseModule.GetResourceInstance());
```

### Parameters

*clsid*<br/>
[in] The CLSID of the object reporting the error.

*lpszDesc*<br/>
[in] The string describing the error. The Unicode versions specify that *lpszDesc* is of type LPCOLESTR; the ANSI version specifies a type of LPCSTR.

*iid*<br/>
[in] The IID of the interface defining the error or GUID_NULL if the error is defined by the operating system.

*hRes*<br/>
[in] The HRESULT you want returned to the caller.

*nID*<br/>
[in] The resource identifier where the error description string is stored. This value should lie between 0x0200 and 0xFFFF, inclusively. In debug builds, an **ASSERT** will result if *nID* does not index a valid string. In release builds, the error description string will be set to "Unknown Error."

*dwHelpID*<br/>
[in] The help context identifier for the error.

*lpszHelpFile*<br/>
[in] The path and name of the help file describing the error.

*hInst*<br/>
[in] The handle to the resource. By default, this parameter is `__AtlBaseModuleModule::GetResourceInstance`, where `__AtlBaseModuleModule` is the global instance of [CAtlBaseModule](../../atl/reference/catlbasemodule-class.md) or a class derived from it.

### Return Value

If the *hRes* parameter is nonzero, returns the value of *hRes*. If *hRes* is zero, then the first four versions of `AtlReportError` return DISP_E_EXCEPTION. The last two versions return the result of the macro **MAKE_HRESULT( 1, FACILITY_ITF,** `nID` **)**.

### Remarks

The string *lpszDesc* is used as the text description of the error. When the client receives the *hRes* you return from `AtlReportError`, the client can access the `IErrorInfo` structure for details about the error.

### Example

[!code-cpp[NVC_ATL_COM#52](../../atl/codesnippet/cpp/debugging-and-error-reporting-global-functions_1.cpp)]

> [!CAUTION]
> Do not use `AtlReportError` in C++ catch handlers. Some overrides of these functions use the ATL string conversion macros internally, which in turn use the `_alloca` function internally. Using `AtlReportError` in a C++ catch handler can cause exceptions in C++ catch handlers.

### Requirements

**Header:** atlcom.h

## <a name="atlthrow"></a> AtlThrow

Call this function to signal an error based on a HRESULT status code.

```
__declspec(noreturn) inline void AtlThrow(HRESULT hr);
```

### Parameters

*hr*<br/>
Standard HRESULT value.

### Remarks

This function is used by ATL and MFC code in the event of an error condition. It can also be called from your own code. The default implementation of this function depends on the definition of the symbol _ATL_NO_EXCEPTIONS and on the type of project, MFC or ATL.

In all cases, this function traces the HRESULT to the debugger.

In Visual Studio 2015 Update 3 and later, this function is attributed __declspec(noreturn) to avoid spurious SAL warnings.

If _ATL_NO_EXCEPTIONS is not defined in an MFC project, this function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or a [COleException](../../mfc/reference/coleexception-class.md) based on the value of the HRESULT.

If _ATL_NO_EXCEPTIONS is not defined in an ATL project, the function throws a [CAtlException](../../atl/reference/catlexception-class.md).

If _ATL_NO_EXCEPTIONS is defined, the function causes an assertion failure instead of throwing an exception.

For ATL projects, it is possible to provide your own implementation of this function to be used by ATL in the event of a failure. To do this, define your own function with the same signature as `AtlThrow` and #define `AtlThrow` to be the name of your function. This must be done before including atlexcept.h (which means that it must be done prior to including any ATL headers since atlbase.h includes atlexcept.h). Attribute your function `__declspec(noreturn)` to avoid spurious SAL warnings.

### Example

[!code-cpp[NVC_ATL_Windowing#95](../../atl/codesnippet/cpp/debugging-and-error-reporting-global-functions_2.h)]

### Requirements

**Header:** atldef.h

## <a name="atlthrowlastwin32"></a> AtlThrowLastWin32

Call this function to signal an error based on the result of the Windows function `GetLastError`.

```
inline void AtlThrowLastWin32();
```

### Remarks

This function traces the result of `GetLastError` to the debugger.

If _ATL_NO_EXCEPTIONS is not defined in an MFC project, this function throws a [CMemoryException](../../mfc/reference/cmemoryexception-class.md) or a [COleException](../../mfc/reference/coleexception-class.md) based on the value returned by `GetLastError`.

If _ATL_NO_EXCEPTIONS is not defined in an ATL project, the function throws a [CAtlException](../../atl/reference/catlexception-class.md).

If _ATL_NO_EXCEPTIONS is defined, the function causes an assertion failure instead of throwing an exception.

### Requirements

**Header:** atldef.h

## See also

[Functions](../../atl/reference/atl-functions.md)<br/>
[Debugging and Error Reporting Macros](../../atl/reference/debugging-and-error-reporting-macros.md)
