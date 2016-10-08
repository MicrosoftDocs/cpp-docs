---
title: "Error Trapping"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c509b089-a542-44be-8f22-dc5832967a48
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Error Trapping
In databinding, error trapping comes from two sources: error events or error objects.  
  
##  <a name="vcreferrortrappingviaerrorevents"></a> Error Trapping via Error Events  
 Both the ADO data control and the RDO RemoteData control data controls have error events. Typically, you set an error event handler. The event handlers have the following signature.  
  
```  
void CMyDlg::OnErrorAdodc1(long ErrorNumber,  
                           BSTR* FAR Description,  
                           long Scode,  
                           LPCTSTR Source,  
                           LPCTSTR HelpFile,  
                           long HelpContext,  
                           BOOL FAR* fCancelDisplay)  
```  
  
 Usually the Description field is populated, but the ErrorNumber and Scode fields are only populated in the event of COM errors. A standard event handler is to display the Description field in a message box. For example:  
  
```  
{  
   USES_CONVERSION;     
// note: have to include the ATL file ATLConv.h to use the ATL conversion macros  
   ::AfxMessageBox(OLE2T(*Description), MB_OK);  
}  
```  
  
 However, because the ADO data control and RDO RemoteData control are already set up to trap error events, no coding is necessary.  
  
##  <a name="vcreferrortrappingviaerrorobjects"></a> Error Trapping Through Error Objects  
 Both ADO and RDO have error objects. When generating [wrapper classes](../VS_visualcpp/Wrapper-Classes.md), the RDO RemoteData control generates wrappers for error objects, but the ADO data control does not.  
  
 The ADO data control automatically displays ADO error messages.  
  
## See Also  
 [Databinding with ActiveX Controls in Visual C++](../VS_visualcpp/Databinding-with-ActiveX-Controls-in-Visual-C--.md)