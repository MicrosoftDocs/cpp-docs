---
title: "Linker Options"
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
ms.assetid: c1d51b8a-bd23-416d-81e4-900e02b2c129
caps.latest.revision: 37
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Linker Options
LINK.exe links Common Object File Format (COFF) object files and libraries to create an executable (.exe) file or a dynamic-link library (DLL).  
  
 The following table lists options for LINK.exe. For more information about LINK, see:  
  
-   [Compiler-Controlled LINK Options](../VS_visualcpp/Compiler-Controlled-LINK-Options.md)  
  
-   [LINK Input Files](../VS_visualcpp/LINK-Input-Files.md)  
  
-   [LINK Output](../VS_visualcpp/LINK-Output.md)  
  
-   [Reserved Words](../VS_visualcpp/Reserved-Words.md)  
  
 On the command line, linker options are not case-sensitive—for example, /base and /BASE mean the same thing. For details on how to specify each option on the command line or in Visual Studio, see the documentation for that option.  
  
 You can use the [comment](../VS_visualcpp/comment--C-C---.md) pragma to specify some linker options.  
  
|Option|Purpose|  
|------------|-------------|  
|[@](../VS_visualcpp/@--Specify-a-Linker-Response-File-.md)|Specifies a response file.|  
|[/ALIGN](../VS_visualcpp/-ALIGN--Section-Alignment-.md)|Specifies the alignment of each section.|  
|[/ALLOWBIND](../VS_visualcpp/-ALLOWBIND--Prevent-DLL-Binding-.md)|Specifies that a DLL cannot be bound.|  
|[/ALLOWISOLATION](../VS_visualcpp/-ALLOWISOLATION--Manifest-Lookup-.md)|Specifies behavior for manifest lookup.|  
|[/APPCONTAINER](../VS_visualcpp/-APPCONTAINER--Windows-Store-App-.md)|Specifies whether the app must run within an appcontainer process environment.|  
|[/ASSEMBLYDEBUG](../VS_visualcpp/-ASSEMBLYDEBUG--Add-DebuggableAttribute-.md)|Adds the <xref:System.Diagnostics.DebuggableAttribute?qualifyHint=False> to a managed image.|  
|[/ASSEMBLYLINKRESOURCE](../VS_visualcpp/-ASSEMBLYLINKRESOURCE--Link-to-.NET-Framework-Resource-.md)|Creates a link to a managed resource.|  
|[/ASSEMBLYMODULE](../VS_visualcpp/-ASSEMBLYMODULE--Add-a-MSIL-Module-to-the-Assembly-.md)|Specifies that a Microsoft intermediate language (MSIL) module should be imported into the assembly.|  
|[/ASSEMBLYRESOURCE](../VS_visualcpp/-ASSEMBLYRESOURCE--Embed-a-Managed-Resource-.md)|Embeds a managed resource file in an assembly.|  
|[/BASE](../VS_visualcpp/-BASE--Base-Address-.md)|Sets a base address for the program.|  
|[/CGTHREADS](../VS_visualcpp/-CGTHREADS--Compiler-Threads-.md)|Sets number of cl.exe threads to use for optimization and code generation when link-time code generation is specified.|  
|[/CLRIMAGETYPE](../VS_visualcpp/-CLRIMAGETYPE--Specify-Type-of-CLR-Image-.md)|Sets the type (IJW, pure, or safe) of a CLR image.|  
|[/CLRSUPPORTLASTERROR](../VS_visualcpp/-CLRSUPPORTLASTERROR--Preserve-Last-Error-Code-for-PInvoke-Calls-.md)|Preserves the last error code of functions that are called through the P/Invoke mechanism.|  
|[/CLRTHREADATTRIBUTE](../VS_visualcpp/-CLRTHREADATTRIBUTE--Set-CLR-Thread-Attribute-.md)|Specifies the threading attribute to apply to the entry point of your CLR program.|  
|[/CLRUNMANAGEDCODECHECK](../VS_visualcpp/-CLRUNMANAGEDCODECHECK--Add-SupressUnmanagedCodeSecurityAttribute-.md)|Specifies whether the linker will apply the SuppressUnmanagedCodeSecurity attribute to linker-generated PInvoke stubs that call from managed code into native DLLs.|  
|[/DEBUG](../VS_visualcpp/-DEBUG--Generate-Debug-Info-.md)|Creates debugging information.|  
|[/DEBUGTYPE](../VS_visualcpp/-DEBUGTYPE--Debug-Info-Options-.md)|Specifies which data to include in debugging information.|  
|[/DEF](../VS_visualcpp/-DEF--Specify-Module-Definition-File-.md)|Passes a module-definition (.def) file to the linker.|  
|[/DEFAULTLIB](../VS_visualcpp/-DEFAULTLIB--Specify-Default-Library-.md)|Searches the specified library when external references are resolved.|  
|[/DELAY](../VS_visualcpp/-DELAY--Delay-Load-Import-Settings-.md)|Controls the delayed loading of DLLs.|  
|[/DELAYLOAD](../VS_visualcpp/-DELAYLOAD--Delay-Load-Import-.md)|Causes the delayed loading of the specified DLL.|  
|[/DELAYSIGN](../VS_visualcpp/-DELAYSIGN--Partially-Sign-an-Assembly-.md)|Partially signs an assembly.|  
|[/DLL](../VS_visualcpp/-DLL--Build-a-DLL-.md)|Builds a DLL.|  
|[/DRIVER](../VS_visualcpp/-DRIVER--Windows-NT-Kernel-Mode-Driver-.md)|Creates a kernel mode driver.|  
|[/DYNAMICBASE](../VS_visualcpp/-DYNAMICBASE--Use-address-space-layout-randomization-.md)|Specifies whether to generate an executable image that can be randomly rebased at load time by using the address space layout randomization (ASLR) feature.|  
|[/ENTRY](../VS_visualcpp/-ENTRY--Entry-Point-Symbol-.md)|Sets the starting address.|  
|[/errorReport](../VS_visualcpp/-ERRORREPORT--Report-Internal-Linker-Errors-.md)|Reports internal linker errors to Microsoft.|  
|[/EXPORT](../VS_visualcpp/-EXPORT--Exports-a-Function-.md)|Exports a function.|  
|[/FIXED](../VS_visualcpp/-FIXED--Fixed-Base-Address-.md)|Creates a program that can be loaded only at its preferred base address.|  
|[/FORCE](../VS_visualcpp/-FORCE--Force-File-Output-.md)|Forces a link to complete even with unresolved symbols or symbols defined more than once.|  
|[/FUNCTIONPADMIN](../VS_visualcpp/-FUNCTIONPADMIN--Create-Hotpatchable-Image-.md)|Creates an image that can be hot patched.|  
|[/GENPROFILE, /FASTGENPROFILE](../VS_visualcpp/-GENPROFILE---FASTGENPROFILE--Generate-Profiling-Instrumented-Build-.md)|Both of these options specify generation of a .pgd file by the linker to support profile-guided optimization (PGO). /GENPROFILE and /FASTGENPROFILE use different default parameters.|  
|[/GUARD](../VS_visualcpp/-GUARD--Enable-Guard-Checks-.md)|Enables Control Flow Guard protection.|  
|[/HEAP](../VS_visualcpp/-HEAP--Set-Heap-Size-.md)|Sets the size of the heap, in bytes.|  
|[/HIGHENTROPYVA](../VS_visualcpp/-HIGHENTROPYVA--Support-64-Bit-ASLR-.md)|Specifies support for high-entropy 64-bit address space layout randomization (ASLR).|  
|[/IDLOUT](../VS_visualcpp/-IDLOUT--Name-MIDL-Output-Files-.md)|Specifies the name of the .idl file and other MIDL output files.|  
|[/IGNORE](../VS_visualcpp/-IGNORE--Ignore-Specific-Warnings-.md)|Suppresses output of specified linker warnings.|  
|[/IGNOREIDL](../VS_visualcpp/-IGNOREIDL--Don-t-Process-Attributes-into-MIDL-.md)|Prevents the processing of attribute information into an .idl file.|  
|[/IMPLIB](../VS_visualcpp/-IMPLIB--Name-Import-Library-.md)|Overrides the default import library name.|  
|[/INCLUDE](../VS_visualcpp/-INCLUDE--Force-Symbol-References-.md)|Forces symbol references.|  
|[/INCREMENTAL](../VS_visualcpp/-INCREMENTAL--Link-Incrementally-.md)|Controls incremental linking.|  
|[/INTEGRITYCHECK](../VS_visualcpp/-INTEGRITYCHECK--Require-Signature-Check-.md)|Specifies that the module requires a signature check at load time.|  
|[/KEYCONTAINER](../VS_visualcpp/-KEYCONTAINER--Specify-a-Key-Container-to-Sign-an-Assembly-.md)|Specifies a key container to sign an assembly.|  
|[/KEYFILE](../VS_visualcpp/-KEYFILE--Specify-Key-or-Key-Pair-to-Sign-an-Assembly-.md)|Specifies a key or key pair to sign an assembly.|  
|[/LARGEADDRESSAWARE](../VS_visualcpp/-LARGEADDRESSAWARE--Handle-Large-Addresses-.md)|Tells the compiler that the application supports addresses larger than two gigabytes|  
|[/LIBPATH](../VS_visualcpp/-LIBPATH--Additional-Libpath-.md)|Specifies a path to search before the environmental library path.|  
|[/LTCG](../VS_visualcpp/-LTCG--Link-time-Code-Generation-.md)|Specifies link-time code generation.|  
|[/MACHINE](../VS_visualcpp/-MACHINE--Specify-Target-Platform-.md)|Specifies the target platform.|  
|[/MANIFEST](../VS_visualcpp/-MANIFEST--Create-Side-by-Side-Assembly-Manifest-.md)|Creates a side-by-side manifest file and optionally embeds it in the binary.|  
|[/MANIFESTDEPENDENCY](../VS_visualcpp/-MANIFESTDEPENDENCY--Specify-Manifest-Dependencies-.md)|Specifies a <dependentAssembly\> section in the manifest file.|  
|[/MANIFESTFILE](../VS_visualcpp/-MANIFESTFILE--Name-Manifest-File-.md)|Changes the default name of the manifest file.|  
|[/MANIFESTINPUT](../VS_visualcpp/-MANIFESTINPUT--Specify-Manifest-Input-.md)|Specifies a manifest input file for the linker to process and embed in the binary. You can use this option multiple times to specify more than one manifest input file.|  
|[/MANIFESTUAC](../VS_visualcpp/-MANIFESTUAC--Embeds-UAC-information-in-manifest-.md)|Specifies whether User Account Control (UAC) information is embedded in the program manifest.|  
|[/MAP](../VS_visualcpp/-MAP--Generate-Mapfile-.md)|Creates a mapfile.|  
|[/MAPINFO](../VS_visualcpp/-MAPINFO--Include-Information-in-Mapfile-.md)|Includes the specified information in the mapfile.|  
|[/MERGE](../VS_visualcpp/-MERGE--Combine-Sections-.md)|Combines sections.|  
|[/MIDL](../VS_visualcpp/-MIDL--Specify-MIDL-Command-Line-Options-.md)|Specifies MIDL command-line options.|  
|[/NOASSEMBLY](../VS_visualcpp/-NOASSEMBLY--Create-a-MSIL-Module-.md)|Suppresses the creation of a .NET Framework assembly.|  
|[/NODEFAULTLIB](../VS_visualcpp/-NODEFAULTLIB--Ignore-Libraries-.md)|Ignores all (or the specified) default libraries when external references are resolved.|  
|[/NOENTRY](../VS_visualcpp/-NOENTRY--No-Entry-Point-.md)|Creates a resource-only DLL.|  
|[/NOLOGO](../VS_visualcpp/-NOLOGO--Suppress-Startup-Banner---Linker-.md)|Suppresses the startup banner.|  
|[/NXCOMPAT](../VS_visualcpp/-NXCOMPAT--Compatible-with-Data-Execution-Prevention-.md)|Marks an executable as verified to be compatible with the Windows Data Execution Prevention feature.|  
|[/OPT](../VS_visualcpp/-OPT--Optimizations-.md)|Controls LINK optimizations.|  
|[/ORDER](../VS_visualcpp/-ORDER--Put-Functions-in-Order-.md)|Places COMDATs into the image in a predetermined order.|  
|[/OUT](../VS_visualcpp/-OUT--Output-File-Name-.md)|Specifies the output file name.|  
|[/PDB](../VS_visualcpp/-PDB--Use-Program-Database-.md)|Creates a program database (PDB) file.|  
|[/PDBALTPATH](../VS_visualcpp/-PDBALTPATH--Use-Alternate-PDB-Path-.md)|Uses an alternate location to save a PDB file.|  
|[/PDBSTRIPPED](../VS_visualcpp/-PDBSTRIPPED--Strip-Private-Symbols-.md)|Creates a program database (PDB) file that has no private symbols.|  
|[/PGD](../VS_visualcpp/-PGD--Specify-Database-for-Profile-Guided-Optimizations-.md)|Specifies a .pgd file for profile-guided optimizations.|  
|[/PROFILE](../VS_visualcpp/-PROFILE--Performance-Tools-Profiler-.md)|Produces an output file that can be used with the Performance Tools profiler.|  
|[/RELEASE](../VS_visualcpp/-RELEASE--Set-the-Checksum-.md)|Sets the Checksum in the .exe header.|  
|[/SAFESEH](../VS_visualcpp/-SAFESEH--Image-has-Safe-Exception-Handlers-.md)|Specifies that the image will contain a table of safe exception handlers.|  
|[/SECTION](../VS_visualcpp/-SECTION--Specify-Section-Attributes-.md)|Overrides the attributes of a section.|  
|[/STACK](../VS_visualcpp/-STACK--Stack-Allocations-.md)|Sets the size of the stack in bytes.|  
|[/STUB](../VS_visualcpp/-STUB--MS-DOS-Stub-File-Name-.md)|Attaches an MS-DOS stub program to a Win32 program.|  
|[/SUBSYSTEM](../VS_visualcpp/-SUBSYSTEM--Specify-Subsystem-.md)|Tells the operating system how to run the .exe file.|  
|[/SWAPRUN](../VS_visualcpp/-SWAPRUN--Load-Linker-Output-to-Swap-File-.md)|Tells the operating system to copy the linker output to a swap file before it is run.|  
|[/TLBID](../VS_visualcpp/-TLBID--Specify-Resource-ID-for-TypeLib-.md)|Specifies the resource ID of the linker-generated type library.|  
|[/TLBOUT](../VS_visualcpp/-TLBOUT--Name-.TLB-File-.md)|Specifies the name of the .tlb file and other MIDL output files.|  
|[/TSAWARE](../VS_visualcpp/-TSAWARE--Create-Terminal-Server-Aware-Application-.md)|Creates an application that is designed specifically to run under Terminal Server.|  
|[/VERBOSE](../VS_visualcpp/-VERBOSE--Print-Progress-Messages-.md)|Prints linker progress messages.|  
|[/VERSION](../VS_visualcpp/-VERSION--Version-Information-.md)|Assigns a version number.|  
|[/WHOLEARCHIVE](../VS_visualcpp/-WHOLEARCHIVE--Include-All-Library-Object-Files-.md)|Includes every object file from specified static libraries.|  
|[/WINMD](../VS_visualcpp/-WINMD--Generate-Windows-Metadata-.md)|Enables generation of a Windows Runtime Metadata file.|  
|[/WINMDFILE](../VS_visualcpp/-WINMDFILE--Specify-winmd-File-.md)|Specifies the file name for the Windows Runtime Metadata (winmd) output file that's generated by the [/WINMD](../VS_visualcpp/-WINMD--Generate-Windows-Metadata-.md) linker option.|  
|[/WINMDKEYFILE](../VS_visualcpp/-WINMDKEYFILE--Specify-winmd-Key-File-.md)|Specifies a key or key pair to sign a Windows Runtime Metadata file.|  
|[/WINMDKEYCONTAINER](../VS_visualcpp/-WINMDKEYCONTAINER--Specify-Key-Container-.md)|Specifies a key container to sign a Windows Metadata file.|  
|[/WINMDDELAYSIGN](../VS_visualcpp/-WINMDDELAYSIGN--Partially-Sign-a-winmd-.md)|Partially signs a Windows Runtime Metadata (.winmd) file by placing the public key in the winmd file.|  
|[/WX](../VS_visualcpp/-WX--Treat-Linker-Warnings-as-Errors-.md)|Treats linker warnings as errors.|  
  
 For more information, see [Compiler-Controlled LINK Options](../VS_visualcpp/Compiler-Controlled-LINK-Options.md).  
  
## See Also  
 [C/C++ Building Reference](../VS_visualcpp/C-C---Building-Reference.md)   
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Frequently Asked Questions on Building](assetId:///56a3bb8f-0181-4989-bab4-a07ba950ab08)