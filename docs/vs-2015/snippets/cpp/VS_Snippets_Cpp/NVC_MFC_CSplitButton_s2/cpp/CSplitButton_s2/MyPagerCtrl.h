#pragma once


// CMyPagerCtrl

// <snippet9>
class CMyPagerCtrl : public CPagerCtrl
{
	DECLARE_DYNAMIC(CMyPagerCtrl)

public:
	CMyPagerCtrl();
	virtual ~CMyPagerCtrl();
	void OnCalcSize(NMHDR*, LRESULT* );

protected:
	DECLARE_MESSAGE_MAP()
};
// </snippet9>

