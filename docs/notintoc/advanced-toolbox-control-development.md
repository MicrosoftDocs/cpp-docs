---
title: "Advanced Toolbox Control Development"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "Toolbox [Visual Studio SDK], adding items using MPF"
ms.assetid: d22479a8-6d95-400c-a115-f46d10c10d2f
caps.latest.revision: 19
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
# Advanced Toolbox Control Development
> [!NOTE]
>  The recommended way to add custom controls to the Toolbox is to use the Toolbox Control templates that come with the Visual Studio 10 SDK. This topic is retained for backward compatibility, for adding existing controls to the Toolbox, and for advanced Toolbox control development.  
>   
>  For more information on creating toolbox controls by using the templates, see [How to: Create a Toolbox Control That Uses Windows Forms](../notintoc/how-to--create-a-toolbox-control-that-uses-windows-forms.md) and [Creating a WPF Toolbox Control](../Topic/Creating%20a%20WPF%20Toolbox%20Control.md).  
  
 A VSPackage based on the Managed Package Framework can extend [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] Toolbox functionality by adding controls, objects derived from \<xref:System.Drawing.Design.ToolboxItem> objects. Each \<xref:System.Drawing.Design.ToolboxItem> is implemented by an object derived from \<xref:System.ComponentModel.Component>.  
  
## Toolbox Item Provider VSPackage  
 A VSPackage based on the Managed Package Framework must register itself as a Toolbox control provider through [!INCLUDE[dnprdnshort](../ide/includes/dnprdnshort_md.md)] attributes and handle Toolbox-related events.  
  
#### To configure a VSPackage as a Toolbox Item Provider  
  
1.  Create an instance of the \<xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> applied to the class implementing \<xref:Microsoft.VisualStudio.Shell.Package>. For example:  
  
    ```vb#  
    Namespace Vsip.LoadToolboxMembers   
        <ProvideToolboxItems(14)> _   
        <DefaultRegistryRoot("Software\Microsoft\VisualStudio\8.0")> _   
        <InstalledProductRegistration(False, "#100", "#102", "1.0", IconResourceID := 400)> _   
        <ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)> _   
        <ProvideMenuResource(1000, 1)> _   
        <Guid("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")> _   
        Public Class LoadToolboxMembers   
            Inherits Package   
        End Class   
    End Namespace  
    ```  
  
    ```c#  
    namespace Vsip.LoadToolboxMembers {  
        [ProvideToolboxItems(14)]  
        [DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\8.0")]  
        [InstalledProductRegistration(false, "#100", "#102", "1.0", IconResourceID = 400)]  
        [ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)]  
        [ProvideMenuResource(1000, 1)]  
        [Guid("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")]  
        public class LoadToolboxMembers : Package {  
    ```  
  
    > [!NOTE]
    >  The constructor for \<xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> takes an integer version number as an argument. The [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] environment uses this version number to determine if a VSPackage providing \<xref:System.Drawing.Design.ToolboxItem> objects must be reloaded or if cached information can be used by the Toolbox. To guarantee reloading of a VSPackage when providing a \<xref:System.Drawing.Design.ToolboxItem> that is under development, always increment this version number after any modification.  
  
2.  If the \<xref:System.Drawing.Design.ToolboxItem> objects provide non-standard Toolbox Clipboard formats, an instance of \<xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> must be applied to the class implementing the \<xref:Microsoft.VisualStudio.Shell.Package> object for each Clipboard format supported by the \<xref:System.Drawing.Design.ToolboxItem> objects that the VSPackage provides.  
  
     For more information on supported Toolbox Clipboard formats, see [Extending the Toolbox](../notintoc/extending-the-toolbox.md).  
  
    > [!NOTE]
    >  If a VSPackage indicates that it provides any \<xref:System.Drawing.Design.ToolboxItem> objects with non-standard Clipboard formats, the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] environment assumes that only those formats indicated by the \<xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> instances applied to a VSPackage's \<xref:Microsoft.VisualStudio.Shell.Package> class implementation are supported by the VSPackage. If a VSPackage needs to support the default Clipboard formats as well as a non-standard format, it must apply an instance of \<xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> for each default format as well as the non-standard format.  
  
3.  If the VSPackage provides the dynamic configuration of \<xref:System.Drawing.Design.ToolboxItem>, it must:  
  
    1.  Apply an instance of \<xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute> constructed using the \<xref:System.Type> that the package uses to implement the \<xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface.  
  
    2.  On a `public` class independent of the VSPackage's \<xref:Microsoft.VisualStudio.Shell.Package>, the VSPackage must implement the \<xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface.  
  
         An instance of the \<xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> must be applied to the class implementing \<xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>, using a string containing a selection criteria (filter) as the argument to the \<xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute> instance's constructor.  
  
 For information on how to notify the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] environment that a VSPackage provides Toolbox controls, see [Registering Toolbox Support Features](../notintoc/registering-toolbox-support-features.md).  
  
 For an example illustrating how one might implement \<xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> support, see [Walkthrough: Customizing Toolbox Item Configuration Dynamically](../notintoc/walkthrough--customizing-toolbox-item-configuration-dynamically.md).  
  
