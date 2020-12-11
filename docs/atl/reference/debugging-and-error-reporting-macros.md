---
description: "Learn more about: Debugging and Error Reporting Macros"
title: "Debugging and Error Reporting Macros"
ms.date: "05/06/2019"
f1_keywords: ["atldef/ATL::_ATL_DEBUG_INTERFACES", "atldef/ATL::_ATL_DEBUG_QI", "atldef/ATL::ATLASSERT", "afx/ATL::ATLENSURE", "atltrace/ATL::ATLTRACENOTIMPL", "atltrace/ATL::ATLTRACE"]
helpviewer_keywords: ["macros, error reporting"]
ms.assetid: 4da9b87f-ec5c-4a32-ab93-637780909b9d
---
# Debugging and Error Reporting Macros

These macros provide useful debugging and trace facilities.

|Name|Description|
|-|-|
|[_ATL_DEBUG_INTERFACES](#_atl_debug_interfaces)|Writes, to the output window, any interface leaks that are detected when `_Module.Term` is called.|
|[_ATL_DEBUG_QI](#_atl_debug_qi)|Writes all calls to `QueryInterface` to the output window.|
|[ATLASSERT](#atlassert)|Performs the same functionality as the [_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macro found in the C run-time library.|
|[ATLENSURE](#atlensure)|Performs parameters validation. Call `AtlThrow` if needed|
|[ATLTRACENOTIMPL](#atltracenotimpl)|Sends a message to the dump device that the specified function is not implemented.|
|[ATLTRACE](#atltrace)|Reports warnings to an output device, such as the debugger window, according to the indicated flags and levels. Included for backward compatibility.|
|[ATLTRACE2](#atltrace2)|Reports warnings to an output device, such as the debugger window, according to the indicated flags and levels.|

## <a name="_atl_debug_interfaces"></a> _ATL_DEBUG_INTERFACES

Define this macro before including any ATL header files to trace all `AddRef` and `Release` calls on your components' interfaces to the output window.

```
#define _ATL_DEBUG_INTERFACES
```

### Remarks

The trace output will appear as shown below:

`ATL: QIThunk - 2008         AddRef  :   Object = 0x00d81ba0   Refcount = 1   CBug - IBug`

The first part of each trace will always be `ATL: QIThunk`. Next is a value identifying the particular *interface thunk* being used. An interface thunk is an object used to maintain a reference count and provide the tracing capability used here. A new interface thunk is created on every call to `QueryInterface` except for requests for the `IUnknown` interface (in this case, the same thunk is returned every time to comply with COM's identity rules).

Next you'll see `AddRef` or `Release` indicating which method was called. Following that, you'll see a value identifying the object whose interface reference count was changed. The value traced is the **`this`** pointer of the object.

The reference count that is traced is the reference count on that thunk after `AddRef` or `Release` was called. Note that this reference count may not match the reference count for the object. Each thunk maintains its own reference count to help you fully comply with COM's reference-counting rules.

The final piece of information traced is the name of the object and the interface being affected by the `AddRef` or `Release` call.

Any interface leaks that are detected when the server shuts down and `_Module.Term` is called will be logged like this:

`ATL: QIThunk - 2005         LEAK    :   Object = 0x00d81ca0   Refcount = 1   MaxRefCount = 1   CBug - IBug`

The information provided here maps directly to the information provided in the previous trace statements, so you can examine the reference counts throughout the whole lifetime of an interface thunk. In addition, you get an indication of the maximum reference count on that interface thunk.

> [!NOTE]
> _ATL_DEBUG_INTERFACES can be used in retail builds.

## <a name="_atl_debug_qi"></a> _ATL_DEBUG_QI

Writes all calls to `QueryInterface` to the output window.

```
#define _ATL_DEBUG_QI
```

### Remarks

If a call to `QueryInterface` failed, the output window will display:

*interface name* - `failed`

## <a name="atlassert"></a> ATLASSERT

The ATLASSERT macro performs the same functionality as the [_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macro found in the C run-time library.

```
ATLASSERT(booleanExpression);
```

### Parameters

*booleanExpression*<br/>
Expression (including pointers) that evaluates to nonzero or 0.

### Remarks

In debug builds, ATLASSERT evaluates *booleanExpression* and generates a debug report when the result is false.

### Requirements

**Header:** atldef.h

## <a name="atlensure"></a> ATLENSURE

This macro is used to validate parameters passed to a function.

```
ATLENSURE(booleanExpression);
ATLENSURE_THROW(booleanExpression, hr);
```

### Parameters

*booleanExpression*<br/>
Specifies a boolean expression to be tested.

*hr*<br/>
Specifies an error code to return.

### Remarks

These macros provide a mechanism to detect and notify the user of incorrect parameter usage.

The macro calls ATLASSERT and if the condition fails calls `AtlThrow`.

In the ATLENSURE case, `AtlThrow` is called with E_FAIL.

In the ATLENSURE_THROW case, `AtlThrow` is called with the specified HRESULT.

The difference between ATLENSURE and ATLASSERT is that ATLENSURE throws an exception in Release builds as well as in Debug builds.

### Example

[!code-cpp[NVC_ATL_Utilities#108](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_1.cpp)]

### Requirements

**Header:** afx.h

## <a name="atltracenotimpl"></a> ATLTRACENOTIMPL

In debug builds of ATL, sends the string " *funcname* is not implemented" to the dump device and returns E_NOTIMPL.

```
ATLTRACENOTIMPL(funcname);
```

### Parameters

*funcname*<br/>
[in] A string containing the name of the function that is not implemented.

### Remarks

In release builds, simply returns E_NOTIMPL.

### Example

[!code-cpp[NVC_ATL_Utilities#127](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_2.cpp)]

### Requirements

**Header:** atltrace.h

## <a name="atltrace"></a> ATLTRACE

Reports warnings to an output device, such as the debugger window, according to the indicated flags and levels. Included for backward compatibility.

```
ATLTRACE(exp);

ATLTRACE(
    DWORD category,
    UINT  level,
    LPCSTR lpszFormat, ...);
```

### Parameters

*exp*<br/>
[in] The string and variables to send to the output window or any application that traps these messages.

*category*<br/>
[in] Type of event or method on which to report. See the Remarks for a list of categories.

*level*<br/>
[in] The level of tracing to report. See the Remarks for details.

*lpszFormat*<br/>
[in] The formatted string to send to the dump device.

### Remarks

See [ATLTRACE2](#atltrace2) for a description of ATLTRACE. ATLTRACE and ATLTRACE2 have the same behavior, ATLTRACE is included for backward compatibility.

## <a name="atltrace2"></a> ATLTRACE2

Reports warnings to an output device, such as the debugger window, according to the indicated flags and levels.

```
ATLTRACE2(exp);

ATLTRACE2(
    DWORD category,
    UINT level,
    LPCSTR lpszFormat,  ...);
```

### Parameters

*exp*<br/>
[in] The string to send to the output window or any application that traps these messages.

*category*<br/>
[in] Type of event or method on which to report. See the Remarks for a list of categories.

*level*<br/>
[in] The level of tracing to report. See the Remarks for details.

*lpszFormat*<br/>
[in] The `printf`-style format string to use to create a string to send to the dump device.

### Remarks

The short form of ATLTRACE2 writes a string to the debugger's output window. The second form of ATLTRACE2 also writes output to the debugger's output window, but is subject to the settings of the ATL/MFC Trace Tool (see [ATLTraceTool Sample](../../overview/visual-cpp-samples.md)). For example, if you set *level* to 4 and the ATL/MFC Trace Tool to level 0, you will not see the message. *level* can be 0, 1, 2, 3, or 4. The default, 0, reports only the most serious problems.

The *category* parameter lists the trace flags to set. These flags correspond to the types of methods for which you want to report. The tables below list the valid trace flags you can use for the *category* parameter.

### ATL Trace Flags

|ATL Category|Description|
|------------------|-----------------|
|`atlTraceGeneral`|Reports on all ATL applications. The default.|
|`atlTraceCOM`|Reports on COM methods.|
|`atlTraceQI`|Reports on QueryInterface calls.|
|`atlTraceRegistrar`|Reports on the registration of objects.|
|`atlTraceRefcount`|Reports on changing reference count.|
|`atlTraceWindowing`|Reports on windows methods; for example, reports an invalid message map ID.|
|`atlTraceControls`|Reports on controls; for example, reports when a control or its window is destroyed.|
|`atlTraceHosting`|Reports hosting messages; for example, reports when a client in a container is activated.|
|`atlTraceDBClient`|Reports on OLE DB Consumer Template; for example, when a call to GetData fails, the output can contain the HRESULT.|
|`atlTraceDBProvider`|Reports on OLE DB Provider Template; for example, reports if the creation of a column failed.|
|`atlTraceSnapin`|Reports for MMC SnapIn application.|
|`atlTraceNotImpl`|Reports that the indicated function is not implemented.|
|`atlTraceAllocation`|Reports messages printed by the memory debugging tools in atldbgmem.h.|

### MFC Trace Flags

|MFC Category|Description|
|------------------|-----------------|
|`traceAppMsg`|General purpose, MFC messages. Always recommended.|
|`traceDumpContext`|Messages from [CDumpContext](../../mfc/reference/cdumpcontext-class.md).|
|`traceWinMsg`|Messages from MFC's message handling code.|
|`traceMemory`|Messages from MFC's memory management code.|
|`traceCmdRouting`|Messages from MFC's Windows command routing code.|
|`traceHtml`|Messages from MFC's DHTML dialog support.|
|`traceSocket`|Messages from MFC's socket support.|
|`traceOle`|Messages from MFC's OLE support.|
|`traceDatabase`|Messages from MFC's database support.|
|`traceInternet`|Messages from MFC's Internet support.|

To declare a custom trace category, declare a global instance of the `CTraceCategory` class as follows:

[!code-cpp[NVC_ATL_Utilities#109](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_3.cpp)]

The category name, MY_CATEGORY in this example, is the name you specify to the *category* parameter. The first parameter is the category name that will appear in the ATL/MFC Trace Tool. The second parameter is the default trace level. This parameter is optional, and the default trace level is 0.

To use a user-defined category:

[!code-cpp[NVC_ATL_Utilities#110](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_4.cpp)]

To specify that you want to filter the trace messages, insert definitions for these macros into Stdafx.h before the `#include <atlbase.h>` statement.

Alternatively, you can set the filter in the preprocessor directives in the **Property Pages** dialog box. Click the **Preprocessor** tab and then insert the global into the **Preprocessor Definitions** edit box.

Atlbase.h contains default definitions of the ATLTRACE2 macros and these definitions will be used if you don't define these symbols before atlbase.h is processed.

In release builds, ATLTRACE2 compiles to `(void) 0`.

ATLTRACE2 limits the contents of the string to be sent to the dump device to no more than 1023 characters, after formatting.

ATLTRACE and ATLTRACE2 have the same behavior, ATLTRACE is included for backward compatibility.

### Example

[!code-cpp[NVC_ATL_Utilities#111](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_5.cpp)]

## See also

[Macros](../../atl/reference/atl-macros.md)<br/>
[Debugging and Error Reporting Global Functions](../../atl/reference/debugging-and-error-reporting-global-functions.md)
