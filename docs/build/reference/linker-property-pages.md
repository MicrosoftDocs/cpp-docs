---
description: "Learn more about: Linker Property Pages"
title: "Linker Property Pages"
ms.date: "07/24/2019"
ms.topic: "article"
ms.assetid: 7e7671e5-a35a-4e67-9bdb-661d75c4d11e
---
# Linker Property Pages

The following properties are found under **Project** > **Properties** > **Configuration Properties** > **Linker**. For more information about the linker, see [CL Invokes the Linker](cl-invokes-the-linker.md) and [Linker Options](linker-options.md).

## General Property Page

### Output File

The [/OUT](out-output-file-name.md) option overrides the default name and location of the program that the linker creates.

### Show Progress

Prints Linker Progress Messages

**Choices**

- **Not Set** - No verbosity.
- **Display all progress messages** - Displays all progress messages.
- **For Libraries Searched** - Displays progress messages indicating just the libraries searched.
- **About COMDAT folding during optimized linking** - Displays information about COMDAT folding during optimized linking.
- **About data removed during optimized linking** - Displays information about functions and data removed during optimized linking.
- **About Modules incompatible with SEH** - Displays information about modules incompatible with Safe Exception Handling.
- **About linker activity related to managed code** - Display information about linker activity related to managed code.

### Version

The [/VERSION](version-version-information.md) option tells the linker to put a version number in the header of the .exe or .dll file. Use DUMPBIN /HEADERS to see the image version field of the OPTIONAL HEADER VALUES to see the effect of **/VERSION**.

### Enable Incremental Linking

Enables incremental linking. ([/INCREMENTAL](incremental-link-incrementally.md), /INCREMENTAL:NO)

### Suppress Startup Banner

The [/NOLOGO](nologo-suppress-startup-banner-linker.md) option prevents display of the copyright message and version number.

### Ignore Import Library

This property tells the linker not to link any .lib output generated from this build into any dependent project. It allows the project system to handle .dll files that don't produce a .lib file when built. If a project depends on another project that produces a DLL, the project system automatically links the .lib file produced by that child project. This property may be unnecessary in projects that produce COM DLLs or resource-only DLLs, because these DLLs don't have any meaningful exports. If a DLL has no exports, the linker doesn't generate a .lib file. If no export .lib file is present, and the project system tells the linker to link with the missing DLL, the link fails. Use the **Ignore Import Library** property to resolve this problem. When set to **Yes**, the project system ignores the presence or absence of the .lib file, and causes any project that depends on this project to not link with the nonexistent .lib file.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreImportLibrary%2A>.

### Register Output

Runs `regsvr32.exe /s $(TargetPath)` on the build output, which is valid only on .dll projects. For .exe projects, this property is ignored. To register an .exe output, set a postbuild event on the configuration to do the custom registration that is always required for registered .exe files.

To programmatically access this property, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RegisterOutput%2A>.

### Per-user Redirection

Registration in Visual Studio has traditionally been done in HKEY_CLASSES_ROOT (HKCR). With Windows Vista and later operating systems, to access HKCR you must run Visual Studio in elevated mode. Developers don't always want to run in elevated mode but still must work with registration. Per-user redirection allows you to register without having to run in elevated mode.

Per-user redirection forces any writes to HKCR to be redirected to HKEY\_CURRENT\_USER (HKCU). If per-user redirection is turned off, it can cause [Project Build Error PRJ0050](../../error-messages/tool-errors/project-build-error-prj0050.md) when the program tries to write to HKCR.

### Additional Library Directories

Allows the user to override the environmental library path. ([/LIBPATH](libpath-additional-libpath.md):folder)

### Link Library Dependencies

Specifies whether to link the .lib files that are produced by dependent projects. Typically, you want to link in the .lib files, but it may not be the case for certain DLLs.

You can also specify a .obj file by providing the file name and relative path, for example "..\\..\MyLibProject\MyObjFile.obj". If the source code for the .obj file #includes a precompiled header, for example pch.h, then the pch.obj file is located in the same folder as MyObjFile.obj. You must also add pch.obj as an additional dependency.

### Use Library Dependency Inputs

Specifies whether to use the inputs to the librarian tool, rather than the library file itself, when linking in library outputs of project dependencies. In a large project, when a dependent project produces a .lib file, incremental linking is disabled. If there are many dependent projects that produce .lib files, building the application can take a long time. When this property is set to **Yes**, the project system links in the .obj files for .libs produced by dependent projects, enabling incremental linking.

For information about how to access the **General** linker property page, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

### Link Status

