---
title: "Consumer Wizard-Generated Methods | Microsoft Docs"
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
  - "OpenAll method"
  - "attribute-injected classes and methods"
  - "wizard-generated classes and methods"
  - "OLE DB consumers, wizard-generated classes and methods"
  - "methods [C++], OLE DB Consumer Wizard-generated"
  - "CloseDataSource method"
  - "consumer wizard-generated classes and methods"
  - "OpenDataSource method"
  - "CloseAll method"
  - "OpenRowset method"
  - "GetRowsetProperties method"
ms.assetid: d80ee51c-8bb3-4dca-8760-5808e0fb47b4
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
# Consumer Wizard-Generated Methods
The ATL OLE DB Consumer Wizard and the MFC Application Wizard generate certain functions of which you should be aware. Note that some methods are implemented differently in attributed projects, so there are a few caveats; each case is covered below. For information about viewing injected code, see [Debugging Injected Code](http://msdn.microsoft.com/library/a1b4104d-d49e-451f-a91e-e39ceaf35875).  
  
-   `OpenAll` opens the data source, rowsets, and turns on bookmarks if they are available.  
  
-   `CloseAll` closes all open rowsets and releases all command executions.  
  
-   `OpenRowset` is called by OpenAll to open the consumer's rowset or rowsets.  
  
-   `GetRowsetProperties` retrieves a pointer to the rowset's property set with which properties can be set.  
  
-   `OpenDataSource` opens the data source using the initialization string you specified in the **Data Link Properties** dialog box.  
  
-   `CloseDataSource` closes the data source in an appropriate manner.  
  
## OpenAll and CloseAll  
  
```  
HRESULT OpenAll();   
void CloseAll();  
```  
  
 The following example shows how you can call `OpenAll` and `CloseAll` when you execute the same command repeatedly. Compare the code example in [CCommand::Close](../../data/oledb/ccommand-close.md), which shows a variation that calls **Close** and `ReleaseCommand` instead of `CloseAll`.  
  
```  
int main(int argc, char* argv[])  
{  
   HRESULT hr;  
  
   hr = CoInitialize(NULL);  
  
   CCustOrdersDetail rs;      // Your CCommand-derived class  
   rs.m_OrderID = 10248;      // Open order 10248  
   hr = rs.OpenAll();         // (Open also executes the command)  
   hr = rs.MoveFirst();         // Move to the first row and print it  
   printf( "Name: %s, Unit Price: %d, Quantity: %d, Discount %d, Extended Price %d\n", rs.m_ProductName, rs.m_UnitPrice.int64, rs.m_Quantity, rs.m_Discount, rs.m_ExtendedPrice.int64 );  
  
   // Close the first command execution  
   rs.Close();  
  
   rs.m_OrderID = 10249;      // Open order 10249 (a new order)  
   hr = rs.Open();            // (Open also executes the command)  
   hr = rs.MoveFirst();         // Move to the first row and print it  
   printf( "Name: %s, Unit Price: %d, Quantity: %d, Discount %d, Extended Price %d\n", rs.m_ProductName, rs.m_UnitPrice.int64, rs.m_Quantity, rs.m_Discount, rs.m_ExtendedPrice.int64 );  
  
   // Close the second command execution;  
   // Instead of rs.CloseAll() you could call  
   // rs.Close() and rs.ReleaseCommand():  
   rs.CloseAll();  
  
   CoUninitialize();  
   return 0;  
}  
```  
  
## Remarks  
 Note that if you define a `HasBookmark` method, the `OpenAll` code sets the DBPROP_IRowsetLocate property; make sure you only do this if your provider supports that property.  
  
## OpenRowset  
  
```  
// OLE DB Template version:   
HRESULT OpenRowset(DBPROPSET* pPropSet = NULL)  
// Attribute-injected version:  
HRESULT OpenRowset(const CSession& session, LPCWSTR szCommand = NULL);  
```  
  
 **OpenAll** calls this method to open the rowset or rowsets in the consumer. Typically, you do not need to call `OpenRowset` unless you want to work with multiple data sources/sessions/rowsets. `OpenRowset` is declared in the command or table class header file:  
  
```  
// OLE DB Template version:  
HRESULT OpenRowset(DBPROPSET *pPropSet = NULL)  
{  
   HRESULT hr = Open(m_session, NULL, pPropSet);  
   #ifdef _DEBUG  
   if(FAILED(hr))  
      AtlTraceErrorRecords(hr);  
   #endif  
   return hr;  
}  
```  
  
 The attributes implement this method differently. This version takes a session object and a command string that defaults to the command string specified in db_command, although you can pass a different one. Note that if you define a `HasBookmark` method, the `OpenRowset` code sets the DBPROP_IRowsetLocate property; make sure you only do this if your provider supports that property.  
  
```  
// Attribute-injected version:  
HRESULT OpenRowset(const CSession& session, LPCWSTR szCommand=NULL)  
{  
  
   DBPROPSET *pPropSet = NULL;  
   CDBPropSet propset(DBPROPSET_ROWSET);  
   __if_exists(HasBookmark)  
  
   {  
      propset.AddProperty(DBPROP_IRowsetLocate, true);  
      pPropSet= &propset;  
      }  
...  
}  
```  
  
## GetRowsetProperties  
  
```  
void GetRowsetProperties(CDBPropSet* pPropSet);  
```  
  
 This method retrieves a pointer to the rowset's property set; you can use this pointer to set properties such as DBPROP_IRowsetChange. `GetRowsetProperties` is used in the user record class as follows. You can modify this code to set additional rowset properties:  
  
```  
void GetRowsetProperties(CDBPropSet* pPropSet)  
{  
   pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
   pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
   pPropSet->AddProperty(DBPROP_IRowsetChange, true, DBPROPOPTIONS_OPTIONAL);  
   pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);  
}  
```  
  
## Remarks  
 You should not define a global `GetRowsetProperties` method because it could conflict with the one defined by the wizard. Note that this is a wizard-generated method that you get with templated and attributed projects; the attributes do not inject this code.  
  
## OpenDataSource and CloseDataSource  
  
```  
HRESULT OpenDataSource();   
void CloseDataSource();  
```  
  
## Remarks  
 The wizard defines the methods `OpenDataSource` and `CloseDataSource`; `OpenDataSource` calls [CDataSource::OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md).  
  
## See Also  
 [Creating an OLE DB Consumer Using a Wizard](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)