1.  VSPackages providing a \<xref:System.Drawing.Design.ToolboxItem> must handle \<xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> and \<xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> events.  
  
    1.  Implement handlers for the \<xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> and \<xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> events:  
  
        ```vb#  
        Private Sub OnToolboxUpgraded(ByVal sender As Object, ByVal e As EventArgs)   
            OnToolboxInitialized(send, e)   
        End Sub   
        Private Sub OnToolboxInitialized(ByVal sender As Object, ByVal e As EventArgs)   
            'Make sure all toolbox items are added.   
        End Sub  
        ```  
  
        ```c#  
        private void OnToolboxUpgraded(object sender, EventArgs e) {  
            OnToolboxInitialized(send,e);  
        }  
        private void OnToolboxInitialized(object sender, EventArgs e) {  
            //Make sure all toolbox items are added.  
        }  
        ```  
  
    2.  Subscribe to the \<xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> and \<xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> events.  
  
         This is typically done in the \<xref:Microsoft.VisualStudio.Shell.Package> implementation's \<xref:Microsoft.VisualStudio.Shell.Package.Initialize*> method:  
  
        ```vb#  
        Protected Overloads Overrides Sub Initialize()   
            AddHandler ToolboxInitialized, AddressOf OnToolboxInitialized   
            AddHandler ToolboxUpgraded, AddressOf OnToolboxUpgraded   
        End Sub  
        ```  
  
        ```c#  
        protected override void Initialize() {  
            ToolboxInitialized += new EventHandler(OnToolboxInitialized);  
            ToolboxUpgraded += new EventHandler(OnToolboxUpgraded);  
        }  
        ```  
  
     For an example of how to implement handlers for \<xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> and \<xref:Microsoft.VisualStudio.Shell.Package.ToolboxUpgraded> events, see [Walkthrough: Autoloading Toolbox Items](../notintoc/walkthrough--autoloading-toolbox-items.md).  
  
## Toolbox Control Creation  
 The underlying implementation of a Toolbox control must be derived from \<xref:System.ComponentModel.Component> and encapsulated in the default or a derived implementation of the \<xref:System.Drawing.Design.ToolboxItem> object.  
  
 The easiest way to provide a \<xref:System.ComponentModel.Component>-derived implementation of Toolbox controls is by extending an object derived from \<xref:System.Windows.Forms.Control>, in particular, the \<xref:System.Windows.Forms.UserControl> class.  
  
#### To create Toolbox controls  
  
1.  Use **Solution Explorer**'s **Add New Item** command to create a Toolbox object that implements \<xref:System.Windows.Forms.UserControl>.  
  
    ```vb#  
    Public Partial Class ToolboxControl1   
        Inherits UserControl   
        Public Sub New()   
            InitializeComponent()   
        End Sub   
        Private Sub button1_Click(ByVal sender As Object, ByVal e As EventArgs)   
            MsgBox("Hello world from" & Me.ToString())   
        End Sub   
  
        Private Sub ToolboxItem1_Load(ByVal sender As Object, ByVal e As EventArgs)   
  
        End Sub   
    End Class  
    ```  
  
    ```c#  
    public partial class ToolboxControl1 : UserControl {  
            public ToolboxControl1() {  
                InitializeComponent();  
            }  
  
            private void button1_Click(object sender, EventArgs e) {  
                MessageBox.Show("Hello world from" + this.ToString());  
            }  
  
            private void ToolboxItem1_Load(object sender, EventArgs e) {  
  
            }  
        }  
    ```  
  
     For more information on authoring Windows Forms controls and toolbox controls, see [Developing Custom Windows Forms Controls with the .NET Framework](../Topic/Developing%20Custom%20Windows%20Forms%20Controls%20with%20the%20.NET%20Framework.md) or [Walkthrough: Autoloading Toolbox Items](../notintoc/walkthrough--autoloading-toolbox-items.md).  
  
