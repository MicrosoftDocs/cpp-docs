---
title: "Walkthrough: Displaying SmartTags | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "editors [Visual Studio SDK], new - smart tags"
ms.assetid: 10bb4f69-b259-41f0-b91a-69b04385d9a5
caps.latest.revision: 31
manager: "douge"
---
# Walkthrough: Displaying SmartTags
Smart tags are deprecated in favor of light bulbs. See [Walkthrough: Displaying Light Bulb Suggestions](../Topic/Walkthrough:%20Displaying%20Light%20Bulb%20Suggestions.md).  
  
 Smart tags are tags on text that expand to display a set of actions. For example, in a Visual Basic or Visual C# project, a red line appears under a word when you rename an identifier such as a variable name. When you move the pointer over the underline, a button is displayed near the pointer. If you click the button, a suggested action is displayed, for example, **Rename IsRead to IsReady**. If you click the action, all references to **IsRead** in the project are renamed **IsReady**.  
  
 Although smart tags are part of the IntelliSense implementation in the editor, you can implement smart tags by subclassing <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTag>, and then implementing the <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601> interface and the <xref:Microsoft.VisualStudio.Text.Tagging.IViewTaggerProvider> interface.  
  
> [!NOTE]
>  Other kinds of tags can be implemented in a similar manner.  
  
 The following walkthrough shows how to create a smart tag that appears on the current word and has two suggested actions: **Convert to upper case** and **Convert to lower case**.  
  
## Prerequisites  
 To follow this walkthrough, you must install the Visual Studio SDK. For more information, see [Visual Studio SDK](../Topic/Visual%20Studio%20SDK.md).  
  
## Creating a Managed Extensibility Framework (MEF) Project  
  
#### To create a MEF project  
  
1.  Create an Editor Classifier project. Name the solution `SmartTagTest`.  
  
2.  Open the source.extension.vsixmanifest file in the VSIX Manifest Editor.  
  
3.  Make sure that the **Assets** section contains a `Microsoft.VisualStudio.MefComponent` type, the **Source** is set to `A project in current solution`, and **Project** is set to SmartTagTest.dll.  
  
4.  Save and close source.extension.vsixmanifest.  
  
5.  Add the following reference to the project, and set **CopyLocal** to `false`:  
  
     Microsoft.VisualStudio.Language.Intellisense  
  
6.  Delete the existing class files.  
  
## Implementing a Tagger for Smart Tags  
  
#### To implement a tagger for smart tags  
  
1.  Add a class file and name it `TestSmartTag`.  
  
