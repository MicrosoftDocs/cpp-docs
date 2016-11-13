---
title: "Storing Strings in the OLE DB Provider | Microsoft Docs"
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
  - "user records, editing"
ms.assetid: 36cb9635-067c-4cad-8f85-962f28026f6a
caps.latest.revision: 7
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
# Storing Strings in the OLE DB Provider
In MyProviderRS.h, the ATL OLE DB Provider Wizard creates a default user record called `CWindowsFile`. To handle the two strings, either modify `CWindowsFile` or add your own user record as shown in the following code:  
  
```  
////////////////////////////////////////////////////////////////////////  
class CAgentMan:   
   public WIN32_FIND_DATA  
   DWORD dwBookmark;              // Add this  
   TCHAR szCommand[256];          // Add this  
   TCHAR szText[256];             // Add this  
   TCHAR szCommand2[256];         // Add this  
   TCHAR szText2[256];            // Add this  
  
{  
public:  
BEGIN_PROVIDER_COLUMN_MAP()  
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Command"), 1, 256, GUID_NULL, CAgentMan, szCommand)  
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Text"), 2, 256, GUID_NULL, CAgentMan, szText)   
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Command2"), 3, 256, GUID_NULL, CAgentMan, szCommand2)  
   PROVIDER_COLUMN_ENTRY_STR(OLESTR("Text2"),4, 256, GUID_NULL, CAgentMan, szText2)  
END_PROVIDER_COLUMN_MAP()  
   bool operator==(const CAgentMan& am) // This is optional   
   {  
      return (lstrcmpi(cFileName, wf.cFileName) == 0);  
   }  
};  
```  
  
 The data members `szCommand` and `szText` represent the two strings, with `szCommand2` and `szText2` providing additional columns if needed. The data member `dwBookmark` is not needed for this simple read-only provider but is used later to add an `IRowsetLocate` interface; see [Enhancing the Simple Read Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md). The `==` operator compares instances (implementing this operator is optional).  
  
 When this is done, your provider should be ready to compile and run. To test the provider, you need a consumer with matching functionality. [Implementing a Simple Consumer](../../data/oledb/implementing-a-simple-consumer.md) shows how to create such a test consumer. Run the test consumer with the provider. Verify that the test consumer retrieves the proper strings from the provider when you click the **Run** button in the **Test Consumer** dialog box.  
  
 When you have successfully tested your provider, you might want to enhance its functionality by implementing additional interfaces. An example is shown in [Enhancing the Simple Read-Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md).  
  
## See Also  
 [Implementing the Simple Read-Only Provider](../../data/oledb/implementing-the-simple-read-only-provider.md)