2.  (Optional) An application can choose to use a custom object derived from the \<xref:System.Drawing.Design.ToolboxItem> object to provide its Toolbox control to the **Toolbox**.  
  
    > [!NOTE]
    >  Any class derived from the \<xref:System.Drawing.Design.ToolboxItem> object must have an instance of the \<xref:System.SerializableAttribute> applied to it.  
  
     A custom implementation derived from \<xref:System.Drawing.Design.ToolboxItem> can extend an application by providing greater control over how the \<xref:System.Drawing.Design.ToolboxItem> data is serialized, enhanced handling of designer metadata, support for non-standard Clipboard formats, and functionality that allows end-user interaction.  
  
     In the example, users are prompted by a dialog box to select features:  
  
    ```vb#  
    <ToolboxItemAttribute(GetType(CustomControl))> _   
    <Serializable()> _   
    Class CustomControl   
        Inherits ToolboxItem   
  
        Public Sub New(ByVal type As Type)   
            MyBase.New(GetType(CustomControl))   
        End Sub   
        Public Sub New(ByVal type As Type, ByVal icon As Bitmap)   
            MyBase.New(GetType(SCustomControl))   
            Me.DisplayName = "CustomContorl"   
            Me.Bitmap = icon   
        End Sub   
  
        Private Sub New(ByVal info As SerializationInfo, ByVal context As StreamingContext)   
            Deserialize(info, context)   
        End Sub   
        Protected Overloads Overrides Function CreateComponentsCore(ByVal host As IDesignerHost) As IComponent()   
            Dim dialog As New CustomControlDialog(host)   
            Dim dialogResult__1 As DialogResult = dialog.ShowDialog()   
            If dialogResult__1 = DialogResult.OK Then   
                Dim component As IComponent = DirectCast(dialog.CustomInstance, IComponent)   
                Dim container As IContainer = host.Container   
                container.Add(component)   
                Return New IComponent() {component}   
            Else   
                Return New IComponent() {}   
            End If   
        End Function   
    End Class  
    ```  
  
    ```c#  
    [ToolboxItemAttribute(typeof(CustomControl))]  
    [Serializable]  
    class CustomControl : ToolboxItem {  
  
        public CustomControl(Type type) : base(typeof(CustomControl)) {}  
            public CustomControl(Type type, Bitmap icon) : base(typeof(SCustomControl)) {  
            this.DisplayName = "CustomContorl";  
            this.Bitmap = icon;  
        }  
  
        private CustomControl(SerializationInfo info, StreamingContext context) {  
            Deserialize(info, context);  
        }  
        protected override IComponent[] CreateComponentsCore(IDesignerHost host) {  
            CustomControlDialog dialog = new CustomControlDialog(host);  
            DialogResult dialogResult = dialog.ShowDialog();  
            if (dialogResult == DialogResult.OK) {  
                IComponent component = (IComponent)dialog.CustomInstance;  
                IContainer container = host.Container;  
                container.Add(component);  
                return new IComponent[] { component };  
            }  
            else {  
                return new IComponent[] {};  
            }  
        }  
    }  
    ```  
  
> [!NOTE]
>  It is also possible for a class derived from the \<xref:System.Drawing.Design.ToolboxItem> object to provide its own self-contained implementation of the underlying control. That class is then responsible for creating and supplying all underlying components.  
  
## Explicit Addition of Toolbox Items  
 To be added to the Toolbox, a control must be contained in an instance of \<xref:System.Drawing.Design.ToolboxItem> or of an object derived from \<xref:System.Drawing.Design.ToolboxItem> and then be added to the **Toolbox** using the \<xref:System.Drawing.Design.IToolboxService> interface.  
  
#### To encapsulate and add Toolbox controls  
  
1.  Encapsulate the \<xref:System.ComponentModel.Component> implementation in an instance of a \<xref:System.Drawing.Design.ToolboxItem> object or a \<xref:System.Drawing.Design.ToolboxItem>-derived object by calling that object's \<xref:System.Drawing.Design.ToolboxItem.Initialize*> method with the implementing component's \<xref:System.Type?displayProperty=fullName>:  
  
    ```vb#  
    Dim customItem As New ToolboxItem()   
    If customItem IsNot Nothing Then   
        customItem.Initialize(userControl)   
    End If  
    ```  
  
    ```c#  
    ToolboxItem customItem = new ToolboxItem() ;  
    if (customItem != null) {  
        customItem.Initialize(userControl);  
    }  
    ```  
  
     Above is an example of an object `userControl` derived from \<xref:System.Windows.Forms.UserControl> (an instance of the `ToolboxControl1` object shown above) being used to construct a new \<xref:System.Drawing.Design.ToolboxItem>.  
  
    > [!NOTE]
    >  The default implementation of the \<xref:System.Drawing.Design.ToolboxItem> constructor taking a \<xref:System.Type?displayProperty=fullName> argument (\<xref:System.Drawing.Design.ToolboxItem.#ctor(System.Type)> constructor calls the \<xref:System.Drawing.Design.ToolboxItem> object's \<xref:System.Drawing.Design.ToolboxItem.Initialize*> method.  
  
2.  Use the Toolbox service (\<xref:System.Drawing.Design.IToolboxService>) to add the \<xref:System.Drawing.Design.ToolboxItem> object constructed from the underlying control implementation.  
  
     In the example below, access to the Toolbox service is obtained, some of the properties of the \<xref:System.Drawing.Design.ToolboxItem> instance `customItem` are set, and then `customItem` is added to the **Toolbox**:  
  
    ```vb#  
    Dim toolboxService As IToolboxService = TryCast(GetService(GetType(IToolboxService)), IToolboxService)  
    customItem.Bitmap = New System.Drawing.Bitmap(ToolBoxControl1, "Control1.bmp")  
    customItem.DisplayName = "Custom Item"   
    toolboxService.AddToolboxItem(item, "Custom Tab")  
    ```  
  
    ```c#  
    IToolboxService toolboxService = GetService(typeof(IToolboxService)) as IToolboxService;  
    customItem.Bitmap = new System.Drawing.Bitmap(ToolboxControl1,"Control1.bmp");  
    customItem.DisplayName= "Custom Item";  
    toolboxService.AddToolboxItem(item, "Custom Tab");  
    ```  
  
## Using Reflection to Add Toolbox Controls  
 Applying attributes to the class implementing a toolbox control allows the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] environment or a [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] based application to use reflection to automatically detect and properly add controls to the **Toolbox**.  
  