2.  Add the following imports:  
  
     [!code-csharp[VSSDKSmartTagTest#1](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#1)]
     [!code-vb[VSSDKSmartTagTest#1](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#1)]  
  
3.  Add a class named `TestSmartTag` that inherits from <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTag>.  
  
     [!code-csharp[VSSDKSmartTagTest#2](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#2)]
     [!code-vb[VSSDKSmartTagTest#2](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#2)]  
  
4.  Add a constructor for this class that calls the base constructor with a <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTagType> of <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTagType>, which will cause a blue line to appear under the first character of a word. (If you use <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTagType>, a red line will appear under the last character of the word.)  
  
     [!code-csharp[VSSDKSmartTagTest#3](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#3)]
     [!code-vb[VSSDKSmartTagTest#3](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#3)]  
  
5.  Add a class named `TestSmartTagger` that inherits from <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601> of type `TestSmartTag`, and implements <xref:System.IDisposable>.  
  
     [!code-csharp[VSSDKSmartTagTest#4](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#4)]
     [!code-vb[VSSDKSmartTagTest#4](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#4)]  
  
6.  Add the following private fields to the tagger class.  
  
     [!code-csharp[VSSDKSmartTagTest#5](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#5)]
     [!code-vb[VSSDKSmartTagTest#5](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#5)]  
  
7.  Add a constructor that sets the private fields, and subscribes to the <xref:Microsoft.VisualStudio.Text.Editor.ITextView.LayoutChanged> event.  
  
     [!code-csharp[VSSDKSmartTagTest#6](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#6)]
     [!code-vb[VSSDKSmartTagTest#6](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#6)]  
  
8.  Implement <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601.GetTags%2A> so that the tag is created for the current word. (This method also calls a private method `GetSmartTagActions` that is explained later.)  
  
     [!code-csharp[VSSDKSmartTagTest#7](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#7)]
     [!code-vb[VSSDKSmartTagTest#7](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#7)]  
  
9. Add a `GetSmartTagActions` method to set up the smart tag actions. The actions themselves are implemented in later steps.  
  
     [!code-csharp[VSSDKSmartTagTest#8](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#8)]
     [!code-vb[VSSDKSmartTagTest#8](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#8)]  
  
10. Declare the `SmartTagsChanged` event.  
  
     [!code-csharp[VSSDKSmartTagTest#9](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#9)]
     [!code-vb[VSSDKSmartTagTest#9](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#9)]  
  
11. Implement the `OnLayoutChanged` event handler to raise the `TagsChanged` event, which causes <xref:Microsoft.VisualStudio.Text.Tagging.ITagger%601.GetTags%2A> to be called.  
  
     [!code-csharp[VSSDKSmartTagTest#10](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#10)]
     [!code-vb[VSSDKSmartTagTest#10](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#10)]  
  
12. Implement the <xref:System.IDisposable.Dispose%2A> method so that it unsubscribes from the <xref:Microsoft.VisualStudio.Text.Editor.ITextView.LayoutChanged> event.  
  
     [!code-csharp[VSSDKSmartTagTest#11](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#11)]
     [!code-vb[VSSDKSmartTagTest#11](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#11)]  
  
## Implementing the Smart Tag Tagger Provider  
  
#### To implement the smart tag tagger provider  
  
1.  Add a class named `TestSmartTagTaggerProvider` that inherits from <xref:Microsoft.VisualStudio.Text.Tagging.IViewTaggerProvider>. Export it with a <xref:Microsoft.VisualStudio.Utilities.ContentTypeAttribute> of "text", a <xref:Microsoft.VisualStudio.Utilities.OrderAttribute> of Before="default", and a <xref:Microsoft.VisualStudio.Text.Tagging.TagTypeAttribute> of <xref:Microsoft.VisualStudio.Language.Intellisense.SmartTag>.  
  
     [!code-csharp[VSSDKSmartTagTest#12](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#12)]
     [!code-vb[VSSDKSmartTagTest#12](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#12)]  
  
2.  Import the <xref:Microsoft.VisualStudio.Text.Operations.ITextStructureNavigatorSelectorService> as a property.  
  
     [!code-csharp[VSSDKSmartTagTest#13](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#13)]
     [!code-vb[VSSDKSmartTagTest#13](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#13)]  
  
3.  Implement the <xref:Microsoft.VisualStudio.Text.Tagging.IViewTaggerProvider.CreateTagger%2A> method.  
  
     [!code-csharp[VSSDKSmartTagTest#14](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#14)]
     [!code-vb[VSSDKSmartTagTest#14](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#14)]  
  
## Implementing Smart Tag Actions  
  
#### To implement smart tag actions  
  
1.  Create two classes, the first named `UpperCaseSmartTagAction` and the second named `LowerCaseSmartTagAction`. Both classes implement <xref:Microsoft.VisualStudio.Language.Intellisense.ISmartTagAction>.  
  
     [!code-csharp[VSSDKSmartTagTest#15](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#15)]
     [!code-vb[VSSDKSmartTagTest#15](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#15)]  
  
     [!code-csharp[VSSDKSmartTagTest#16](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#16)]
     [!code-vb[VSSDKSmartTagTest#16](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#16)]  
  
 Both classes are alike except that one calls <xref:System.String.ToUpper%2A> and the other calls <xref:System.String.ToLower%2A>. The following steps cover only the uppercase action class, but you must implement both classes. Use the steps for implementing the uppercase action as a pattern for implementing the lowercase action.  
  
1.  Declare a set of private fields.  
  
     [!code-csharp[VSSDKSmartTagTest#17](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#17)]
     [!code-vb[VSSDKSmartTagTest#17](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#17)]  
  
2.  Add a constructor that sets the fields.  
  
     [!code-csharp[VSSDKSmartTagTest#18](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#18)]
     [!code-vb[VSSDKSmartTagTest#18](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#18)]  
  
3.  Implement the properties as follows.  
  
     [!code-csharp[VSSDKSmartTagTest#19](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#19)]
     [!code-vb[VSSDKSmartTagTest#19](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#19)]  
  
4.  Implement the <xref:Microsoft.VisualStudio.Language.Intellisense.ISmartTagAction.Invoke%2A> method by replacing the text in the span with its uppercase equivalent.  
  
     [!code-csharp[VSSDKSmartTagTest#20](../snippets/csharp/VS_Snippets_VSSDK/vssdksmarttagtest/cs/testsmarttag.cs#20)]
     [!code-vb[VSSDKSmartTagTest#20](../snippets/visualbasic/VS_Snippets_VSSDK/vssdksmarttagtest/vb/testsmarttag.vb#20)]  
  
## Building and Testing the Code  
 To test this code, build the SmartTagTest solution and run it in the experimental instance.  
  
#### To build and test the SmartTagTest solution  
  
1.  Build the solution.  
  
2.  When you run this project in the debugger, a second instance of Visual Studio is instantiated.  
  
3.  Create a text file and type some text.  
  
     A blue line should be displayed under the first letter of the first word of the text.  
  
4.  Move the pointer over the blue line.  
  
     A button should be displayed near the pointer.  
  
5.  When you click the button, two suggested actions should be displayed: **Convert to upper case** and **Convert to lower case**. If you click the first action, all the text in the current word should be converted to upper case. If you click the second action, all the text should be converted to lower case.  
  
## See Also  
 [Walkthrough: Linking a Content Type to a File Name Extension](../Topic/Walkthrough:%20Linking%20a%20Content%20Type%20to%20a%20File%20Name%20Extension.md)