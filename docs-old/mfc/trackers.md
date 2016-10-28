---
title: "Trackers"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "trackers"
  - "OLE applications [C++], trackers"
  - "applications [OLE], trackers"
  - "tracking OLE items"
  - "OLE containers, trackers"
  - "CDC class, trackers"
  - "CRectTracker class, implementing trackers"
  - "OLE server applications, trackers"
ms.assetid: dcd09399-6637-4621-80e5-d12670429787
caps.latest.revision: 8
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
# Trackers
The [CRectTracker](../mfcref/crecttracker-class.md) class provides a user interface between rectangular items in your application and your user by providing a variety of display styles. These styles include solid, hatched, or dashed borders; a hatched pattern that covers the item; and resize handles that can be located on the outside or inside of a border. Trackers are often used in conjunction with OLE items, that is, objects derived from `COleClientItem`. The tracker rectangles give visual cues on the current status of the item.  
  
 The MFC OLE sample [OCLIENT](../top/visual-c---samples.md) demonstrates a common interface using trackers and OLE client items from the viewpoint of a container application. For a demonstration of the different styles and abilities of a tracker object, see the MFC general sample [TRACKER](../top/visual-c---samples.md).  
  
 For more information on implementing trackers in your OLE application, see [Trackers: Implementing Trackers in Your OLE Application](../mfc/trackers--implementing-trackers-in-your-ole-application.md)  
  
## See Also  
 [OLE](../mfc/ole-in-mfc.md)   
 [COleClientItem Class](../mfcref/coleclientitem-class.md)