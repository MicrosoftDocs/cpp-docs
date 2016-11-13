---
title: "Walkthrough: Creating a WPF Toolbox Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "toolbox"
  - "wpf"
ms.assetid: 8223c06e-f327-4778-8709-e0cc7eae2c78
caps.latest.revision: 15
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
# Walkthrough: Creating a WPF Toolbox Control
The WPF Toolbox Control template that is included in the Visual Studio SDK lets you create Windows Presentation Foundation (WPF) controls that are automatically added to the **Toolbox** when the extension is installed. This walkthrough shows how to use the template to create a counter control that you can distribute to other users.  
  
## Prerequisites  
 To follow this walkthrough, you must install the Visual Studio SDK. For more information, see [Visual Studio SDK](/visual-studio/extensibility/visual-studio-sdk).  
  
## Finding the WPF Toolbox Control Template in Visual Studio  
 The WPF Toolbox Control template is available in the **New Project** dialog box, under **Installed Templates**, in these locations:  
  
-   **Visual Basic**, **Extensibility**. The language of the project is Visual Basic.  
  
-   **Visual C#**, **Extensibility**. The language of the project is C#.  
  
## Creating a WPF Toolbox Control project  
 The WPF Toolbox Control template creates an undefined user control and provides all of the functionality that is required to add the control to the **Toolbox**.  
  
#### To create the project  
  
1.  On the **File** menu, click **New**, and then click **Project**.  
  
2.  In the **New Project** dialog box, under **Installed Templates**, click the node for your preferred programming language and then select **Extensibility**. In the list of project types, select **WPF Toolbox Control**.  
  
3.  In the **Name** box, type the name you want to use for the project. (This walkthrough uses the name `Counter`.) Click **OK**.  
  
     This creates a solution that contains a user control, an attribute to place the control in the **Toolbox**, and a VSIX manifest for deployment. The **Name** box sets the name of the solution and the name of the namespace, but it does not set the name of the control as it appears in the **Toolbox**. You will set that later in the walkthrough.  
  
### Building a User Interface for the Control  
 The `Counter` control requires three child controls: Two <xref:System.Windows.Controls.Label> controls to display the text and the current count, and a <xref:System.Windows.Controls.Button> control to reset the count to 0. No other child controls are required, because hosting applications will increment the counter programmatically.  
  
##### To build the user interface  
  
1.  In **Solution Explorer**, double-click ToolboxControl.cs to open it in the designer.  
  
     The designer shows a <xref:System.Windows.Controls.Grid> control that contains a <xref:System.Windows.Controls.Button> control.  
  
2.  Select the <xref:System.Windows.Controls.Grid> control and then click the blue bars that appear on the top and left sides of the grid to divide it into two rows and two columns.  
  
3.  From the **Toolbox**, drag a <xref:System.Windows.Controls.Label> control to each of the cells in the top row of the grid.  
  
     At this point, you could set the layout of the control by arranging the elements on the grid. Instead, you can edit the Extensible Application Markup Language (XAML) directly so that the control will resize dynamically to fit the text.  
  
4.  In the **XAML** pane, set the height of the `RowDefinition` elements and the width of the `ColumnDefinition` elements to `"auto"`.  
  
