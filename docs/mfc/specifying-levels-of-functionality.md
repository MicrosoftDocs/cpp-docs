---
description: "Learn more about: Specifying Levels of Functionality"
title: "Specifying Levels of Functionality"
ms.date: "11/06/2018"
helpviewer_keywords: ["CObject class [MFC], adding functionality to derived classes", "runtime [MFC], class information", "serialization [MFC], Cobject", "dynamic creation support", "levels [MFC], functionality in CObject", "run-time class [MFC], information support", "levels [MFC]"]
ms.assetid: 562669ba-c858-4f66-b5f1-b3beeea4f486
---
# Specifying Levels of Functionality

This article describes how to add the following levels of functionality to your [CObject](../mfc/reference/cobject-class.md)-derived class:

- Run-time class information

- Dynamic creation support

- Serialization support

For a general description of `CObject` functionality, see the article [Deriving a Class from CObject](../mfc/deriving-a-class-from-cobject.md).

## To add run-time class information

1. Derive your class from `CObject`, as described in the [Deriving a Class from CObject](../mfc/deriving-a-class-from-cobject.md) article.

1. Use the DECLARE_DYNAMIC macro in your class declaration, as shown here:

   [!code-cpp[NVC_MFCCObjectSample#2](../mfc/codesnippet/cpp/specifying-levels-of-functionality_1.h)]

1. Use the IMPLEMENT_DYNAMIC macro in the implementation file (.CPP) of your class. This macro takes as arguments the name of the class and its base class, as follows:

   [!code-cpp[NVC_MFCCObjectSample#3](../mfc/codesnippet/cpp/specifying-levels-of-functionality_2.cpp)]

> [!NOTE]
> Always put IMPLEMENT_DYNAMIC in the implementation file (.CPP) for your class. The IMPLEMENT_DYNAMIC macro should be evaluated only once during a compilation and therefore should not be used in an interface file (.H) that could potentially be included in more than one file.

## To add dynamic creation support

1. Derive your class from `CObject`.

1. Use the DECLARE_DYNCREATE macro in the class declaration.

1. Define a constructor with no arguments (a default constructor).

1. Use the IMPLEMENT_DYNCREATE macro in the class implementation file.

## To add serialization support

1. Derive your class from `CObject`.

1. Override the `Serialize` member function.

   > [!NOTE]
   > If you call `Serialize` directly, that is, you do not want to serialize the object through a polymorphic pointer, omit steps 3 through 5.

1. Use the DECLARE_SERIAL macro in the class declaration.

1. Define a constructor with no arguments (a default constructor).

1. Use the IMPLEMENT_SERIAL macro in the class implementation file.

> [!NOTE]
> A "polymorphic pointer" points to an object of a class (call it A) or to an object of any class derived from A (say, B). To serialize through a polymorphic pointer, the framework must determine the run-time class of the object it is serializing (B), since it might be an object of any class derived from some base class (A).

For more details on how to enable serialization when you derive your class from `CObject`, see the articles [Files in MFC](../mfc/files-in-mfc.md) and [Serialization](../mfc/serialization-in-mfc.md).

## See also

[Deriving a Class from CObject](../mfc/deriving-a-class-from-cobject.md)
