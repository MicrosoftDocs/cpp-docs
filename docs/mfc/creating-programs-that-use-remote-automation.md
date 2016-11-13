---
title: "Creating Programs That Use Remote Automation | Microsoft Docs"
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
  - "Remote Automation, creating programs"
ms.assetid: 8eb31320-1037-4029-b1f3-fdc9406dbaf1
caps.latest.revision: 9
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
# Creating Programs That Use Remote Automation
Any automation object, and any automation controller, is able to use Remote Automation without any change to the source code, without the need for recompilation, and without the need for relinking. Once you have a setup that works locally (that is, on the same machine), you need go through only a few steps to execute it remotely.  
  
#### To execute the Remote Automation object  
  
1.  Register the application on the client machine or machines.  
  
2.  Configure the client access to use remote server.  
  
3.  Install and register the application on the server machine or machines.  
  
4.  Configure the server to allow remote activation.  
  
5.  Install the Automation Manager on the server machine(s).  
  
6.  Run Automation Manager on the server(s).  
  
7.  Run the application on the client(s).  
  
 Step 1 is most easily accomplished by loading and executing the server application on the client machine, as most servers are self registering. If you tested the setup locally beforehand, this stage is already complete. If the server application is not self registering, you may want to make it so. Otherwise, you will need to provide a registration file that the local user can run to perform this step. If you do neither of these things, you or an administrator will need to edit the registry manually, a procedure which is not recommended for all but the most advanced users.  
  
 Step 2 involves the use of the Remote Automation Connection (RAC) Manager. Run RAC Manager and ensure that the server connection tab is uppermost. Next, find the entry for the server object in the **OLE Classes** pane and click on it. Then move to the **Network Address** combo box and enter the name of the server machine on which the remote executable file will be run. For example, you may enter \\\MyServer here. Then choose the appropriate network protocol from the list provided. You may need to check with your network administrator to determine which protocol is recommended. In many cases, this will be TCP/IP. Finally, you may want to choose an authentication level. In most cases, this will be left as (None) or Default. Now right-click the server in the **OLE Classes** pane. This will produce a shortcut menu from which you can select local or remote operation. Select remote.  
  
 Step 3 involves properly installing and registering the server application on the selected server machine or machines. Again, if the application is self registering, executing it once will also register it.  
  
 Step 4 involves configuring the server to allow remote execution. Run RAC Manager on the server machine, and ensure that the **Client Access** tab has the focus. Choose the activation model that you want (typically **Allow Remote Creates by Key**. If you do choose this option, you also need to click the **Allow Remote Activation** check box to set the value of the registry entry to 'Y'). If you are running Windows NT or Windows 2000 and you choose the Allow Remote Creates (ACL) option, you also have the option to edit the ACL by pushing the **Edit ACL** button.  
  
 To allow Remote Automation to work, you then need to ensure that the Automation Manager is installed and running on the server machine or machines. If it is not installed, copy AUTMGR32.EXE to the Windows system directory. For information on how to do so, see [Remote Automation Installation](../mfc/remote-automation-installation.md). To start Remote Automation, execute the Automation Manager. It will display a small status window in which a number of messages will be shown. Once it has started, it will minimize itself. If you want to continue to see status information, you can click the **Automation Manager** tab in the task bar to restore the window.  
  
 The final step is to execute the client application on the client machine. If you have followed the steps above, it should connect to the server object and execute precisely as it did locally, albeit a little slower.  
  
 Notice that the RAC Manager also allows you to switch between Remote Automation and distributed COM (DCOM, on those platforms that support DCOM) with a single click of a radio button. If you choose DCOM, you can set various other configuration options. See the DCOM documentation for further details.  
  
## See Also  
 [Remote Automation](../mfc/remote-automation.md)   
 [Running Remote Automation Using AUTOCLIK and AUTODRIV](../mfc/running-remote-automation-using-autoclik-and-autodriv.md)

