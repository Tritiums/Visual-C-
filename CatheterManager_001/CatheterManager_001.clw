; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CCatheterManager_001View
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "CatheterManager_001.h"
LastPage=0

ClassCount=8
Class1=CCatheterManager_001App
Class2=CCatheterManager_001Doc
Class3=CCatheterManager_001View
Class4=CMainFrame
Class6=CAboutDlg

ResourceCount=5
Resource1=IDD_ABOUTBOX
Resource2=IDD_CATHETERMANAGER_001_FORM (Chinese (P.R.C.))
Class5=CCatheterManager_001Set
Resource3=IDR_MAINFRAME
Class7=AddNewProcess
Resource4=IDD_DIALOG1 (Chinese (P.R.C.))
Class8=SureToDelete
Resource5=IDD_DIALOG2 (Chinese (P.R.C.))

[CLS:CCatheterManager_001App]
Type=0
HeaderFile=CatheterManager_001.h
ImplementationFile=CatheterManager_001.cpp
Filter=N

[CLS:CCatheterManager_001Doc]
Type=0
HeaderFile=CatheterManager_001Doc.h
ImplementationFile=CatheterManager_001Doc.cpp
Filter=N

[CLS:CCatheterManager_001View]
Type=0
HeaderFile=CatheterManager_001View.h
ImplementationFile=CatheterManager_001View.cpp
Filter=D
BaseClass=CRecordView
VirtualFilter=RVWC
LastObject=IDC_COMBO6


[CLS:CCatheterManager_001Set]
Type=0
HeaderFile=CatheterManager_001Set.h
ImplementationFile=CatheterManager_001Set.cpp
Filter=N

[DB:CCatheterManager_001Set]
DB=1
DBType=ODBC
ColumnCount=41
Column1=[ID], 12, 100
Column2=[abbreviation], 12, 100
Column3=[name], 12, 510
Column4=[type], 12, 510
Column5=[date], 11, 16
Column6=[number], 4, 4
Column7=[customer], 12, 100
Column8=[manufacturer], 12, 510
Column9=[retailer], 12, 510
Column10=[operator], 12, 100
Column11=[assistant], 12, 100
Column12=[manager], 12, 100
Column13=[manu_information], 12, 510
Column14=[manu_contact], 12, 510
Column15=[manu_post_code], 12, 100
Column16=[manu_telephone], 12, 100
Column17=[void_001], 12, 100
Column18=[void_002], 12, 100
Column19=[void_003], 12, 100
Column20=[void_004], 12, 100
Column21=[void_005], 12, 100
Column22=[void_006], 12, 100
Column23=[void_007], 12, 100
Column24=[void_008], 12, 100
Column25=[void_009], 12, 100
Column26=[void_010], 12, 100
Column27=[void_011], 12, 100
Column28=[void_012], 12, 100
Column29=[void_013], 12, 100
Column30=[void_014], 12, 100
Column31=[void_015], 12, 100
Column32=[void_016], 12, 100
Column33=[void_017], 12, 100
Column34=[void_018], 12, 100
Column35=[void_019], 12, 100
Column36=[void_020], 12, 100
Column37=[void_021], 12, 100
Column38=[void_022], 12, 100
Column39=[void_023], 12, 100
Column40=[void_024], 12, 100
Column41=[void_025], 12, 100


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=CatheterManager_001.cpp
ImplementationFile=CatheterManager_001.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_MRU_FILE1
Command6=ID_APP_EXIT
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_EDIT_COPY
Command10=ID_EDIT_PASTE
Command11=ID_RECORD_FIRST
Command12=ID_RECORD_PREV
Command13=ID_RECORD_NEXT
Command14=ID_RECORD_LAST
Command15=ID_APP_ABOUT
CommandCount=15

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[DLG:IDD_CATHETERMANAGER_001_FORM (Chinese (P.R.C.))]
Type=1
Class=CCatheterManager_001View
ControlCount=76
Control1=IDC_DATETIMEPICKER3,SysDateTimePick32,1342242848
Control2=IDC_EDIT14,edit,1350631552
Control3=IDC_COMBO1,combobox,1344274691
Control4=IDC_COMBO2,combobox,1344274691
Control5=IDC_COMBO3,combobox,1344274691
Control6=IDC_EDIT3,edit,1350631554
Control7=IDC_EDIT5,edit,1350631554
Control8=IDC_EDIT2,edit,1350631554
Control9=IDC_EDIT6,edit,1350631554
Control10=IDC_COMBO5,combobox,1344274691
Control11=IDC_COMBO4,combobox,1344274691
Control12=IDC_EDIT12,edit,1350631552
Control13=IDC_EDIT7,edit,1350631552
Control14=IDC_EDIT11,edit,1350631552
Control15=IDC_EDIT1,edit,1350631552
Control16=IDC_EDIT8,edit,1350631552
Control17=IDC_EDIT9,edit,1350631552
Control18=IDC_EDIT10,edit,1350631552
Control19=IDC_EDIT13,edit,1350631552
Control20=IDC_BUTTON3,button,1342242816
Control21=IDC_LIST1,SysListView32,1350631425
Control22=IDC_DATETIMEPICKER1,SysDateTimePick32,1342242848
Control23=IDC_BUTTON1,button,1342242816
Control24=IDC_DATETIMEPICKER2,SysDateTimePick32,1342242848
Control25=IDC_BUTTON2,button,1342242816
Control26=IDC_STATIC,static,1342308353
Control27=IDC_STATIC,static,1342308354
Control28=IDC_BUTTON4,button,1342242816
Control29=IDC_EDIT4,edit,1350631552
Control30=IDC_BUTTON5,button,1342242816
Control31=IDC_STATIC,static,1342308354
Control32=IDC_STATIC,static,1342308354
Control33=IDC_STATIC,static,1342308354
Control34=IDC_STATIC,static,1342308354
Control35=IDC_STATIC,static,1342308354
Control36=IDC_STATIC,static,1342308354
Control37=IDC_STATIC,static,1342308354
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308354
Control40=IDC_STATIC,static,1342308354
Control41=IDC_STATIC,static,1342308352
Control42=IDC_STATIC,static,1342308352
Control43=IDC_STATIC,static,1342308352
Control44=IDC_STATIC,static,1342308354
Control45=IDC_STATIC,static,1342308354
Control46=IDC_STATIC,static,1342308354
Control47=IDC_STATIC,button,1342177287
Control48=IDC_STATIC,static,1342308354
Control49=IDC_STATIC,static,1342308354
Control50=IDC_STATIC,static,1342308354
Control51=IDC_STATIC,static,1342308354
Control52=IDC_STATIC,static,1342308354
Control53=IDC_STATIC,button,1342177287
Control54=IDC_BUTTON6,button,1342242816
Control55=IDC_BUTTON7,button,1342242816
Control56=IDC_STATIC,button,1342177287
Control57=IDC_STATIC,button,1342177287
Control58=IDC_STATIC,static,1342308354
Control59=IDC_STATIC,static,1342177294
Control60=IDC_STATIC,button,1342177287
Control61=IDC_COMBO6,combobox,1344274691
Control62=IDC_STATIC,button,1342177287
Control63=IDC_EDIT15,edit,1350631552
Control64=IDC_COMBO7,combobox,1344274691
Control65=IDC_BUTTON8,button,1342242817
Control66=IDC_EDIT16,edit,1350631552
Control67=IDC_STATIC,static,1342308354
Control68=IDC_EDIT17,edit,1350631554
Control69=IDC_STATIC,static,1342308354
Control70=IDC_EDIT18,edit,1350631554
Control71=IDC_STATIC,static,1342308352
Control72=IDC_COMBO8,combobox,1344274691
Control73=IDC_CHECK1,button,1342243331
Control74=IDC_CHECK2,button,1342243331
Control75=IDC_STATIC,static,1342308352
Control76=IDC_BUTTON9,button,1342242816

