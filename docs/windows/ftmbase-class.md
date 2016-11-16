---
title: "FtmBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ftm/Microsoft::WRL::FtmBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FtmBase class"
ms.assetid: 275f3b71-2975-4f92-89e7-d351e96496df
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
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
# FtmBase Class
Represents a free-threaded marshaler object.  
  
## Syntax  
  
```  
  
class FtmBase : public Microsoft::WRL::Implements<  
   Microsoft::WRL::RuntimeClassFlags< WinRtClassicComMix >,   
   Microsoft::WRL::CloakedIid< IMarshal > >;  
```  
  
## Remarks  
 For more information, see the "IMarshal" topic in the "COM Interfaces" subtopic of the "COM Reference" topic in the MSDN Library.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[FtmBase::FtmBase Constructor](../windows/ftmbase-ftmbase-constructor.md)|Initializes a new instance of the FtmBase class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[FtmBase::CreateGlobalInterfaceTable Method](../windows/ftmbase-createglobalinterfacetable-method.md)|Creates a global interface table (GIT).|  
|[FtmBase::DisconnectObject Method](../windows/ftmbase-disconnectobject-method.md)|Forcibly releases all external connections to an object. The object's server calls the object's implementation of this method prior to shutting down.|  
|[FtmBase::GetMarshalSizeMax Method](../windows/ftmbase-getmarshalsizemax-method.md)|Get the upper bound on the number of bytes needed to marshal the specified interface pointer on the specified object.|  
|[FtmBase::GetUnmarshalClass Method](../windows/ftmbase-getunmarshalclass-method.md)|Gets the CLSID that COM uses to locate the DLL containing the code for the corresponding proxy. COM loads this DLL to create an uninitialized instance of the proxy.|  
|[FtmBase::MarshalInterface Method](../windows/ftmbase-marshalinterface-method.md)|Writes into a stream the data required to initialize a proxy object in some client process.|  
|[FtmBase::ReleaseMarshalData Method](../windows/ftmbase-releasemarshaldata-method.md)|Destroys a marshaled data packet.|  
|[FtmBase::UnmarshalInterface Method](../windows/ftmbase-unmarshalinterface-method.md)|Initializes a newly created proxy and returns an interface pointer to that proxy.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[FtmBase::marshaller_ Data Member](../windows/ftmbase-marshaller-data-member.md)|Holds a reference to the free threaded marshaler.|  
  
## Inheritance Hierarchy  
 `FtmBase`  
  
## Requirements  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)