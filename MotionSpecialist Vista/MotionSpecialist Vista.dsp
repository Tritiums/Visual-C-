# Microsoft Developer Studio Project File - Name="MotionSpecialist Vista" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=MotionSpecialist Vista - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "MotionSpecialist Vista.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "MotionSpecialist Vista.mak" CFG="MotionSpecialist Vista - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "MotionSpecialist Vista - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "MotionSpecialist Vista - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "MotionSpecialist Vista - Win32 Release"

# PROP BASE Use_MFC 5
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 5
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "MotionSpecialist Vista - Win32 Debug"

# PROP BASE Use_MFC 5
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 5
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "MotionSpecialist Vista - Win32 Release"
# Name "MotionSpecialist Vista - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\AboutMotionSpecialistVista.cpp
# End Source File
# Begin Source File

SOURCE=.\AddNew.cpp
# End Source File
# Begin Source File

SOURCE=.\AddNewRecord.cpp
# End Source File
# Begin Source File

SOURCE=.\AdvancedSearch.cpp
# End Source File
# Begin Source File

SOURCE=.\Login.cpp
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=".\MotionSpecialist Vista.cpp"
# End Source File
# Begin Source File

SOURCE=".\MotionSpecialist Vista.rc"
# End Source File
# Begin Source File

SOURCE=".\MotionSpecialist VistaDoc.cpp"
# End Source File
# Begin Source File

SOURCE=".\MotionSpecialist VistaSet.cpp"
# End Source File
# Begin Source File

SOURCE=".\MotionSpecialist VistaView.cpp"
# End Source File
# Begin Source File

SOURCE=.\PasswordAquisition.cpp
# End Source File
# Begin Source File

SOURCE=.\ProtectedPasswordAquisition.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\SureToDelete.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\AboutMotionSpecialistVista.h
# End Source File
# Begin Source File

SOURCE=.\AddNew.h
# End Source File
# Begin Source File

SOURCE=.\AddNewRecord.h
# End Source File
# Begin Source File

SOURCE=.\AdvancedSearch.h
# End Source File
# Begin Source File

SOURCE=.\Login.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=".\MotionSpecialist Vista.h"
# End Source File
# Begin Source File

SOURCE=".\MotionSpecialist VistaDoc.h"
# End Source File
# Begin Source File

SOURCE=".\MotionSpecialist VistaSet.h"
# End Source File
# Begin Source File

SOURCE=".\MotionSpecialist VistaView.h"
# End Source File
# Begin Source File

SOURCE=.\PasswordAquisition.h
# End Source File
# Begin Source File

SOURCE=.\ProtectedPasswordAquisition.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\SureToDelete.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\ARJ.ICO
# End Source File
# Begin Source File

SOURCE=.\res\attention.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bitmap15.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bitmap16.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bitmap24.bmp
# End Source File
# Begin Source File

SOURCE=.\res\button.bmp
# End Source File
# Begin Source File

SOURCE=.\res\CMU.bmp
# End Source File
# Begin Source File

SOURCE=.\res\cmu2h.bmp
# End Source File
# Begin Source File

SOURCE=.\res\disk.bmp
# End Source File
# Begin Source File

SOURCE=.\res\E_HONO.ICO
# End Source File
# Begin Source File

SOURCE=.\res\logo_add.bmp
# End Source File
# Begin Source File

SOURCE=".\res\MotionSpecialist Vista.ico"
# End Source File
# Begin Source File

SOURCE=".\res\MotionSpecialist Vista.rc2"
# End Source File
# Begin Source File

SOURCE=".\res\MotionSpecialist VistaDoc.ico"
# End Source File
# Begin Source File

SOURCE=.\res\ms7vista.bmp
# End Source File
# Begin Source File

SOURCE=.\res\ms7vista2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\new.bmp
# End Source File
# Begin Source File

SOURCE=.\res\password_02.bmp
# End Source File
# Begin Source File

SOURCE=.\res\people2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\search.bmp
# End Source File
# Begin Source File

SOURCE=.\res\Splash_MS.bmp
# End Source File
# Begin Source File

SOURCE=.\res\title.bmp
# End Source File
# Begin Source File

SOURCE=.\res\title2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\title3.bmp
# End Source File
# Begin Source File

SOURCE=.\res\ycli.bmp
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
