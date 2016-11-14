---
title: "Serialization: Serializing an Object | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "serializing objects [C++]"
  - "serialization [C++], objects"
  - "objects [C++], serializing"
ms.assetid: 1db772b1-ad55-4fcf-b133-126cca082510
caps.latest.revision: 9
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
# Serialization: Serializing an Object
The article [Serialization: Making a Serializable Class](../mfc/serialization-making-a-serializable-class.md) shows how to make a class serializable. Once you have a serializable class, you can serialize objects of that class to and from a file via a [CArchive](../mfc/reference/carchive-class.md) object. This article explains:  
  
-   [What a CArchive object is](../mfc/what-is-a-carchive-object.md).  
  
-   [Two ways to create a CArchive](../mfc/two-ways-to-create-a-carchive-object.md).  
  
-   [How to use the CArchive <\< and >> operators](../mfc/using-the-carchive-output-and-input-operators.md).  
  
-   [Storing and loading CObjects via an archive](../mfc/storing-and-loading-cobjects-via-an-archive.md).  
  
 You can let the framework create the archive for your serializable document or explicitly create the `CArchive` object yourself. You can transfer data between a file and your serializable object by using the <\< and >> operators for `CArchive` or, in some cases, by calling the `Serialize` function of a `CObject`-derived class.  
  
## See Also  
 [Serialization](../mfc/serialization-in-mfc.md)