#### To apply reflection and attributes to Toolbox controls  
  
1.  Identify all objects used to implement Toolbox controls with instances of \<xref:System.ComponentModel.ToolboxItemAttribute>.  
  
     The type of instance of \<xref:System.ComponentModel.ToolboxItemAttribute> to an object will determines if and how a \<xref:System.Drawing.Design.ToolboxItem> is constructed from it.  
  
    1.  Applying an instance of \<xref:System.ComponentModel.ToolboxItemAttribute> constructed with a `BOOLEAN` value of `false` to an object makes that object unavailable to the Toolbox through reflection.  
  
         This can be useful to isolate an object, such as a \<xref:System.Windows.Forms.UserControl> from the **Toolbox** during development.  
  
    2.  Applying an instance of \<xref:System.ComponentModel.ToolboxItemAttribute> constructed with a `BOOLEAN` value of `true` to an object makes that object available to the Toolbox through reflection and requires that the object be added to the Toolbox using a default \<xref:System.Drawing.Design.ToolboxItem> object.  
  
    3.  Applying an instance of \<xref:System.ComponentModel.ToolboxItemAttribute> constructed with the \<xref:System.Type> of a custom object derived from \<xref:System.Drawing.Design.ToolboxItem> makes the object available to the **Toolbox** through reflection and requires that the object be added to the Toolbox using this custom object derived from \<xref:System.Drawing.Design.ToolboxItem>.  
  
2.  Specify (to the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] environment's reflection mechanism) the bitmap to use for displaying the Toolbox control in the **Toolbox** by adding an instance of \<xref:System.Drawing.ToolboxBitmapAttribute> to the Toolbox control implementation.  
  
3.  If needed, apply instances of \<xref:System.ComponentModel.ToolboxItemFilterAttribute> to \<xref:System.Drawing.Design.ToolboxItem> objects to use reflection to statically mark them for use with objects that have a matching attribute.  
  
     In the example below, a Toolbox control's implementation has an instance of \<xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> applied to it, which makes that control available in the **Toolbox** only when the current working document is a \<xref:System.Windows.Forms.UserControl> designers  
  
    ```vb#  
    <ToolboxItemFilter(System.Windows.Forms.UserControl, ToolboxItemFilterType.Require)> _   
    <SerializableAttribute()> _   
    <GuidAttribute("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")> _   
    Friend Class CustomToolboxItem   
        Inherits ToolboxItem   
    End Class  
    ```  
  
    ```c#  
    [ToolboxItemFilter(System.Windows.Forms.UserControl,ToolboxItemFilterType.Require)]  
    [SerializableAttribute()]  //ToolboxItem implementations much has this attribute.  
    [GuidAttribute("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")]  
    internal class CustomToolboxItem : ToolboxItem   
    ```  
  
 There are three basic techniques for using reflection to autoloading \<xref:System.Drawing.Design.ToolboxItem>.  
  
### Using the ToolService Functionality to Retrieve Toolbox Controls  
 The \<xref:System.Drawing.Design.ToolboxService> provides VSPackages with the static \<xref:System.Drawing.Design.ToolboxService.GetToolboxItems*> methods that use reflection to scan assemblies for all types that support toolbox items, and return items for those types. To be returned, a toolbox item must:  
  
-   Be public.  
  
-   Implement the \<xref:System.ComponentModel.IComponent> class.  
  
-   Not be abstract.  
  
-   Have a \<xref:System.ComponentModel.ToolboxItemAttribute> on its type.  
  
-   Not have a \<xref:System.ComponentModel.ToolboxItemAttribute> set to `false` on its type  
  
