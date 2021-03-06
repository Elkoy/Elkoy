/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

#ifdef MAVFNC
#define MAVGUI #MAVFNC
#define MAVV(NAME) MAVFNC##_##NAME
#define MAVQ(NAME) #MAVV(NAME)
#endif

#define MAV_IDD_RSCDISPLAYTAXICALL 53001
#define MAV_IDC_RSCDISPLAYTAXICALL_INFOTEXT 11
#define MAV_IDC_RSCDISPLAYTAXICALL_CALLTAXI 12
#define MAV_IDC_RSCDISPLAYTAXICALL_CANCELTAXI 13
#define MAV_IDC_RSCDISPLAYTAXICALL_DESTINATIONMAP 14
#define MAV_IDC_RSCDISPLAYTAXICALL_STATUS_MARKEDDESTINATION 15
#define MAV_IDC_RSCDISPLAYTAXICALL_STATUS_CREATEDCALL 16
#define MAV_IDC_RSCDISPLAYTAXICALL_STATUS_DRIVERFOUND 17
#define MAV_IDC_RSCDISPLAYTAXICALL_STATUS_PICKEDUP 18
#define MAV_IDC_RSCDISPLAYTAXICALL_AVAILABLEDRIVERS 19

#define MAV_IDD_RSCTITLETAXIMETER 53002
#define MAV_IDC_RSCTITLETAXIMETER_INFOTEXT 11
#define MAV_IDC_RSCTITLETAXIMETER_ACTIVEFOOTER_BACKGROUND 12
#define MAV_IDC_RSCTITLETAXIMETER_ACTIVEFOOTER_TEXT 13

#define MAV_IDD_RSCTITLETAXILARGENOTIFICATIONS 53003
#define MAV_IDC_RSCTITLETAXILARGENOTIFICATIONS_GROUPBOX 11
#define MAV_IDC_RSCTITLETAXILARGENOTIFICATIONS_HEADER 12
#define MAV_IDC_RSCTITLETAXILARGENOTIFICATIONS_HEADERSMALL 13
#define MAV_IDC_RSCTITLETAXILARGENOTIFICATIONS_ICON 14

#define MAV_IDD_RSCDISPLAYTAXICALLS 53004
#define MAV_IDC_RSCDISPLAYTAXICALLS_GOONDUTYBTN 11
#define MAV_IDC_RSCDISPLAYTAXICALLS_GOOFFDUTYBTN 12
#define MAV_IDC_RSCDISPLAYTAXICALLS_ACCEPTCALL 13
#define MAV_IDC_RSCDISPLAYTAXICALLS_CANCELCALL 14
#define MAV_IDC_RSCDISPLAYTAXICALLS_LISTNBOX 15
#define MAV_IDC_RSCDISPLAYTAXICALLS_REFRESHBTN 16

#define MAV_IDD_RSCDISPLAYTAXIMENU 53005
#define MAV_IDC_RSCDISPLAYTAXIMENU_CUSTOMER 11
#define MAV_IDC_RSCDISPLAYTAXIMENU_DRIVER 12
#define MAV_IDC_RSCDISPLAYTAXIMENU_SETTINGS 13

#define MAV_IDD_RSCDISPLAYTAXISETTINGS 53006
#define MAV_IDC_RSCDISPLAYTAXISETTINGS_TAXIMETER_CUSTOMIZE 11
#define MAV_IDC_RSCDISPLAYTAXISETTINGS_TAXIMETER_RESET 12

#define MAV_IDD_RSCDISPLAYTAXICUSTOMIZETAXIMETER 53007

#define MAV_IDD_RSCTITLETAXIFARESUMMARY 53007
#define MAV_IDC_RSCTITLETAXIFARESUMMARY_INFOTEXT 11
#define MAV_IDC_RSCTITLETEXTFARESUMMARY_TOTALPRICE 12