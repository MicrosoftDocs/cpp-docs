---
title: "Creating an OLE DB Provider"
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
  - "OLE DB providers, creating"
  - "OLE DB provider templates, creating providers"
ms.assetid: f73017c3-c89f-41a6-a306-ea992cf6092c
caps.latest.revision: 9
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
# Creating an OLE DB Provider
The recommended way to create an OLE DB provider is to use the wizards to create an ATL COM project and a provider and then modify the files using the OLE DB templates. As you customize your provider, you can comment out unwanted properties and add optional interfaces.  
  
 The basic steps are as follows:  
  
1.  Use the ATL Project Wizard to create the basic project files and the ATL OLE DB Provider Wizard to create the provider (select **ATL OLE DB Provider** from the Visual C++ folder in **Add Class**).  
  
2.  Modify the code in the `Execute` method in CMyProviderRS.h. For an example, see [Reading Strings Into an OLE DB Provider](../data/reading-strings-into-the-ole-db-provider.md).  
  
3.  Edit the property maps in MyProviderDS.h, MyProviderSess.h, and MyProviderRS.h. The wizard creates property maps that contain all properties that a provider might implement. Go through the property maps and remove or comment out properties that your provider does not need to support.  
  
4.  Update the PROVIDER_COLUMN_MAP, which can be found in MyProviderRS.h. For an example, see [Storing Strings In the OLE DB Provider](../data/storing-strings-in-the-ole-db-provider.md).  
  
5.  When you are ready to test your provider, you can test it by trying to find the provider in a provider enumeration. For examples of test code that finds a provider in an enumeration, see the [CATDB](assetId:///003d516b-2bf6-444e-8be5-4ebaa0b66046) and [DBVIEWER](assetId:///07620f99-c347-4d09-9ebc-2459e8049832) samples or the example in [Implementing A Simple Consumer](../data/implementing-a-simple-consumer.md).  
  
6.  Add any additional interfaces you want. For an example, see [Enhancing the Simple Read-Only Provider](../data/enhancing-the-simple-read-only-provider.md).  
  
    > [!NOTE]
    >  By default, the wizards generate code that is OLE DB level 0 compliant. To ensure that your application remains level 0 compliant, do not remove any of the wizard-generated interfaces from the code.  
  
## See Also  
 [CATDB](assetId:///003d516b-2bf6-444e-8be5-4ebaa0b66046)   
 [DBVIEWER](assetId:///07620f99-c347-4d09-9ebc-2459e8049832)