---
title: "Storing and Loading CObjects via an Archive | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CObjects, loading through archives"
  - "CArchive class, storing and loading objects"
  - "Serialize method, vs. CArchive operators"
  - "CObject class, CArchive objects"
  - "CObjects"
ms.assetid: a829b6dd-bc31-47e0-8108-fbb946722db9
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Storing and Loading CObjects via an Archive
Storing and loading `CObject`s via an archive requires extra consideration. In certain cases, you should call the `Serialize` function of the object, where the `CArchive` object is a parameter of the `Serialize` call, as opposed to using the **<\<** or **>>** operator of the `CArchive`. The important fact to keep in mind is that the `CArchive` **>>** operator constructs the `CObject` in memory based on `CRuntimeClass` information previously written to the file by the storing archive.  
  
 Therefore, whether you use the `CArchive` **<\<** and **>>** operators, versus calling `Serialize`, depends on whether you *need* the loading archive to dynamically reconstruct the object based on previously stored `CRuntimeClass` information. Use the `Serialize` function in the following cases:  
  
-   When deserializing the object, you know the exact class of the object beforehand.  
  
-   When deserializing the object, you already have memory allocated for it.  
  
> [!CAUTION]
>  If you load the object using the `Serialize` function, you must also store the object using the `Serialize` function. Don't store using the `CArchive` **<<** operator and then load using the `Serialize` function, or store using the `Serialize` function and then load using **CArchive >>** operator.  
  
 The following example illustrates the cases:  
  
 [!code-cpp[NVC_MFCSerialization#36](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_1.h)]  
  
 [!code-cpp[NVC_MFCSerialization#37](../mfc/codesnippet/cpp/storing-and-loading-cobjects-via-an-archive_2.cpp)]  
  
 In summary, if your serializable class defines an embedded **CObjec**t as a member, you should *not* use the `CArchive` **<\<** and **>>** operators for that object, but should call the `Serialize` function instead. Also, if your serializable class defines a pointer to a `CObject` (or an object derived from `CObject`) as a member, but constructs this other object in its own constructor, you should also call `Serialize`.  
  
## See Also  
 [Serialization: Serializing an Object](../mfc/serialization-serializing-an-object.md)