Specifies whether the linker should display a progress indicator showing what percentage of the link is complete. The default is to not display this status information. ([/LTCG](ltcg-link-time-code-generation.md):STATUS|LTCG:NOSTATUS)

### Prevent DLL Binding

[/ALLOWBIND](allowbind-prevent-dll-binding.md):NO sets a bit in a DLL's header that indicates to Bind.exe that the image isn't allowed to be bound. You may not want a DLL to be bound if it has been digitally signed (binding invalidates the signature).

### Treat Linker Warning As Errors

[/WX](wx-treat-linker-warnings-as-errors.md) causes no output file to be generated if the linker generates a warning.

### Force File Output

The [/FORCE](force-force-file-output.md) option tells the linker to create an .exe file or DLL even if a symbol is referenced but not defined, or is multiply defined. It may create invalid .exe file.

**Choices**

- **Enabled** - /FORCE with no arguments implies both multiple and unresolved.
- **Multiply Defined Symbol Only** - Use /FORCE:MULTIPLE to create an output file, even if LINK finds more than one definition for a symbol.
- **Undefined Symbol Only** - Use /FORCE:UNRESOLVED to create an output file whether or not LINK finds an undefined symbol. /FORCE:UNRESOLVED is ignored if the entry point symbol is unresolved.

### Create Hot Patchable Image

Prepares an image for hotpatching.

**Choices**

- **Enabled** - Prepares an image for hotpatching.
- **X86 Image Only** - Prepares an X86 image for hotpatching.
- **X64 Image Only** - Prepares an X64 image for hotpatching.
- **Itanium Image Only** - Prepares an Itanium image for hotpatching.

### Specify Section Attributes

The [/SECTION](section-specify-section-attributes.md) option changes the attributes of a section, overriding the attributes set when the .obj file for the section was compiled.

## Input Property Page

### Additional Dependencies

Specifies additional items to add to the link command line, for example *kernel32.lib*.

### Ignore All Default Libraries

The [/NODEFAULTLIB](nodefaultlib-ignore-libraries.md) option tells the linker to remove one or more default libraries from the list of libraries it searches when resolving external references.

### Ignore Specific Default Libraries

Specifies one or more names of default libraries to ignore. Separate multiple libraries with semi-colons. (/NODEFAULTLIB:[name, name, ...])

### Module Definition File

The [/DEF](def-specify-module-definition-file.md) option passes a module-definition file (.def) to the linker. Only one .def file can be specified to LINK.

### Add Module to Assembly

The [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md) option allows you to add a module reference to an assembly. Type information in the module will not be available to the assembly program that added the module reference. However, type information in the module will be available to any program that references the assembly.

### Embed Managed Resource File

[/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md) embeds a resource file in the output file.

### Force Symbol References

The [/INCLUDE](include-force-symbol-references.md) option tells the linker to add a specified symbol to the symbol table.

### Delay Loaded DLLs

The [/DELAYLOAD](delayload-delay-load-import.md) option causes delayed loading of DLLs. The dll name specifies a DLL to delay load.

### Assembly Link Resource

The [/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md) option creates a link to a .NET Framework resource in the output file; the resource file is not placed in the output file.

## Manifest File Property Page

### Generate Manifest

[/MANIFEST](manifest-create-side-by-side-assembly-manifest.md) specifies that the linker should create a side-by-side manifest file.

### Manifest File

[/MANIFESTFILE](manifestfile-name-manifest-file.md) lets you change the default name of the manifest file. The default name of the manifest file is the file name with .manifest appended.

### Additional Manifest Dependencies

[/MANIFESTDEPENDENCY](manifestdependency-specify-manifest-dependencies.md) lets you specify attributes that will be placed in the dependency section of the manifest file.

### Allow Isolation

Specifies behavior for manifest lookup. ([/ALLOWISOLATION](allowisolation-manifest-lookup.md):NO)

### Enable User Account Control (UAC)

Specifies whether or not User Account Control is enabled.  ([/MANIFESTUAC](manifestuac-embeds-uac-information-in-manifest.md), /MANIFESTUAC:NO)

### UAC Execution Level

Specifies the requested execution level for the application when running with User Account Control.  (/MANIFESTUAC:level=[value])

**Choices**

- **asInvoker** - UAC Execution Level: as invoker.
- **highestAvailable** - UAC Execution Level: highest available.
- **requireAdministrator** - UAC Execution Level: require administrator.

### UAC Bypass UI Protection

Specifies whether or not to bypass user interface protection levels for other windows on the desktop.  Set this property to 'Yes' only for accessibility applications.  ([/MANIFESTUAC](manifestuac-embeds-uac-information-in-manifest.md):uiAccess=[true | false])