-   Not contain generic parameters.  
  
##### To obtain this list  
  
1.  Create an instance of \<xref:System.Reflection.Assembly> referring to the assembly that is to be scanned for \<xref:System.Drawing.Design.ToolboxItem> objects.  
  
    > [!NOTE]
    >  To obtain an instance of \<xref:System.Reflection.Assembly> for the current assembly, use the static method \<xref:System.Reflection.Assembly.GetExecutingAssembly*>.  
  
2.  Call \<xref:System.Drawing.Design.ToolboxService.GetToolboxItems*>, returning an \<xref:System.Collections.ICollection> object containing a list of the appropriate objects.  
  
    > [!NOTE]
    >  If an object in the returned \<xref:System.Collections.ICollection> has a valid instance of \<xref:System.Drawing.ToolboxBitmapAttribute> assigned to its implementation, the \<xref:System.Drawing.Design.ToolboxService.GetToolboxItems*> method will set the \<xref:System.Drawing.Design.ToolboxItem> object's \<xref:System.Drawing.Design.ToolboxItem.Bitmap*> property.  
  
3.  Use \<xref:Microsoft.VisualStudio.Shell.Package.GetService*> to obtain access to \<xref:System.Drawing.Design.IToolboxService>, and use its \<xref:System.Drawing.Design.IToolboxService.AddToolboxItem*> method to add items from the returned \<xref:System.Collections.ICollection> object to the Toolbox.  
  
     The code below queries the running application and obtains a list of all its \<xref:System.Drawing.Design.ToolboxItem> objects and loads them. For an example illustrating this in running code, see the `Initialization` method in [Walkthrough: Customizing Toolbox Item Configuration Dynamically](../notintoc/walkthrough--customizing-toolbox-item-configuration-dynamically.md).  
  
    ```vb#  
    Protected ToolboxItemList As ICollection = Nothing  
    ToolboxItemList = ToolboxService.GetToolboxItems(Assembly.GetExecutingAssembly(), "")  
    If ToolboxItemList Is Nothing Then   
        Throw New ApplicationException("Unable to generate a toolbox Items listing for " & [GetType]().FullName)   
    End If   
    Dim toolboxService As IToolboxService = TryCast(GetService(GetType(IToolboxService)), IToolboxService)   
    For Each itemFromList As ToolboxItem In ToolboxItemList   
        toolboxService.AddToolboxItem(itemFromList, CategoryTab)   
    Next  
    ```  
  
    ```c#  
    protected ICollection ToolboxItemList = null;  
    ToolboxItemList = ToolboxService.GetToolboxItems(Assembly.GetExecutingAssembly(), "");  
    if (ToolboxItemList == null){  
        throw new ApplicationException("Unable to generate a toolbox Items listing for "  
    + GetType().FullName);  
    }  
    IToolboxService toolboxService = GetService(typeof(IToolboxService)) as IToolboxService;  
    foreach (ToolboxItem itemFromList in ToolboxItemList){  
        toolboxService.AddToolboxItem(itemFromList, CategoryTab);  
    }  
    ```  
  
### Using Embedded Text Resources to Autoload Toolbox Controls  
 A text resource in an assembly containing a properly formatted list of Toolbox controls can be used by \<xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource*> to automatically load a Toolbox control if properly formatted.  
  
 A text resource containing a list of objects to load must be available in an assembly accessible to the VSPackage.  
  
##### To add and make available a text resource to the assembly  
  
1.  In **Solution Explorer**, right-click a the project.  
  
2.  Point to **Add**, then click **New Item**.  
  
3.  In the **Add New Item** dialog box, select **Text File** and supply a name.  
  
4.  In **Solution Explorer**, right-click the newly created text file and set the **Build Action** property to **Embedded Resource**.  
  
     Entries for the **Toolbox** control to be loaded must contain the name of the implementing class, the name of the assembly containing it.  
  
     For information on the format of Toolbox controls entries to the embedded text resource, see the \<xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource*> reference page.  
  
5.  Set up a search path for the files containing the assemblies hosting Toolbox control objects.  
  
     \<xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource*>, searches only directories specified in the registry entry HKEY_CURRENT_USER\Software\Microsoft\VisualStudio\\*\<version>*\AssemblyFolders, where *\<version>* is the version number of the release of Visual Studio (for example, 8.0).  
  
    > [!NOTE]
    >  The root path of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>* can be overridden with an alternate root when the Visual Studio shell is initialized, or use of \<xref:Microsoft.VisualStudio.Shell.DefaultRegistryRootAttribute>. For more information see, [Command-Line Switches](../Topic/Command-Line%20Switches%20\(Visual%20Studio%20SDK\).md).  
  
     For details on the correct format of the AssemblyFolder registry entries, see the \<xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource*> reference page.  
  
