		LVBKIMAGE bki;

		// If no background image is set for the list view control use
		// the Microsoft homepage image as the background image.
		if (m_myListCtrl.GetBkImage(&bki) && (bki.ulFlags == LVBKIF_SOURCE_NONE))
		{
			m_myListCtrl.SetBkImage(
				_T("http://www.microsoft.com/library/images/gifs/homepage/microsoft.gif"),
				TRUE);
		}