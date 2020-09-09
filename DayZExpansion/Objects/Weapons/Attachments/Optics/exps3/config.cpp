#define _ARMA_

class CfgPatches
{
	class DayZExpansion_EXPS3HoloOptic
	{
		units[] = {"ExpansionEXPS3HoloOptic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class ItemOptics;
	class ExpansionEXPS3HoloOptic: ItemOptics
	{
		scope = 2;
		displayName = "$STR_EXPANSION_EXPS3";
		descriptionShort = "$STR_EXPANSION_EXPS3_DESC";
		model = "\DayZExpansion\Objects\Weapons\Attachments\Optics\exps3\exps3.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		simulation = "itemoptics";
		inventorySlot = "weaponOptics";
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 16;
		reversed = 0;
		weight = 300;
		itemSize[] = {2,1};
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\data\cm2.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\data\cm2_damage.rvmat"}},{0.3,{}},{0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\data\cm2_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 300;
			discreteDistance[] = {50,100,200,300};
			discreteDistanceInitIndex = 1;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			opticSightTexture = "#(argb,8,8,3)color(1,0,0,1.0,co)";
		};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.06;
			plugType = 1;
			attachmentAction = 1;
		};
	};
};
