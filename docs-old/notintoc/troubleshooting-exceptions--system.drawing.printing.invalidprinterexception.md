---
title: "Troubleshooting Exceptions: System.Drawing.Printing.InvalidPrinterException"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "InvalidPrinterException class"
ms.assetid: e19b9b9c-2b0f-4839-85c0-ae75e1c356d2
caps.latest.revision: 12
ms.author: "mblome"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Troubleshooting Exceptions: System.Drawing.Printing.InvalidPrinterException
An \<xref:System.Drawing.Printing.InvalidPrinterException> exception is thrown when an attempt is made to access a printer using invalid printer settings.  
  
## Associated Tips  
 **Make sure that the printer exists.**  
 The most common cause of invalid printer settings is referencing a nonexistent printer. For more information, see \<xref:System.Drawing.Printing>.  
  
 **Make sure a default printer has been installed.**  
 If no printer has been specified, make sure a default printer has been installed. For more information, see \<xref:System.Drawing.Printing.PrintDocument.PrinterSettings*>  
  
## See Also  
 \<xref:System.Drawing.Printing.InvalidPrinterException>   
 \<xref:System.Drawing.Printing.PrinterSettings>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)