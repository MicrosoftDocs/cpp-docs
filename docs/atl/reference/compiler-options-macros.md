---
description: "Learn more about: Compiler Options Macros"
title: "Compiler Options Macros"
ms.date: "08/19/2019"
f1_keywords: ["_ATL_ALL_WARNINGS", "_ATL_APARTMENT_THREADED", "_ATL_CSTRING_EXPLICIT_CONSTRUCTORS ", "_ATL_ENABLE_PTM_WARNING", "_ATL_FREE_THREADED", "_ATL_MULTI_THREADED", "_ATL_NO_AUTOMATIC_NAMESPACE", "_ATL_NO_COM_SUPPORT", "ATL_NO_VTABLE", "ATL_NOINLINE", "_ATL_SINGLE_THREADED"]
helpviewer_keywords: ["compiler options, macros"]
ms.assetid: a869adc6-b3de-4299-b040-9ae20b45f82c
---
# Compiler Options Macros

These macros control specific compiler features.

|Macro|Description|
|-|-|
|[_ATL_ALL_WARNINGS](#_atl_all_warnings)|A symbol that enables errors in projects converted from previous versions of ATL.|
|[_ATL_APARTMENT_THREADED](#_atl_apartment_threaded)|Define if one or more of your objects use apartment threading.|
|[_ATL_CSTRING_EXPLICIT_CONSTRUCTORS](#_atl_cstring_explicit_constructors)|Makes certain `CString` constructors explicit, preventing any unintentional conversions.|
|[_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning)|Define this macro in order to use C++ standard compliant syntax, which generates the C4867 compiler error when a non-standard syntax is used to initialize a pointer to a member function.|
|[_ATL_FREE_THREADED](#_atl_free_threaded)|Define if one or more of your objects use free or neutral threading.|
|[_ATL_MULTI_THREADED](#_atl_multi_threaded)|A symbol that indicates the project will have objects that are marked as Both, Free or Neutral. The macro [_ATL_FREE_THREADED](#_atl_free_threaded) should be used instead.|
|[_ATL_NO_AUTOMATIC_NAMESPACE](#_atl_no_automatic_namespace)|A symbol that prevents the default use of namespace as ATL.|
|[_ATL_NO_COM_SUPPORT](#_atl_no_com_support)|A symbol that prevents COM-related code from being compiled with your project.|
|[ATL_NO_VTABLE](#atl_no_vtable)|A symbol that prevents the vtable pointer from being initialized in the class's constructor and destructor.|
|[ATL_NOINLINE](#atl_noinline)|A symbol that indicates a function should not be inlined.|
|[_ATL_SINGLE_THREADED](#_atl_single_threaded)|Define if all of your objects use the single threading model.|

## <a name="_atl_all_warnings"></a> _ATL_ALL_WARNINGS

A symbol that enables errors in projects converted from previous versions of ATL.

```
#define _ATL_ALL_WARNINGS
```

### Remarks

Before Visual C++ .NET 2002, ATL disabled many warnings and left them disabled so that they never showed up in user code. Specifically:

- C4127 conditional expression is constant

- C4786 'identifier' : identifier was truncated to 'number' characters in the debug information

- C4201 nonstandard extension used : nameless struct/union

- C4103 'filename' : used #pragma pack to change alignment

- C4291 'declaration' : no matching operator delete found; memory will not be freed if initialization throws an exception

- C4268 'identifier' : 'const' static/global data initialized with compiler-generated default constructor fills the object with zeros

- C4702 unreachable code

In projects converted from previous versions, these warnings are still disabled by the libraries headers.

By adding the following line to the *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier) file before including libraries headers, this behavior can be changed.

[!code-cpp[NVC_ATL_Utilities#97](../../atl/codesnippet/cpp/compiler-options-macros_1.h)]

If this `#define` is added, the ATL headers are careful to preserve the state of these warnings so that they are not disabled globally (or if the user explicitly disables individual warnings, not to enable them).

New projects have this `#define` set in *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier) by default.

## <a name="_atl_apartment_threaded"></a> _ATL_APARTMENT_THREADED

Define if one or more of your objects use apartment threading.

```
_ATL_APARTMENT_THREADED
```

### Remarks

Specifies apartment threading. See [Specifying the Project's Threading Model](../../atl/specifying-the-threading-model-for-a-project-atl.md) for other threading options, and [Options, ATL Simple Object Wizard](../../atl/reference/options-atl-simple-object-wizard.md) for a description of the threading models available for an ATL object.

## <a name="_atl_cstring_explicit_constructors"></a> _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

Makes certain `CString` constructors explicit, preventing any unintentional conversions.

```
_ATL_CSTRING_EXPLICIT_CONSTRUCTORS
```

### Remarks

When this constructor is defined, all CString constructors that take a single parameter are compiled with the explicit keyword, which prevents implicit conversions of input arguments. This means, for example, that when _UNICODE is defined, if you attempt to use a char* string as a CString constructor argument, a compiler error will result. Use this macro in situations where you need to prevent implicit conversions between narrow and wide string types.

By using the _T macro on all constructor string arguments, you can define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS and avoid compile errors regardless of whether _UNICODE is defined.

## <a name="_atl_enable_ptm_warning"></a> _ATL_ENABLE_PTM_WARNING

Define this macro in order to force the use of ANSI C++ standard-compliant syntax for pointer to member functions. Using this macro will cause the C4867 compiler error to be generated when non-standard syntax is used to initialize a pointer to a member function.

```
#define _ATL_ENABLE_PTM_WARNING
```

### Remarks

The ATL and MFC libraries have been changed to match the Microsoft C++ compiler's improved standard C++ compliance. According to the ANSI C++ standard, the syntax of a pointer to a class member function should be `&CMyClass::MyFunc`.

When [_ATL_ENABLE_PTM_WARNING](#_atl_enable_ptm_warning) is not defined (the default case), ATL/MFC disables the C4867 error in macro maps (notably message maps) so that code that was created in earlier versions can continue to build as before. If you define **_ATL_ENABLE_PTM_WARNING**, your code should be C++ standard compliant.

However, the non-standard form has been deprecated. You need to move existing code to C++ standard compliant syntax. For example, the following code:

[!code-cpp[NVC_MFCListView#14](../../atl/reference/codesnippet/cpp/compiler-options-macros_2.cpp)]

Should be changed to:

[!code-cpp[NVC_MFCListView#11](../../atl/reference/codesnippet/cpp/compiler-options-macros_3.cpp)]

For map macros, add the ampersand '&' character. You shouldn't add the character again in your code.

## <a name="_atl_free_threaded"></a> _ATL_FREE_THREADED

Define if one or more of your objects use free or neutral threading.

```
_ATL_FREE_THREADED
```

### Remarks

Specifies free threading. Free threading is equivalent to a multithread apartment model. See [Specifying the Project's Threading Model](../../atl/specifying-the-threading-model-for-a-project-atl.md) for other threading options, and [Options, ATL Simple Object Wizard](../../atl/reference/options-atl-simple-object-wizard.md) for a description of the threading models available for an ATL object.

## <a name="_atl_multi_threaded"></a> _ATL_MULTI_THREADED

A symbol that indicates the project will have objects that are marked as Both, Free or Neutral.

```
_ATL_MULTI_THREADED
```

### Remarks

If this symbol is defined, ATL will pull in code that will correctly synchronize access to global data. New code should use the equivalent macro [_ATL_FREE_THREADED](#_atl_free_threaded) instead.

## <a name="_atl_no_automatic_namespace"></a> _ATL_NO_AUTOMATIC_NAMESPACE

A symbol that prevents the default use of namespace as ATL.

```
_ATL_NO_AUTOMATIC_NAMESPACE
```

### Remarks

If this symbol is not defined, including atlbase.h will perform **using namespace ATL** by default, which may lead to naming conflicts. To prevent this, define this symbol.

## <a name="_atl_no_com_support"></a> _ATL_NO_COM_SUPPORT

A symbol that prevents COM-related code from being compiled with your project.

```
_ATL_NO_COM_SUPPORT
```

## <a name="atl_no_vtable"></a> ATL_NO_VTABLE

A symbol that prevents the vtable pointer from being initialized in the class's constructor and destructor.

```
ATL_NO_VTABLE
```

### Remarks

If the vtable pointer is prevented from being initialized in the class's constructor and destructor, the linker can eliminate the vtable and all of the functions to which it points. Expands to **`__declspec(novtable)`**.

### Example

[!code-cpp[NVC_ATL_COM#53](../../atl/codesnippet/cpp/compiler-options-macros_4.h)]

## <a name="atl_noinline"></a> ATL_NOINLINE

A symbol that indicates a function shouldn't be inlined.

```
    ATL_NOINLINE inline
    myfunction()
    {
    ...
    }
```

### Parameters

*myfunction*<br/>
The function that should not be inlined.

### Remarks

Use this symbol if you want to ensure a function does not get inlined by the compiler, even though it must be declared as inline so that it can be placed in a header file. Expands to **`__declspec(noinline)`**.

## <a name="_atl_single_threaded"></a> _ATL_SINGLE_THREADED

Define if all of your objects use the single threading model

```
_ATL_SINGLE_THREADED
```

### Remarks

Specifies that the object always runs in the primary COM thread. See [Specifying the Project's Threading Model](../../atl/specifying-the-threading-model-for-a-project-atl.md) for other threading options, and [Options, ATL Simple Object Wizard](../../atl/reference/options-atl-simple-object-wizard.md) for a description of the threading models available for an ATL object.

## See also

[Macros](../../atl/reference/atl-macros.md)
