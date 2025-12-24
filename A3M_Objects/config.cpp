#include "basicDefines_A3.hpp"

class CfgPatches {
	class A3M_CP {
		units[] = {"A3M_Hbed","A3M_H_Table", "A3M_MedCabinet", "A3M_MedBox", "A3M_SmallServerRack","A3M_Sofa","A3M_SatDish","A3M_CocaineBrick","A3M_WaterCooler","A3M_Dildo","A3M_WeapLocker","A3M_Stage", "A3M_Syringe", "A3M_NarcoBail", "A3M_Coca_ProPl", "A3M_MicroScope", "A3M_NarcoLightTable","A3M_MarijuanaJoint", "A3M_Saguaro_A", "A3M_Saguaro_B", "A3M_Saguaro_C","A3M_YuccaPlant", "A3M_BathroomSink", "A3M_Shitter", "A3M_Safe", "A3M_Fridge", "A3M_Bed","A3M_Shower"};
		requiredAddons[] = {"A3_Structures_F_Civ_Lamps"};
		weapons[] = {};
		requiredVersion = 1.00;
	};
};

class CfgSounds {
	sounds[] = {
		A3M_Snort,
		A3M_Gulp,
		A3M_NarcoCorrido_A,
		A3M_NarcoConvo_A,
		A3M_Env_Crickets,
		A3M_Eng_M1Intro
	};
	class A3M_Gulp {
		name = "[A3M] Water Gulp";
		sound[] = {"A3M_Objects\Sounds\wgulp.ogg", 0.70, 1};
		titles[] = {};
	};
	class A3M_Snort {
		name = "[A3M] Coke Snort";
		sound[] = {"A3M_Objects\Sounds\csnort.ogg", 0.70, 1};
		titles[] = {};
	};
	class A3M_NarcoCorrido_A {
		name = "[A3M] La suburban dorada - Los Huracanes del Norte";
		sound[] = {"A3M_Objects\Sounds\NC1.ogg", 0.50, 1};
		titles[] = {};
	};
	class A3M_NarcoConvo_A {
		name = "[A3M] Narco Conversation A";
		sound[] = {"A3M_Objects\Sounds\ESP_Convo1.ogg", 0.70, 1};
		titles[] = {};
	};
	class A3M_Env_Crickets {
		name = "[A3M] Environment - Crickets";
		sound[] = {"A3M_Objects\Sounds\Crickets.ogg", 0.50, 1};
		titles[] = {};
	};
	class A3M_Eng_M1Intro {
		name = "[A3M] Mission 1 - Radio Intro";
		sound[] = {"A3M_Objects\Sounds\Mission1_IntroRT.ogg", 1, 1};
		titles[] = {};
	};
};

#include "CfgVehicleClasses.hpp"
#include "CfgVehicles.hpp"
