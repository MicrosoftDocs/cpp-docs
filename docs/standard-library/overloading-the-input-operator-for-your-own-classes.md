---
title: "Overloading the &gt;&gt; Operator for Your Own Classes | Microsoft Docs"
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
  - "operator>>"
  - "operator>>, overloading for your own classes"
  - "operator >>, overloading for your own classes"
ms.assetid: 40dab4e0-3f97-4745-9cc8-b86e740fa246
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
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
# Overloading the &gt;&gt; Operator for Your Own Classes
Input streams use the extraction (`>>`) operator for the standard types. You can write similar extraction operators for your own types; your success depends on using white space precisely.  
  
 Here is an example of an extraction operator for the `Date` class presented earlier:  
  
```  
istream& operator>> (istream& is, Date& dt)  
{  
    is>> dt.mo>> dt.da>> dt.yr;  
    return is;  
}  
```  
  
## See Also  
 [Input Streams](../standard-library/input-streams.md)

