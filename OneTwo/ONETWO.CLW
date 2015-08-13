; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=COnetwoDlg
LastTemplate=CFontDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "onetwo.h"

ClassCount=4
Class1=COnetwoApp
Class2=COnetwoDlg
Class3=CAboutDlg

ResourceCount=7
Resource1=IDD_ONETWO_DIALOG (English (U.S.))
Resource2=IDR_MAINFRAME
Resource3=IDD_ONETWO_DIALOG
Resource4=IDD_ABOUTBOX (English (U.S.))
Class4=font
Resource5=IDR_MENU1 (English (U.S.))
Resource6=IDD_ABOUTBOX
Resource7=IDR_MENU1

[CLS:COnetwoApp]
Type=0
HeaderFile=onetwo.h
ImplementationFile=onetwo.cpp
Filter=N

[CLS:COnetwoDlg]
Type=0
HeaderFile=onetwoDlg.h
ImplementationFile=onetwoDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=ID_MENUITEM32774

[CLS:CAboutDlg]
Type=0
HeaderFile=onetwoDlg.h
ImplementationFile=onetwoDlg.cpp
Filter=D
LastObject=CAboutDlg
BaseClass=CDialog
VirtualFilter=dWC

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=3
Control1=IDC_STATIC,static,1342308481
Control2=IDC_STATIC,static,1342308353
Control3=IDOK,button,1342373889

[DLG:IDD_ONETWO_DIALOG]
Type=1
Class=COnetwoDlg
ControlCount=14
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_EDIT2,edit,1350631552
Control3=IDC_EDIT3,edit,1350631552
Control4=IDC_BUTTON1,button,1342242817
Control5=IDC_EDIT4,edit,1350631552
Control6=IDC_BUTTON2,button,1342242816
Control7=IDC_BUTTON3,button,1342242816
Control8=IDC_EDIT5,edit,1350631552
Control9=IDC_STATIC,button,1342177287
Control10=IDC_IMAGE1,{4C599241-6926-101B-9992-00000B65C6F9},1342177280
Control11=IDC_IMAGE2,{4C599241-6926-101B-9992-00000B65C6F9},1342177280
Control12=IDC_IMAGE3,{4C599241-6926-101B-9992-00000B65C6F9},1342177280
Control13=IDC_IMAGE4,{4C599241-6926-101B-9992-00000B65C6F9},1342177280
Control14=IDC_STATIC,button,1342177287

[DLG:IDD_ONETWO_DIALOG (English (U.S.))]
Type=1
Class=COnetwoDlg
ControlCount=14
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_EDIT2,edit,1350631552
Control3=IDC_EDIT3,edit,1350631552
Control4=IDC_BUTTON1,button,1342242817
Control5=IDC_EDIT4,edit,1350631552
Control6=IDC_BUTTON2,button,1342242816
Control7=IDC_BUTTON3,button,1342242816
Control8=IDC_EDIT5,edit,1350631552
Control9=IDC_STATIC,button,1342177287
Control10=IDC_IMAGE1,{4C599241-6926-101B-9992-00000B65C6F9},1342177280
Control11=IDC_IMAGE2,{4C599241-6926-101B-9992-00000B65C6F9},1342177280
Control12=IDC_IMAGE3,{4C599241-6926-101B-9992-00000B65C6F9},1342177280
Control13=IDC_IMAGE4,{4C599241-6926-101B-9992-00000B65C6F9},1342177280
Control14=IDC_STATIC,button,1342177287

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=3
Control1=IDC_STATIC,static,1342308481
Control2=IDC_STATIC,static,1342308353
Control3=IDOK,button,1342373889

[CLS:font]
Type=0
HeaderFile=font.h
ImplementationFile=font.cpp
BaseClass=CFontDialog
Filter=D
LastObject=Exit

[MNU:IDR_MENU1]
Type=1
Class=COnetwoDlg
Command1=M_Exit
Command2=M_About
CommandCount=2

[MNU:IDR_MENU1 (English (U.S.))]
Type=1
Class=COnetwoDlg
Command1=M_Exit
Command2=M_About
CommandCount=2

