using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
//<snippet52>
using Microsoft.VisualStudio.Shell.Interop;
using System.ComponentModel.Design;
using System.Security.Permissions;
//</snippet52>

namespace Company.FirstToolWin
{
    //<snippet53>
    public sealed class ToolWindowEvents : IVsWindowFrameNotify3
    //</snippet53>
    {
        //<snippet56>
        private FirstToolWinPackage package;
        public ToolWindowEvents(FirstToolWinPackage apackage)
        {
            package = apackage;
        }
        //</snippet56>
        #region IVsWindowFrameNotify3 Members

        public int OnClose(ref uint pgrfSaveOptions)
        {
            return Microsoft.VisualStudio.VSConstants.S_OK;
        }

        public int OnDockableChange(int fDockable, int x, int y, int w, int h)
        {
            return Microsoft.VisualStudio.VSConstants.S_OK;
        }

        public int OnMove(int x, int y, int w, int h)
        {
            return Microsoft.VisualStudio.VSConstants.S_OK;
        }
        //<snippet54>
        [PrincipalPermission(SecurityAction.Demand)]
        public int OnShow(int fShow)
        {
            package.toolMenuItem1.Visible
                = ((__FRAMESHOW)fShow
                != __FRAMESHOW.FRAMESHOW_WinHidden);
            return Microsoft.VisualStudio.VSConstants.S_OK;
        }
        //</snippet54>
        public int OnSize(int x, int y, int w, int h)
        {
        //<snippet55>
            return Microsoft.VisualStudio.VSConstants.S_OK;
        //</snippet55>
        }

        #endregion
    }
}
