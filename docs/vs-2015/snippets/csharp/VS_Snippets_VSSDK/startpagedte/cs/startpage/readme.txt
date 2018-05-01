Start Page project template

This Start Page template shows the XAML for the Visual Studio 2010 Start Page as well as how to modify the page and add a user control.

This template is composed of two projects.
1. StartPage            - contains the loose StartPage XAML file and creates a VSIX for deployment.
2. StartPageControl     - creates a very simple UserControl to add to the Start Page.

Before you start editing the template:
Please build the solution, this will update all references for the projects.

When Editing this Start Page:
Note that when StartPage.xaml is viewed in the WPF designer, the UI will not display the active Visual Studio colors nor the logo.
The styles referencing the Visual Studio color table and Start Page data model need to be loaded in the context of a running Visual Studio instance.

When Running / Debugging this project:
It will launch the Experimental Instance of Visual Studio and initially your start page will not be shown.
In order to show your custom start page, go to Tools | Options | Environment | Startup | Customize Start Page.
From the drop down, select [Installed Extension] <your start page>.

To learn more about customizing the Visual Studio Start Page, please refer to the on-line documentation.
http://msdn.microsoft.com/en-us/library/ee663382(VS.100).aspx
