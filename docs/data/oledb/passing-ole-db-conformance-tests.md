---
title: "Passing OLE DB Conformance Tests | Microsoft Docs"
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
  - "testing, OLE DB providers"
  - "testing providers"
  - "conformance testing"
  - "conformance testing [OLE DB]"
  - "OLE DB providers, testing"
ms.assetid: d1a4f147-2edd-476c-b452-0e6a0ac09891
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
# Passing OLE DB Conformance Tests
To make providers more consistent, the Data Access SDK provides a set of OLE DB conformance tests. The tests check all aspects of your provider and give you reasonable assurance that your provider functions as expected. You can find the OLE DB conformance tests on the Microsoft Data Access SDK. This section focuses on things you should do to pass the conformance tests. For information about running the OLE DB conformance tests, see the SDK.  
  
## Running the Conformance Tests  
 In Visual C++ 6.0, the OLE DB provider templates added a number of hooking functions to allow you to check values and properties. Most of these functions were added in response to the conformance tests.  
  
> [!NOTE]
>  You need to add several validation functions for your provider to pass the OLE DB conformance tests.  
  
 This provider requires two validation routines. The first routine, `CRowsetImpl::ValidateCommandID`, is part of your rowset class. It is called during the creation of the rowset by the provider templates. The sample uses this routine to tell consumers that it does not support indexes. The first call is to `CRowsetImpl::ValidateCommandID` (note that the provider uses the **_RowsetBaseClass** typedef added in the interface map for `CMyProviderRowset` in [Provider Support for Bookmarks](../../data/oledb/provider-support-for-bookmarks.md), so you do not have to type that long line of template arguments). Next, return **DB_E_NOINDEX** if the index parameter is not **NULL** (this indicates the consumer wants to use an index on us). For more information about command IDs, see the OLE DB specification and look for **IOpenRowset::OpenRowset**.  
  
 The following code is the **ValidateCommandID** validation routine:  
  
```  
/////////////////////////////////////////////////////////////////////  
// MyProviderRS.H  
// Class: CMyProviderRowset   
  
HRESULT ValidateCommandID(DBID* pTableID, DBID* pIndexID)  
{  
   HRESULT hr = _RowsetBaseClass::ValidateCommandID(pTableID, pIndexID);  
   if (hr != S_OK)  
      return hr;  
  
   if (pIndexID != NULL)  
      return DB_E_NOINDEX;    // Doesn't support indexes  
  
   return S_OK;  
}  
```  
  
 The provider templates call the `OnPropertyChanged` method whenever someone changes a property on the **DBPROPSET_ROWSET** group. If you want to handle properties for other groups, you add them to the appropriate object (that is, **DBPROPSET_SESSION** checks go in the `CMyProviderSession` class).  
  
 The code first checks to see whether the property is linked to another. If the property is being chained, it sets the **DBPROP_BOOKMARKS** property to True. Appendix C of the OLE DB specification contains information about properties. This information also tells you whether the property is chained to another one.  
  
 You might also want to add the `IsValidValue` routine to your code. The templates call `IsValidValue` when attempting to set a property. You would override this method if you require additional processing when setting a property value. You can have one of these methods for each property set.  
  
## Threading Issues  
 By default, the OLE DB Provider Wizard in the ATL OLE DB Provider Wizard generates code for the provider to run in an apartment model. If you attempt to run this code with the conformance tests, you initially get failures. This is because Ltm.exe, the tool used to run the OLE DB conformance tests, defaults to free threaded. The OLE DB Provider Wizard code defaults to apartment model for performance and ease of use.  
  
 To correct this problem, you can either change LTM or change the provider.  
  
#### To change LTM to run in apartment threaded mode  
  
1.  On the LTM main menu, click **Tools**, and then click **Options**.  
  
2.  On the **General** tab, change the threading model from **Free Threaded** to **Apartment Threaded**.  
  
 To change your provider to run in free threaded mode:  
  
-   In your provider project, search for all instances of `CComSingleThreadModel` and replace it with `CComMultiThreadModel`, which should be in your data source, session, and rowset headers.  
  
-   In your .rgs file, change the threading model from **Apartment** to **Both**.  
  
-   Follow correct programming rules for free threaded programming (that is, lock on writes).  
  
## See Also  
 [Advanced Provider Techniques](../../data/oledb/advanced-provider-techniques.md)