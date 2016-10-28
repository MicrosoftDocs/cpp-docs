---
title: "Troubleshooting Exceptions: Cordova Build Errors"
ms.custom: ""
ms.date: "10/19/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BLD102"
  - "BLD10205"
  - "BLD301"
  - "BLD401"
  - "BLDErr_Build_NodeMissing"
  - "BLDErr_BLD_Win8Required"
ms.assetid: 781c09e3-0704-4b30-9230-036cbdb2dff9
caps.latest.revision: 14
ms.author: "mikejo"
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
# Troubleshooting Exceptions: Cordova Build Errors
This topic describes some of the more common error messages you may see when using Visual Studio Tools for Apache Cordova.  
  
-   [MSBUILD : cordova-build error BLD102: No such file or directory 'config.xml'](#BLD102)  
  
-   [MSBUILD : cordova-build error BLD301: A remote iOS build agent has not been configured](#BLD301)  
  
-   [MSBUILD : cordova-build error BLD401: Could not find module &lt;modulename&gt;](#BLD401)  
  
-   [MSBUILD : cordova-build error BLD10205: Please install Android target](#BLD10205)  
  
-   [BLDErr_Build_NodeMissing Path to Node.js executable could not be determined.](#BLDErr_Build_NodeMissing)  
  
-   [BLDErr_Build_Win8Required](#BLDErr_Build_Win8Required)  
  
 If you need more general help troubleshooting errors in your Cordova app, see [Resolving build errors](https://taco.visualstudio.com/en-us/docs/resolving-build-errors/).  
  
##  <a name="BLD102"></a> MSBUILD : cordova-build error BLD102: No such file or directory 'config.xml'  
 If you see this error, make sure that your project includes a config.xml file in the project root and make sure that your project is on the local machine and not residing on a network share.  
  
 For more info, see this [StackOverflow post](http://stackoverflow.com/questions/27134007/new-cordova-project-gives-the-error-bld00102-no-such-file-or-directory-confi).  
  
##  <a name="BLD301"></a> MSBUILD : cordova-build error BLD301: A remote iOS build agent has not been configured  
 full error string is:  
  
-   MSBUILD : cordova-build error BLD301: A remote iOS build agent has not been configured. Configure one in Tools > Options > Tools for Apache Cordova > Remote Agent Configuration. For details and alternatives see http://go.microsoft.com/fwlink/?LinkID=511904  
  
 For info on installing and configuring the remotebuild agent for iOS, see [iOS Setup Guide.](http://taco.visualstudio.com/en-us/docs/ios-guide/)  
  
##  <a name="BLD401"></a> MSBUILD : cordova-build error BLD401: Could not find module \<modulename>  
 The full error string is:  
  
-   MSBUILD : cordova-build error BLD401: Error : BLD00401 : Could not find module \<modulename. Please Go to Tools --> Options --> Tools for Apache Cordova --> Cordova Tools --> Clear Cordova Cache and try building again.  
  
 You may need to clear the cache and re-install vs-tac. For more info, see [Re-install vs-tac](http://taco.visualstudio.com/en-us/docs/configure-vs-tools-apache-cordova#vstac).  
  
 After you clear the cache, delete the platforms folder in the project. Then try building again.  
  
##  <a name="BLD10205"></a> MSBUILD : cordova-build error BLD10205: Please install Android target  
 If you see this error, make sure you install the required dependencies for the selected target device using the Android SDK Manager (SDK Manager.exe).  
  
 For more info on the required API level and other Android SDK components, see [Install dependencies manually](http://taco.visualstudio.com/en-us/docs/configure-vs-tools-apache-cordova#ThirdParty).  
  
 You should also verify the location that Visual Studio is using to find the Android SDK. To do this, see [Override system environment variables](http://taco.visualstudio.com/en-us/docs/configure-vs-tools-apache-cordova#env-var).  
  
 For more info on installing the right components to use the tools, see [third-party tools](http://taco.visualstudio.com/en-us/docs/install-vs-tools-apache-cordova#choose).  
  
##  <a name="BLDErr_Build_NodeMissing"></a> BLDErr_Build_NodeMissing Path to Node.js executable could not be determined.  
 If Node.js has been installed to a non-default location, Visual Studio may not find it. Re-install Node.js to the default location. For more info, see this [StackOverflow past](http://stackoverflow.com/questions/32203992/vs2015-cordova-apps-blderr-build-nodemissing) and this article on [safely updating Node.js](http://taco.visualstudio.com/en-us/docs/change-node-version/).  
  
##  <a name="BLDErr_Build_Win8Required"></a> BLDErr_Build_Win8Required  
 Windows 8.1 is required to target Windows in an app created using Visual Studio Tools for Apache Cordova.