6.  Obtain an instance of \<xref:System.IO.TextReader.Synchronized*> accessing the embedded text resource, and, if localization support is needed for category names, an instance of \<xref:System.Resources.ResourceManager>, and use these to invoke the \<xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource*> method.  
  
    ```vb#  
    Dim rm As New ResourceManager("TbxCategories", Assembly.GetExecutingAssembly())  
    Dim toolboxStream As Stream = TbxItemProvider.[GetType]().Assembly.GetManifestResourceStream("ToolboxItems.txt")  
    If toolboxStream IsNot Nothing Then   
        Using reader As TextReader = New StreamReader(toolboxStream)   
            ParseToolboxResource(reader, rm)   
        End Using   
    End If  
    ```  
  
    ```c#  
    ResourceManager rm = new ResourceManager("TbxCategories", Assembly.GetExecutingAssembly());  
    Stream toolboxStream = TbxItemProvider.GetType().Assembly.GetManifestResourceStream("ToolboxItems.txt");  
    if (toolboxStream != null) {  
        using (TextReader reader = new StreamReader(toolboxStream)) {  
        ParseToolboxResource(reader, rm);  
    }  
    }  
    ```  
  
     In the example above, a list contained in an embedded text resource in the assembly containing the class `TbxItemProvider` is passed to \<xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource*> along with the `TbxCategories` string resources.  
  
     The method will search all the files containing assemblies in the directories specified under the AssemblyFolders registry entry for the Toolbox controls listed in the resource and load them.  
  
    > [!NOTE]
    >  If a Toolbox control found by \<xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource*> has a valid instance of \<xref:System.Drawing.ToolboxBitmapAttribute> assigned to its implementation, \<xref:Microsoft.VisualStudio.Shell.Package.ParseToolboxResource*> will set the bitmap used to display the Toolbox control.  
  
### Explicitly Using Reflection to Autoload Toolbox Controls  
 If it is necessary to explicitly query assemblies for information about the **Toolbox** controls they contain, rather than delegating the task to \<xref:System.Drawing.Design.ToolboxService.GetToolboxItems*>, this can be done.  
  
##### To explicitly use reflection to autoload Toolbox controls  
  
1.  Create an instance of \<xref:System.Reflection.Assembly>, referring to each assembly that is to be scanned for \<xref:System.Drawing.Design.ToolboxItem> objects.  
  
    > [!NOTE]
    >  To obtain an instance of \<xref:System.Reflection.Assembly> for the current assembly, use the static method \<xref:System.Reflection.Assembly.GetExecutingAssembly*>.  
  
2.  For each assembly to be scanned, use the \<xref:System.Reflection.Assembly> object's \<xref:System.Reflection.Assembly.GetTypes*> method to obtain a list of each \<xref:System.Type?displayProperty=fullName> in the assembly.  
  
3.  Verify that the type is not abstract and supports the \<xref:System.ComponentModel.IComponent> interface (all implementations of Toolbox controls used to instantiate a \<xref:System.Drawing.Design.ToolboxItem> object must implement this interface).  
  
4.  Obtain the attributes of \<xref:System.Type> and use this information to determine if the VSPackage wishes to load the object.  
  
    > [!NOTE]
    >  Although in principal it is possible to create a \<xref:System.Drawing.Design.ToolboxItem> object from an \<xref:System.ComponentModel.IComponent> interface implementation without an instance of \<xref:System.ComponentModel.ToolboxItemAttribute> not set to `false` applied to it, we do not recommend doing so.  
  
5.  Use \<xref:System.Type.GetConstructor*> to obtain constructors for the \<xref:System.Drawing.Design.ToolboxItem> objects that the Toolbox controls require.  
  
6.  Construct the \<xref:System.Drawing.Design.ToolboxItem> objects and add them to the **Toolbox**.  
  
 To see an example illustrating explicit use of reflection to obtain and autoload Toolbox controls, see the `CreateItemList` described in [Walkthrough: Autoloading Toolbox Items](../notintoc/walkthrough--autoloading-toolbox-items.md).  
  
## Additional Toolbox Control Configuration  
 A VSPackage can exercise additional control over when and how a Toolbox control is displayed by the **Toolbox**, through the implementation of \<xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>, and use of \<xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute>, and \<xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute>.  
  
 Applying \<xref:System.ComponentModel.ToolboxItemFilterAttribute> instances to a class provides only static control over when and how a **Toolbox** control is available.  
  
#### To create dynamic configuration support for Toolbox controls  
  
1.  Construct a class implementing the \<xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface as part of a VSPackage.  
  
    > [!NOTE]
    >  The \<xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface must not be implemented on the same class which provides a VSPackage's implementation of \<xref:Microsoft.VisualStudio.Shell.Package>.  
  
