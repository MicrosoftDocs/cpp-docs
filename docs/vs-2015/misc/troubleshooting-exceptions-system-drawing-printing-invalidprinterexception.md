---
title: "Troubleshooting Exceptions: System.Drawing.Printing.InvalidPrinterException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
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
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Drawing.Printing.InvalidPrinterException
An <xref:System.Drawing.Printing.InvalidPrinterException> exception is thrown when an attempt is made to access a printer using invalid printer settings.  
  
## Associated Tips  
 **Make sure that the printer exists.**  
 The most common cause of invalid printer settings is referencing a nonexistent printer. For more information, see <xref:System.Drawing.Printing>.  
  
 **Make sure a default printer has been installed.**  
 If no printer has been specified, make sure a default printer has been installed. For more information, see <xref:System.Drawing.Printing.PrintDocument.PrinterSettings%2A>  
  
## See Also  
 <xref:System.Drawing.Printing.InvalidPrinterException>   
 <xref:System.Drawing.Printing.PrinterSettings>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)