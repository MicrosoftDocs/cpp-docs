---
title: "Troubleshooting Exceptions: System.ServiceModel.Security.MessageSecurityException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.ServiceModel.Security.MessageSecurityException exception"
  - "MessageSecurityException exception"
ms.assetid: 61ad69a1-ac50-49de-9a7c-8454a84ec5bd
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.ServiceModel.Security.MessageSecurityException
A <xref:System.ServiceModel.Security.MessageSecurityException> exception is thrown when [!INCLUDE[vsindigo](../includes/vsindigo-md.md)] determines that a message is not correctly secured or has been tampered with. The error occurs most frequently when the following conditions are all true:  
  
-   You use a WCF Service Reference over a remote connection such as Remote Desktop Connection or Terminal Services to communicate with a WCF service (.svc) in a Web site or Web application project.  
  
-   You do not have Administrator permissions on the remote site.  
  
-   Requests to localhost on the remote site are being handled by the [!INCLUDE[vstecasp](../includes/vstecasp-md.md)] Development Server.  
  
## Associated Tips  
 **Resolve NTLM authentication problems when using the ASP.Net Development Server.**  
 The [!INCLUDE[vstecasp](../includes/vstecasp-md.md)] Development Server usually has Windows NT Challenge/Response (NTLM) security turned off, which allows anonymous access. By default, when you run a Terminal Services session or use a remote connection, NTLM security is enabled. When NTLM is enabled, all localhost requests are validated against the credentials of the user or process that started the [!INCLUDE[vstecasp](../includes/vstecasp-md.md)] Development Server. This reduces security threats. However, WCF also performs its own authentication, and does not allow a non-administrator account to consume WCF services.  
  
 If a remote user might run the Web site by using the [!INCLUDE[vstecasp](../includes/vstecasp-md.md)] Development Server and also work with a Web service or WCF service, you can either create a custom service binding or turn off NTLM security.  
  
> [!IMPORTANT]
>  Turning off NTLM security is not recommended and could constitute a security threat.  
  
 If you create a custom service binding, you are still protected by NTLM authentication.  
  
 Use the following steps to create a custom service binding for the WCF service.  
  
#### To create a custom service binding for the WCF service hosted inside the ASP.NET Development Server  
  
1.  Open the Web.config file for the WCF service that is generating the exception.  
  
2.  Enter the following information into the Web.config file.  
  
    ```  
    <bindings>  
      <customBinding>  
        <binding name="Service1Binding">  
          <transactionFlow />  
          <textMessageEncoding />  
          <httpTransport authenticationScheme="Ntlm" />  
        </binding>  
      </customBinding>  
    </bindings>  
    ```  
  
3.  Save and close the Web.config file.  
  
4.  In the code for the WCF or Web service, change the endpoint value to the following:  
  
    ```  
    <endpoint address="" binding="customBinding" bindingConfiguration="Service1Binding" contract="IService1" />  
    ```  
  
     This ensures that the service uses the custom binding.  
  
5.  Add a reference to the service in the Web application that accesses the service. (In the **Add Service Reference** dialog box, add a reference to the service as you did with the original service that was generating the exception.)  
  
 You can follow these steps to disable NTLM security when you are working with a WCF service reference.  
  
> [!IMPORTANT]
>  Turning off NTLM security is not recommended and could constitute a security threat.  
  
#### To turn off NTLM security  
  
1.  In **Solution Explorer**, right-click the Web site name, and then click **Property Pages**.  
  
2.  Select **Start Options**, and then clear the **NTLM Authentication** check box.  
  
3.  Click **OK**.  
  
## See Also  
 <xref:System.ServiceModel.Security.MessageSecurityException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)