5.  Edit the markup for the button and the two labels to resemble the following example.  
  
     [!code-xml[ToolboxControlWPF#11](../misc/codesnippet/Xaml/walkthrough-creating-a-wpf-toolbox-control_1.xaml)]  
  
     The `Grid.Row` and `Grid.Column` attributes set the position of the elements on the grid. The `Grid.ColumnSpan` attribute on the button enables the first column to be resized independently of the width of the button.  
  
     The `Content` attributes of the labels use a `{Binding}` syntax to bind to properties that you will define later in the walkthrough.  
  
### Coding the User Control  
 The `Counter` control will expose a method to increment the counter, an event to be raised whenever the counter is incremented, a `Reset` button, and three properties to store the current count, the display text, and whether to show or hide the `Reset` button. The `ProvideTolboxControl` attribute determines where in the **Toolbox** the `Counter` control will appear.  
  
 You could write this control in the same manner you would write a Windows Forms control, that is, by using event handlers and public methods to set the content of the labels. However, in WPF you can set a data context for the control so that you can bind XAML element attributes directly to properties in code. This model also provides a layer of abstraction to separate the core functionality from the user interface (UI) of the control.  
  
 This walkthrough shows how to create a data model class, and then bind the data context of the control to the data model.  
  
##### To create a data model  
  
1.  Double-click the button to open the code window.  
  
2.  At the top of the file, add a `using` directive for the <xref:System.ComponentModel> namespace.  
  
3.  After the generated class, create a public class to define the data context.  
  
     [!code-cs[ToolboxControlWPF#01](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_2.cs)]  
  
     This class implements the <xref:System.ComponentModel.INotifyPropertyChanged> interface, which enables the XAML elements to bind to defined properties.  
  
4.  Right-click the <xref:System.ComponentModel.INotifyPropertyChanged> interface declaration, click **Implement Interface**, and then click **Implement Interface** again.  
  
     Visual Studio declares a `PropertyChanged` event.  
  
5.  After the event declaration, create the following private method to raise the event.  
  
     [!code-cs[ToolboxControlWPF#02](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_3.cs)]  
  
6.  Create the following private fields and public properties to hold the values of the two labels in the control.  
  
     [!code-cs[ToolboxControlWPF#03](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_4.cs)]  
  
     Raising the `PropertyChanged` event causes the XAML binding to update the content of the bound controls. Setting the properties as `public` makes them available to the designer, but not to other programs unless they bind to this data context.  
  
 Now that you have created the data model, you can implement the code-behind functionality of the control.  
  
##### To implement the control  
  
1.  At the definition of the partial class that implements the control, right-click the class name, click **Refactor**, click **Rename**, and then change the name of the class to `Counter`. This is the name that will be displayed in the **Toolbox** when the extension is installed.  
  
2.  Immediately above the class definition, in the `ProvideToolboxControl` attribute declaration, change the value of the first parameter from `"Counter"` to `"General"`. This sets the name of the item group that will host the control in the **Toolbox**.  
  
     The following example shows the `ProvideToolboxControl` attribute and the adjusted class definition.  
  
     [!code-cs[ToolboxControlWPF#04](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_5.cs)]  
  
3.  Create a private field to hold the data context for the control, and then in the constructor, assign the data context to the `MyDataModel` class, as shown in the following example.  
  
     [!code-cs[ToolboxControlWPF#05](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_6.cs)]  
  
4.  Create the following public properties to mirror the `Text` and `Count` properties from the data context.  
  
     [!code-cs[ToolboxControlWPF#06](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_7.cs)]  
  
     These properties make the content from the data context available to any application that includes the control.  
  
5.  Create the following public method to increment the counter, and an event to notify the hosting application.  
  
     [!code-cs[ToolboxControlWPF#07](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_8.cs)]  
  
6.  Implement the click handler for the `Reset` button as follows.  
  
     [!code-cs[ToolboxControlWPF#08](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_9.cs)]  
  
7.  Add the following public property to show or hide the `Reset` button.  
  
     [!code-cs[ToolboxControlWPF#09](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_10.cs)]  
  
## Testing the Control  
 To test a **Toolbox** control, first test it in the development environment and then test it in a hosting application.  
  
#### To test the control  
  
1.  Press F5.  
  
     This builds the project and opens a second instance of Visual Studio that has the control installed.  
  
2.  In the new instance of Visual Studio, create a WPF Application project.  
  
3.  In **Solution Explorer**, double-click MainWindow.xaml to open it in the designer.  
  
4.  From the **General** section of the **Toolbox**, drag a **Counter** control to your form, and then select it.  
  
     The `Text` and `ShowReset` properties should be displayed in the **Properties** window, together with the other properties inherited from <xref:System.Windows.Controls.UserControl>. The `Count` property should not be displayed because it is read-only.  
  
5.  Change the value of the `Text` property.  
  
     The label text that is displayed in the designer should change.  
  
6.  Set the `ShowReset` property to `Hidden`, and then set it back to `Visible`.  
  
     The `Reset` button on the control should disappear and then re-appear.  
  
7.  Drag a <xref:System.Windows.Controls.Button> control to the form, set its `Content`attribute to `Test`, and then double-click the button to open its click handler in code view.  
  
8.  Implement the click handler to call the `Increment` method of the control.  
  
     [!code-cs[ToolboxControlWPF#21](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_11.cs)]  
  
9. In the constructor function, after the call to `InitializeComponent`, type `counter1.Implemented +=`, and then press the TAB key twice to generate a handler for the `Counter.Incremented` event.  
  
10. Implement the new handler as shown in the following example.  
  
     [!code-cs[ToolboxControlWPF#22](../misc/codesnippet/CSharp/walkthrough-creating-a-wpf-toolbox-control_12.cs)]  
  
11. Press F5.  
  
     The WPF application should open.  
  
12. Click **Test**.  
  
     The counter should increment and the button should fade slightly.  
  
13. Click **Test** four more times.  
  
     The counter should increment and the button should continue to fade until it disappears. If you continue to click where the button was, the counter should continue to increment.  
  
14. Click **Reset**.  
  
     The counter should reset to **0**.  
  
## Next Steps  
 When you build a **Toolbox** control, Visual Studio creates a file named *ProjectName*.vsix in the \bin\debug\ folder of your project. You can deploy the control by uploading the .vsix file to a network or to a Web site. When a user opens the .vsix file, the control is installed and added to the Visual Studio **Toolbox**. Alternatively, if you upload the .vsix file to the [Visual Studio Gallery](http://go.microsoft.com/fwlink/?LinkID=123847) Web site so that users can find it by browsing in **Extension Manager**.  
  
## See Also  
 [Extending the Toolbox](../misc/extending-the-toolbox.md)   
 [Creating a Windows Forms Toolbox Control](/visual-studio/extensibility/creating-a-windows-forms-toolbox-control)   
 [Extending Other Parts of Visual Studio](/visual-studio/extensibility/extending-other-parts-of-visual-studio)   
 [Working with Controls in the WPF Designer](http://msdn.microsoft.com/en-us/c6235492-b10d-4c3c-ba67-6b6a545faee1)   
 [Control Authoring Overview](../Topic/Control%20Authoring%20Overview.md)