[DLG:IDD_DIALOG1 (Chinese (P.R.C.))]
Type=1
Class=AddNewProcess
ControlCount=31
Control1=IDCANCEL2,button,1342242816
Control2=IDC_COMBO1,combobox,1344274691
Control3=IDCANCEL3,button,1342242816
Control4=IDC_EDIT2,edit,1350631554
Control5=IDC_EDIT7,edit,1350631552
Control6=IDC_EDIT11,edit,1350631552
Control7=IDC_EDIT1,edit,1350631552
Control8=IDC_EDIT8,edit,1350631552
Control9=IDC_EDIT9,edit,1350631552
Control10=IDC_EDIT10,edit,1350631552
Control11=IDOK,button,1342242817
Control12=IDCANCEL,button,1342242816
Control13=IDC_DATETIMEPICKER3,SysDateTimePick32,1342242848
Control14=IDC_STATIC,static,1342308354
Control15=IDC_STATIC,static,1342308354
Control16=IDC_COMBO2,combobox,1344274691
Control17=IDC_STATIC,static,1342308354
Control18=IDC_STATIC,static,1342308354
Control19=IDC_COMBO3,combobox,1344274691
Control20=IDC_STATIC,static,1342308354
Control21=IDC_STATIC,static,1342308352
Control22=IDC_STATIC,static,1342308354
Control23=IDC_STATIC,static,1342308354
Control24=IDC_STATIC,button,1342177287
Control25=IDC_STATIC,button,1342177287
Control26=IDC_STATIC,static,1342308354
Control27=IDC_STATIC,static,1342308354
Control28=IDC_STATIC,static,1342308354
Control29=IDC_EDIT14,edit,1350631552
Control30=IDC_STATIC,static,1342308354
Control31=IDC_STATIC,static,1342177294

[CLS:AddNewProcess]
Type=0
HeaderFile=AddNewProcess.h
ImplementationFile=AddNewProcess.cpp
BaseClass=CDialog
Filter=D
LastObject=IDOK
VirtualFilter=dWC

[DLG:IDD_DIALOG2 (Chinese (P.R.C.))]
Type=1
Class=SureToDelete
ControlCount=5
Control1=IDCANCEL,button,1342242817
Control2=IDOK,button,1342242816
Control3=IDC_STATIC,static,1342177294
Control4=IDC_STATIC,button,1342177287
Control5=IDC_STATIC,static,1342308353

[CLS:SureToDelete]
Type=0
HeaderFile=SureToDelete.h
ImplementationFile=SureToDelete.cpp
BaseClass=CDialog
Filter=D
LastObject=ID_APP_ABOUT

