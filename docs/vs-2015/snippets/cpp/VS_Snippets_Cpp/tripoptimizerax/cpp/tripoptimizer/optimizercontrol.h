//-----------------------------------------------------------------------
// 
//  Copyright (C) Microsoft Corporation.  All rights reserved.
// 
// 
// THIS CODE AND INFORMATION ARE PROVIDED AS-IS WITHOUT WARRANTY OF ANY
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//-----------------------------------------------------------------------
// OptimizerControl.h : Declaration of the COptimizerControl
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "TripOptimizer_i.h"
#include "_IOptimizerControlEvents_CP.h"
#include "AntSystem.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

#define WM_TRIP_PROGRESS   (WM_USER + 101)
#define WM_TRIP_LOCATIONS  (WM_USER + 102)
#define WM_TRIP_ROUTE      (WM_USER + 103)
#define WM_TRIP_CANCELED   (WM_USER + 104)
#define WM_TRIP_ERROR      (WM_USER + 105)

// COptimizerControl
class ATL_NO_VTABLE COptimizerControl :
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IOptimizerControl, &IID_IOptimizerControl, &LIBID_TripOptimizerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IOleControlImpl<COptimizerControl>,
	public IOleObjectImpl<COptimizerControl>,
	public IOleInPlaceActiveObjectImpl<COptimizerControl>,
	public IViewObjectExImpl<COptimizerControl>,
	public IOleInPlaceObjectWindowlessImpl<COptimizerControl>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<COptimizerControl>,
	public CProxy_IOptimizerControlEvents<COptimizerControl>,
	public IQuickActivateImpl<COptimizerControl>,
#ifndef _WIN32_WCE
	public IDataObjectImpl<COptimizerControl>,
#endif
	public IProvideClassInfo2Impl<&CLSID_OptimizerControl, &__uuidof(_IOptimizerControlEvents), &LIBID_TripOptimizerLib>,
	public CComCoClass<COptimizerControl, &CLSID_OptimizerControl>,
	public CComControl<COptimizerControl>,
   public IObjectSafetyImpl<COptimizerControl, INTERFACESAFE_FOR_UNTRUSTED_CALLER | INTERFACESAFE_FOR_UNTRUSTED_DATA>
{
public:


	COptimizerControl()
	{
	}

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
	OLEMISC_INVISIBLEATRUNTIME |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_INSIDEOUT |
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_OPTIMIZERCONTROL)


BEGIN_COM_MAP(COptimizerControl)
	COM_INTERFACE_ENTRY(IOptimizerControl)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(IQuickActivate)
#ifndef _WIN32_WCE
	COM_INTERFACE_ENTRY(IDataObject)
#endif
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
   COM_INTERFACE_ENTRY(IObjectSafety)
END_COM_MAP()

BEGIN_PROP_MAP(COptimizerControl)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// Example entries
	// PROP_ENTRY_TYPE("Property Name", dispid, clsid, vtType)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

BEGIN_CONNECTION_POINT_MAP(COptimizerControl)
	CONNECTION_POINT_ENTRY(__uuidof(_IOptimizerControlEvents))
END_CONNECTION_POINT_MAP()

BEGIN_MSG_MAP(COptimizerControl)
	CHAIN_MSG_MAP(CComControl<COptimizerControl>)
   MESSAGE_HANDLER(WM_TRIP_PROGRESS, OnTripProgress)
   MESSAGE_HANDLER(WM_TRIP_LOCATIONS, OnTripLocations)
   MESSAGE_HANDLER(WM_TRIP_ROUTE, OnTripRoute)
   MESSAGE_HANDLER(WM_TRIP_CANCELED, OnTripCanceled)
   MESSAGE_HANDLER(WM_TRIP_ERROR, OnTripError)
	DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
	{
		static const IID* const arr[] =
		{
			&IID_IOptimizerControl,
		};

		for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
		{
			if (InlineIsEqualGUID(*arr[i], riid))
				return S_OK;
		}
		return S_FALSE;
	}

// IViewObjectEx
	DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IOptimizerControl
public:
	HRESULT OnDrawAdvanced(ATL_DRAWINFO& di)
	{
		RECT& rc = *(RECT*)di.prcBounds;
		// Set Clip region to the rectangle specified by di.prcBounds
		HRGN hRgnOld = NULL;
		if (GetClipRgn(di.hdcDraw, hRgnOld) != 1)
			hRgnOld = NULL;
		bool bSelectOldRgn = false;

		HRGN hRgnNew = CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom);

		if (hRgnNew != NULL)
		{
			bSelectOldRgn = (SelectClipRgn(di.hdcDraw, hRgnNew) != ERROR);
		}

		Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);
		SetTextAlign(di.hdcDraw, TA_CENTER|TA_BASELINE);
		LPCTSTR pszText = _T("OptimizerControl");
#ifndef _WIN32_WCE
		TextOut(di.hdcDraw,
			(rc.left + rc.right) / 2,
			(rc.top + rc.bottom) / 2,
			pszText,
			lstrlen(pszText));
#else
		ExtTextOut(di.hdcDraw,
			(rc.left + rc.right) / 2,
			(rc.top + rc.bottom) / 2,
			ETO_OPAQUE,
			NULL,
			pszText,
			ATL::lstrlen(pszText),
			NULL);
