//<Snippet4>
using Microsoft.VisualStudio;
using Microsoft.VisualStudio.Package;
using Microsoft.VisualStudio.TextManager.Interop;
using Microsoft.VisualStudio.OLE.Interop;
//</Snippet4>

//<Snippet5>
namespace MyLanguagePackage
{
    class MySource : Source
    {
        public MySource(LanguageService service,
                        IVsTextLines textLines,
                        Colorizer colorizer)
            : base(service, textLines, colorizer)
        {
        }
    }
}
//</Snippet5>