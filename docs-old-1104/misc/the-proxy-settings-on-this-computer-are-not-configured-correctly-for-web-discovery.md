---
title: "The proxy settings on this computer are not configured correctly for Web discovery. | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VB_E_MUSTSPECIFYPROXYSERVER"
  - "vs.WebDiscoveryProxyHelp"
ms.assetid: aea2cc20-9180-47cb-b1ed-78fa5f8a407f
caps.latest.revision: 9
author: "mikeblome"
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
# The proxy settings on this computer are not configured correctly for Web discovery.
This error appears in the Add Web Reference dialog box if you are developing on a machine that is behind a firewall and a proxy server has not been explicitly specified for Internet Explorer connections. You need to explicitly specify the address and port of the proxy server on your network in order to make services outside the firewall available to the Web Browser in the Add Web Reference dialog box. The Auto-detect proxy option for Internet Explorer connections is ignored by .NET Framework. You may need to ask your network administrator for this proxy information.  
  
 For more information on "Automatic Discovery for Firewall and Web Proxy Clients" see: [http://www.microsoft.com/technet/prodtechnol/isa/2004/plan/automaticdiscovery.mspx](http://www.microsoft.com/technet/prodtechnol/isa/2004/plan/automaticdiscovery.mspx)  
  
### To specify a proxy server for Internet Explorer  
  
1.  From the **Tools** menu, choose **Options**.  
  
2.  In the **Options** dialog box, choose **Environment** and then choose **Web Browser.**  
  
3.  Click **Internet Explorer Options**.  
  
4.  On the **Connections** tab, click **LAN Settings**.  
  
5.  Unselect **Automatically detect settings**.  
  
6.  In the **Proxy server** area, select **Use a proxy server for your LAN (These settings will not apply to dial-up or VPN connections).**.  
  
7.  Specify the address and port number that matches your network.  
  
8.  Click **OK**, click **OK**, and then click **OK** again.  
  
9. From the **File** menu, choose **Exit** and then re-open Visual Studio.  
  
## See Also  
 [NIB: Add Web Reference Dialog Box](http://msdn.microsoft.com/en-us/bdf05776-c591-40af-bfd7-e1e2aa1e87b5)   
 [NIB: How to: Add and Remove Web References](http://msdn.microsoft.com/en-us/a7ddaa5d-4672-405b-91b3-39de65d7e3a2)   
 [Programming the Web with XML Web Services](http://msdn.microsoft.com/en-us/2d651a26-73df-4b39-85fa-7913a7d6bee4)