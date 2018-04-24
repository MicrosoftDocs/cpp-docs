---
title: "File specified in FileName is not a valid XML file | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: c4c30bf3-e0ad-4bc8-89e0-2c3e49e9793b
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# File specified in FileName is not a valid XML file
The file name that you supplied is not a valid XML file. To specify the allowed structure and content of an XML document, you can use a Document Type Definition (DTD), a Microsoft XML-Data Reduced (XDR) schema, or an XML Schema definition language (XSD) schema. XSD schemas are the preferred way to specify XML grammars in the [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)].  
  
> [!NOTE]
>  In some earlier versions of Visual Studio, the **XML Designer** is the designer for typed datasets and XML schema. The **XML Designer** can still be used to create and edit XML schema files. However, in [!INCLUDE[vs_current_long](../includes/vs-current-long-md.md)], the designer for creating and editing typed datasets is the **Dataset Designer**. For more information, see [Creating and Editing Typed Datasets](http://msdn.microsoft.com/library/cd0dbe93-be9b-41e4-bc39-e9300678c1f2).  
  
### To correct this error  
  
-   Check that you are supplying the correct file name.  
  
-   Check that the specified file contains valid XML by loading the XML file that you want to check into the **XML Designer**. From the **XML** menu, click **Validate XML**. Errors are displayed in the **Task List**.  
  
-   If the XML file has an associated XML Schema, check that the elements appear in the defined structure and that the content of the individual elements conforms to the declared data types specified in the schema.  
  
## See Also  
 <xref:System.Xml>   
 [How to: Parse File Paths](http://msdn.microsoft.com/library/c1bd99c9-8160-456a-b5ab-60a49139b923)