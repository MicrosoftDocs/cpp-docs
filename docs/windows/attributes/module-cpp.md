---
description: "Learn more about: module (C++)"
title: "module  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.module"]
helpviewer_keywords: ["module attributes"]
ms.assetid: 02223b2a-62b5-4262-832f-564b1e11e58e
---
# module (C++)

Defines the library block in the .idl file.

## Syntax

```cpp
[ module (type=dll, name=string, version=1.0, uuid=uuid, lcid=integer, control=boolean, helpstring=string, helpstringdll=string, helpfile=string, helpcontext=integer, helpstringcontext=integer, hidden=boolean, restricted=boolean, custom=string, resource_name=string,) ];
```

### Parameters

*type*<br/>
(Optional) Can be one of the following:

- `dll` Adds functions and classes that allow the resulting DLL to function as a in-process COM server. This is the default value.

- `exe` Adds functions and classes that allow the resulting executable to function as a out of process COM server.

- `service` Adds functions and classes that allow the resulting executable to function as an NT service.

- `unspecified` Disables injection of ATL code related to the module attribute: the injection of ATL Module class, global instance _AtlModule and entry point functions. Does not disable injection of ATL code due to other attributes in the project.

*name*<br/>
(Optional) The name of the library block.

*version*<br/>
(Optional) The version number you want to assign to the library block. The default value is 1.0.

*uuid*<br/>
The unique ID for the library. If you omit this parameter, an ID will be automatically generated for the library. You may need to retrieve the *uuid* of your library block, which you can do by using the identifier **__uuidof(** *libraryname* **)**.

*lcid*<br/>
The localization parameter. See [lcid](/windows/win32/Midl/lcid) for more information.

*control*<br/>
(Optional) Specifies that all coclasses in the library are controls.

*helpstring*<br/>
Specifies the type library.

*helpstringdll*<br/>
(Optional) Sets the name of the .dll file to use to perform a document string lookup. See [helpstringdll](/windows/win32/Midl/helpstringdll) for more information.

*helpfile*<br/>
(Optional) The name of the **Help** file for the type library.

*helpcontext*<br/>
(Optional) The **Help ID** for this type library.

*helpstringcontext*<br/>
(Optional) See [helpstringcontext](helpstringcontext.md) for more information.

*hidden*<br/>
(Optional) Prevents the entire library from being displayed. This usage is intended for use with controls. Hosts need to create a new type library that wraps the control with extended properties. See the [hidden](/windows/win32/Midl/hidden) MIDL attribute for more information.

*restricted*<br/>
(Optional) Members of the library cannot be called arbitrarily. See the [restricted](/windows/win32/Midl/restricted) MIDL attribute for more information.

*custom*<br/>
(Optional) One or more attributes; this is similar to the [custom](custom-cpp.md) attribute. The first parameter to *custom* is the GUID of the attribute. For example:

```
[module(custom={guid,1}, custom={guid1,2})]
```

*resource_name*<br/>
The string resource ID of the .rgs file used to register the APP ID of the DLL, executable, or service. When the module is of type service, this argument is also used to obtain the ID of the string containing the service name.

> [!NOTE]
> Both the .rgs file and the string containing the service name should contain the same numerical value.

## Remarks

Unless you specify the *restricted* parameter to [emitidl](emitidl.md), **module** is required in any program that uses C++ attributes.

A library block will be created if, in addition to the **module** attribute, source code also uses [dispinterface](dispinterface.md), [dual](dual.md), [object](object-cpp.md), or an attribute that implies [coclass](coclass.md).

One library block is allowed in an .idl file. Multiple module entries in source code will be merged, with the most recent parameter values being implemented.

If this attribute is used within a project that uses ATL, the behavior of the attribute changes. In addition to the above behavior, the attribute also inserts a global object (called `_AtlModule`) of the correct type and additional support code. If the attribute is standalone, it inserts a class derived from the correct module type. If the attribute is applied to a class, it adds a base class of the correct module type. The correct type is determined by the value of the *type* parameter:

- `type` = **dll**

   [CAtlDllModuleT](../../atl/reference/catldllmodulet-class.md) is used as the base class and the standard DLL entry points required for a COM server. These entry points are [DllMain](/windows/win32/Dlls/dllmain), [DllRegisterServer](/windows/win32/api/olectl/nf-olectl-dllregisterserver), [DllUnRegisterServer](/windows/win32/api/olectl/nf-olectl-dllunregisterserver), [DllCanUnloadNow](/windows/win32/api/combaseapi/nf-combaseapi-dllcanunloadnow), and [DllGetClassObject](/windows/win32/api/combaseapi/nf-combaseapi-dllgetclassobject).

- `type` = **exe**

   [CAtlExeModuleT](../../atl/reference/catlexemodulet-class.md) is used as the base class and the standard executable entry point [WinMain](/windows/win32/api/winbase/nf-winbase-winmain).

- `type` = **service**

   [CAtlServiceModuleT](../../atl/reference/catlservicemodulet-class.md) is used as the base class and the standard executable entry point [WinMain](/windows/win32/api/winbase/nf-winbase-winmain).

- `type` = **unspecified**

   Disables injection of ATL code related to the module attribute.

## Example

The following code shows how to create a library block in the generated .idl file.

```cpp
// cpp_attr_ref_module1.cpp
// compile with: /LD
[module(name="MyLibrary", version="1.2", helpfile="MyHelpFile")];
```

The following code shows that you can provide your own implementation of a function that would appear in the code that was injected as a result of using **module**. See [/Fx](../../build/reference/fx-merge-injected-code.md) for more information on viewing injected code. In order to override one of the functions inserted by the **module** attribute, make a class that will contain your implementation of the function and make the **module** attribute apply to that class.

```cpp
// cpp_attr_ref_module2.cpp
// compile with: /LD /link /OPT:NOREF
#include <atlbase.h>
#include <atlcom.h>
#include <atlwin.h>
#include <atltypes.h>
#include <atlctl.h>
#include <atlhost.h>
#include <atlplus.h>

// no semicolon after attribute block
[module(dll, name="MyLibrary", version="1.2", helpfile="MyHelpFile")]
// module attribute now applies to this class
class CMyClass {
public:
BOOL WINAPI DllMain(DWORD dwReason, LPVOID lpReserved) {
   // add your own code here
   return __super::DllMain(dwReason, lpReserved);
   }
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[usesgetlasterror](usesgetlasterror.md)<br/>
[library](/windows/win32/Midl/library)<br/>
[helpcontext](helpcontext.md)<br/>
[helpstring](helpstring.md)<br/>
[helpfile](helpfile.md)<br/>
[version](version-cpp.md)