2.  Associate the implementation of \<xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> with the objects in specific assemblies by applying an instance of the \<xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> to it.  
  
     The example below supplies a dynamic configuration for Toolbox control object assemblies within the `Vsip.*` namespace and requiring that certain \<xref:System.Drawing.Design.ToolboxItem> objects be visible only with \<xref:System.Windows.Forms.UserControl>-based designers and other never visible with \<xref:System.Windows.Forms.UserControl>-based designers.  
  
    ```vb#  
    <ProvideAssemblyFilterAttribute("Vsip.*, Version=*, Culture=*, PublicKeyToken=*")> _   
    <GuidAttribute("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")> _   
    Public NotInheritable Class ToolboxConfig   
        Implements IConfigureToolboxItem   
        Public Sub New()   
        End Sub  
  
        ''' <summary>   
        ''' Adds extra configuration information to this toolbox item.   
        ''' </summary>   
        Public Sub ConfigureToolboxItem(ByVal item As ToolboxItem)   
            If item Is Nothing Then   
                Exit Sub   
            End If   
  
            'hide from .NET Compact Framework on the device designer.   
            Dim newFilter As ToolboxItemFilterAttribute = Nothing   
            If item.TypeName = GetType(ToolboxControl1).ToString() Then   
                newFilter = New ToolboxItemFilterAttribute("System.Windows.Forms.UserControl", ToolboxItemFilterType.Require)   
            ElseIf item.TypeName = GetType(ToolboxControl2).ToString() Then   
  
                newFilter = New ToolboxItemFilterAttribute("System.Windows.Forms.UserControl", ToolboxItemFilterType.Prevent)   
            End If   
            If newFilter IsNot Nothing Then   
                Dim array As New ArrayList()   
                array.Add(newFilter)   
                item.Filter = DirectCast(array.ToArray(GetType(ToolboxItemFilterAttribute)), ToolboxItemFilterAttribute())   
            End If   
        End Sub   
    End Class  
    ```  
  
    ```c#  
    [ProvideAssemblyFilterAttribute("Vsip.*, Version=*, Culture=*, PublicKeyToken=*")]  
        [GuidAttribute("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")]  
        public sealed class ToolboxConfig : IConfigureToolboxItem {  
            public ToolboxConfig() {  
            }  
  
            /// <summary>  
            ///     Adds extra configuration information to this toolbox item.  
            /// </summary>  
            public void ConfigureToolboxItem(ToolboxItem item) {  
                if (item == null)  
                    return;  
  
                //hide from .NET Compact Framework  on the device designer.  
                ToolboxItemFilterAttribute newFilter = null;  
                if (item.TypeName == typeof(ToolboxControl1).ToString()) {  
                    newFilter = new ToolboxItemFilterAttribute("System.Windows.Forms.UserControl",  
                                                          ToolboxItemFilterType.Require);  
                }   
                else if (item.TypeName == typeof(ToolboxControl2).ToString()) {  
  
                    newFilter = new ToolboxItemFilterAttribute("System.Windows.Forms.UserControl",  
                                                          ToolboxItemFilterType.Prevent);  
                }  
                if (newFilter != null) {  
                    ArrayList array = new ArrayList();  
                    array.Add(newFilter);  
                    item.Filter = (ToolboxItemFilterAttribute[])  
                            array.ToArray(typeof(ToolboxItemFilterAttribute));  
                }  
            }  
        }  
    }  
    ```  
  
3.  Register a VSPackage as providing a specific implementation of \<xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> by applying an instance of \<xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute> to the VSPackage's implementation of \<xref:Microsoft.VisualStudio.Shell.Package>.  
  
     The example below would inform the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] environment that the package implemented by `Vsip.ItemConfiguration.ItemConfiguration` provides the class `Vsip.ItemConfiguration.ToolboxConfiguration` to support dynamic \<xref:System.Drawing.Design.ToolboxItem>.  
  
    ```vb#  
    <ProvideToolboxItemsAttribute(3)> _   
    <DefaultRegistryRoot("Software\Microsoft\VisualStudio\8.0")> _   
    <InstalledProductRegistration(False, "#100", "#102", "1.0", IconResourceID := 400)> _   
    <ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)> _   
    <ProvideMenuResource(1000, 1)> _   
    <ProvideToolboxItemConfigurationAttribute(GetType(ToolboxConfig))> _   
    <GuidAttribute("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")> _   
    Public Class ItemConfiguration   
        Inherits Package   
    End Class  
    ```  
  
    ```c#  
    [ProvideToolboxItemsAttribute(3)]  
    [DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\8.0")]  
    [InstalledProductRegistration(false, "#100", "#102", "1.0", IconResourceID = 400)]  
    [ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)]  
    [ProvideMenuResource(1000, 1)]  
    [ProvideToolboxItemConfigurationAttribute(typeof(ToolboxConfig))]  
  
    [GuidAttribute("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")]  
    public class ItemConfiguration : Package  
    ```  
  
