---
description: "Learn more about: Using CObject"
title: "Using CObject"
ms.date: "11/04/2016"
helpviewer_keywords: ["examples [MFC], CObject", "root base class for MFC", "derived classes [MFC], from CObject", "MFC, base class", "CObject class [MFC]"]
ms.assetid: d0cd19bb-2856-4b41-abbc-620fd64cb223
---
# Using CObject

[CObject](../mfc/reference/cobject-class.md) is the root base class for most of the Microsoft Foundation Class Library (MFC). The `CObject` class contains many useful features that you may want to incorporate into your own program objects, including serialization support, run-time class information, and object diagnostic output. If you derive your class from `CObject`, your class can exploit these `CObject` features.

## What do you want to do

- [Derive a class from CObject](../mfc/deriving-a-class-from-cobject.md)

- [Add support for run-time class information, dynamic creation, and serialization to my derived class](../mfc/specifying-levels-of-functionality.md)

- [Access run-time class information](../mfc/accessing-run-time-class-information.md)

- [Create objects dynamically](../mfc/dynamic-object-creation.md)

- [Dump the object's data for diagnostic purposes](/previous-versions/visualstudio/visual-studio-2010/sc15kz85(v=vs.100))

- Validate the object's internal state (see [MFC ASSERT_VALID and CObject::AssertValid](reference/diagnostic-services.md#assert_valid))

- [Have the class serialize itself to persistent storage](../mfc/serialization-in-mfc.md)

- See a list of [CObject Frequently Asked Questions](../mfc/cobject-class-frequently-asked-questions.md)

## See also

[Concepts](../mfc/mfc-concepts.md)<br/>
[General MFC Topics](../mfc/general-mfc-topics.md)<br/>
[CRuntimeClass Structure](../mfc/reference/cruntimeclass-structure.md)<br/>
[Files](../mfc/files-in-mfc.md)<br/>
[Serialization](../mfc/serialization-in-mfc.md)
