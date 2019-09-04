// MyFormView.cpp

#include "MyFormView.h"

// CMyFormView

IMPLEMENT_DYNCREATE(CMyFormView, CFormView)

CMyFormView::CMyFormView()
    : CFormView(CMyFormView::IDD)
{
}