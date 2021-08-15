---
description: "Learn more about: One-Stage and Two-Stage Construction of Objects"
title: "One-Stage and Two-Stage Construction of Objects"
ms.date: "11/04/2016"
helpviewer_keywords: ["objects [MFC], creating graphic objects", "object creation [MFC], graphic objects", "objects [MFC], graphic objects", "one-stage and two-stage construction of objects [MFC]"]
ms.assetid: 5a1c410c-4a4b-4dd9-a2ec-ced831aa7f21
---
# One-Stage and Two-Stage Construction of Objects

You have a choice between two techniques for creating graphic objects, such as pens and brushes:

- *One-stage construction*: Construct and initialize the object in one stage, all with the constructor.

- *Two-stage construction*: Construct and initialize the object in two separate stages. The constructor creates the object and an initialization function initializes it.

Two-stage construction is always safer. In one-stage construction, the constructor could throw an exception if you provide incorrect arguments or memory allocation fails. That problem is avoided by two-stage construction, although you do have to check for failure. In either case, destroying the object is the same process.

> [!NOTE]
> These techniques apply to creating any objects, not just graphic objects.

## Example of Both Construction Techniques

The following brief example shows both methods of constructing a pen object:

[!code-cpp[NVC_MFCDocViewSDI#6](codesnippet/cpp/one-stage-and-two-stage-construction-of-objects_1.cpp)]

### What do you want to know more about

- [Graphic objects](graphic-objects.md)

- [Selecting a graphic object into a device context](selecting-a-graphic-object-into-a-device-context.md)

- [Device contexts](device-contexts.md)

- [Drawing in a View](drawing-in-a-view.md)

## See also

[Graphic Objects](graphic-objects.md)
