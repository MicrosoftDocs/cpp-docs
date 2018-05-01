---
title: "Trackers | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Trackers
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Trackers](https://docs.microsoft.com/cpp/mfc/trackers).  
  
  
The [CRectTracker](../mfc/reference/crecttracker-class.md) class provides a user interface between rectangular items in your application and your user by providing a variety of display styles. These styles include solid, hatched, or dashed borders; a hatched pattern that covers the item; and resize handles that can be located on the outside or inside of a border. Trackers are often used in conjunction with OLE items, that is, objects derived from `COleClientItem`. The tracker rectangles give visual cues on the current status of the item.  
  
 The MFC OLE sample [OCLIENT](../top/visual-cpp-samples.md) demonstrates a common interface using trackers and OLE client items from the viewpoint of a container application. For a demonstration of the different styles and abilities of a tracker object, see the MFC general sample [TRACKER](../top/visual-cpp-samples.md).  
  
 For more information on implementing trackers in your OLE application, see [Trackers: Implementing Trackers in Your OLE Application](../mfc/trackers-implementing-trackers-in-your-ole-application.md)  
  
## See Also  
 [OLE](../mfc/ole-in-mfc.md)   
 [COleClientItem Class](../mfc/reference/coleclientitem-class.md)




