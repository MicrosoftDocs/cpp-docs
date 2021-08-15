---
description: "Learn more about: Accessing Run-Time Class Information"
title: "Accessing Run-Time Class Information"
ms.date: "11/04/2016"
helpviewer_keywords: ["CObject class [MFC], and RTTI", "CObject class [MFC], using IsKindOf method [MFC]", "run time [MFC], class information", "RUNTIME_CLASS macro [MFC]", "CObject class [MFC], using RUNTIME_CLASS macro [MFC]", "RTTI compiler option [MFC]", "CObject class [MFC], accessing run-time class information", "run time [MFC]", "IsKindOf method method [MFC]", "run-time class [MFC], accessing information", "classes [MFC], run-time class information", "run-time class [MFC]", "RUNTIME_CLASS macro, using"]
ms.assetid: 3445a9af-0bd6-4496-95c3-aa59b964570b
---
# Accessing Run-Time Class Information

This article explains how to access information about the class of an object at run time.

> [!NOTE]
> MFC does not use the [Run-Time Type Information](../cpp/run-time-type-information.md) (RTTI) support introduced in Visual C++ 4.0.

If you have derived your class from [CObject](reference/cobject-class.md) and used the **DECLARE**_**DYNAMIC** and `IMPLEMENT_DYNAMIC`, the `DECLARE_DYNCREATE` and `IMPLEMENT_DYNCREATE`, or the `DECLARE_SERIAL` and `IMPLEMENT_SERIAL` macros explained in the article [Deriving a Class from CObject](deriving-a-class-from-cobject.md), the `CObject` class has the ability to determine the exact class of an object at run time.

This ability is most useful when extra type checking of function arguments is needed and when you must write special-purpose code based on the class of an object. However, this practice is not usually recommended because it duplicates the functionality of virtual functions.

The `CObject` member function `IsKindOf` can be used to determine if a particular object belongs to a specified class or if it is derived from a specific class. The argument to `IsKindOf` is a `CRuntimeClass` object, which you can get using the `RUNTIME_CLASS` macro with the name of the class.

### To use the RUNTIME_CLASS macro

1. Use `RUNTIME_CLASS` with the name of the class, as shown here for the class `CObject`:

   [!code-cpp[NVC_MFCCObjectSample#4](codesnippet/cpp/accessing-run-time-class-information_1.cpp)]

You will rarely need to access the run-time class object directly. A more common use is to pass the run-time class object to the `IsKindOf` function, as shown in the next procedure. The `IsKindOf` function tests an object to see if it belongs to a particular class.

#### To use the IsKindOf function

1. Make sure the class has run-time class support. That is, the class must have been derived directly or indirectly from `CObject` and used the **DECLARE**_**DYNAMIC** and `IMPLEMENT_DYNAMIC`, the `DECLARE_DYNCREATE` and `IMPLEMENT_DYNCREATE`, or the `DECLARE_SERIAL` and `IMPLEMENT_SERIAL` macros explained in the article [Deriving a Class from CObject](deriving-a-class-from-cobject.md).

1. Call the `IsKindOf` member function for objects of that class, using the `RUNTIME_CLASS` macro to generate the `CRuntimeClass` argument, as shown here:

   [!code-cpp[NVC_MFCCObjectSample#2](codesnippet/cpp/accessing-run-time-class-information_2.h)]

   [!code-cpp[NVC_MFCCObjectSample#5](codesnippet/cpp/accessing-run-time-class-information_3.cpp)]

    > [!NOTE]
    >  IsKindOf returns **TRUE** if the object is a member of the specified class or of a class derived from the specified class. `IsKindOf` does not support multiple inheritance or virtual base classes, although you can use multiple inheritance for your derived Microsoft Foundation classes if necessary.

One use of run-time class information is in the dynamic creation of objects. This process is discussed in the article [Dynamic Object Creation](dynamic-object-creation.md).

For more detailed information on serialization and run-time class information, see the articles [Files in MFC](files-in-mfc.md) and [Serialization](serialization-in-mfc.md).

## See also

[Using CObject](using-cobject.md)
