#include "\life_server\script_macros.hpp"
/*
    File: fn_gangCash.sqf
    Author: Fuel RebornRoleplay.com

    Description:
    checks the gang areas, then rewards the gang if they own them
*/

 /*
	#########################
 	#	  north outpost		#
 	#########################
 */

//gets the flag locations
_area = [23350.6,24189.1,0] nearestObject "Flag_Red_F";

//gets the gang names of the flag owners
_owner = _area getVariable ["gangOwner",grpNull];

//get the gang funds
_gFund = _owner getVariable ["gang_bank",0];

//set the new gang funds
_owner setVariable ["gang_bank",round(_gFund+((count playableUnits)*2000)),true];

//push gang funds to DB
[1,_owner] call TON_fnc_updateGang;
 
 /*
	#########################
 	#	south pen outpost	#
 	#########################
 */

//gets the flag locations
_area2 = [12073.4,10470,-0.00500011] nearestObject "Flag_Red_F";

//gets the gang names of the flag owners
_owner = _area2 getVariable ["gangOwner",grpNull];

//get the gang funds
_gFund = _owner getVariable ["gang_bank",0];

//set the new gang funds
_owner setVariable ["gang_bank",round(_gFund+((count playableUnits)*2000)),true];

//push gang funds to DB
[1,_owner] call TON_fnc_updateGang;

 /*
	#########################
 	#	   east outpost		#
 	#########################
 */

//gets the flag locations
_area3 = [9172.53,21657.2,0] nearestObject "Flag_Red_F";

//gets the gang names of the flag owners
_owner = _area3 getVariable ["gangOwner",grpNull];

//get the gang funds
_gFund = _owner getVariable ["gang_bank",0];

//set the new gang funds
_owner setVariable ["gang_bank",round(_gFund+((count playableUnits)*2000)),true];

//push gang funds to DB
[1,_owner] call TON_fnc_updateGang;

//time between scripts
Sleep 900;

[] spawn TON_fnc_gangCash;