---
title: "Do I Have to Derive New Classes from CObject? | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["CObject"]
dev_langs: ["C++"]
helpviewer_keywords: ["derived classes [MFC], from CObject", "CObject class [MFC], when to use"]
ms.assetid: 26021031-feaf-424c-80d1-9547c4409d6a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Do I Have to Derive New Classes from CObject?

No, you don't.

Derive a class from [CObject](../mfc/reference/cobject-class.md) when you need the facilities it provides, such as serialization or dynamic creatability. Many data classes need to be serialized to files, so it's often a good idea to derive them from `CObject`. For an example of a class derived from `CObject`, see the [Scribble sample](../visual-cpp-samples.md).

## See Also

[CObject Class: Frequently Asked Questions](../mfc/cobject-class-frequently-asked-questions.md)
