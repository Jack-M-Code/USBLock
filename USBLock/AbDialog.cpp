// AbDialog.cpp : ��@��
//

#include "stdafx.h"
#include "USBLock.h"
#include "AbDialog.h"
#include "afxdialogex.h"


// AbDialog ��ܤ��

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


// AbDialog �T���B�z�`��


void AbDialog::OnBnClickedButton1()
{
	// TODO:  �b���[�J����i���B�z�`���{���X
	AbDialog::OnCancel();
}


HBRUSH AbDialog::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  �b���ܧ� DC �������ݩ�

	// TODO:  �p�G�w�]�ȨëD�Q�n���A�h�Ǧ^���P������

	//COLORREF m_curColor = RGB(255, 255, 255);

	//hbr = CreateSolidBrush(m_curColor);

	return hbr;
}