## Debugging Property Page

### Generate Debug Info

This option enables creation of debugging information for the .exe file or the DLL.

**Choices**

- **No** - Produces no debugging information.
- **Generate Debug Information** - Create a complete Program Database (PDB) ideal for distribution to Microsoft Symbol Server.
- **Generate Debug Information optimized for faster links** - Produces a program database (PDB) ideal for edit-link-debug cycle.
- **Generate Debug Information optimized for sharing and publishing** - Produces a program database (PDB) ideal for edit-link-debug cycle.

### Generate Program Database File

By default, when [/DEBUG](debug-generate-debug-info.md) is specified, the linker creates a program database (PDB) which holds debugging information. The default file name for the PDB has the base name of the program and the extension .pdb.

### Strip Private Symbols

The [/PDBSTRIPPED](pdbstripped-strip-private-symbols.md) option creates a second program database (PDB) file when you build your program image with any of the compiler or linker options that generate a PDB file (/DEBUG, /Z7, /Zd, or /Zi).

### Generate Map File

The [/MAP](map-generate-mapfile.md) option tells the linker to create a mapfile.

### Map File Name

A user-specified name for the mapfile. It replaces the default name.

### Map Exports

The [/MAPINFO](mapinfo-include-information-in-mapfile.md) option tells the linker to include the specified information in a mapfile, which is created if you specify the /MAP option. EXPORTS tells the linker to include exported functions.

### Debuggable Assembly

[/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md) emits the DebuggableAttribute attribute with debug information tracking and disables JIT optimizations.

## System Property Page

### SubSystem

The [/SUBSYSTEM](subsystem-specify-subsystem.md) option tells the operating system how to run the .exe file. The choice of subsystem affects the entry point symbol (or entry point function) that the linker will choose.

**Choices**

- **Not Set** - No subsystem set.
- **Console** - Win32 character-mode application. Console applications are given a console by the operating system. If main or wmain is defined, CONSOLE is the default.
- **Windows** - Application does not require a console, probably because it creates its own windows for interaction with the user. If WinMain or wWinMain is defined, WINDOWS is the default.
- **Native** - Device drivers for Windows NT. If /DRIVER:WDM is specified, NATIVE is the default.
- **EFI Application** - EFI Application.
- **EFI Boot Service Driver** - EFI Boot Service Driver.
- **EFI ROM** - EFI ROM.
- **EFI Runtime** - EFI Runtime.
- **POSIX** - Application that runs with the POSIX subsystem in Windows NT.

### Minimum Required Version

Specify the minimum required version of the subsystem. The arguments are decimal numbers in the range 0 through 65,535.

### Heap Reserve Size

Specifies total heap allocation size in virtual memory. Default is 1 MB.    ([/HEAP](heap-set-heap-size.md):reserve)

### Heap Commit Size

Specifies total heap allocation size in physical memory. Default is 4 KB.    ([/HEAP](heap-set-heap-size.md):reserve,commit)

### Stack Reserve Size

Specifies the total stack allocation size in virtual memory. Default is 1 MB.     ([/STACK](stack-stack-allocations.md):reserve)

### Stack Commit Size

Specifies the total stack allocation size in physical memory. Default is 4 KB.     ([/STACK](stack-stack-allocations.md):reserve,commit)

### Enable Large Addresses

The [/LARGEADDRESSAWARE](largeaddressaware-handle-large-addresses.md) option tells the linker that the application can handle addresses larger than 2 gigabytes. By default, /LARGEADDRESSAWARE:NO is enabled if /LARGEADDRESSAWARE is not otherwise specified on the linker line.

### Terminal Server

The [/TSAWARE](tsaware-create-terminal-server-aware-application.md) option sets a flag in the IMAGE_OPTIONAL_HEADER DllCharacteristics field in the program image's optional header. When this flag is set, Terminal Server will not make certain changes to the application.

### Swap Run From CD

The [/SWAPRUN](swaprun-load-linker-output-to-swap-file.md) option tells the operating system to first copy the linker output to a swap file, and then run the image from there. This option is a Windows NT 4.0 (and later) feature. When **CD** is specified, the operating system will copy the image on a removable disk to a page file and then load it.

### Swap Run From Network

The [/SWAPRUN](swaprun-load-linker-output-to-swap-file.md) option tells the operating system to first copy the linker output to a swap file, and then run the image from there. This option is a Windows NT 4.0 (and later) feature. If **NET** is specified, the operating system will first copy the binary image from the network to a swap file and load it from there. This option is useful for running applications over the network.

### Driver

