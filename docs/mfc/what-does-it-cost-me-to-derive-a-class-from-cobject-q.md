---
title: "What Does it Cost me to Derive a Class from CObject? | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["CObject"]
dev_langs: ["C++"]
helpviewer_keywords: ["CObject class [MFC], overhead of derived classes [MFC]"]
ms.assetid: 9b92c98b-b3dd-48a7-9d24-c3b8554edf90
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# What Does it Cost me to Derive a Class from CObject?

The overhead in deriving from class [CObject](../mfc/reference/cobject-class.md) is minimal. Your derived class inherits only four virtual functions and a single [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) object.

## See Also

[CObject Class: Frequently Asked Questions](../mfc/cobject-class-frequently-asked-questions.md)
