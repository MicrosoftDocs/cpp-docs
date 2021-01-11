---
description: "Learn more about: Specifying Compiler Optimization for an ATL Project"
title: "Specifying Compiler Optimization for an ATL Project"
ms.date: "08/19/2019"
f1_keywords: ["vc.appwiz.ATL.optimization", "vc.appwiz.ATL.vtable"]
helpviewer_keywords: ["ATL_DISABLE_NO_VTABLE macro", "ATL projects, compiler optimization", "ATL_NO_VTABLE macro"]
ms.assetid: 7f379318-66d5-43dd-a53d-530758d3a228
---
# Specifying Compiler Optimization for an ATL Project

By default, the [ATL Control Wizard](../../atl/reference/atl-control-wizard.md) generates new classes with the ATL_NO_VTABLE macro, as follows:

```
class ATL_NO_VTABLE CProjName
{
...
};
```

ATL then defines _ATL_NO_VTABLE as follows:

```
#ifdef _ATL_DISABLE_NO_VTABLE
#define ATL_NO_VTABLE
#else
#define ATL_NO_VTABLE __declspec(novtable)
#endif
```

If you do not define _ATL_DISABLE_NO_VTABLE, the ATL_NO_VTABLE macro expands to `declspec(novtable)`. Using `declspec(novtable)`in a class declaration prevents the vtable pointer from being initialized in the class constructor and destructor. When you build your project, the linker eliminates the vtable and all functions to which the vtable points.

You must use ATL_NO_VTABLE, and consequently `declspec(novtable)`, with only base classes that are not directly creatable. You must not use `declspec(novtable)` with the most-derived class in your project, because this class (usually [CComObject](../../atl/reference/ccomobject-class.md), [CComAggObject](../../atl/reference/ccomaggobject-class.md), or [CComPolyObject](../../atl/reference/ccompolyobject-class.md)) initializes the vtable pointer for your project.

You must not call virtual functions from the constructor of any object that uses `declspec(novtable)`. You should move those calls to the [FinalConstruct](ccomobjectrootex-class.md#finalconstruct) method.

If you are unsure whether you should use the `declspec(novtable)` modifier, you can remove the ATL_NO_VTABLE macro from any class definition, or you can globally disable it by specifying

```
#define _ATL_DISABLE_NO_VTABLE
```

in *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier), before all other ATL header files are included.

## See also

[ATL Project Wizard](../../atl/reference/atl-project-wizard.md)<br/>
[C++ project types in Visual Studio](../../build/reference/visual-cpp-project-types.md)<br/>
[Programming with ATL and C Run-Time Code](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[novtable](../../cpp/novtable.md)<br/>
[Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md)
