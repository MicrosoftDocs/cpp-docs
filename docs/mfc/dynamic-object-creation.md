---
description: "Learn more about: Dynamic Object Creation"
title: "Dynamic Object Creation"
ms.date: "03/27/2020"
helpviewer_keywords: ["object creation [MFC], dynamically at run time", "CObject class [MFC], dynamic object creation", "objects [MFC], creating dynamically at run time", "dynamic object creation [MFC]"]
ms.assetid: 3e0f51cb-3e24-4231-817f-1c0ce9f2d5df
---
# Dynamic Object Creation

This article explains how to create an object dynamically at run time. The procedure uses run-time class information, as discussed in the article [Accessing Run-Time Class Information](accessing-run-time-class-information.md).

#### Dynamically create an object given its run-time class

1. Use the following code to dynamically create an object using the `CreateObject` function of the `CRuntimeClass`. On failure, `CreateObject` returns **NULL** instead of raising an exception:

   [!code-cpp[NVC_MFCCObjectSample#6](codesnippet/cpp/dynamic-object-creation_1.cpp)]

## See also

[Destroying Window Objects](tn017-destroying-window-objects.md)
[Using CObject](using-cobject.md)
