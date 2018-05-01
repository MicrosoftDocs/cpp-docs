//<snippet11>
using System;
using Microsoft.VisualStudio.Shell;

namespace Company.UIUserSettingsToolsOptionsPages
{
    class HelloWorldOptions : DialogPage
    {
        bool helloWorld = true;
        public bool HelloWorld
        {
            get { return helloWorld; }
            set { helloWorld = value; }
        }
    }
}
//</snippet11>