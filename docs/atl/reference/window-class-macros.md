---
description: "Learn more about: Window Class Macros"
title: "Window Class Macros"
ms.date: "11/04/2016"
f1_keywords: ["atlwin/ATL::DECLARE_WND_CLASS", "atlwin/ATL::DECLARE_WND_SUPERCLASS", "atlwin/ATL::DECLARE_WND_CLASS_EX"]
ms.assetid: ce18681a-2bab-4453-9895-0f3ea47c2b24
---
# Window Class Macros

These macros define window class utilities.

|Name|Description|
|-|-|
|[DECLARE_WND_CLASS](#declare_wnd_class)|Allows you to specify the name of a new window class.|
|[DECLARE_WND_CLASS2](#declare_wnd_class2)|(Visual Studio 2017) Allows you to specify the name of a new window class and the enclosing class whose window procedure the new class will use.|
|[DECLARE_WND_SUPERCLASS](#declare_wnd_superclass)|Allows you to specify the name of an existing window class on which a new window class will be based.|
|[DECLARE_WND_CLASS_EX](#declare_wnd_class_ex)|Allows you to specify the parameters of a class.|

## Requirements

**Header:** atlwin.h

## <a name="declare_wnd_class"></a> DECLARE_WND_CLASS

Allows you to specify the name of a new window class. Place this macro in an ATL ActiveX control's control class.

```
DECLARE_WND_CLASS( WndClassName )
```

### Parameters

*WndClassName*<br/>
[in] The name of the new window class. If NULL, ATL will generate a window class name.

### Remarks

If you are using the /permissive- compiler option, then DECLARE_WND_CLASS will cause a compiler error; use DECLARE_WND_CLASS2 instead.

DECLARE_WND_CLASS allows you to specify the name of a new window class whose information will be managed by [CWndClassInfo](cwndclassinfo-class.md). DECLARE_WND_CLASS defines the new window class by implementing the following static function:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

DECLARE_WND_CLASS specifies the following styles for the new window:

- CS_HREDRAW

- CS_VREDRAW

- CS_DBLCLKS

DECLARE_WND_CLASS also specifies the default window's background color. Use the [DECLARE_WND_CLASS_EX](#declare_wnd_class_ex) macro to provide your own styles and background color.

[CWindowImpl](cwindowimpl-class.md) uses the DECLARE_WND_CLASS macro to create a window based on a new window class. To override this behavior, use the [DECLARE_WND_SUPERCLASS](#declare_wnd_superclass) macro, or provide your own implementation of the [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) function.

For more information about using windows in ATL, see the article [ATL Window Classes](../../atl/atl-window-classes.md).

## <a name="declare_wnd_class2"></a> DECLARE_WND_CLASS2

(Visual Studio 2017) Similar to DECLARE_WND_CLASS, but with an extra parameter that avoids a dependent name error when compiling with the /permissive- option.

```
DECLARE_WND_CLASS2( WndClassName, EnclosingClass )
```

### Parameters

*WndClassName*<br/>
[in] The name of the new window class. If NULL, ATL will generate a window class name.

*EnclosingClass*<br/>
[in] The name of the window class that encloses the new window class. Cannot be NULL.

### Remarks

If you are using the /permissive- option, then DECLARE_WND_CLASS will cause a compilation error because it contains a dependent name. DECLARE_WND_CLASS2 requires you to explicitly name the class that this macro is used in and does not cause the error under the /permissive- flag.
Otherwise this macro is identical to [DECLARE_WND_CLASS](#declare_wnd_class).

## <a name="declare_wnd_superclass"></a> DECLARE_WND_SUPERCLASS

Allows you to specify the parameters of a class. Place this macro in an ATL ActiveX control's control class.

```
DECLARE_WND_SUPERCLASS( WndClassName, OrigWndClassName )
```

### Parameters

*WndClassName*<br/>
[in] The name of the window class that will superclass *OrigWndClassName*. If NULL, ATL will generate a window class name.

*OrigWndClassName*<br/>
[in] The name of an existing window class.

### Remarks

This macro allows you to specify the name of a window class that will superclass an existing window class. [CWndClassInfo](cwndclassinfo-class.md) manages the information of the superclass.

DECLARE_WND_SUPERCLASS implements the following static function:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

By default, [CWindowImpl](cwindowimpl-class.md) uses the [DECLARE_WND_CLASS](#declare_wnd_class) macro to create a window based on a new window class. By specifying the DECLARE_WND_SUPERCLASS macro in a `CWindowImpl`-derived class, the window class will be based on an existing class but will use your window procedure. This technique is called superclassing.

Besides using the DECLARE_WND_CLASS and DECLARE_WND_SUPERCLASS macros, you can override the [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) function with your own implementation.

For more information about using windows in ATL, see the article [ATL Window Classes](../../atl/atl-window-classes.md).

## <a name="declare_wnd_class_ex"></a> DECLARE_WND_CLASS_EX

Allows you to specify the name of an existing window class on which a new window class will be based. Place this macro in an ATL ActiveX control's control class.

```
DECLARE_WND_CLASS_EX( WndClassName, style, bkgnd )
```

### Parameters

*WndClassName*<br/>
[in] The name of the new window class. If NULL, ATL will generate a window class name.

*style*<br/>
[in] The style of the window.

*bkgnd*<br/>
[in] The background color of the window.

### Remarks

This macro allows you to specify the class parameters of a new window class, whose information will be managed by [CWndClassInfo](cwndclassinfo-class.md). DECLARE_WND_CLASS_EX defines the new window class by implementing the following static function:

[!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]

If you want to use the default styles and background color, use the [DECLARE_WND_CLASS](#declare_wnd_class) macro. For more information about using windows in ATL, see the article [ATL Window Classes](../../atl/atl-window-classes.md).

## See also

[Macros](atl-macros.md)
