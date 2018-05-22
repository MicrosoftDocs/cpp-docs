---
title: "Connection Point Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "connection points [C++], global functions"
ms.assetid: bcb4bf50-2155-4e20-b8bb-f2908b03a6e7
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Connection Point Global Functions
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Connection Point Global Functions](https://docs.microsoft.com/cpp/atl/reference/connection-point-global-functions).  
  
  
These functions provide support for connection points and sink maps.  
  
> [!IMPORTANT]
>  The functions listed in the following table cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
|||  
|-|-|  
|[AtlAdvise](#atladvise)|Creates a connection between an object's connection point and a client's sink.|  
|[AtlUnadvise](#atlunadvise)|Terminates the connection established through `AtlAdvise`.|  
|[AtlAdviseSinkMap](#atladvisesinkmap)|Advises or unadvises entries in an event sink map.|  
  
##  <a name="atladvise"></a>  AtlAdvise  
 Creates a connection between an object's connection point and a client's sink.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
```
HRESULT AtlAdvise(
    IUnknown* pUnkCP,
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw);
```  
  
### Parameters  
 `pUnkCP`  
 [in] A pointer to the **IUnknown** of the object the client wants to connect with.  
  
 *pUnk*  
 [in] A pointer to the client's **IUnknown**.  
  
 `iid`  
 [in] The GUID of the connection point. Typically, this is the same as the outgoing interface managed by the connection point.  
  
 `pdw`  
 [out] A pointer to the cookie that uniquely identifies the connection.  
  
### Return Value  
 A standard HRESULT value.  
  
### Remarks  
 The sink implements the outgoing interface supported by the connection point. The client uses the `pdw` cookie to remove the connection by passing it to [AtlUnadvise](#atlunadvise).  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#91](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyCtrl.cpp#91)]  
  
##  <a name="atlunadvise"></a>  AtlUnadvise  
 Terminates the connection established through [AtlAdvise](#atladvise).  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
```
HRESULT AtlUnadvise(
    IUnknown* pUnkCP,
    const IID& iid,
    DWORD dw);
```  
  
### Parameters  
 `pUnkCP`  
 [in] A pointer to the **IUnknown** of the object that the client is connected with.  
  
 `iid`  
 [in] The GUID of the connection point. Typically, this is the same as the outgoing interface managed by the connection point.  
  
 `dw`  
 [in] The cookie that uniquely identifies the connection.  
  
### Return Value  
 A standard HRESULT value.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#96](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyCtrl.cpp#96)]  
  
##  <a name="atladvisesinkmap"></a>  AtlAdviseSinkMap  
 Call this function to advise or unadvise all entries in the object's sink event map.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
```
HRESULT AtlAdviseSinkMap(T* pT, bool bAdvise);
```  
  
### Parameters  
 *pT*  
 [in] A pointer to the object containing the sink map.  
  
 `bAdvise`  
 [in] **true** if all sink entries are to be advised; **false** if all sink entries are to be unadvised.  
  
### Return Value  
 A standard HRESULT value.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#92](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyDlg.h#92)]  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)   
 [Connection Point Macros](../../atl/reference/connection-point-macros.md)






