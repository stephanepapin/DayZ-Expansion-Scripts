#define _ARMA_

class CfgPatches
{
	class BuilderItems_Specific
	{
		units[] = {"bldr_Airfield_Lamp","bldr_Airfield_Light_Edge","bldr_Airfield_Light_Navig","bldr_Airfield_Light_PAPI1","bldr_Airfield_Light_PAPI2","bldr_Airfield_Light_PAPI3","bldr_Airfield_Light_PAPI4","bldr_Airfield_Light_Reflector","bldr_Misc_PostBox2","bldr_Misc_WoodPile1","bldr_Misc_WoodTable_Indoor","bldr_Cableway_Base","bldr_Cableway_Base_Rope1","bldr_Cableway_Base_Rope2","bldr_Cableway_Cart","bldr_Cableway_Rope","bldr_Cableway_Tower","bldr_Cableway_Tower_Slope","bldr_Cemetery_Fence1","bldr_Cemetery_Fence2","bldr_Cemetery_Fence3","bldr_Cemetery_Fence4","bldr_Cemetery_Fence_straight","bldr_Cemetery_Grave1","bldr_Cemetery_Grave2","bldr_Cemetery_Grave3","bldr_Cemetery_Grave4","bldr_Cemetery_SmallCross","bldr_Cemetery_Tombstone1","bldr_Cemetery_Tombstone10","bldr_Cemetery_Tombstone11","bldr_Cemetery_Tombstone2","bldr_Cemetery_Tombstone3","bldr_Cemetery_Tombstone4","bldr_Cemetery_Tombstone5","bldr_Cemetery_Tombstone5_damaged","bldr_Cemetery_Tombstone6","bldr_Cemetery_Tombstone7","bldr_Cemetery_Tombstone8","bldr_Cemetery_Tombstone8_damaged","bldr_Cemetery_Tombstone9","bldr_Chapel_table_proxy","bldr_Chapel_table_proxy2","bldr_church_03_woodwall_asset1","bldr_church_cross_1a","bldr_church_cross_1b","bldr_Dead_MassGrave","bldr_Dead_MassGrave_15m","bldr_Dead_MassGrave_8m","bldr_Dead_pile1","bldr_Dead_pile2","bldr_Dead_pile3","bldr_Dead_pile4","bldr_Hanged_civil","bldr_Hanged_doctor","bldr_FuelStation_Shed","bldr_FuelStation_Sign","bldr_Hotel_Damaged_Airplane_Back","bldr_Hotel_Damaged_Airplane_Wing","bldr_Hotel_Damaged_Decal1","bldr_Hotel_Damaged_Decal2","bldr_Hotel_Damaged_Rubble","bldr_HouseB_Tenement_DayZ_airplane","bldr_HouseB_Tenement_DayZ_alfa","bldr_HouseB_Tenement_DayZ_proxy","bldr_Lunapark_Autodrome","bldr_Lunapark_Bumper_Car","bldr_Ferris_wheel_Cab","bldr_Ferris_wheel_Wheel","bldr_Swan_black_cab","bldr_Swan_white_cab","bldr_Prison_Wall_Small","bldr_Prison_MainCastle_bars","bldr_Prison_MainCastle_barsdoors","bldr_Prison_MainCastle_celldoors","bldr_Prison_MainCastle_doorframes","bldr_Prison_MainCastle_windows","bldr_Prison_MainCastle_windows_02","bldr_Prison_main_Int_stairs","bldr_Prison_Shadow_interior","bldr_Prison_SideBuilding_windowsmall","bldr_radio_building_logo","bldr_Skilift_Rope_End","bldr_Skilift_Rope_Middle","bldr_Skilift_Rope_Start","bldr_Skilift_Tower_End","bldr_Skilift_Tower_Middle","bldr_Skilift_Tower_Start","bldr_Monument_Soldiers","bldr_Monument_T34","bldr_Monument_Wall","bldr_Monument_War1","bldr_Monument_War2","bldr_Statue_General","bldr_T34"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures_Specific"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class bldr_Airfield_Lamp: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\airfield_lamp.p3d";
	};
	class bldr_Airfield_Light_Edge: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\airfield_light_edge.p3d";
	};
	class bldr_Airfield_Light_Navig: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\airfield_light_navig.p3d";
	};
	class bldr_Airfield_Light_PAPI1: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\airfield_light_papi1.p3d";
	};
	class bldr_Airfield_Light_PAPI2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\airfield_light_papi2.p3d";
	};
	class bldr_Airfield_Light_PAPI3: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\airfield_light_papi3.p3d";
	};
	class bldr_Airfield_Light_PAPI4: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\airfield_light_papi4.p3d";
	};
	class bldr_Airfield_Light_Reflector: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\airfield_light_reflector.p3d";
	};
	class bldr_Misc_PostBox2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\proxy\misc_postbox2.p3d";
	};
	class bldr_Misc_WoodPile1: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\proxy\misc_woodpile1.p3d";
	};
	class bldr_Misc_WoodTable_Indoor: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\airfields\proxy\misc_woodtable_indoor.p3d";
	};
	class bldr_Cableway_Base: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cableway\cableway_base.p3d";
	};
	class bldr_Cableway_Base_Rope1: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cableway\cableway_base_rope1.p3d";
	};
	class bldr_Cableway_Base_Rope2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cableway\cableway_base_rope2.p3d";
	};
	class bldr_Cableway_Cart: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cableway\cableway_cart.p3d";
	};
	class bldr_Cableway_Rope: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cableway\cableway_rope.p3d";
	};
	class bldr_Cableway_Tower: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cableway\cableway_tower.p3d";
	};
	class bldr_Cableway_Tower_Slope: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cableway\cableway_tower_slope.p3d";
	};
	class bldr_Cemetery_Fence1: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_fence1.p3d";
	};
	class bldr_Cemetery_Fence2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_fence2.p3d";
	};
	class bldr_Cemetery_Fence3: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_fence3.p3d";
	};
	class bldr_Cemetery_Fence4: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_fence4.p3d";
	};
	class bldr_Cemetery_Fence_straight: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_fence_straight.p3d";
	};
	class bldr_Cemetery_Grave1: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_grave1.p3d";
	};
	class bldr_Cemetery_Grave2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_grave2.p3d";
	};
	class bldr_Cemetery_Grave3: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_grave3.p3d";
	};
	class bldr_Cemetery_Grave4: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_grave4.p3d";
	};
	class bldr_Cemetery_SmallCross: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_smallcross.p3d";
	};
	class bldr_Cemetery_Tombstone1: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone1.p3d";
	};
	class bldr_Cemetery_Tombstone10: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone10.p3d";
	};
	class bldr_Cemetery_Tombstone11: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone11.p3d";
	};
	class bldr_Cemetery_Tombstone2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone2.p3d";
	};
	class bldr_Cemetery_Tombstone3: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone3.p3d";
	};
	class bldr_Cemetery_Tombstone4: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone4.p3d";
	};
	class bldr_Cemetery_Tombstone5: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone5.p3d";
	};
	class bldr_Cemetery_Tombstone5_damaged: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone5_damaged.p3d";
	};
	class bldr_Cemetery_Tombstone6: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone6.p3d";
	};
	class bldr_Cemetery_Tombstone7: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone7.p3d";
	};
	class bldr_Cemetery_Tombstone8: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone8.p3d";
	};
	class bldr_Cemetery_Tombstone8_damaged: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone8_damaged.p3d";
	};
	class bldr_Cemetery_Tombstone9: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\cemeteries\cemetery_tombstone9.p3d";
	};
	class bldr_Chapel_table_proxy: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\churches\proxy\chapel_table_proxy.p3d";
	};
	class bldr_Chapel_table_proxy2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\churches\proxy\chapel_table_proxy2.p3d";
	};
	class bldr_church_03_woodwall_asset1: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\churches\proxy\church_03_woodwall_asset1.p3d";
	};
	class bldr_church_cross_1a: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\churches\proxy\church_cross_1a.p3d";
	};
	class bldr_church_cross_1b: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\churches\proxy\church_cross_1b.p3d";
	};
	class bldr_Dead_MassGrave: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\deadbodies\dead_massgrave.p3d";
	};
	class bldr_Dead_MassGrave_15m: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\deadbodies\dead_massgrave_15m.p3d";
	};
	class bldr_Dead_MassGrave_8m: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\deadbodies\dead_massgrave_8m.p3d";
	};
	class bldr_Dead_pile1: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\deadbodies\dead_pile1.p3d";
	};
	class bldr_Dead_pile2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\deadbodies\dead_pile2.p3d";
	};
	class bldr_Dead_pile3: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\deadbodies\dead_pile3.p3d";
	};
	class bldr_Dead_pile4: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\deadbodies\dead_pile4.p3d";
	};
	class bldr_Hanged_civil: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\deadbodies\hanged_civil.p3d";
	};
	class bldr_Hanged_doctor: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\deadbodies\hanged_doctor.p3d";
	};
	class bldr_FuelStation_Shed: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\fuelstation\fuelstation_shed.p3d";
	};
	class bldr_FuelStation_Sign: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\fuelstation\fuelstation_sign.p3d";
	};
	class bldr_Hotel_Damaged_Airplane_Back: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\hotel\hotel_damaged_airplane_back.p3d";
	};
	class bldr_Hotel_Damaged_Airplane_Wing: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\hotel\hotel_damaged_airplane_wing.p3d";
	};
	class bldr_Hotel_Damaged_Decal1: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\hotel\hotel_damaged_decal1.p3d";
	};
	class bldr_Hotel_Damaged_Decal2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\hotel\hotel_damaged_decal2.p3d";
	};
	class bldr_Hotel_Damaged_Rubble: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\hotel\hotel_damaged_rubble.p3d";
	};
	class bldr_HouseB_Tenement_DayZ_airplane: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\hotel\proxy\houseb_tenement_dayz_airplane.p3d";
	};
	class bldr_HouseB_Tenement_DayZ_alfa: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\hotel\proxy\houseb_tenement_dayz_alfa.p3d";
	};
	class bldr_HouseB_Tenement_DayZ_proxy: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\hotel\proxy\houseb_tenement_dayz_proxy.p3d";
	};
	class bldr_Lunapark_Autodrome: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\lunapark\lunapark_autodrome.p3d";
	};
	class bldr_Lunapark_Bumper_Car: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\lunapark\lunapark_bumper_car.p3d";
	};
	class bldr_Ferris_wheel_Cab: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\lunapark\proxy\ferris_wheel_cab.p3d";
	};
	class bldr_Ferris_wheel_Wheel: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\lunapark\proxy\ferris_wheel_wheel.p3d";
	};
	class bldr_Swan_black_cab: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\lunapark\proxy\swan_black_cab.p3d";
	};
	class bldr_Swan_white_cab: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\lunapark\proxy\swan_white_cab.p3d";
	};
	class bldr_Prison_Wall_Small: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\prison\prison_wall_small.p3d";
	};
	class bldr_Prison_MainCastle_bars: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\prison\proxy\prison_maincastle_bars.p3d";
	};
	class bldr_Prison_MainCastle_barsdoors: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\prison\proxy\prison_maincastle_barsdoors.p3d";
	};
	class bldr_Prison_MainCastle_celldoors: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\prison\proxy\prison_maincastle_celldoors.p3d";
	};
	class bldr_Prison_MainCastle_doorframes: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\prison\proxy\prison_maincastle_doorframes.p3d";
	};
	class bldr_Prison_MainCastle_windows: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\prison\proxy\prison_maincastle_windows.p3d";
	};
	class bldr_Prison_MainCastle_windows_02: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\prison\proxy\prison_maincastle_windows_02.p3d";
	};
	class bldr_Prison_main_Int_stairs: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\prison\proxy\prison_main_Int_stairs.p3d";
	};
	class bldr_Prison_Shadow_interior: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\prison\proxy\prison_shadow_interior.p3d";
	};
	class bldr_Prison_SideBuilding_windowsmall: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\prison\proxy\prison_sidebuilding_windowsmall.p3d";
	};
	class bldr_radio_building_logo: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\radio\proxy\radio_building_logo.p3d";
	};
	class bldr_Skilift_Rope_End: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\skilift\skilift_rope_end.p3d";
	};
	class bldr_Skilift_Rope_Middle: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\skilift\skilift_rope_middle.p3d";
	};
	class bldr_Skilift_Rope_Start: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\skilift\skilift_rope_start.p3d";
	};
	class bldr_Skilift_Tower_End: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\skilift\skilift_tower_end.p3d";
	};
	class bldr_Skilift_Tower_Middle: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\skilift\skilift_tower_middle.p3d";
	};
	class bldr_Skilift_Tower_Start: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\skilift\skilift_tower_start.p3d";
	};
	class bldr_Monument_Soldiers: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\statues\monument_soldiers.p3d";
	};
	class bldr_Monument_T34: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\statues\monument_t34.p3d";
	};
	class bldr_Monument_Wall: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\statues\monument_wall.p3d";
	};
	class bldr_Monument_War1: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\statues\monument_war1.p3d";
	};
	class bldr_Monument_War2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\statues\monument_war2.p3d";
	};
	class bldr_Statue_General: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\statues\statue_general.p3d";
	};
	class bldr_T34: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\structures\specific\statues\proxy\t34.p3d";
	};
};
