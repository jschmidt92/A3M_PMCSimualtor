class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgVehicles {
	class Car {};
	class Car_F : Car {};
	class A3M_Hbed : Car_F {
		displayName = "Hospital Stretcher";
		model = "\A3M_Objects\Models\A3M_Stretcher.p3d";
		icon = "iconObject_1x2";
		picture = "iconObject_1x2";
		vehicleClass = "A3M_Med";
		scope = 2;
		scopeCurator = 2;
		crew = "C_scientist_F";
		side = 3;
		faction = CIV_F;
		terrainCoef = 1;
		turnCoef = 1;
		precision = 10;
		brakeDistance = 3.0;
		acceleration = 15;
		fireResistance = 15;
		armor = 32;
		cost = 50000;

		transportMaxBackpacks = 2;
		transportSoldier = 1;
		castDriverShadow = 1;
		castCargoShadow = 1;

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 15;
			};
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
			class _xx_Medikit {
				name = "Medikit";
				count = 2;
			};
		};

		driverAction = driver_boat01;
		cargoAction[] = {
			"passenger_injured_medevac_truck03",
			"passenger_injured_medevac_truck02",
			"passenger_injured_medevac_truck01",
			"passenger_low01"
		};
		getInAction = GetInLow;
		getOutAction = GetOutMedium;
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};

		#include "Textures\Hospital_Stretcher\physx.hpp"

		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Data\placeholder_co.paa"};
	};

	class Static;
	class thingx;

	// A3M Medical Assets
	class A3M_H_Table : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_HTable_Small.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Med";
		displayName = "Small Hospital Table";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = true;
	};

	class A3M_MedCabinet : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_medCabinet.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Med";
		displayName = "Medical Supply Cabinet";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = true;
	};

	class A3M_MedBox : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Medbox.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Med";
		displayName = "Medical Supply Crate";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = true;
	};

	// A3M Objects
	class A3M_SmallServerRack : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Server_Rack_1.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Server Console";
		mapSize = 0.1;
		animated = false;
		armor = 5;
		damageResistance = 0.004;
		canBeShot = true;
		destrType = "DestructEngine";
	};

	class A3M_Sofa : thingx {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Couch.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Sofa";
		mapSize = 0.1;
		animated = false;
		armor = 15;
		damageResistance = 0.004;
		canBeShot = true;

		ace_sitting_canSit = 1;
		ace_sitting_sitDirection = 180;
		ace_sitting_sitPosition[] = {0, -0.1, -0.45};
	};

	class A3M_SatDish : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_SatDish.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Satellite Dish";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = true;
	};

	class A3M_CocaineBrick : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Cocaine_Brick.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Cocaine (Kilo Brick)";
		mapSize = 0.1;
		animated = false;
		armor = 3;
		damageResistance = 0.004;
		canBeShot = true;

		class UserActions {
			class UseCocaine {
				displayNameDefault = "Use Cocaine (1 Gram)";
				priority = 2;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Use Cocaine (1 Gram)";
				radius = 2;
				position = "camera";
				onlyForPlayer = 1;
				condition = "(alive this)";
				statement = "[this, player] execVM ""A3M_Objects\Scripts\SnortCoke.sqf""";
			};
			class Confiscate {
				displayNameDefault = "Confiscate";
				priority = 1;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Confiscate";
				radius = 2;
				position = "camera";
				onlyForPlayer = 1;
				condition = "(alive this)";
				statement = "[this, player, 1] execVM ""A3M_Objects\Scripts\Confiscation.sqf""";
			};
		};
	};

	class A3M_WaterCooler : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Water_Cooler.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Water Cooler";
		mapSize = 0.1;
		animated = false;
		armor = 3;
		damageResistance = 0.004;
		canBeShot = true;

		class UserActions {
			class DrinkWater {
				displayNameDefault = "Drink Water";
				priority = 1;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Drink Water";
				radius = 2;
				position = "camera";
				onlyForPlayer = 1;
				condition = "(alive this)";
				statement = "[player] execVM ""A3M_Objects\Scripts\DrinkWater.sqf""";
			};
		};
	};

	class A3M_Dildo : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_dildo.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Dildo";
		mapSize = 0.1;
		animated = false;
		armor = 1;
		damageResistance = 0.004;
		canBeShot = true;
	};

	class A3M_WeapLocker : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Weapon_Locker.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Weapon Locker";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = true;
		maximumLoad = 2000;
		transportMaxWeapons = 500;
		transportMaxMagazines = 2000;
		transportMaxItems = 1000;
	};

	class A3M_Snowman : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Snowman.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Snowman";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_Stage : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Stage.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Stage W/ Podium";
		mapSize = 0.1;
		animated = false;
		armor = 1200;
		damageResistance = 0.004;
		canBeShot = true;
	};

	class A3M_Syringe : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Syringe.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Narcotic Syringe";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;

		class UserActions {
			class UseCocaine {
				displayNameDefault = "Use Cocaine (1 Gram)";
				priority = 2;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Inject Cocaine (1 Gram)";
				radius = 2;
				position = "camera";
				onlyForPlayer = 1;
				condition = "(alive this)";
				statement = "[player] execVM ""A3M_Objects\Scripts\SnortCoke.sqf""";
			};
			class Confiscate {
				displayNameDefault = "Confiscate";
				priority = 1;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Confiscate";
				radius = 2;
				position = "camera";
				onlyForPlayer = 1;
				condition = "(alive this)";
				statement = "[this, player, .1] execVM ""A3M_Objects\Scripts\Confiscation.sqf""";
			};
		};
	};

	class A3M_MicroScope : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Microscope.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Microscope";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_NarcoBail : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_NarcoBail.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Bail of Narcotics";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;

		class UserActions {
			class UseCocaine {
				displayNameDefault = "Use Cocaine (1 Gram)";
				priority = 2;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Use Cocaine (1 Gram)";
				radius = 2;
				position = "camera";
				onlyForPlayer = 1;
				condition = "(alive this)";
				statement = "[player] execVM ""A3M_Objects\Scripts\SnortCoke.sqf""";
			};
			class Confiscate {
				displayNameDefault = "Confiscate";
				priority = 1;
				showWindow = 1;
				hideOnUse = 1;
				displayName = "Confiscate";
				radius = 2;
				position = "camera";
				onlyForPlayer = 1;
				condition = "(alive this)";
				statement = "[this, player, 10] execVM ""A3M_Objects\Scripts\Confiscation.sqf""";
			};
		};
	};

	class A3M_Coca_ProPl : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Coca_ProPl.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Coca Extraction Pool";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_MarijuanaJoint : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_MarijuanaJoint.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "1g Marijuana Joint";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_YuccaPlant : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_YuccaPlant.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Yucca Tree";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_Saguaro_A : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\Saguaro_A.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Saguaro Cactus A";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_Saguaro_B : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\Saguaro_B.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Saguaro Cactus B";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_Saguaro_C : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\Saguaro_C.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Saguaro Cactus C";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_Sink : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_BathroomSink.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Bathroom Sink";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_Shitter : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Shitter.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Shitter";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_Safe : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Safe.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Safe";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_Bed : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Bed.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Bed";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_Fridge : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Fridge.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Fridge";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_Shower : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_Shower.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Shower";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;
	};

	class A3M_NarcoLightTable : Static {
		scope = 2;
		scopeCurator = public;
		icon = "iconObject_1x1";
		picture = "iconObject_1x1";
		model = "\A3M_Objects\Models\A3M_LightTable.p3d";
		faction = CIV_F;
		placement = "vertical";
		vehicleClass = "A3M_Obj";
		displayName = "Coca Drying Table";
		mapSize = 0.1;
		animated = false;
		armor = 200;
		damageResistance = 0.004;
		canBeShot = false;

		class Reflectors {
			class Light_1 {
				ambient[] = {10, 10, 11};
				color[] = {1000, 1000, 1100};
				size = 1;
				dayLight = 1;
				useFlare = 0;
				intensity = 1;
				coneFadeCoef = 2;
				innerAngle = 270;
				outerAngle = 270;
				position = "LightSource";
				direction = "LightDir";
				hitpoint = "LightSource";
				selection = "LightSource";

				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 9;
					hardLimitEnd = 10;
				};
			};
			class Light_2 {
				ambient[] = {10, 10, 11};
				color[] = {1000, 1000, 1100};
				size = 1;
				dayLight = 1;
				useFlare = 0;
				intensity = 1;
				coneFadeCoef = 2;
				innerAngle = 270;
				outerAngle = 270;
				position = "LightSource2";
				direction = "LightDir2";
				hitpoint = "LightSource2";
				selection = "LightSource2";

				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 9;
					hardLimitEnd = 10;
				};
			};
			class Light_3 {
				ambient[] = {10, 10, 11};
				color[] = {1000, 1000, 1100};
				size = 1;
				dayLight = 1;
				useFlare = 0;
				intensity = 1;
				coneFadeCoef = 2;
				innerAngle = 270;
				outerAngle = 270;
				position = "LightSource3";
				direction = "LightDir3";
				hitpoint = "LightSource3";
				selection = "LightSource3";

				class Attenuation {
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 9;
					hardLimitEnd = 10;
				};
			};
		};
	};
};