## Custom Drag-and-Drop Support  
 In addition to being added to the **Toolbox** itself, \<xref:System.Drawing.Design.ToolboxItem> objects and their implementations can be used to extend the drag-and-drop support in the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] IDE. This can allow arbitrary Clipboard formats to be exposed to the **Toolbox** and in editors.  
  
 VSPackages based on the Managed Package Framework must register as providing custom **Toolbox** item Clipboard formats, by applying an instance of \<xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> to the class implementing \<xref:Microsoft.VisualStudio.Shell.Package>.  
  
 For more information on registering as a **Toolbox** provider, see [Registering Toolbox Support Features](../notintoc/registering-toolbox-support-features.md).  
  
#### To provide custom Clipboard formats and drag-and-drop support with Toolbox controls  
  
1.  Create an implementation of the \<xref:System.Drawing.Design.ToolboxItemCreatorCallback> delegate.  
  
     This implementation should return a \<xref:System.Drawing.Design.ToolboxItem> object that supports the non-standard Clipboard format.  
  
     For an example implementation of a \<xref:System.Drawing.Design.ToolboxItemCreatorCallback> delegate, see the \<xref:System.Drawing.Design.ToolboxItem> and \<xref:System.Drawing.Design.ToolboxItemCreatorCallback> reference pages.  
  
2.  Make this implementation of the \<xref:System.Drawing.Design.ToolboxItemCreatorCallback> delegate available to the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] **Toolbox** for a non-standard toolbox by calling \<xref:System.Drawing.Design.IToolboxService.AddCreator*>.  
  
    ```vb#  
    <GuidAttribute("7D91995B-A799-485e-BFC7-C52545DFB5DD")> _   
    <ProvideToolboxFormatAttribute("MyFormat")> _   
    Public Class ItemConfiguration   
        Inherits MSVSIP.Package   
        Public Overloads Overrides Sub Initialize()   
            '"Adding this class as a ToolboxItemCreator");   
            Dim toolbox As IToolboxService = DirectCast(host.GetService(GetType(IToolboxService)), IToolboxService)   
            If toolbox IsNot Nothing Then   
                toolboxCreator = New ToolboxItemCreatorCallback(Me.OnCreateToolboxItem)   
                toolbox.AddCreator(toolboxCreator, "MyFormat", host)   
            End If   
        End Sub   
    End Class  
    ```  
  
    ```c#  
    [GuidAttribute("7D91995B-A799-485e-BFC7-C52545DFB5DD")]  
    [ProvideToolboxFormatAttribute("MyFormat")]  
    public class ItemConfiguration : MSVSIP.Package  
    {  
        public override void Initialize() {   
            /*  
            *  
            */  
            //"Adding this class as a ToolboxItemCreator");  
            IToolboxService toolbox = (IToolboxService)host.GetService(typeof(IToolboxService));  
            if (toolbox != null) {  
                toolboxCreator = new ToolboxItemCreatorCallback(this.OnCreateToolboxItem);  
                toolbox.AddCreator(toolboxCreator, "MyFormat", host);  
            }  
            private ToolboxItem OnCreateToolboxItem(object serializedData, string format) {  
               /*  
                *  
                */  
            }  
        }  
    }  
    ```  
  
### In This Section  
 [How to: Support Toolbox Drag-and-Drop Functionality](../notintoc/how-to--support-toolbox-drag-and-drop-functionality.md)  
 Describes how to implement drag-and-drop support on a document view.  
  
 [How to: Provide Custom Toolbox Items By Using Interop Assemblies](../notintoc/how-to--provide-custom-toolbox-items-by-using-interop-assemblies.md)  
 Describes adding new ActiveX controls and new items to the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] **Toolbox**. These new items can either have a standard Clipboard format or a custom format supported by the VSPackage.  
  
 [Registering Toolbox Support Features](../notintoc/registering-toolbox-support-features.md)  
 Describes how to register a VSPackage as a toolbox provider. Also talks about supporting or using other toolbox features.  
  
## See Also  
 [Extending the Toolbox](../notintoc/extending-the-toolbox.md)   
 [Toolbox Walkthroughs](../notintoc/toolbox-walkthroughs.md)   
 [Registering Toolbox Support Features](../notintoc/registering-toolbox-support-features.md)   
 [How to: Provide Custom Toolbox Items By Using Interop Assemblies](../notintoc/how-to--provide-custom-toolbox-items-by-using-interop-assemblies.md)   
 [Managing the Toolbox](../notintoc/managing-the-toolbox.md)   
 [How to: Control the Toolbox](../Topic/How%20to:%20Control%20the%20Toolbox.md)