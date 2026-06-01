---
description: "Learn more about: COM+ 1.0 Support in ATL Projects"
title: "COM+ 1.0 Support in ATL Projects"
ms.date: "11/04/2016"
f1_keywords: ["vc.appwiz.ATL.MTS"]
helpviewer_keywords: ["ATL projects, COM+ 1.0 support"]
---
# COM+ 1.0 Support in ATL Projects

[!INCLUDE[product-lifecycle-status](../includes/lifecycle-note.md)]

You can use the [ATL Project Wizard](../../atl/reference/creating-an-atl-project.md) to create a project with basic support for COM+ 1.0 components.

COM+ 1.0 is designed for developing distributed component-based applications. It also provides a run-time infrastructure for deploying and managing these applications.

If you select the **Support COM+ 1.0** check box, the wizard modifies the build script in the link step. Specifically, the COM+ 1.0 project links to the following libraries:

- comsvcs.lib

- Mtxguid.lib

If you select the **Support COM+ 1.0** check box, you can also select **Support component registrar**. The component registrar allows your COM+ 1.0 object to get a list of components, register components, or unregister components (individually or all at once).

## See also

[Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Programming with ATL and C Run-Time Code](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md)
