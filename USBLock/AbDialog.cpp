// AbDialog.cpp : 實作檔
//

#include "stdafx.h"
#include "USBLock.h"
#include "AbDialog.h"
#include "afxdialogex.h"


// AbDialog 對話方塊

IMPLEMENT_DYNAMIC(AbDialog, CDialogEx)

AbDialog::AbDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(AbDialog::IDD, pParent)
{

}

AbDialog::~AbDialog()
{
}

void AbDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(AbDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &AbDialog::OnBnClickedButton1)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()


// AbDialog 訊息處理常式


void AbDialog::OnBnClickedButton1()
{
	// TODO:  在此加入控制項告知處理常式程式碼
	AbDialog::OnCancel();
}


HBRUSH AbDialog::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此變更 DC 的任何屬性

	// TODO:  如果預設值並非想要的，則傳回不同的筆刷

	//COLORREF m_curColor = RGB(255, 255, 255);

	//hbr = CreateSolidBrush(m_curColor);

	return hbr;
}
