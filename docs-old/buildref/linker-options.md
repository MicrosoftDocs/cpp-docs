---
title: "Linker Options"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "linker [C++]"
  - "linker [C++], options listed"
  - "libraries [C++], linking to COFF"
  - "LINK tool [C++], linker options"
ms.assetid: c1d51b8a-bd23-416d-81e4-900e02b2c129
caps.latest.revision: 37
ms.author: "corob"
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
# Linker Options
LINK.exe links Common Object File Format (COFF) object files and libraries to create an executable (.exe) file or a dynamic-link library (DLL).  
  
 The following table lists options for LINK.exe. For more information about LINK, see:  
  
-   [Compiler-Controlled LINK Options](../buildref/compiler-controlled-link-options.md)  
  
-   [LINK Input Files](../buildref/link-input-files.md)  
  
-   [LINK Output](../buildref/link-output.md)  
  
-   [Reserved Words](../buildref/reserved-words.md)  
  
 On the command line, linker options are not case-sensitive—for example, /base and /BASE mean the same thing. For details on how to specify each option on the command line or in Visual Studio, see the documentation for that option.  
  
 You can use the [comment](../c/comment--c-c---.md) pragma to specify some linker options.  
  
|Option|Purpose|  
|------------|-------------|  
|[@](../buildref/@--specify-a-linker-response-file-.md)|Specifies a response file.|  
|[/ALIGN](../buildref/-align--section-alignment-.md)|Specifies the alignment of each section.|  
|[/ALLOWBIND](../buildref/-allowbind--prevent-dll-binding-.md)|Specifies that a DLL cannot be bound.|  
|[/ALLOWISOLATION](../buildref/-allowisolation--manifest-lookup-.md)|Specifies behavior for manifest lookup.|  
|[/APPCONTAINER](../buildref/-appcontainer--windows-store-app-.md)|Specifies whether the app must run within an appcontainer process environment.|  
|[/ASSEMBLYDEBUG](../buildref/-assemblydebug--add-debuggableattribute-.md)|Adds the \<xref:System.Diagnostics.DebuggableAttribute> to a managed image.|  
|[/ASSEMBLYLINKRESOURCE](../buildref/-assemblylinkresource--link-to-.net-framework-resource-.md)|Creates a link to a managed resource.|  
|[/ASSEMBLYMODULE](../buildref/-assemblymodule--add-a-msil-module-to-the-assembly-.md)|Specifies that a Microsoft intermediate language (MSIL) module should be imported into the assembly.|  
|[/ASSEMBLYRESOURCE](../buildref/-assemblyresource--embed-a-managed-resource-.md)|Embeds a managed resource file in an assembly.|  
|[/BASE](../buildref/-base--base-address-.md)|Sets a base address for the program.|  
|[/CGTHREADS](../buildref/-cgthreads--compiler-threads-.md)|Sets number of cl.exe threads to use for optimization and code generation when link-time code generation is specified.|  
|[/CLRIMAGETYPE](../buildref/-clrimagetype--specify-type-of-clr-image-.md)|Sets the type (IJW, pure, or safe) of a CLR image.|  
|[/CLRSUPPORTLASTERROR](../buildref/-clrsupportlasterror--preserve-last-error-code-for-pinvoke-calls-.md)|Preserves the last error code of functions that are called through the P/Invoke mechanism.|  
|[/CLRTHREADATTRIBUTE](../buildref/-clrthreadattribute--set-clr-thread-attribute-.md)|Specifies the threading attribute to apply to the entry point of your CLR program.|  
|[/CLRUNMANAGEDCODECHECK](../buildref/-clrunmanagedcodecheck--add-supressunmanagedcodesecurityattribute-.md)|Specifies whether the linker will apply the SuppressUnmanagedCodeSecurity attribute to linker-generated PInvoke stubs that call from managed code into native DLLs.|  
|[/DEBUG](../buildref/-debug--generate-debug-info-.md)|Creates debugging information.|  
|[/DEBUGTYPE](../buildref/-debugtype--debug-info-options-.md)|Specifies which data to include in debugging information.|  
|[/DEF](../buildref/-def--specify-module-definition-file-.md)|Passes a module-definition (.def) file to the linker.|  
|[/DEFAULTLIB](../buildref/-defaultlib--specify-default-library-.md)|Searches the specified library when external references are resolved.|  
|[/DELAY](../buildref/-delay--delay-load-import-settings-.md)|Controls the delayed loading of DLLs.|  
|[/DELAYLOAD](../buildref/-delayload--delay-load-import-.md)|Causes the delayed loading of the specified DLL.|  
|[/DELAYSIGN](../buildref/-delaysign--partially-sign-an-assembly-.md)|Partially signs an assembly.|  
|[/DLL](../buildref/-dll--build-a-dll-.md)|Builds a DLL.|  
|[/DRIVER](../buildref/-driver--windows-nt-kernel-mode-driver-.md)|Creates a kernel mode driver.|  
|[/DYNAMICBASE](../buildref/-dynamicbase--use-address-space-layout-randomization-.md)|Specifies whether to generate an executable image that can be randomly rebased at load time by using the address space layout randomization (ASLR) feature.|  
|[/ENTRY](../buildref/-entry--entry-point-symbol-.md)|Sets the starting address.|  
|[/errorReport](../buildref/-errorreport--report-internal-linker-errors-.md)|Reports internal linker errors to Microsoft.|  
|[/EXPORT](../buildref/-export--exports-a-function-.md)|Exports a function.|  
|[/FIXED](../buildref/-fixed--fixed-base-address-.md)|Creates a program that can be loaded only at its preferred base address.|  
|[/FORCE](../buildref/-force--force-file-output-.md)|Forces a link to complete even with unresolved symbols or symbols defined more than once.|  
|[/FUNCTIONPADMIN](../buildref/-functionpadmin--create-hotpatchable-image-.md)|Creates an image that can be hot patched.|  
|[/GENPROFILE, /FASTGENPROFILE](../buildref/-genprofile---fastgenprofile--generate-profiling-instrumented-build-.md)|Both of these options specify generation of a .pgd file by the linker to support profile-guided optimization (PGO). /GENPROFILE and /FASTGENPROFILE use different default parameters.|  
|[/GUARD](../buildref/-guard--enable-guard-checks-.md)|Enables Control Flow Guard protection.|  
|[/HEAP](../buildref/-heap--set-heap-size-.md)|Sets the size of the heap, in bytes.|  
|[/HIGHENTROPYVA](../buildref/-highentropyva--support-64-bit-aslr-.md)|Specifies support for high-entropy 64-bit address space layout randomization (ASLR).|  
|[/IDLOUT](../buildref/-idlout--name-midl-output-files-.md)|Specifies the name of the .idl file and other MIDL output files.|  
|[/IGNORE](../buildref/-ignore--ignore-specific-warnings-.md)|Suppresses output of specified linker warnings.|  
|[/IGNOREIDL](../buildref/-ignoreidl--don-t-process-attributes-into-midl-.md)|Prevents the processing of attribute information into an .idl file.|  
|[/IMPLIB](../buildref/-implib--name-import-library-.md)|Overrides the default import library name.|  
|[/INCLUDE](../buildref/-include--force-symbol-references-.md)|Forces symbol references.|  
|[/INCREMENTAL](../buildref/-incremental--link-incrementally-.md)|Controls incremental linking.|  
|[/INTEGRITYCHECK](../buildref/-integritycheck--require-signature-check-.md)|Specifies that the module requires a signature check at load time.|  
|[/KEYCONTAINER](../buildref/-keycontainer--specify-a-key-container-to-sign-an-assembly-.md)|Specifies a key container to sign an assembly.|  
|[/KEYFILE](../buildref/-keyfile--specify-key-or-key-pair-to-sign-an-assembly-.md)|Specifies a key or key pair to sign an assembly.|  
|[/LARGEADDRESSAWARE](../buildref/-largeaddressaware--handle-large-addresses-.md)|Tells the compiler that the application supports addresses larger than two gigabytes|  
|[/LIBPATH](../buildref/-libpath--additional-libpath-.md)|Specifies a path to search before the environmental library path.|  
|[/LTCG](../buildref/-ltcg--link-time-code-generation-.md)|Specifies link-time code generation.|  
|[/MACHINE](../buildref/-machine--specify-target-platform-.md)|Specifies the target platform.|  
|[/MANIFEST](../buildref/-manifest--create-side-by-side-assembly-manifest-.md)|Creates a side-by-side manifest file and optionally embeds it in the binary.|  
|[/MANIFESTDEPENDENCY](../buildref/-manifestdependency--specify-manifest-dependencies-.md)|Specifies a \<dependentAssembly> section in the manifest file.|  
|[/MANIFESTFILE](../buildref/-manifestfile--name-manifest-file-.md)|Changes the default name of the manifest file.|  
|[/MANIFESTINPUT](../buildref/-manifestinput--specify-manifest-input-.md)|Specifies a manifest input file for the linker to process and embed in the binary. You can use this option multiple times to specify more than one manifest input file.|  
|[/MANIFESTUAC](../buildref/-manifestuac--embeds-uac-information-in-manifest-.md)|Specifies whether User Account Control (UAC) information is embedded in the program manifest.|  
|[/MAP](../buildref/-map--generate-mapfile-.md)|Creates a mapfile.|  
|[/MAPINFO](../buildref/-mapinfo--include-information-in-mapfile-.md)|Includes the specified information in the mapfile.|  
|[/MERGE](../buildref/-merge--combine-sections-.md)|Combines sections.|  
|[/MIDL](../buildref/-midl--specify-midl-command-line-options-.md)|Specifies MIDL command-line options.|  
|[/NOASSEMBLY](../buildref/-noassembly--create-a-msil-module-.md)|Suppresses the creation of a .NET Framework assembly.|  
|[/NODEFAULTLIB](../buildref/-nodefaultlib--ignore-libraries-.md)|Ignores all (or the specified) default libraries when external references are resolved.|  
|[/NOENTRY](../buildref/-noentry--no-entry-point-.md)|Creates a resource-only DLL.|  
|[/NOLOGO](../buildref/-nologo--suppress-startup-banner---linker-.md)|Suppresses the startup banner.|  
|[/NXCOMPAT](../buildref/-nxcompat--compatible-with-data-execution-prevention-.md)|Marks an executable as verified to be compatible with the Windows Data Execution Prevention feature.|  
|[/OPT](../buildref/-opt--optimizations-.md)|Controls LINK optimizations.|  
|[/ORDER](../buildref/-order--put-functions-in-order-.md)|Places COMDATs into the image in a predetermined order.|  
|[/OUT](../buildref/-out--output-file-name-.md)|Specifies the output file name.|  
|[/PDB](../buildref/-pdb--use-program-database-.md)|Creates a program database (PDB) file.|  
|[/PDBALTPATH](../buildref/-pdbaltpath--use-alternate-pdb-path-.md)|Uses an alternate location to save a PDB file.|  
|[/PDBSTRIPPED](../buildref/-pdbstripped--strip-private-symbols-.md)|Creates a program database (PDB) file that has no private symbols.|  
|[/PGD](../buildref/-pgd--specify-database-for-profile-guided-optimizations-.md)|Specifies a .pgd file for profile-guided optimizations.|  
|[/PROFILE](../buildref/-profile--performance-tools-profiler-.md)|Produces an output file that can be used with the Performance Tools profiler.|  
|[/RELEASE](../buildref/-release--set-the-checksum-.md)|Sets the Checksum in the .exe header.|  
|[/SAFESEH](../buildref/-safeseh--image-has-safe-exception-handlers-.md)|Specifies that the image will contain a table of safe exception handlers.|  
|[/SECTION](../buildref/-section--specify-section-attributes-.md)|Overrides the attributes of a section.|  
|[/STACK](../buildref/-stack--stack-allocations-.md)|Sets the size of the stack in bytes.|  
|[/STUB](../buildref/-stub--ms-dos-stub-file-name-.md)|Attaches an MS-DOS stub program to a Win32 program.|  
|[/SUBSYSTEM](../buildref/-subsystem--specify-subsystem-.md)|Tells the operating system how to run the .exe file.|  
|[/SWAPRUN](../buildref/-swaprun--load-linker-output-to-swap-file-.md)|Tells the operating system to copy the linker output to a swap file before it is run.|  
|[/TLBID](../buildref/-tlbid--specify-resource-id-for-typelib-.md)|Specifies the resource ID of the linker-generated type library.|  
|[/TLBOUT](../buildref/-tlbout--name-.tlb-file-.md)|Specifies the name of the .tlb file and other MIDL output files.|  
|[/TSAWARE](../buildref/-tsaware--create-terminal-server-aware-application-.md)|Creates an application that is designed specifically to run under Terminal Server.|  
|[/VERBOSE](../buildref/-verbose--print-progress-messages-.md)|Prints linker progress messages.|  
|[/VERSION](../buildref/-version--version-information-.md)|Assigns a version number.|  
|[/WHOLEARCHIVE](../buildref/-wholearchive--include-all-library-object-files-.md)|Includes every object file from specified static libraries.|  
|[/WINMD](../buildref/-winmd--generate-windows-metadata-.md)|Enables generation of a Windows Runtime Metadata file.|  
|[/WINMDFILE](../buildref/-winmdfile--specify-winmd-file-.md)|Specifies the file name for the Windows Runtime Metadata (winmd) output file that's generated by the [/WINMD](../buildref/-winmd--generate-windows-metadata-.md) linker option.|  
|[/WINMDKEYFILE](../buildref/-winmdkeyfile--specify-winmd-key-file-.md)|Specifies a key or key pair to sign a Windows Runtime Metadata file.|  
|[/WINMDKEYCONTAINER](../buildref/-winmdkeycontainer--specify-key-container-.md)|Specifies a key container to sign a Windows Metadata file.|  
|[/WINMDDELAYSIGN](../buildref/-winmddelaysign--partially-sign-a-winmd-.md)|Partially signs a Windows Runtime Metadata (.winmd) file by placing the public key in the winmd file.|  
|[/WX](../buildref/-wx--treat-linker-warnings-as-errors-.md)|Treats linker warnings as errors.|  
  
 For more information, see [Compiler-Controlled LINK Options](../buildref/compiler-controlled-link-options.md).  
  
## See Also  
 [C/C++ Building Reference](../buildref/c-c---building-reference.md)   
 [Setting Linker Options](../buildref/setting-linker-options.md)   
 [Frequently Asked Questions on Building](assetId:///56a3bb8f-0181-4989-bab4-a07ba950ab08)