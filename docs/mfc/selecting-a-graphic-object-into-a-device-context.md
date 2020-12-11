---
description: "Learn more about: Selecting a Graphic Object into a Device Context"
title: "Selecting a Graphic Object into a Device Context"
ms.date: "11/04/2016"
helpviewer_keywords: ["graphic objects [MFC], selecting into device context", "SelectObject method [MFC]", "GDI objects [MFC], device contexts", "lifetime, graphic objects [MFC]", "device contexts, selecting graphic objects into", "device contexts, graphic objects [MFC]"]
ms.assetid: cf54a330-63ef-421f-83eb-90ec7bd82eef
---
# Selecting a Graphic Object into a Device Context

This topic applies to using graphic objects in a window's device context. After you [create a drawing object](../mfc/one-stage-and-two-stage-construction-of-objects.md), you must select it into the device context in place of the default object stored there:

[!code-cpp[NVC_MFCDocViewSDI#7](../mfc/codesnippet/cpp/selecting-a-graphic-object-into-a-device-context_1.cpp)]

## Lifetime of Graphic Objects

The graphic object returned by [SelectObject](../mfc/reference/cdc-class.md#selectobject) is "temporary." That is, it will be deleted by the [OnIdle](../mfc/reference/cwinapp-class.md#onidle) member function of class `CWinApp` the next time the program gets idle time. As long as you use the object returned by `SelectObject` in a single function without returning control to the main message loop, you will have no problem.

### What do you want to know more about

- [Graphic objects](../mfc/graphic-objects.md)

- [One-stage and two-stage construction of graphic objects](../mfc/one-stage-and-two-stage-construction-of-objects.md)

- [Device contexts](../mfc/device-contexts.md)

- [Drawing in a View](../mfc/drawing-in-a-view.md)

## See also

[Graphic Objects](../mfc/graphic-objects.md)
