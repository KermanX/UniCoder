#pragma once


// PASSWORDPAGE 对话框

class PASSWORDPAGE : public CDialogEx
{
	DECLARE_DYNAMIC(PASSWORDPAGE)

public:
	PASSWORDPAGE(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~PASSWORDPAGE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PASSWORDPAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CEdit m_pw1;
	CEdit m_pw2;
	CEdit m_pw3;
};
