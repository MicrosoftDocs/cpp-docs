            int hr = MyInterface.MyFunction(cmdID);
            ErrorHandler.ThrowOnFailure(hr, VSConstants.E_NOINTERFACE, VSConstants.E_NOTIMPL);