#endif

		if (bSelectOldRgn)
			SelectClipRgn(di.hdcDraw, hRgnOld);

		return S_OK;
	}

   // Declare the window class for the invisible message window.
   DECLARE_WND_CLASS(L"OptimizerControlWindow")

   // Handles the WM_TRIP_PROGRESS message.
   // This message sends progress messages to event listeners.
   LRESULT OnTripProgress(UINT, WPARAM, LPARAM, BOOL&)
   {
      Fire_ProgressCallback(Concurrency::receive(m_progressMessage));
      return 0;
   }

   // Handles the WM_TRIP_LOCATIONS message.
   // This message sends multiple possible locations to event listeners.
   LRESULT OnTripLocations(UINT, WPARAM, LPARAM, BOOL&)
   {
      // Parallel arrays of input names to their possible resolved names.
      // Each set of options is delimited by the empty string.
      CComSafeArray<VARIANT> inputNames, options;

      // For each unresolved location, add the user input name and
      // the available options to the arrays.
      for (size_t i = 0; i < m_unresolvedLocations.size(); ++i) {
         auto node = m_unresolvedLocations[i];

         // Add input name.
         inputNames.Add(_variant_t(node->InputName));

         // Add options.
         for (size_t j = 0; j < node->Names.size(); ++j) {
            options.Add(_variant_t(node->Names[j]));       
         }
         // Add delimiting empty string.         
         options.Add(_variant_t(_bstr_t()));
      }

      Fire_UnresolvedLocationsCallback(inputNames.GetSafeArrayPtr(), 
                                       options.GetSafeArrayPtr());
            
      return 0;
   }

   // Handles the WM_TRIP_ROUTE message.
   // This message sends the optimized route to event listeners.
   LRESULT OnTripRoute(UINT, WPARAM, LPARAM, BOOL&)
   {  
      Fire_RouteCallback(m_optimizedRoute.GetSafeArrayPtr(), 
                         m_optimizedRouteDisplayNames.GetSafeArrayPtr());
      return 0;
   }

   // Handles the WM_TRIP_CANCELED message.
   // This message informs event listeners that the operation was canceled
   // and has finished.
   LRESULT OnTripCanceled(UINT, WPARAM, LPARAM, BOOL&)
   {
      Fire_CanceledCallback();
      return 0;
   }

   // Handles the WM_TRIP_ERROR message.
   // This message sends error messages to event listeners.
   LRESULT OnTripError(UINT, WPARAM, LPARAM, BOOL&)
   {   
      Fire_ErrorCallback(Concurrency::receive(m_errorMessage));
      return 0;
   }

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();

	void FinalRelease();

   // Begins a background task that optimizes a trip for shortest distance.
   STDMETHOD(OptimizeTripAsync)(VARIANT* waypoints, BSTR travelMode, BSTR optimize,
      BSTR bingMapsKey, DOUBLE alpha, DOUBLE beta, DOUBLE rho,
      ULONG iterations, VARIANT_BOOL parallel);

   // Cancels the current optimization task.
   STDMETHOD(CancelAsync)();

protected:
   
    // Optimizes a trip given the current state of this object.
    void OptimizeTrip(
        std::vector<std::wstring> waypoints, 
        std::wstring travelMode, 
        std::wstring optimize, 
        std::wstring bingMapsKey, 
        double alpha, double beta, double rho, 
        unsigned long iterations, bool parallel);

    // Creates the graph of objects that represents the trip topography.
    void CreateGraph(
        std::vector<std::wstring> waypoints, 
        std::vector<std::shared_ptr<AntSystem::Node>>& nodes,
        std::vector<std::shared_ptr<AntSystem::Edge>>& edges);

    // Retrieves information about the locations from the Bing Maps location service.
    void RetrieveLocations(
        std::vector<std::shared_ptr<AntSystem::Node>>& nodes,
        const std::wstring& bingMapsKey);

    // Loads information for a single location from the provided XML document.
    void ProcessLocation(
        std::shared_ptr<AntSystem::Node> node,
        ATL::CComPtr<IStream> stream);

    // Retrieves distance information for each pair of locations from the Bing Maps route service.
    void RetrieveRoutes(
        std::vector<std::shared_ptr<AntSystem::Edge>>& edges,
        const std::wstring& travelMode,
        const std::wstring& optimize,
        const std::wstring& bingMapsKey);

    // Loads route information for a single pair of locations from the provided XML document.
    void ProcessRoute(
        std::shared_ptr<AntSystem::Edge> edge, 
        ATL::CComPtr<IStream> stream);

   // Performs cancellation of the current optimization task in the background.
   void CancelTripTask();
        
protected:

   // A handle to a hidden message window.
   // This window enables the control to send messages to the hosting UI
   // thread from worker threads.
   HWND m_hwndMessage;

   // Holds the locations for which the Bing Maps location service returns
   // multiple results.
   Concurrency::concurrent_vector<std::shared_ptr<AntSystem::Node>> m_unresolvedLocations;
      
   // Performs the trip optimization in the background.
   Concurrency::task_group m_tripTask;

   // Cancels the trip optimization in the background.
   Concurrency::task_group m_cancellationTask;

   // Holds the current progress and error messages. The control sends these 
   // messages to the hosting UI in the handlers for the WM_TRIP_PROGRESS and
   // WM_TRIP_ERROR messages, respectively. 
   // We use a message buffer to enable both the worker threads and the UI thread
   // to safely read from and write to these messages.
   Concurrency::overwrite_buffer<_bstr_t> m_progressMessage;
   Concurrency::overwrite_buffer<_bstr_t> m_errorMessage;
       
   // Holds the optimized route locations and names in an array format that 
   // is consumable by JavaScript.
   CComSafeArray<VARIANT> m_optimizedRoute;             // {"47.620056,-122.349261", ...}
   CComSafeArray<VARIANT> m_optimizedRouteDisplayNames; // {"Space Needle, WA", ...}
};

OBJECT_ENTRY_AUTO(__uuidof(OptimizerControl), COptimizerControl)