Use the [/DRIVER](driver-windows-nt-kernel-mode-driver.md) linker option to build a Windows NT kernel mode driver.

**Choices**

- **Not Set** - Default driver setting.
- **Driver** - Driver
- **UP Only** - /DRIVER:UPONLY causes the linker to add the IMAGE_FILE_UP_SYSTEM_ONLY bit to the characteristics in the output header to specify that it is a uniprocessor (UP) driver. The operating system will refuse to load a UP driver on a multiprocessor (MP) system.
- **WDM** - /DRIVER:WDM causes the linker to set the IMAGE_DLLCHARACTERISTICS_WDM_DRIVER bit in the optional header's DllCharacteristics field.

## Optimization Property Page

### References

[/OPT](opt-optimizations.md):REF eliminates functions and/or data that's never referenced while /OPT:NOREF keeps functions and/or data that's never referenced.

### Enable COMDAT Folding

Use [/OPT](opt-optimizations.md):ICF\[=iterations] to perform identical COMDAT folding.

### Function Order

The [/ORDER](order-put-functions-in-order.md)option tells LINK to optimize your program by placing certain COMDATs into the image in a predetermined order. LINK places the functions in the specified order within each section in the image.

### Profile Guided Database

Specify .pgd file for profile guided optimizations. ([/PGD](pgd-specify-database-for-profile-guided-optimizations.md))

### Link Time Code Generation

Specifies link-time code generation. ([/LTCG](ltcg-link-time-code-generation.md))

**Choices**

- **Default** - Default LTCG setting.
- **Use Fast Link Time Code Generation** - Use Link Time Code Generation with [/FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md).
- **Use Link Time Code Generation** - Use [Link Time Code Generation](ltcg-link-time-code-generation.md).
- **Profile Guided Optimization - Instrument** - Use [profile guided optimization](../profile-guided-optimizations.md) with :PGINSTRUMENT.
- **Profile Guided Optimization - Optimization** - Specifies that the linker should use the profile data created after running the instrumented binary to create an optimized image.
- **Profile Guided Optimization - Update** - Allows and tracks list of input files to be added or modified from what was specified in the :PGINSTRUMENT phase.

## Embedded IDL Property Page

### MIDL Commands

Specify MIDL command line Options. ([/MIDL](midl-specify-midl-command-line-options.md):@responsefile)

### Ignore Embedded IDL

The [/IGNOREIDL](ignoreidl-don-t-process-attributes-into-midl.md) option specifies that any IDL attributes in source code should not be processed into an .idl file.

### Merged IDL Base File Name

The [/IDLOUT](idlout-name-midl-output-files.md) option specifies the name and extension of the .idl file.

### Type Library

The [/TLBOUT](tlbout-name-dot-tlb-file.md) option specifies the name and extension of the .tlb file.

### TypeLib Resource ID

Allows you to specify the resource ID of the linker-generated type library. ([/TLBID](tlbid-specify-resource-id-for-typelib.md):id)

## Windows Metadata Property Page

### Generate Windows Metadata

Enables or disable generation of Windows Metadata.

**Choices**

- **Yes** - Enable generation of Windows Metadata files.
- **No** - Disable the generation of Windows Metadata files.

### Windows Metadata File

The [/WINMDFILE](winmdfile-specify-winmd-file.md) option switch.

### Windows Metadata Key File

Specify key or key pair to sign an Windows Metadata. ([/WINMDKEYFILE](winmdkeyfile-specify-winmd-key-file.md):filename)

### Windows Metadata Key Container

Specify a key container to sign an Windows Metadata. ([/WINMDKEYCONTAINER](winmdkeycontainer-specify-key-container.md):name)

### Windows Metadata Delay Sign

Partially sign an Windows Metadata. Use [/WINMDDELAYSIGN](winmddelaysign-partially-sign-a-winmd.md) if you only want to place the public key in the Windows Metadata. The default is /WINMDDELAYSIGN:NO.

## Advanced Property Page

### Entry Point

The [/ENTRY](entry-entry-point-symbol.md) option specifies an entry point function as the starting address for an .exe file or DLL.

### No Entry Point

The [/NOENTRY](noentry-no-entry-point.md)option is required for creating a resource-only DLL.Use this option to prevent LINK from linking a reference to `_main` into the DLL.

### Set Checksum

The [/RELEASE](release-set-the-checksum.md) option sets the Checksum in the header of an .exe file.

### Base Address

Sets a base address for the program. ([/BASE](base-base-address.md):{address\[,size] | @filename,key})

### Randomized Base Address

Randomized Base Address. ([/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md)\[:NO])

