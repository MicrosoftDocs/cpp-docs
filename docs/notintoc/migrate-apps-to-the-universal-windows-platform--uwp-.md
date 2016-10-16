---
title: "Migrate apps to the Universal Windows Platform (UWP)"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: 5279ab9b-71d9-4be5-81f6-a1f24b06f5fb
caps.latest.revision: 19
ms.author: "shoag"
manager: "wpickett"
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
# Migrate apps to the Universal Windows Platform (UWP)
Make the necessary manual changes to your existing project files for Windows Store 8.1 apps, Windows Phone 8.1 apps, or Universal Windows apps created with Visual Studio 2015 RC, so that they can be used with Visual Studio 2015 RTM. (If you have a Windows 8.1 universal app with both a Windows app project and Windows Phone project, you will need to follow the steps to migrate each project.)  
  
 With the Universal Windows Platform, you now target your app to one or more device families. If you want more information about Universal Windows apps, take a look at this [platform guide](https://msdn.microsoft.com/library/windows/apps/dn894631.aspx).  
  
-   [Migrate your existing C#/VB Windows Store 8.1 or Windows Phone 8.1 apps](#MigrateCSharp) to use the Universal Windows Platform.  
  
-   [Migrate your existing C++ Windows Store 8.1 or Windows Phone 8.1 apps](#MigrateCPlusPlus) to use the Universal Windows Platform.  
  
-   [Changes required for existing Universal Windows apps created with Visual Studio 2015 RC](#PreviousVersions).  
  
-   [Changes required for existing unit test projects for Universal Windows apps created with Visual Studio 2015 RC](#MigrateUnitTest).  
  
 If you don’t want to make all these changes, learn how to [port your existing apps](http://msdn.microsoft.com/library/windows/apps/xaml/mt238321.aspx) into a new Universal Windows project.  
  
##  <a name="MigrateCSharp"></a> Migrate your C#/VB Windows Store 8.1 or Windows Phone 8.1 apps to use the Universal Windows Platform  
  
#### Migrate your C#/VB project files  
  
1.  To find which Universal Windows Platform you have installed, open this folder: **\Program Files (x86)\Windows Kits\10\Platforms\UAP**. This contains a list of folders for each Universal Windows Platform that is installed. The folder name is the Universal Windows Platform version that you have installed. For example, this Windows 10 device has version 10.0.10240.0 of the Universal Windows Platform installed.  
  
     ![Open the folder to view the versions installed](../notintoc/media/uap_uwpversions.png "UAP_UWPVersions")  
  
     More than one version of the Universal Windows Platform can be installed. We recommend that you use the latest version for your app.  
  
2.  Using File Explorer, go to the folder where your UWP project is stored. Create a .json file in this folder. Name the file: project.json, and then add the following content to this file:  
  
    ```json  
    {  
      "dependencies": {  
        "Microsoft.ApplicationInsights": "1.0.0",  
        "Microsoft.ApplicationInsights.PersistenceChannel": "1.0.0",  
        "Microsoft.ApplicationInsights.WindowsApps": "1.0.0",  
        "Microsoft.NETCore.UniversalWindowsPlatform": "5.0.0"  
      },  
      "frameworks": {  
        "uap10.0": {}  
      },  
      "runtimes": {  
        "win10-arm": {},  
        "win10-arm-aot": {},  
        "win10-x86": {},  
        "win10-x86-aot": {},  
        "win10-x64": {},  
        "win10-x64-aot": {}  
      }  
    }  
  
    ```  
  
3.  Create a file called default.rd.xml with the following contents. If you have a VB project, add this file to the My Project directory for your project. If you have a C# project, add this file to the Properties directory for your project.  
  
    ```xml  
    <?xml version="1.0"?>  
    <!-- This file contains Runtime Directives used by .NET Native. The defaults here are suitable for most developers. However, you can modify these parameters to modify the behavior of the .NET Native optimizer. Runtime Directives are documented at http://go.microsoft.com/fwlink/?LinkID=391919 To fully enable reflection for App1.MyClass and all of its public/private members <Type Name="App1.MyClass" Dynamic="Required All"/> To enable dynamic creation of the specific instantiation of AppClass<T> over System.Int32 <TypeInstantiation Name="App1.AppClass" Arguments="System.Int32" Activate="Required Public" /> Using the Namespace directive to apply reflection policy to all the types in a particular namespace <Namespace Name="DataClasses.ViewModels" Seralize="All" /> -->  
    <Directives xmlns="http://schemas.microsoft.com/netfx/2013/01/metadata"><Application>  
    <!-- An Assembly element with Name="*Application*" applies to all assemblies in the application package. The asterisks are not wildcards. -->  
    <Assembly Dynamic="Required All" Name="*Application*"/>  
    <!-- Add your application specific runtime directives here. -->  
    </Application></Directives>  
    ```  
  
4.  Open your solution that contains your existing Windows Store 8.1 app or Windows Phone 8.1 app in Visual Studio.  
  
5.  Right-click your existing project for your app in Solution Explorer, then select **Unload Project**. After the project is unloaded, right-click the project file again and choose to edit the .csproj or .vbproj file.  
  
     ![Right click the project and choose Edit](../notintoc/media/uap_editproject.png "UAP_EditProject")  
  
6.  Find the \<PropertyGroup> element that contains the \<TargetPlatformVersion> element with a value of 8.1. Do the following steps for this \<PropertyGroup> element:  
  
    1.  Set the value of the \<Platform> element to: **x86**.  
  
    2.  Add a \<TargetPlatformIdentifier> element and set its value to: **UAP**.  
  
    3.  Change the existing value of the \<TargetPlatformVersion> element to be the value of the Universal Windows Platform version that you installed. Also add a \<TargetPlatformMinVersion> element and give it the same value.  
  
    4.  Change the value of the \<MinimumVisualStudioVersion> element to: **14**.  
  
    5.  Replace the \<ProjectTypeGuids> element as shown below:  
  
         For C#:  
  
        ```xml  
        <ProjectTypeGuids>{A5A43C5B-DE2A-4C0C-9213-0A381AF9435A};{FAE04EC0-301F-11D3-BF4B-00C04F79EFBC}</ProjectTypeGuids>  
        ```  
  
         For VB:  
  
        ```xml  
        <ProjectTypeGuids>{A5A43C5B-DE2A-4C0C-9213-0A381AF9435A};{F184B08F-C81C-45F6-A57F-5ABD9991F28F}</ProjectTypeGuids>  
        ```  
  
    6.  Add an \<EnableDotNetNativeCompatibleProfile> element and set its value to: **true**.  
  
    7.  The default asset scale for Universal Windows apps is 200. If your project includes assets not scaled at 200, you will need to add a \<UapDefaultAssetScale> element with the value of the scale of your assets to this PropertyGroup. Learn more about [assets and scales](http://msdn.microsoft.com/library/jj679352.aspx).  
  
         Now your \<PropertyGroup> element should look similar to this example:  
  
        ```xml  
        <PropertyGroup>  
            …  
             <Platform Condition=" '$(Platform)' == '' ">x86</Platform>  
             <TargetPlatformVersion>10.0.10240.0</TargetPlatformVersion>  
             <TargetPlatformMinVersion>10.0.10240.0</TargetPlatformMinVersion>  
             <TargetPlatformIdentifier>UAP</TargetPlatformIdentifier>  
             <MinimumVisualStudioVersion>14</MinimumVisualStudioVersion>  
             <ProjectTypeGuids>{A5A43C5B-DE2A-4C0C-9213-0A381AF9435A};{FAE04EC0-301F-11D3-BF4B-00C04F79EFBC}</ProjectTypeGuids>  
        <EnableDotNetNativeCompatibleProfile>true</EnableDotNetNativeCompatibleProfile>  
             <UapDefaultAssetScale>100</UapDefaultAssetScale>  
             …  
        </PropertyGroup>  
        ```  
  
7.  Replace any instances of 12.0 with 14.0 to reflect the version of Visual Studio that you are now using. Like these instances:  
  
    ```xml  
    <Project Tools Version="14.0" DefaultTargets="Build" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">  
    ```  
  
    ```  
    <PropertyGroup Condition=" '$(VisualStudioVersion)' == '' or '$(VisualStudioVersion)' < '14.0' ">  
        <VisualStudioVersion>14.0</VisualStudioVersion>  
    ```  
  
8.  Find \<PropertyGroup> elements that are configured for the AnyCPU platform as part of the Condition attribute. Remove these elements and all of their children. AnyCPU is not supported for Windows 10 apps in Visual Studio 2015. For example, you should remove \<PropertyGroup> elements like these ones:  
  
    ```xml  
    <PropertyGroup Condition=" '$(Configuration)|$(Platform)' == 'Debug|AnyCPU' ">  
        <PlatformTarget>AnyCPU</PlatformTarget>  
        <DebugSymbols>true</DebugSymbols>  
        <DebugType>full</DebugType>  
        <Optimize>false</Optimize>  
        <OutputPath>bin\Debug\</OutputPath>  
        <DefineConstants>DEBUG;TRACE;NETFX_CORE;WINDOWS_UAP</DefineConstants>  
        <ErrorReport>prompt</ErrorReport>  
        <WarningLevel>4</WarningLevel>  
      </PropertyGroup>  
      <PropertyGroup Condition=" '$(Configuration)|$(Platform)' == 'Release|AnyCPU' ">  
        <PlatformTarget>AnyCPU</PlatformTarget>  
        <DebugType>pdbonly</DebugType>  
        <Optimize>true</Optimize>  
        <OutputPath>bin\Release\</OutputPath>  
        <DefineConstants>TRACE;NETFX_CORE;WINDOWS_UAP</DefineConstants>  
        <ErrorReport>prompt</ErrorReport>  
        <WarningLevel>4</WarningLevel>  
      </PropertyGroup>  
    ```  
  
9. For each remaining \<PropertyGroup> element, check if the element has a Condition attribute with a Release configuration. If it does, but it does not contain a \<UseDotNetNativeToolchain> element, then add one. Set the value for the \<UseDotNetNativeToolchain> element to true, like this:  
  
    ```xml  
    <PropertyGroup Condition="'$(Configuration)|$(Platform)' == 'Release|x64'">  
        <OutputPath>bin\x64\Release\</OutputPath>  
        <DefineConstants>TRACE;NETFX_CORE;WINDOWS_UAP</DefineConstants>  
        <Optimize>true</Optimize>  
        <NoWarn>;2008</NoWarn>  
        <DebugType>pdbonly</DebugType>  
        <PlatformTarget>x64</PlatformTarget>  
        <UseVSHostingProcess>false</UseVSHostingProcess>  
        <ErrorReport>prompt</ErrorReport>  
        <Prefer32Bit>true</Prefer32Bit>  
        <UseDotNetNativeToolchain>true</UseDotNetNativeToolchain>  
      </PropertyGroup>  
    ```  
  
10. For Windows Phone projects only, remove the \<PropertyGroup> element that contains a \<TargetPlatformIdentifier> element with a value of WindowsPhoneApp. Also remove any children of this element:  
  
    ```xml  
    <PropertyGroup Condition=" '$(TargetPlatformIdentifier)' == '' ">  
      <TargetPlatformIdentifier>WindowsPhoneApp</TargetPlatformIdentifier>  
    </PropertyGroup>  
    ```  
  
11. Find the \<ItemGroup> element that contains the \<AppxManifest> element. Add the following \<None> element as a child of the \<ItemGroup> element:  
  
    ```xml  
    <None Include="project.json" />  
    ```  
  
12. Find the \<ItemGroup> element that contains other assets that are added to your project such as logo .png files (\<Content Include="Assets\Logo.scale-100.png" />). Add the following \<Content> child element to this \<ItemGroup> element:  
  
     **For C#:**  
  
    ```xml  
    <Content Include="Properties\default.rd.xml" />  
    ```  
  
     **For VB:**  
  
    ```xml  
    <Content Include="My Project\default.rd.xml" />  
    ```  
  
13. Find the \<ItemGroup> element that includes \<Reference> children elements to NuGet packages. Take note of the NuGet packages that you use because you will need to download them with the NuGet package manager after your project is reloaded. Remove this \<ItemGroup> along with its children. For example, a UWP project could have the following NuGet packages that need to be removed:  
  
    ```xml  
    <ItemGroup>  
        <Reference Include="Microsoft.ApplicationInsights, Version=0.14.3.177, Culture=neutral, PublicKeyToken=31bf3856ad364e35, processorArchitecture=MSIL">  
          <HintPath>..\packages\Microsoft.ApplicationInsights.0.14.3-build00177\lib\portable-win81+wpa81\Microsoft.ApplicationInsights.dll</HintPath>  
          <Private>True</Private>  
        </Reference>  
        <Reference Include="Microsoft.ApplicationInsights.Extensibility.Windows, Version=0.14.3.177, Culture=neutral, PublicKeyToken=31bf3856ad364e35, processorArchitecture=MSIL">  
          <HintPath>..\packages\Microsoft.ApplicationInsights.WindowsApps.0.14.3-build00177\lib\win81\Microsoft.ApplicationInsights.Extensibility.Windows.dll</HintPath>  
          <Private>True</Private>  
        </Reference>  
        <Reference Include="Microsoft.ApplicationInsights.PersistenceChannel, Version=0.14.3.186, Culture=neutral, PublicKeyToken=31bf3856ad364e35, processorArchitecture=MSIL">  
          <HintPath>..\packages\Microsoft.ApplicationInsights.PersistenceChannel.0.14.3-build00177\lib\portable-win81+wpa81\Microsoft.ApplicationInsights.PersistenceChannel.dll</HintPath>  
          <Private>True</Private>  
        </Reference>  
        <Reference Include="System.Numerics.Vectors, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a, processorArchitecture=MSIL">  
          <HintPath>..\packages\System.Numerics.Vectors.4.0.0\lib\win8\System.Numerics.Vectors.dll</HintPath>  
          <Private>True</Private>  
        </Reference>  
        <Reference Include="System.Numerics.Vectors.WindowsRuntime, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a, processorArchitecture=MSIL">  
          <HintPath>..\packages\System.Numerics.Vectors.4.0.0\lib\win8\System.Numerics.Vectors.WindowsRuntime.dll</HintPath>  
          <Private>True</Private>  
        </Reference>  
      </ItemGroup>  
    ```  
  
14. Save your changes.  
  
15. Close the .csproj or .vbproj file.  
  
16. Right-click on your project in Solution Explorer, and choose Reload Project from the context menu. All the files in your project should now be displayed in Solution Explorer.  
  
17. Use the NuGet manager to add back the packages that you deleted in an earlier step.  
  
     Now you need to follow the steps to [update the package manifest files](#PackageManifest) for all your Windows Store 8.1 or Windows Phone 8.1 projects.  
  
##  <a name="MigrateCPlusPlus"></a> Migrate your C++ Windows Store 8.1 or Windows Phone 8.1 apps to use the Universal Windows Platform  
  
#### Migrate your C++ project files  
  
1.  To find which Universal Windows Platform you have installed, open this folder: **\Program Files (x86)\Windows Kits\10\Platforms\UAP**. This contains a list of folders for each Universal Windows Platform that is installed. The folder name is the Universal Windows Platform version that you have installed. For example, this Windows 10 device has version 10.0.10240.0 of the Universal Windows Platform installed.  
  
     ![Open the folder to view the versions installed](../notintoc/media/uap_uwpversions.png "UAP_UWPVersions")  
  
     More than one version of the Universal Windows Platform can be installed. We recommend that you use the latest version for your app.  
  
2.  Open your solution that contains your existing C++ Windows Store 8.1 app or Windows Phone 8.1 app in Visual Studio.  
  
     Right-click your existing project in solution explorer, then select **Unload Project**. After the project is unloaded, right-click the project file again and choose to edit the .vcxproj file.  
  
     ![Right&#45;click project file and choose to edit](../notintoc/media/uap_editcplusproject.png "UAP_EditCPlusProject")  
  
3.  Find the \<PropertyGroup> element that contains the \<ApplicationTypeRevision> element with a value of 8.1. Do the following steps for this \<PropertyGroup> element:  
  
    1.  Add a \<WindowsTargetPlatformVersion> element and a \<WindowsTargetPlatformMinVersion> element and give them the value of the Universal Windows Platform version that you installed.  
  
    2.  Update the value of ApplicationTypeRevision element from 8.1 to 10.0.  
  
    3.  Change the value of the \<MinimumVisualStudioVersion> element to: 14.  
  
    4.  Add an \<EnableDotNetNativeCompatibleProfile> element and set its value to: true.  
  
    5.  The default asset scale for Universal Windows apps is 200. If your project includes assets not scaled at 200, you will need to add a \<UapDefaultAssetScale> element with the value of the scale of your assets to this PropertyGroup. Learn more about [assets and scales](http://msdn.microsoft.com/library/jj679352.aspx).  
  
    6.  For Windows Phone projects only, change the value of \<ApplicationType> from Windows Phone to Windows Store.  
  
         Now your \<PropertyGroup> element should look similar to this example:  
  
        ```xml  
        <PropertyGroup>  
            …  
                  <WindowsTargetPlatformVersion>10.0.10240.0</WindowsTargetPlatformVersion>  
        <WindowsTargetPlatformMinVersion>10.0.10240.0</WindowsTargetPlatformMinVersion>  
             <ApplicationType>Windows Store</ApplicationType>  
             <ApplicationTypeRevision>10.0</ApplicationTypeRevision>  
             <MinimumVisualStudioVersion>14</MinimumVisualStudioVersion>  
             <EnableDotNetNativeCompatibleProfile>true</EnableDotNetNativeCompatibleProfile>  
             <UapDefaultAssetScale>100</UapDefaultAssetScale>  
             …  
        </PropertyGroup>  
        ```  
  
4.  Change all instances of the \<PlatformToolset> element to have the value v140. For example:  
  
    ```xml  
    <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'" Label="Configuration">  
        <ConfigurationType>Application</ConfigurationType>  
        <UseDebugLibraries>false</UseDebugLibraries>  
        <WholeProgramOptimization>true</WholeProgramOptimization>  
        <PlatformToolset>v140</PlatformToolset>  
        <UseDotNetNativeToolchain>true</UseDotNetNativeToolchain>  
      </PropertyGroup>  
    ```  
  
5.  For each remaining \<PropertyGroup> element, check if the element has a Condition attribute with a Release configuration. If it does, but it does not contain a \<UseDotNetNativeToolchain> element, then add one. Set the value for the \<UseDotNetNativeToolchain> element to true, like this:  
  
    ```xml  
    <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|X64'" Label="Configuration">  
        <ConfigurationType>Application</ConfigurationType>  
        <UseDebugLibraries>false</UseDebugLibraries>  
        <WholeProgramOptimization>true</WholeProgramOptimization>  
        <PlatformToolset>v140</PlatformToolset>  
        <UseDotNetNativeToolchain>true</UseDotNetNativeToolchain>  
      </PropertyGroup>  
  
    ```  
  
6.  Save your changes. Then close the project file.  
  
7.  Right-click on your project file in Solution Explorer, and choose Reload Project from the context menu. All the files in your project should now be displayed in Solution Explorer.  
  
     Now you need to follow the steps to [update the package manifest files](#PackageManifest) for all your Windows Store 8.1 or Windows Phone 8.1 projects.  
  
##  <a name="PackageManifest"></a> Update your package manifest file for all your Windows Store 8.1 or Windows Phone 8.1 projects  
 You must update the package manifest file for each project in your solution.  
  
#### Update your package manifest file  
  
1.  Open the Package.appxmanifest file in your project. You need to edit the Package.AppxManifest file for each of your Windows Store and Windows Phone projects.  
  
2.  You need to update the \<Package> element with the new schemas based on your existing project type. First remove the schemas below based on whether you have a Windows Store or Windows Phone project.  
  
     **OLD for Windows Store project:** Your \<Package> element will look similar to this one.  
  
    ```xml  
    <Package  
        xmlns="http://schemas.microsoft.com/appx/2010/manifest"     
        xmlns:m2="http://schemas.microsoft.com/appx/2013/manifest">  
  
    ```  
  
     **OLD for Windows Phone project:** Your \<Package> element will look similar to this one.  
  
    ```xml  
    <Package  
        xmlns="http://schemas.microsoft.com/appx/2010/manifest"     
    xmlns:m2="http://schemas.microsoft.com/appx/2013/manifest"  
    xmlns:m3="http://schemas.microsoft.com/appx/2014/manifest"  
    xmlns:mp="http://schemas.microsoft.com/appx/2014/phone/manifest">  
    ```  
  
     **NEW for Universal Windows Platform:** Add the schemas below to your \<Package> element. Remove any associated namespace identifier prefixes from elements for the schemas that you just removed. Update the IgnorableNamespaces property to: uap mp. Your new \<Package> element should look similar to this one.  
  
    ```xml  
    <Package  
        xmlns="http://schemas.microsoft.com/appx/manifest/foundation/windows10"  
        xmlns:uap="http://schemas.microsoft.com/appx/manifest/uap/windows10"  
        xmlns:mp="http://schemas.microsoft.com/appx/2014/phone/manifest"  
       IgnorableNamespaces= "uap mp">  
  
    ```  
  
3.  Add a \<Dependencies> child element to the \<Package> element. Then add a \<TargetDeviceFamily> child element to this \<Dependencies> element with Name, MinVersion, and MaxVersionTested attributes. Give the Name attribute the value: Windows.Universal. Give the MinVersion and MaxVersionTested the value of the Universal Windows Platform version you have installed. This element should look similar to this:  
  
    ```xml  
    <Dependencies>  
    <TargetDeviceFamily Name="Windows.Universal" MinVersion="10.0.10069.0" MaxVersionTested="10.0.10069.0" />  
    </Dependencies>  
    ```  
  
4.  **For Windows Store only:** You need to add a \<mp:PhoneIdentity> child element to the \<Package> element. Add a PhoneProductId attribute and a PhonePublisherId attribute. Set the PhoneProductId to have the same value as the Name attribute in the \<Identity> element. Set the PhonePublishedId value to: 00000000-0000-0000-0000-000000000000. Like this:  
  
    ```xml  
    <Identity Name="aa3815a1-2d97-4c71-8c99-578135b28cd8" Publisher="CN=xxxxxxxx" Version="1.0.0.0" />   
    <mp:PhoneIdentity PhoneProductId="aa3815a1-2d97-4c71-8c99-578135b28cd8" PhonePublisherId="00000000-0000-0000-0000-000000000000"/>  
    ```  
  
5.  Find the \<Prerequisites> element and delete this element and any child elements that it has.  
  
6.  Add the **uap** namespace to the following \<Resource> elements: Scale, DXFeatureLevel. For example:  
  
    ```xml  
    <Resources>  
      <Resource Language="en-us"/>  
     <Resource uap:Scale="180"/>  
     <Resource uap:DXFeatureLevel="dx11"/>  
    </Resources>  
  
    ```  
  
7.  Add the **uap** namespace to the following \<Capability> elements: documentsLibrary, picturesLibrary, videosLibrary, musicLibrary, enterpriseAuthentication, sharedUserCertificates, removableStorage, appointments, and contacts. For example:  
  
    ```xml  
    <Capabilities>  
      <uap:Capability Name="documentsLibrary"/>  
      <uap:Capability Name="removableStorage"/>  
    </Capabilities>  
  
    ```  
  
8.  Add the **uap** namespace to the \<VisualElements> element and any of its child elements. For example:  
  
    ```xml  
    <uap:VisualElements  
        DisplayName="My WWA App"  
        Square150x150Logo="images/150x150.png"  
        Square44x44Logo="images/44x44.png"  
        Description="My WWA App"  
        BackgroundColor="#777777">  
      <uap:SplashScreen Image="images/splash.png"/>  
    </uap:VisualElements>  
  
    ```  
  
     **Only applies to Windows Store:** The tile size names have changed. Change the attributes in the \<VisualElements> element to reflect the new converged tile sizes. 70x70 becomes 71x71, and 30x30 becomes 44x44.  
  
     **OLD:** tile size names  
  
    ```xml  
    <m2:VisualElements  
        …  
        Square30x30Logo="Assets\SmallLogo.png"  
        …>  
     <m2:DefaultTile  
          …  
          Square70x70Logo="images/70x70.png">  
    </m2:VisualElements>  
  
    ```  
  
     **NEW:** tile size names  
  
    ```xml  
    <uap:VisualElements  
        …  
        Square44x44Logo="Assets\SmallLogo.png"  
        …>  
     <uap:DefaultTile  
          …  
          Square71x71Logo="images/70x70.png">  
    </uap:VisualElements>  
  
    ```  
  
9. Add the **uap** namespace to the \<ApplicationContentUriRules> and all its child elements. For example:  
  
    ```xml  
    <uap:ApplicationContentUriRules>  
      <uap:Rule Type="include" Match="https://www.microsoft.com/"/>  
      <uap:Rule Type="exclude" Match="*.pdf"/>  
    </uap:ApplicationContentUriRules>  
  
    ```  
  
10. Add the **uap** namespace to the following \<Extension> elements and all of its child elements: windows.accountPictureProvide,  windows.alarm, windows.appointmentsProvider windows.autoPlayContent,  windows.autoPlayDevice, windows.cachedFileUpdate, windows.cameraSettings, windows.fileOpenPicker, windows.fileTypeAssociation, windows.fileSavePicke, windows.lockScreenCall, windows.printTaskSettings, windows.protocol, windows.search, windows.shareTarget. For example:  
  
    ```xml  
    <Extensions>  
      <uap:Extension Category="windows.alarm"/>  
      <uap:Extension Category="windows.search" EntryPoint="MyActivateableClassId.baz"/>  
      <uap:Extension Category="windows.protocol">  
        <uap:Protocol Name="mailto" DesiredView="useHalf">  
         <uap:DisplayName>MailTo Protocol</uap:DisplayName>  
        </uap:Protocol>  
      </uap:Extension>  
    </Extensions>  
  
    ```  
  
11. Add the **uap** namespace to background tasks of type chatMessageNotification. For example:  
  
    ```xml  
    <Extension Category="windows.backgroundTasks" EntryPoint="Fabrikam.BackgroundTask" Executable="MyBackground.exe">  
     <BackgroundTasks ServerName="MyBackgroundTasks">  
        <uap:Task Type="chatMessageNotification"/>  
      </BackgroundTasks>  
    </Extension>  
  
    ```  
  
12. Change the framework dependencies. Add a Publisher name to all \<PackageDependency> elements, and specify a MinVersion if it’s not already specified.  
  
     **OLD:** \<PackageDependency> element  
  
    ```xml  
    <Dependencies>  
     <PackageDependency Name="Microsoft.VCLibs.120.00" />  
    </Dependencies>  
  
    ```  
  
     **NEW:** \<PackageDependency> element  
  
    ```xml  
    <Dependencies>  
     <PackageDependency  
          Name="Microsoft.VCLibs.120.00"  
          Publisher="CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US"  
          MinVersion="12.0.30113.0" />  
    </Dependencies>  
  
    ```  
  
     Use the appropriate Publisher and MinVersion values for the actual framework that you are using. Be aware that these names might change for Windows 10.  
  
13. Replace the gattCharacteristicNotification and rfcommConnection background type tasks with a Bluetooth type task. For example:  
  
     **OLD:**  
  
    ```xml  
    <Extension Category="windows.backgroundTasks" EntryPoint="Fabrikam.BackgroundTask" Executable="MyBackground.exe">  
    <BackgroundTasks ServerName="MyBackgroundTasks">  
                <Task Type="rfcommConnection"/>  
               <Task Type="gattCharacteristicNotification"/>  
    </BackgroundTasks>  
    </Extension>  
    ```  
  
     **NEW:** With the Bluetooth type task.  
  
    ```xml  
    <Extension Category="windows.backgroundTasks" EntryPoint="Fabrikam.BackgroundTask" Executable="MyBackground.exe">  
    <BackgroundTasks ServerName="MyBackgroundTasks">  
               <Task Type="bluetooth"/>  
    </BackgroundTasks>  
    </Extension>  
    ```  
  
14. Replace the Bluetooth device capabilities bluetooth.rfcomm and bluetooth.genericAttributeProfile with a generic Bluetooth capability. For example:  
  
     **OLD:**  
  
    ```xml  
    <Capabilities>  
      <m2:DeviceCapability Name="bluetooth.rfcomm">  
        <m2:Device Id="any">  
         <m2:Function Type="serviceId:34B1CF4D-1069-4AD6-89B6-E161D79BE4D8"/>  
        </m2:Device>  
      </m2:DeviceCapability>  
      <m2:DeviceCapability Name="bluetooth.genericAttributeProfile">  
        <m2:Device Id="any">  
         <m2:Function Type="name:heartRate"/>  
        </m2:Device>  
      </m2:DeviceCapability>  
    </Capabilities>  
    ```  
  
     **NEW:** Replaced with a generic Bluetooth capability.  
  
    ```xml  
    <Capabilities>  
      <uap:DeviceCapability Name="bluetooth"/>  
    </Capabilities>  
  
    ```  
  
15. Remove any deprecated elements.  
  
    1.  These attributes for \<VisualElements> are deprecated and should be removed:  
  
        -   The \<VisualElements> attributes: ForegroundText, ToastCapable  
  
        -   The \<DefaultTile> attribute DefaultSize  
  
        -   The \<ApplicationView> element  
  
         For example:  
  
        ```xml  
        <m2:VisualElements  
            …  
            ForegroundText="dark"  
            ToastCapable="true">  
        <m2:DefaultTile DefaultSize="square150x150Logo"/>  
          <m2:ApplicationView MinWidth="width320"/>  
        </m2:VisualElements>  
  
        ```  
  
    2.  Remove Windows.contact and windows.contactPicker extensions, and all elements under these extensions.  
  
16. Save the Package.appxmanifest file. Then close Visual Studio.  
  
17. You need to remove some hidden files before you can reopen your solution.  
  
    1.  Open File Explorer, click **View** in the toolbar and select **Hidden items** and **File name extensions**. Open this folder on your machine: \<path for the location of your solution>\\.vs\\{Project Name}\v14. If there is a file with a .suo file extension, then delete it.  
  
    2.  Now go back to the folder where your solution is located. Open any folders for projects that exist in your solution. If a file inside any of these project folders has a .csproj.user or .vbproj.user extension, then delete it.  
  
         You can now reopen your solution in Visual Studio. You are ready to code, build, and debug your app using the Universal Windows Platform.  
  
         Learn how to [adapt your code](https://msdn.microsoft.com/library/windows/apps/dn954974.aspx) to take advantage of what’s new with the Universal Windows Platform.  
  
##  <a name="PreviousVersions"></a> Changes required for existing Universal Windows apps created with Visual Studio 2015 RC  
 If you created Windows 10 universal apps with Visual Studio 2015 RC, you need to retarget your project to use the version of the Universal Windows Platform installed with the latest release of Visual Studio 2015. Any previous version is not supported. The changes required are different depending on the language you used to create your app:  
  
-   [C#/VB apps](#RCUpdate10CSharp)  
  
-   [C++ apps](#RCUpdate10CPlusPlus)  
  
###  <a name="RCUpdate10CSharp"></a> Update your C#/VB projects to use the latest Universal Windows Platform  
 When you open your solution for your existing app, you will see that your app requires an update:  
  
 ![View your project in Solution Explorer](../notintoc/media/uwp_updaterequired.png "UWP_UpdateRequired")  
  
 If you choose to reload this project from Solution Explorer, you will see this dialog:  
  
 ![Retarget your app to use the correct SDK](../notintoc/media/missingsdkforuap.png "MissingSDKforUAP")  
  
 Because the Universal Windows Platform SDK for your project is now unsupported, you will not be able to install it. Just click OK and then follow the steps below.  
  
##### Update your C#/VB projects to use the latest Universal Windows Platform  
  
1.  To find which Universal Windows Platform you have installed, open this folder: **\Program Files (x86)\Windows Kits\10\Platforms\UAP**. This contains a list of folders for each Universal Windows Platform that is installed. The folder name is the Universal Windows Platform version that you have installed. For example, this Windows 10 device has version 10.0.10240.0 of the Universal Windows Platform installed.  
  
     ![Open the folder to view the versions installed](../notintoc/media/uap_uwpversions.png "UAP_UWPVersions")  
  
     More than one version of the Universal Windows Platform can be installed. We recommend that you use the latest version for your app.  
  
2.  Using File Explorer, go to the folder where your UWP project is stored. Delete the file packages.config, and create a new .json file in this folder. Name the file: project.json, and then add the following content to this file:  
  
    ```json  
  
    {  
      "dependencies": {  
        "Microsoft.ApplicationInsights": "1.0.0",  
        "Microsoft.ApplicationInsights.PersistenceChannel": "1.0.0",  
        "Microsoft.ApplicationInsights.WindowsApps": "1.0.0",  
        "Microsoft.NETCore.UniversalWindowsPlatform": "5.0.0"  
      },  
      "frameworks": {  
        "uap10.0": {}  
      },  
      "runtimes": {  
        "win10-arm": {},  
        "win10-arm-aot": {},  
        "win10-x86": {},  
        "win10-x86-aot": {},  
        "win10-x64": {},  
        "win10-x64-aot": {}  
      }  
    }  
  
    ```  
  
3.  With Visual Studio, open your solution that contains your C#/VB Universal Windows app. You will see that your project file (.csproj or .vbproj file) needs to be updated. Right-click the project file and choose to edit this file.  
  
     ![Right click the project and choose Edit](../notintoc/media/uap_editproject.png "UAP_EditProject")  
  
4.  Find the \<PropertyGroup> element that contains the \<TargetPlatformVersion> and \<TargetPlatformMinVersion> elements. Change the existing value of the \<TargetPlatformVersion> and \<TargetPlatformMinVersion> elements to be the same version of the Universal Windows Platform that you have installed.  
  
     The default asset scale for Universal Windows apps is 200. Projects created with Visual Studio 2015 RC included assets scaled at 100, you will need to add a \<UapDefaultAssetScale> element with a value of 100 to this PropertyGroup. Learn more about [assets and scales](http://msdn.microsoft.com/library/jj679352.aspx).  
  
5.  If you added any references to UWP Extension SDKs (for example: the Windows Mobile SDK), you will need to update the SDK version. For example this \<SDKReference> element:  
  
    ```xml  
    <SDKReference Include="WindowsMobile, Version=10.0.0.1">  
          <Name>Microsoft Mobile Extension SDK for Universal App Platform</Name>  
    </SDKReference>  
  
    ```  
  
     Should be changed to this:  
  
    ```xml  
    <SDKReference Include="WindowsMobile, Version=10.0.10240.0">  
          <Name>Microsoft Mobile Extension SDK for Universal App Platform</Name>  
    </SDKReference>  
  
    ```  
  
6.  Find the \<Target> element with a name attribute that has the value: EnsureNuGetPackageBuildImports. Delete this element and all its children.  
  
    ```xml  
    <Target Name="EnsureNuGetPackageBuildImports" BeforeTargets="PrepareForBuild">  
        <PropertyGroup>  
          <ErrorText>This project references NuGet package(s) that are missing on this computer. Use NuGet Package Restore to download them.  For more information, see http://go.microsoft.com/fwlink/?LinkID=322105. The missing file is {0}.</ErrorText>  
        </PropertyGroup>  
        <Error Condition="!Exists('..\packages\Microsoft.Diagnostics.Tracing.EventSource.Redist.1.1.16-beta\build\portable-net45+win8+wpa81\Microsoft.Diagnostics.Tracing.EventSource.Redist.targets')" Text="$([System.String]::Format('$(ErrorText)', '..\packages\Microsoft.Diagnostics.Tracing.EventSource.Redist.1.1.16-beta\build\portable-net45+win8+wpa81\Microsoft.Diagnostics.Tracing.EventSource.Redist.targets'))" />  
        <Error Condition="!Exists('..\packages\Microsoft.ApplicationInsights.0.14.3-build00177\build\portable-win81+wpa81\Microsoft.ApplicationInsights.targets')" Text="$([System.String]::Format('$(ErrorText)', '..\packages\Microsoft.ApplicationInsights.0.14.3-build00177\build\portable-win81+wpa81\Microsoft.ApplicationInsights.targets'))" />  
    </Target>  
    ```  
  
7.  Find and delete the \<Import> elements with Project and Condition attributes that reference Microsoft.Diagnostics.Tracing.EventSource and Microsoft.ApplicationInsights, like this:  
  
    ```xml  
    <Import Project="..\packages\Microsoft.Diagnostics.Tracing.EventSource.Redist.1.1.16-beta\build\portable-net45+win8+wpa81\Microsoft.Diagnostics.Tracing.EventSource.Redist.targets" Condition="Exists('..\packages\Microsoft.Diagnostics.Tracing.EventSource.Redist.1.1.16-beta\build\portable-net45+win8+wpa81\Microsoft.Diagnostics.Tracing.EventSource.Redist.targets')" />  
    <Import Project="..\packages\Microsoft.ApplicationInsights.0.14.3-build00177\build\portable-win81+wpa81\Microsoft.ApplicationInsights.targets" Condition="Exists('..\packages\Microsoft.ApplicationInsights.0.14.3-build00177\build\portable-win81+wpa81\Microsoft.ApplicationInsights.targets')" />  
  
    ```  
  
8.  Find the \<ItemGroup> that has \<Reference> children elements to NuGet packages. Take note of the NuGet packages that are referenced, because you will need this information for a future step. One significant difference between the Windows 10 project format between Visual Studio 2015 RC and Visual Studio 2015 RTM is that the RTM format uses [NuGet](http://docs.nuget.org/) version 3.  
  
     Remove the \<ItemGroup> and all its children. For example, a UWP project created with Visual Studio RC will have the following NuGet packages that need to be removed:  
  
    ```xml  
    <ItemGroup>  
        <Reference Include="Microsoft.ApplicationInsights, Version=0.14.3.177, Culture=neutral, PublicKeyToken=31bf3856ad364e35, processorArchitecture=MSIL">  
          <HintPath>..\packages\Microsoft.ApplicationInsights.0.14.3-build00177\lib\portable-win81+wpa81\Microsoft.ApplicationInsights.dll</HintPath>  
          <Private>True</Private>  
        </Reference>  
        <Reference Include="Microsoft.ApplicationInsights.Extensibility.Windows, Version=0.14.3.177, Culture=neutral, PublicKeyToken=31bf3856ad364e35, processorArchitecture=MSIL">  
          <HintPath>..\packages\Microsoft.ApplicationInsights.WindowsApps.0.14.3-build00177\lib\win81\Microsoft.ApplicationInsights.Extensibility.Windows.dll</HintPath>  
          <Private>True</Private>  
        </Reference>  
        <Reference Include="Microsoft.ApplicationInsights.PersistenceChannel, Version=0.14.3.186, Culture=neutral, PublicKeyToken=31bf3856ad364e35, processorArchitecture=MSIL">  
          <HintPath>..\packages\Microsoft.ApplicationInsights.PersistenceChannel.0.14.3-build00177\lib\portable-win81+wpa81\Microsoft.ApplicationInsights.PersistenceChannel.dll</HintPath>  
          <Private>True</Private>  
        </Reference>  
        <Reference Include="System.Numerics.Vectors, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a, processorArchitecture=MSIL">  
          <HintPath>..\packages\System.Numerics.Vectors.4.0.0\lib\win8\System.Numerics.Vectors.dll</HintPath>  
          <Private>True</Private>  
        </Reference>  
        <Reference Include="System.Numerics.Vectors.WindowsRuntime, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a, processorArchitecture=MSIL">  
          <HintPath>..\packages\System.Numerics.Vectors.4.0.0\lib\win8\System.Numerics.Vectors.WindowsRuntime.dll</HintPath>  
          <Private>True</Private>  
        </Reference>  
      </ItemGroup>  
  
    ```  
  
9. Find the \<ItemGroup> element that contains an \<AppxManifest> element. If there is a \<None> element with an Include attribute set to: packages.config, delete it. Also, add a \<None> element with an Include attribute and set its value to: project.json.  
  
10. Save your changes. Then close the project file.  
  
11. Right-click on your project file in Solution Explorer, and choose Reload Project from the context menu. All the files in your project should now be displayed in Solution Explorer.  
  
12. Select the file ApplicationInsights.config in Solution Explorer, and open its properties. Set the Build Action property to “Content”, and the Copy to Output Directory property to “Copy if newer”.  
  
13. Open the Package.appxmanifest file in your project.  
  
    1.  Find the \<TargetDeviceFamily> element. Change its MinVersion and MaxVersionTested attributes to correspond to the Universal Windows Platform version that you have installed. Like this:  
  
        ```xml  
        <TargetDeviceFamily Name="Windows.Universal" MinVersion="10.0.10240.0" MaxVersionTested="10.0.10240.0" />  
        ```  
  
    2.  Save your changes.  
  
14. Use the NuGet manager to add the packages that you deleted in the earlier step. One significant difference between the Windows 10 project format between Visual Studio 2015 RC and Visual Studio 2015 RTM is that the RTM format uses [NuGet](http://docs.nuget.org/) version 3.  
  
 You can now code, build, and debug your app.  
  
 If you have unit test projects for your Universal Windows apps, you must also follow [these steps](#MigrateUnitTest).  
  
###  <a name="RCUpdate10CPlusPlus"></a> Update your C++ projects to use the latest Universal Windows Platform  
  
1.  To find which Universal Windows Platform you have installed, open this folder: **\Program Files (x86)\Windows Kits\10\Platforms\UAP**. This contains a list of folders for each Universal Windows Platform that is installed. The folder name is the Universal Windows Platform version that you have installed. For example, this Windows 10 device has version 10.0.10240.0 of the Universal Windows Platform installed.  
  
     ![Open the folder to view the versions installed](../notintoc/media/uap_uwpversions.png "UAP_UWPVersions")  
  
     More than one version of the Universal Windows Platform can be installed. We recommend that you use the latest version for your app.  
  
2.  Open your solution that contains your C++ Windows Universal app. Right-click the project .vcxproj file, and choose to unload the project file. After the project has unloaded, right-click the project file again and choose to edit it.  
  
     ![Unload the project, then edit the project file](../notintoc/media/uap_editearliercplus.png "UAP_EditEarlierCPlus")  
  
3.  Find any \<PropertyGroup> elements that do not contain a Condition attribute but do contain an \<ApplicationTypeRevision> element. Update the ApplicationTypeRevision value from 8.2 to 10.0. Add a \<WindowsTargetPlatformVersion> and a \<WindowsTargetPlatformMinVersion> element and set their values to be the value of the Universal Windows Platform version that you installed.  
  
     Add an \<EnableDotNetNativeCompatibleProfile> element and set its value to true if the element does not already exist.  
  
     The default asset scale for Universal Windows apps is 200. Projects created with Visual Studio 2015 RC included assets scaled at 100, you will need to add a \<UapDefaultAssetScale> element with a value of 100 to this PropertyGroup. Learn more about [assets and scales](http://msdn.microsoft.com/library/jj679352.aspx).  
  
     So this \<PropertyGroup> element will now be similar to this:  
  
    ```xml  
    <PropertyGroup Label="Globals">  
        …  
        <MinimumVisualStudioVersion>14.0</MinimumVisualStudioVersion>  
        <ApplicationType>Windows Store</ApplicationType>  
        <ApplicationTypeRevision>10.0</ApplicationTypeRevision>  
        <WindowsTargetPlatformVersion>10.0.10240.0</WindowsTargetPlatformVersion>  
        <WindowsTargetPlatformMinVersion>10.0.10240.0</WindowsTargetPlatformMinVersion>  
        <EnableDotNetNativeCompatibleProfile>true</EnableDotNetNativeCompatibleProfile>  
        <UapDefaultAssetScale>100</UapDefaultAssetScale>  
      </PropertyGroup>  
  
    ```  
  
4.  For each remaining \<PropertyGroup> element, check if the element has a Condition attribute with a Release configuration. If it does, but it does not contain a \<UseDotNetNativeToolchain> element, then add one. Set the value for the \<UseDotNetNativeToolchain> element to true, like this:  
  
    ```xml  
    <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'" Label="Configuration">  
        <ConfigurationType>Application</ConfigurationType>  
        <UseDebugLibraries>false</UseDebugLibraries>  
        <WholeProgramOptimization>true</WholeProgramOptimization>  
        <PlatformToolset>v140</PlatformToolset>  
        <UseDotNetNativeToolchain>true</UseDotNetNativeToolchain>  
      </PropertyGroup>  
  
    ```  
  
5.  You need to update the \<EnableDotNetNativeCompatibleProfile> element and the \<UseDotNetNativeToolchain> element to enable .NET Native, but .NET Native is not​ enabled in the C++ templates.  
  
     Save your changes. Then close the project file.  
  
6.  Right-click on your project file in Solution Explorer, and choose Reload Project from the context menu. All the files in your project should now be displayed in Solution Explorer.  
  
7.  Open the Package.appxmanifest file in your project.  
  
    1.  Find the \<TargetDeviceFamily> element. Change its MinVersion and MaxVersionTested attributes to correspond to the Universal Windows Platform version that you have installed. Like this:  
  
        ```xml  
        <TargetDeviceFamily Name="Windows.Universal" MinVersion="10.0.10240.0" MaxVersionTested="10.0.10240.0" />  
        ```  
  
    2.  Save your changes.  
  
         You can now code, build, and debug your app.  
  
         If you have unit test projects for your Universal Windows apps, you must also follow [these steps](#MigrateUnitTest).  
  
##  <a name="MigrateUnitTest"></a> Changes required for existing unit test projects for Universal Windows apps created with Visual Studio 2015 RC  
 If you created unit test projects for Windows 10 universal apps with Visual Studio 2015 RC, you need to make these additional changes to your project files to use these test projects with the latest release of Visual Studio 2015. The changes required are different depending on the language you used to create your app:  
  
-   [C#/VB apps](#UnitTestRCUpdate10CSharp)  
  
-   [C++ apps](#UnitTestRCUpdate10CPlusPlus)  
  
###  <a name="UnitTestRCUpdate10CSharp"></a> Update your C#/VB unit test projects  
  
1.  With Visual Studio, open your solution that contains your C#/VB unit test project. Change the value of the \<OuttputType> element to: AppContainerExe.  
  
    ```xml  
  
    <OutputType>AppContainerExe</OutputType>  
  
    ```  
  
2.  Replace this element \<EnableCoreRuntime>false\</EnableCoreRuntime> with the following element:  
  
    ```xml  
  
    <EnableDotNetNativeCompatibleProfile>true</EnableDotNetNativeCompatibleProfile>  
  
    ```  
  
3.  Remove the following lines:  
  
    ```xml  
  
    <PropertyGroup>  
        <AppXPackage>True</AppXPackage>  
        <AppxPackageIncludePrivateSymbols>true</AppxPackageIncludePrivateSymbols>  
     </PropertyGroup>  
     <PropertyGroup Condition=" '$(Configuration)|$(Platform)' == 'Debug|AnyCPU' ">  
     <PlatformTarget>AnyCPU</PlatformTarget>  
     <DebugSymbols>true</DebugSymbols>  
     <DebugType>full</DebugType>  
     <Optimize>false</Optimize>  
     <OutputPath>bin\Debug\</OutputPath>  
     <DefineConstants>DEBUG;TRACE;NETFX_CORE;WINDOWS_UAP</DefineConstants>  
     <ErrorReport>prompt</ErrorReport>  
     <WarningLevel>4</WarningLevel>  
     </PropertyGroup>  
     <PropertyGroup Condition=" '$(Configuration)|$(Platform)' == 'Release|AnyCPU' ">  
        <PlatformTarget>AnyCPU</PlatformTarget>  
        <DebugType>pdbonly</DebugType>  
        <Optimize>true</Optimize>  
        <OutputPath>bin\Release\</OutputPath>  
        <DefineConstants>TRACE;NETFX_CORE;WINDOWS_UAP</DefineConstants>  
        <ErrorReport>prompt</ErrorReport>  
        <WarningLevel>4</WarningLevel>  
     </PropertyGroup>  
  
    ```  
  
4.  Add this element \<UseDotNetNativeToolchain>true\</UseDotNetNativeToolchain> as a child element to these property groups:  
  
    ```xml  
  
    <PropertyGroup Condition="'$(Configuration)|$(Platform)' == 'Release|ARM'">  
    <PropertyGroup Condition="'$(Configuration)|$(Platform)' == 'Release|X86'">  
    <PropertyGroup Condition="'$(Configuration)|$(Platform)' == 'Release|X64'">  
  
    ```  
  
5.  Delete the following \<ItemGroup> elements:  
  
    ```xml  
  
    <ItemGroup>  
       <Compile Include="Properties\AssemblyInfo.cs" />  
       <Compile Include="UnitTest.cs" />  
    </ItemGroup>  
    <ItemGroup>  
       <AppxManifest Include="Package.appxmanifest">  
          <SubType>Designer</SubType>  
       </AppxManifest>  
       <None Include="packages.config" />  
       <None Include="UnitTestProject1_TemporaryKey.pfx" />  
    </ItemGroup>  
    <ItemGroup>  
       <Content Include="Properties\Default.rd.xml" />  
       <Content Include="Assets\Logo.scale-240.png" />  
       <Content Include="Assets\SmallLogo.scale-240.png" />  
       <Content Include="Assets\SplashScreen.scale-240.png" />  
       <Content Include="Assets\Square71x71Logo.scale-240.png" />  
       <Content Include="Assets\StoreLogo.scale-240.png" />  
       <Content Include="Assets\WideLogo.scale-240.png" />  
    </ItemGroup>  
  
    ```  
  
     Replace them with these elements:  
  
    ```xml  
  
    <ItemGroup>  
       <Compile Include="Properties\AssemblyInfo.cs" />  
       <Compile Include="UnitTestApp.xaml.cs">  
          <DependentUpon>UnitTestApp.xaml</DependentUpon>  
       </Compile>  
       <Compile Include="UnitTest.cs" />  
    </ItemGroup>  
    <ItemGroup>  
       <ApplicationDefinition Include="UnitTestApp.xaml">  
          <Generator>MSBuild:Compile</Generator>  
          <SubType>Designer</SubType>  
       </ApplicationDefinition>  
    </ItemGroup>  
    <ItemGroup>  
       <AppxManifest Include="Package.appxmanifest">  
          <SubType>Designer</SubType>  
       </AppxManifest>  
       <None Include="UnitTestProject1_TemporaryKey.pfx" />  
    </ItemGroup>  
    <ItemGroup>  
       <Content Include="Properties\UnitTestApp.rd.xml" />  
       <Content Include="Assets\LockScreenLogo.scale-200.png" />  
       <Content Include="Assets\SplashScreen.scale-200.png" />  
       <Content Include="Assets\Square150x150Logo.scale-200.png" />  
       <Content Include="Assets\Square44x44Logo.scale-200.png" />  
       <Content Include="Assets\Square44x44Logo.targetsize-24_altform-unplated.png" />  
       <Content Include="Assets\StoreLogo.png" />  
       <Content Include="Assets\Wide310x150Logo.scale-200.png" />  
    </ItemGroup>  
    ```  
  
6.  Create a new Unit Test project and copy the UnitTestApp.xaml and UnitTestApp.xaml.cs files from that new project to your existing unit test project that you are updating.  
  
7.  Copy the UnitTestApp.rd.xml file from the Properties folder of the new Unit Test project to the Properties folder of your existing unit test project that you are updating.  
  
8.  Open the Package.appxmanifest file in your project. Then delete these elements from it:  
  
    ```xml  
  
    <Applications>  
       <Application Id="vstest.executionengine.universal.App"  
             Executable="vstest.executionengine.appcontainer.uap.exe"  
             EntryPoint="Microsoft.VisualStudio.TestPlatform.TestExecutor.AppContainer.App">  
          <uap:VisualElements  
             DisplayName="UnitTestProject1"  
             Square150x150Logo="Assets\Logo.png"  
             Square44x44Logo="Assets\SmallLogo.png"  
             Description="UnitTestProject1"  
             BackgroundColor="#464646">  
             <uap:SplashScreen Image="Assets\SplashScreen.png" />  
          </uap:VisualElements>  
       </Application>  
    </Applications>  
    <Capabilities>  
       <Capability Name="internetClientServer" />  
    </Capabilities>  
    ```  
  
     Replace these deleted elements with the following elements. Use the appropriate value for ProjectName based on the name of your project, instead of UnitTestProject1 in the elements below:  
  
    ```xml  
  
    <Applications>  
       <Application Id="vstest.executionengine.universal.App"   
             Executable="$targetnametoken$.exe"  
             EntryPoint="UnitTestProject1.App">  
          <uap:VisualElements  
                DisplayName="UnitTestProject1"  
                Square150x150Logo="Assets\Square150x150Logo.png"  
                Square44x44Logo="Assets\Square44x44Logo.png"  
                Description="UnitTestProject1"  
                BackgroundColor="transparent">  
             <uap:DefaultTile Wide310x150Logo="Assets\Wide310x150Logo.png"/>  
             <uap:SplashScreen Image="Assets\SplashScreen.png" />  
          </uap:VisualElements>  
       </Application>  
    </Applications>  
    <Capabilities>  
       <Capability Name="internetClient" />  
    </Capabilities>  
    ```  
  
 You can now run your unit tests.  
  
###  <a name="UnitTestRCUpdate10CPlusPlus"></a> Update your C++ projects to use the latest Universal Windows Platform  
  
1.  With Visual Studio, open your solution that contains your C++ unit test project. Remove the following elements:  
  
    ```xml  
  
    <TestApplication>true</TestApplication>  
    <AppxPackage>True</AppxPackage>  
    <CppWindowsStoreUnitTestLibraryType>true</CppWindowsStoreUnitTestLibraryType>  
    <EnableCoreRuntime>false</EnableCoreRuntime>  
  
    ```  
  
2.  Add the following \<ProjectConfiguration> elements below this element \<ItemGroup Label="ProjectConfigurations"> if they are not already in this fille:  
  
    ```xml  
  
    <ProjectConfiguration Include="Debug|x64">  
       <Configuration>Debug</Configuration>  
       <Platform>x64</Platform>  
    </ProjectConfiguration>  
    <ProjectConfiguration Include="Release|x64">  
       <Configuration>Release</Configuration>  
       <Platform>x64</Platform>  
    </ProjectConfiguration>  
  
    ```  
  
3.  Replace every occurrence of this element:  
  
    ```xml  
  
    <ConfigurationType>DynamicLibrary</ConfigurationType>  
  
    ```  
  
     With this:  
  
    ```xml  
  
    <ConfigurationType>Application</ConfigurationType>  
  
    ```  
  
4.  Add these \<PropertyGroup> elements if they are not already in the file:  
  
    ```xml  
  
    <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Debug|x64'" Label="Configuration">  
       <ConfigurationType>Application</ConfigurationType>  
       <UseDebugLibraries>true</UseDebugLibraries>  
       <PlatformToolset>v140</PlatformToolset>  
    </PropertyGroup>  
    <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|x64'" Label="Configuration">  
       <ConfigurationType>Application</ConfigurationType>  
       <UseDebugLibraries>false</UseDebugLibraries>  
       <WholeProgramOptimization>true</WholeProgramOptimization>  
       <PlatformToolset>v140</PlatformToolset>  
       <UseDotNetNativeToolchain>true</UseDotNetNativeToolchain>  
    </PropertyGroup>  
  
    ```  
  
5.  Replace every occurrence of this element:  
  
    ```xml  
  
    <AdditionalIncludeDirectories>$(VCInstallDir)UnitTest\include;$(ProjectDir);$(IntermediateOutputPath);%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>  
    ```  
  
     With this:  
  
    ```xml  
  
    <AdditionalIncludeDirectories>$(VCInstallDir)UnitTest\include\UWP;$(ProjectDir);$(IntermediateOutputPath);%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>  
  
    ```  
  
6.  Replace every occurrence of this element:  
  
    ```xml  
  
    <AdditionalLibraryDirectories>$(VCInstallDir)UnitTest\Lib;%(AdditionalLibraryDirectories)</AdditionalLibraryDirectories>  
  
    ```  
  
     With this:  
  
    ```xml  
  
    <AdditionalLibraryDirectories>$(VCInstallDir)UnitTest\lib\UWP;%(AdditionalLibraryDirectories)</AdditionalLibraryDirectories>  
  
    ```  
  
7.  Add these \<ItemDefinitionGroup> elements in the section that already contains other \<ItemDefinitionGroup> elements:  
  
    ```xml  
  
    <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Debug|x64'">  
       <ClCompile>  
          <AdditionalOptions>/bigobj %(AdditionalOptions)</AdditionalOptions>  
          <DisableSpecificWarnings>4453;28204</DisableSpecificWarnings>  
          <AdditionalIncludeDirectories>$(VCInstallDir)UnitTest\include\UWP;$(ProjectDir);$(IntermediateOutputPath);%     (AdditionalIncludeDirectories)</AdditionalIncludeDirectories>  
       </ClCompile>  
    <Link>  
       <AdditionalLibraryDirectories>$(VCInstallDir)UnitTest\lib\UWP;%(AdditionalLibraryDirectories)</AdditionalLibraryDirectories>  
    </Link>  
    </ItemDefinitionGroup>  
    <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Release|x64'">  
       <ClCompile>  
          <AdditionalOptions>/bigobj %(AdditionalOptions)</AdditionalOptions>  
          <DisableSpecificWarnings>4453;28204</DisableSpecificWarnings>  
          <AdditionalIncludeDirectories>$(VCInstallDir)UnitTest\include\UWP;$(ProjectDir);$(IntermediateOutputPath);%(AdditionalIncludeDirectories)</AdditionalIncludeDirectories>  
       </ClCompile>  
       <Link>  
          <AdditionalLibraryDirectories>$(VCInstallDir)UnitTest\lib\UWP;%(AdditionalLibraryDirectories)</AdditionalLibraryDirectories>  
       </Link>  
    </ItemDefinitionGroup>  
  
    ```  
  
8.  Delete the following \< ItemGroup> element:  
  
    ```xml  
  
    <ItemGroup>  
       <Image Include="Assets\Logo.scale-100.png" />  
       <Image Include="Assets\SmallLogo.scale-100.png" />  
       <Image Include="Assets\StoreLogo.scale-100.png" />  
       <Image Include="Assets\SplashScreen.scale-100.png" />  
       <Image Include="Assets\WideLogo.scale-100.png" />  
    </ItemGroup>  
  
    ```  
  
     Replace it with this \<ItemGroup> element:  
  
    ```xml  
  
    <ItemGroup>  
       <Image Include="Assets\LockScreenLogo.scale-200.png" />  
       <Image Include="Assets\SplashScreen.scale-200.png" />  
       <Image Include="Assets\Square44x44Logo.scale-200.png" />  
       <Image Include="Assets\Square44x44Logo.targetsize-24_altform-unplated.png" />  
       <Image Include="Assets\Square150x150Logo.scale-200.png" />  
       <Image Include="Assets\StoreLogo.png" />  
       <Image Include="Assets\Wide310x150Logo.scale-200.png" />  
    </ItemGroup>  
  
    ```  
  
9. Delete the following \< ItemGroup> element:  
  
    ```xml  
  
    <ItemGroup>  
       <ClInclude Include="pch.h" />  
    </ItemGroup>  
    ```  
  
     Replace it with these \<ItemGroup> elements:  
  
    ```xml  
  
    <ItemGroup>  
       <ClInclude Include="pch.h" />  
       <ClInclude Include="UnitTestApp.xaml.h">  
          <DependentUpon>UnitTestApp.xaml</DependentUpon>  
       </ClInclude>  
    </ItemGroup>  
    <ItemGroup>  
       <ApplicationDefinition Include="UnitTestApp.xaml">  
          <SubType>Designer</SubType>  
       </ApplicationDefinition>  
    </ItemGroup>  
  
    ```  
  
10. Delete the following element:  
  
    ```xml  
    <ClCompile Include="UnitTest.cpp"/>  
    ```  
  
     Replace it with these \<CICompile> elements:  
  
    ```xml  
  
    <ClCompile Include="UnitTestApp.xaml.cpp">  
       <DependentUpon>UnitTestApp.xaml</DependentUpon>  
    </ClCompile>  
    <ClCompile Include="UnitTest.cpp"/>  
  
    ```  
  
11. Add this element:  
  
    ```xml  
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />  
    ```  
  
     Above this element in the file:  
  
    ```xml  
  
    <ItemGroup>  
       <Xml Include="UnitTestApp.rd.xml" />  
    </ItemGroup>  
    ```  
  
12. Create a new Unit Test C++ project and copy the UnitTestApp.xaml, UnitTestApp.xaml.cpp, UnitTestApp.xaml.h, and UnitTestApp.rd.xml files from that project to your existing project that you are updating.  
  
13. Open the Package.appxmanifest file in your project. Then delete these elements from it:  
  
    ```xml  
  
    <Applications>  
       <Application Id="vstest.executionengine.universal.App"  
             Executable="vstest.executionengine.appcontainer.uap.exe"  
             EntryPoint="Microsoft.VisualStudio.TestPlatform.TestExecutor.AppContainer.App">  
          <uap:VisualElements  
             DisplayName="UnitTestProject1"  
             Square150x150Logo="Assets\Logo.png"  
             Square44x44Logo="Assets\SmallLogo.png"  
             Description="UnitTestProject1"  
             BackgroundColor="#464646">  
             <uap:SplashScreen Image="Assets\SplashScreen.png" />  
          </uap:VisualElements>  
       </Application>  
    </Applications>  
    <Capabilities>  
       <Capability Name="internetClientServer" />  
    </Capabilities>  
  
    ```  
  
     Replace these deleted elements with the following elements. Use the appropriate value for ProjectName based on the name of your project, instead of UnitTestProject1 in the elements below:  
  
    ```xml  
  
    <Applications>  
       <Application Id="vstest.executionengine.universal.App"   
                Executable="$targetnametoken$.exe"  
                EntryPoint="UnitTestProject1.App">  
          <uap:VisualElements  
                DisplayName="UnitTestProject1"  
                Square150x150Logo="Assets\Square150x150Logo.png"  
                Square44x44Logo="Assets\Square44x44Logo.png"  
                Description="UnitTestProject1"  
                BackgroundColor="transparent">  
                <uap:DefaultTile Wide310x150Logo="Assets\Wide310x150Logo.png"/>  
                <uap:SplashScreen Image="Assets\SplashScreen.png" />  
          </uap:VisualElements>  
       </Application>  
    </Applications>  
    <Capabilities>  
       <Capability Name="internetClient" />  
    </Capabilities>  
  
    ```