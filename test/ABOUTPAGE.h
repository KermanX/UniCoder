#pragma once


// ABOUTPAGE 对话框

class ABOUTPAGE : public CDialogEx
{
	DECLARE_DYNAMIC(ABOUTPAGE)

public:
	ABOUTPAGE(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ABOUTPAGE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTPAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedWebsite();
	afx_msg void OnBnClickedWebsite2();
	afx_msg void OnBnClickedWebsite3();
	afx_msg void OnBnClickedReadme();
	afx_msg void OnBnClickedSavepw();
};