### Fixed Base Address

Creates a program that can be loaded only at its preferred base address. ([/FIXED](fixed-fixed-base-address.md)\[:NO])

### Data Execution Prevention (DEP)

Marks an executable as having been tested to be compatible with Windows Data Execution Prevention feature. ([/NXCOMPAT](nxcompat-compatible-with-data-execution-prevention.md)\[:NO])

### Turn Off Assembly Generation

The [/NOASSEMBLY](noassembly-create-a-msil-module.md) option tells the linker to create an image for the current output file without a .NET Framework assembly.

### Unload delay loaded DLL

The **UNLOAD** qualifier tells the delay-load helper function to support explicit unloading of the DLL. ([/DELAY](delay-delay-load-import-settings.md):UNLOAD)

### Nobind delay loaded DLL

The **NOBIND** qualifier tells the linker not to include a bindable IAT in the final image. The default is to create the bindable IAT for delay-loaded DLLs. ([/DELAY](delay-delay-load-import-settings.md):NOBIND)

### Import Library

Overrides the default import library name. ([/IMPLIB](implib-name-import-library.md):filename)

### Merge Sections

The [/MERGE](merge-combine-sections.md) option combines the first section (from) with the second section (to), naming the resulting section to. For example, /merge:.rdata=.text.

### Target Machine

The [/MACHINE](machine-specify-target-platform.md) option specifies the target platform for the program.

**Choices**

- **Not Set**
- **MachineARM**
- **MachineARM64**
- **MachineEBC**
- **MachineIA64**
- **MachineMIPS**
- **MachineMIPS16**
- **MachineMIPSFPU**
- **MachineMIPSFPU16**
- **MachineSH4**
- **MachineTHUMB**
- **MachineX64**
- **MachineX86**

### Profile

Produces an output file that can be used with the Performance Tools profiler. Requires GenerateDebugInformation (/[/DEBUG](debug-generate-debug-info.md)) to be set. ([/PROFILE](profile-performance-tools-profiler.md))

### CLR Thread Attribute

Explicitly specify the threading attribute for the entry point of your CLR program.

**Choices**

- **MTA threading attribute** - Applies the MTAThreadAttribute attribute to the entry point of your program.
- **STA threading attribute** - Applies the STAThreadAttribute attribute to the entry point of your program.
- **Default threading attribute** - Same as not specifying [/CLRTHREADATTRIBUTE](clrthreadattribute-set-clr-thread-attribute.md). Lets the Common Language Runtime (CLR) set the default threading attribute.

### CLR Image Type

Sets the type (IJW, pure, or safe) of a CLR image.

**Choices**

- **Force IJW image**
- **Force Pure IL Image**
- **Force Safe IL Image**
- **Default image type**

### Key File

Specify key or key pair to sign an assembly. ([/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md):filename)

### Key Container

Specify a key container to sign an assembly. ([/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md):name)

### Delay Sign

Partially sign an assembly. Use [/DELAYSIGN](delaysign-partially-sign-an-assembly.md) if you only want to place the public key in the assembly. The default is /DELAYSIGN:NO.

### CLR Unmanaged Code Check

[/CLRUNMANAGEDCODECHECK](clrunmanagedcodecheck-add-suppressunmanagedcodesecurityattribute.md) specifies whether the linker will apply SuppressUnmanagedCodeSecurityAttribute to linker-generated PInvoke calls from managed code into native DLLs.

### Error Reporting

Allows you to provide internal compiler error (ICE) information directly to the Visual C++ team.

**Choices**

- **PromptImmediately** - Prompt immediately.
- **Queue For Next Login** - Queue for next login.
- **Send Error Report** - Send error report.
- **No Error Report** - No error report.

### SectionAlignment

The [/ALIGN](align-section-alignment.md) option specifies the alignment of each section within the linear address space of the program. The number argument is in bytes and must be a power of two.

### Preserve Last Error Code for PInvoke Calls

[/CLRSUPPORTLASTERROR](clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls.md), which is on by default, preserves the last error code of functions called through the P/Invoke mechanism, which allows you to call native functions in DLLS, from code compiled with /clr.

**Choices**

- **Enabled** - Enable CLRSupportLastError.
- **Disabled** - Disable CLRSupportLastError.
- **System Dlls Only** - Enable CLRSupportLastError for system dlls only.

### Image Has Safe Exception Handlers

When [/SAFESEH](safeseh-image-has-safe-exception-handlers.md) is specified, the linker will only produce an image if it can also produce a table of the image's safe exception handlers. This table specifies for the operating system which exception handlers are valid for the image.
