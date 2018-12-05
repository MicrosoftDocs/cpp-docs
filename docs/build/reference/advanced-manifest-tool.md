---
title: "Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCManifestTool.KeyFile", "VC.Project.VCManifestTool.UpdateFileHashes", "VC.Project.VCManifestTool.UpdateFileHashesSearchPath", "VC.Project.VCManifestTool.ValidateSignature", "VC.Project.VCManifestTool.KeyContainer"]
ms.assetid: 3d587366-05ea-4956-a978-313069660735
---
# Advanced, Manifest Tool, Configuration Properties, &lt;Projectname&gt; Property Pages Dialog Box

Use this dialog box to specify advanced options for [Mt.exe](https://msdn.microsoft.com/library/aa375649).

To access this property page dialog box, open the property pages for your project or your property sheet. Expand the **Manifest Tool** node under **Configuration Properties**, and then select **Advanced**.

## UIElement List

- **Update File Hashes**

   Uses the /hashupdate option to specify that the manifest tool will compute the hash of files specified in `<file>` elements, and then update the hash attributes with the computed value.

- **Update File Hashes Search Path**

   Specifies the search path for files that are referenced in `<file>` elements. This option also uses the /hashupdate option.

## See Also

[\<file> Element](/visualstudio/deployment/file-element-clickonce-application)<br>
[ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest)<br>
[Manifest Tool Property Pages](manifest-tool-property-pages.md)<br>
[Working with Project Properties](../working-with-project-properties.md)