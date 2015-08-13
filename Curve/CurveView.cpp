// CurveView.cpp : implementation of the CCurveView class
//

#include "stdafx.h"
#include "Curve.h"

#include "CurveDoc.h"
#include "CurveView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCurveView

IMPLEMENT_DYNCREATE(CCurveView, CView)

BEGIN_MESSAGE_MAP(CCurveView, CView)
	//{{AFX_MSG_MAP(CCurveView)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCurveView construction/destruction

CCurveView::CCurveView()
{
	// TODO: add construction code here

}

CCurveView::~CCurveView()
{
}

BOOL CCurveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCurveView drawing
#include<math.h>
void CCurveView::OnDraw(CDC* pDC)
{
	float i,j,x,y;
	CCurveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->MoveTo(400,0);
	pDC->LineTo(400,600);
	pDC->MoveTo(0,350);
	pDC->LineTo(800,350);

	for(i=-180;i<180;i=i+0.001)
	{
		x=i+400;
		y=-0.01*i*i+350;
		pDC->SetPixel(x,y,RGB(0,0,255));
	}

	for(i=-15;i<15;i=i+0.0001)
	{
		x=20*i+400;
		y=-100*sin(i)+350;
		pDC->SetPixel(x,y,RGB(0,255,0));
	}

	for(i=-15;i<15;i=i+0.0001)
	{
		x=20*i+400;
		y=-100*cos(i)+350;
		pDC->SetPixel(x,y,RGB(200,10,100));
	}

	for(i=-200;i<200;i=i+0.01)
	{
		x=i+400;
		y=-sqrt(40000-i*i)+350;
		pDC->SetPixel(x,y,RGB(255,0,255));
	}

	for(i=200;i>-200;i=i-0.01)
	{
		x=i+400;
		y=sqrt(40000-i*i)+350;
		pDC->SetPixel(x,y,RGB(255,0,255));
	}

	
}

/////////////////////////////////////////////////////////////////////////////
// CCurveView diagnostics

#ifdef _DEBUG
void CCurveView::AssertValid() const
{
	CView::AssertValid();
}

void CCurveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCurveDoc* CCurveView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCurveDoc)));
	return (CCurveDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCurveView message handlers

